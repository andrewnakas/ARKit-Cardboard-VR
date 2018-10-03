#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>

#include "UnityAppController.h"
#include "UI/UnityView.h"
#include "UI/UnityViewControllerBase.h"
#include "UI/OrientationSupport.h"
#include "UI/UnityAppController+ViewHandling.h"
#include "Unity/ObjCRuntime.h"
#include "Unity/VideoPlayer.h"
#include "PluginBase/UnityViewControllerListener.h"

@interface UICancelGestureRecognizer : UITapGestureRecognizer
@end
#if PLATFORM_IOS
@interface MPVideoPlayback : NSObject<UnityViewControllerListener, UIGestureRecognizerDelegate>
{
    MPMoviePlayerController*    moviePlayer;

    UIColor*                    bgColor;
    MPMovieControlStyle         controlMode;
    MPMovieScalingMode          scalingMode;
    BOOL                        cancelOnTouch;
}

- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color controls:(MPMovieControlStyle)control scaling:(MPMovieScalingMode)scaling cancelOnTouch:(BOOL)cot;
- (void)actuallyStartTheMovie:(NSURL*)url;
- (void)moviePlayBackDidFinish:(NSNotification*)notification;
- (void)finish;
@end
#endif

@interface AVKitVideoPlayback : NSObject<VideoPlayerDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    AVPlayerViewController*     videoViewController;
    VideoPlayer*                videoPlayer;

    UIColor*                    bgColor;
    const NSString*             videoGravity;
    BOOL                        showControls;
    BOOL                        cancelOnTouch;
}

+ (BOOL)IsSupported;

- (void)onPlayerReady;
- (void)onPlayerDidFinishPlayingVideo;

- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color showControls:(BOOL)controls videoGravity:(const NSString*)scaling cancelOnTouch:(BOOL)cot;
- (void)actuallyStartTheMovie:(NSURL*)url;
- (void)finish;
@end

#if PLATFORM_IOS
static MPVideoPlayback*     _MPVideoPlayback    = nil;
#endif
static AVKitVideoPlayback*  _AVKitVideoPlayback = nil;


#if PLATFORM_IOS
@implementation MPVideoPlayback
- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color controls:(MPMovieControlStyle)control scaling:(MPMovieScalingMode)scaling cancelOnTouch:(BOOL)cot
{
    if ((self = [super init]))
    {
        UnityPause(1);

        bgColor         = color;
        controlMode     = control;
        scalingMode     = scaling;
        cancelOnTouch   = cot;

        UnityRegisterViewControllerListener((id<UnityViewControllerListener>)self);
        [self performSelector: @selector(actuallyStartTheMovie:) withObject: url afterDelay: 0];
    }
    return self;
}

- (void)dealloc
{
    [self finish];
}

- (void)actuallyStartTheMovie:(NSURL*)url
{
    @autoreleasepool
    {
        moviePlayer = [[MPMoviePlayerController alloc] initWithContentURL: url];
        if (moviePlayer == nil)
            return;

        UIView* bgView = [moviePlayer backgroundView];
        bgView.backgroundColor = bgColor;

        [moviePlayer prepareToPlay];
        moviePlayer.controlStyle = controlMode;
        moviePlayer.scalingMode = scalingMode;

        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(moviePlayBackDidFinish:) name: MPMoviePlayerPlaybackDidFinishNotification object: moviePlayer];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(moviePlayBackDidFinish:) name: MPMoviePlayerDidExitFullscreenNotification object: moviePlayer];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(moviePlayBackSourceTypeAvailable:) name: MPMovieSourceTypeAvailableNotification object: moviePlayer];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(moviePlayBackMediaTypesAvailable:) name: MPMovieMediaTypesAvailableNotification object: moviePlayer];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(moviePlayBackNaturalSizeAvailable:) name: MPMovieNaturalSizeAvailableNotification object: moviePlayer];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(audioRouteChanged:) name: AVAudioSessionRouteChangeNotification object: nil];

        moviePlayer.view.frame = GetAppController().rootView.bounds;

        UIView* videoView = moviePlayer.view;
        if (cancelOnTouch)
        {
            UICancelGestureRecognizer *cancelTouch = [[UICancelGestureRecognizer alloc] initWithTarget: self action: @selector(handleTap:)];
            cancelTouch.delegate = self;
            [moviePlayer.view addGestureRecognizer: cancelTouch];
        }
        [GetAppController().rootView addSubview: videoView];
    }
}

- (void)moviePlayBackDidFinish:(NSNotification*)notification
{
    [self finish];
}

- (void)moviePlayBackSourceTypeAvailable:(NSNotification*)notification
{
    if (moviePlayer.movieSourceType == MPMovieSourceTypeUnknown)
    {
        [self finish];
    }
}

- (void)moviePlayBackMediaTypesAvailable:(NSNotification*)notification
{
    if (moviePlayer.movieMediaTypes == MPMovieMediaTypeMaskNone)
    {
        [self finish];
    }
}

- (void)moviePlayBackNaturalSizeAvailable:(NSNotification*)notification
{
    CGSize screenSize = GetAppController().rootView.bounds.size;
    BOOL ret = [VideoPlayer CheckScalingModeAspectFill: moviePlayer.naturalSize screenSize: screenSize];

    if (ret == YES && moviePlayer.scalingMode == MPMovieScalingModeAspectFit)
    {
        moviePlayer.scalingMode = MPMovieScalingModeAspectFill;
    }
}

- (void)audioRouteChanged:(NSNotification*)notification
{
    // not really cool:
    // it might happen that due to audio route changing ios can pause playback
    // alas at this point playbackRate might be not yet changed, so we just resume always
    if (moviePlayer)
        [moviePlayer play];
}

- (void)viewDidLayoutSubviews:(NSNotification *)notification
{
    moviePlayer.view.frame = GetAppController().rootView.bounds;
}

- (void)handleTap:(UIGestureRecognizer *)sender
{
    if (sender.state == UIGestureRecognizerStateEnded)
        [self finish];
}

- (void)finish
{
    @synchronized(self)
    {
        if (moviePlayer)
        {
            // remove notifications right away to avoid recursively calling finish from callback
            [[NSNotificationCenter defaultCenter] removeObserver: self];
        }

        [moviePlayer.view removeFromSuperview];

        [moviePlayer pause];
        [moviePlayer stop];
        moviePlayer = nil;

        UnityUnregisterViewControllerListener((id<UnityViewControllerListener>)self);

        // On simulator _MPVideoPlayback is collected as soon as it is set to nil, make sure
        // it's not used via self
        _MPVideoPlayback = nil;

        if (UnityIsPaused())
            UnityPause(0);
    }
}

@end
#endif

@implementation AVKitVideoPlayback
static Class _AVPlayerViewControllerClass = nil;

#if PLATFORM_IOS
static void AVPlayerViewController_SetAllowsPictureInPicturePlayback_OldIOSImpl(id self_, SEL _cmd, BOOL allow) {}
static NSUInteger supportedInterfaceOrientations_DefaultImpl(id self_, SEL _cmd)
{
    return GetAppController().rootViewController.supportedInterfaceOrientations;
}

static bool prefersStatusBarHidden_DefaultImpl(id self_, SEL _cmd)
{
    if (_AVKitVideoPlayback) // video is still playing
        return _AVKitVideoPlayback->videoViewController.showsPlaybackControls ? NO : YES;
    else                    // video has beed stopped
        return GetAppController().rootViewController.prefersStatusBarHidden;
}

#endif

+ (void)initialize
{
    if (self == [AVKitVideoPlayback class])
    {
        // NB: AVPlayerViewController was added along with AVKit so we dont need to handle "bundle loaded but class is not there"
        _AVPlayerViewControllerClass = [[NSBundle bundleWithPath: @"/System/Library/Frameworks/AVKit.framework"] classNamed: @"AVPlayerViewController"];
        if (!_AVPlayerViewControllerClass)
            return;

#if PLATFORM_IOS
        if (![_AVPlayerViewControllerClass instancesRespondToSelector: @selector(setAllowsPictureInPicturePlayback:)])
        {
            class_replaceMethod(_AVPlayerViewControllerClass, @selector(setAllowsPictureInPicturePlayback:),
                (IMP)&AVPlayerViewController_SetAllowsPictureInPicturePlayback_OldIOSImpl, AVPlayerViewController_setAllowsPictureInPicturePlayback_Enc);
        }
        class_replaceMethod(_AVPlayerViewControllerClass, @selector(supportedInterfaceOrientations), (IMP)&supportedInterfaceOrientations_DefaultImpl, UIViewController_supportedInterfaceOrientations_Enc);
        class_replaceMethod(_AVPlayerViewControllerClass, @selector(prefersStatusBarHidden), (IMP)&prefersStatusBarHidden_DefaultImpl, UIViewController_prefersStatusBarHidden_Enc);
#endif
    }
}

+ (BOOL)IsSupported
{
    return _AVPlayerViewControllerClass != nil;
}

- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color showControls:(BOOL)controls videoGravity:(const NSString*)scaling cancelOnTouch:(BOOL)cot
{
    if ((self = [super init]))
    {
        UnityPause(1);

        showControls    = controls;
        videoGravity    = scaling;
        bgColor         = color;
        cancelOnTouch   = cot;

        [self performSelector: @selector(actuallyStartTheMovie:) withObject: url afterDelay: 0];
    }
    return self;
}

- (void)dealloc
{
    [self finish];
}

- (void)actuallyStartTheMovie:(NSURL*)url
{
    @autoreleasepool
    {
        videoViewController = [[_AVPlayerViewControllerClass alloc] init];

        videoViewController.showsPlaybackControls = showControls;
        videoViewController.view.backgroundColor = bgColor;
        videoViewController.videoGravity = (NSString*)videoGravity;
        videoViewController.transitioningDelegate = self;

#if PLATFORM_IOS
        videoViewController.allowsPictureInPicturePlayback = NO;
#endif
#if PLATFORM_TVOS
        // In tvOS clicking Menu button while video is playing will exit the app. So when
        // app disables exiting to menu behavior, we need to catch the click and ignore it.
        if (!UnityGetAppleTVRemoteAllowExitToMenu())
        {
            UITapGestureRecognizer *tapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget: self action: @selector(handleTap:)];
            tapRecognizer.allowedPressTypes = @[@(UIPressTypeMenu)];
            [videoViewController.view addGestureRecognizer: tapRecognizer];
        }
#endif

        if (cancelOnTouch)
        {
            UICancelGestureRecognizer *cancelTouch = [[UICancelGestureRecognizer alloc] initWithTarget: self action: @selector(handleTap:)];
            cancelTouch.delegate = self;
            [videoViewController.view addGestureRecognizer: cancelTouch];
        }

        videoPlayer = [[VideoPlayer alloc] init];
        videoPlayer.delegate = self;
        [videoPlayer loadVideo: url];
    }
}

- (void)handleTap:(UITapGestureRecognizer*)sender
{
    if (cancelOnTouch && (sender.state == UIGestureRecognizerStateEnded))
        [self finish];
}

- (void)onPlayerReady
{
    videoViewController.player = videoPlayer.player;

    CGSize screenSize = GetAppController().rootView.bounds.size;
    BOOL ret = [VideoPlayer CheckScalingModeAspectFill: videoPlayer.videoSize screenSize: screenSize];
    if (ret == YES && [videoViewController.videoGravity isEqualToString: AVLayerVideoGravityResizeAspect] == YES)
    {
        videoViewController.videoGravity = AVLayerVideoGravityResizeAspectFill;
    }

    [videoPlayer playVideoPlayer];
#if PLATFORM_TVOS
    GetAppController().window.rootViewController = videoViewController;
#else
    UIViewController *viewController = [GetAppController() topMostController];
    if ([viewController isEqual: videoViewController] == NO && [videoViewController isBeingPresented] == NO)
    {
        [viewController presentViewController: videoViewController animated: NO completion: nil];
    }
#endif
}

- (void)onPlayerDidFinishPlayingVideo
{
    [self finish];
}

- (void)onPlayerTryResume
{
    if (![videoPlayer isPlaying])
        [videoPlayer resume];
}

- (void)onPlayerError:(NSError*)error
{
    [self finish];
}

- (id<UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)dismissed
{
    if ([dismissed isEqual: videoViewController] == YES)
    {
        [self finish];
    }

    return nil;
}

- (void)finish
{
    @synchronized(self)
    {
#if PLATFORM_TVOS
        GetAppController().window.rootViewController = GetAppController().rootViewController;
#else
        UIViewController *viewController = [GetAppController() topMostController];
        if ([viewController isEqual: videoViewController] == YES && [viewController isBeingDismissed] == NO)
        {
            [viewController dismissViewControllerAnimated: NO completion: nil];
        }
#endif

        [videoPlayer unloadPlayer];

        videoPlayer = nil;
        videoViewController = nil;

        _AVKitVideoPlayback = nil;

#if PLATFORM_TVOS
        UnityCancelTouches();
#endif

        if (UnityIsPaused())
            UnityPause(0);
    }
}

@end

@implementation UICancelGestureRecognizer
//instead of having lots of UITapGestureRecognizers with different finger numbers
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self setState: UIGestureRecognizerStateRecognized];
}

@end

extern "C" void UnityPlayFullScreenVideo(const char* path, const float* color, unsigned controls, unsigned scaling)
{
    const BOOL  cancelOnTouch[] = { NO, NO, YES, NO };
    UIColor*    bgColor         = [UIColor colorWithRed: color[0] green: color[1] blue: color[2] alpha: color[3]];

    const bool isURL = ::strstr(path, "://") != 0;
    NSURL* url = nil;
    if (isURL)
    {
        url = [NSURL URLWithString: [NSString stringWithUTF8String: path]];
    }
    else
    {
        NSString* relPath   = path[0] == '/' ? [NSString stringWithUTF8String: path] : [NSString stringWithFormat: @"Data/Raw/%s", path];
        NSString* fullPath  = [[NSBundle mainBundle].bundlePath stringByAppendingPathComponent: relPath];
        url = [NSURL fileURLWithPath: fullPath];
    }

    // first try AVKit
    {
        const BOOL      showControls[]  =   { YES, YES, NO, NO };
        const NSString* videoGravity[]  =
        {
            AVLayerVideoGravityResizeAspectFill,    // ???
            AVLayerVideoGravityResizeAspect,
            AVLayerVideoGravityResizeAspectFill,
            AVLayerVideoGravityResize,
        };

        if ([AVKitVideoPlayback IsSupported])
        {
            if (_AVKitVideoPlayback)
                [_AVKitVideoPlayback finish];
            _AVKitVideoPlayback = [[AVKitVideoPlayback alloc] initAndPlay: url bgColor: bgColor
                                   showControls: showControls[controls] videoGravity: videoGravity[scaling] cancelOnTouch: cancelOnTouch[controls]
                ];
            return;
        }
    }

    // MediaPlayer only if AVKit is not supported (old ios)
#if PLATFORM_IOS
    {
        const MPMovieControlStyle controlMode[] =
        {
            MPMovieControlStyleFullscreen,
            MPMovieControlStyleEmbedded,
            MPMovieControlStyleNone,
            MPMovieControlStyleNone,
        };
        const MPMovieScalingMode scalingMode[] =
        {
            MPMovieScalingModeNone,
            MPMovieScalingModeAspectFit,
            MPMovieScalingModeAspectFill,
            MPMovieScalingModeFill,
        };

        if (_MPVideoPlayback)
            [_MPVideoPlayback finish];
        _MPVideoPlayback = [[MPVideoPlayback alloc] initAndPlay: url bgColor: bgColor
                            controls: controlMode[controls] scaling: scalingMode[scaling] cancelOnTouch: cancelOnTouch[controls]
            ];
    }
#endif
}

extern "C" void UnityStopFullScreenVideoIfPlaying()
{
    if (_AVKitVideoPlayback)
        [_AVKitVideoPlayback finish];

#if PLATFORM_IOS
    if (_MPVideoPlayback)
        [_MPVideoPlayback finish];
#endif
}

extern "C" int UnityIsFullScreenPlaying()
{
#if PLATFORM_IOS
    return _MPVideoPlayback || _AVKitVideoPlayback ? 1 : 0;
#else
    return _AVKitVideoPlayback ? 1 : 0;
#endif
}

extern "C" void TryResumeFullScreenVideo()
{
    if (_AVKitVideoPlayback)
        [_AVKitVideoPlayback onPlayerTryResume];
}
