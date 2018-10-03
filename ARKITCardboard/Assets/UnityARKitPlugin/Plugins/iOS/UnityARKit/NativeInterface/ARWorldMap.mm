// Unity Technologies Inc (c) 2018
// ARWorldMap.mm
// Main implementation of ARKit plugin's ARWorldMap

#include "ARKitDefines.h"

#ifdef __cplusplus
extern "C" {
#endif
    
bool worldMap_GetSupported()
{
    return UnityAreFeaturesSupported(kUnityARKitSupportedFeaturesWorldMap);
}

bool worldMap_Save(const void* worldMapPtr, const char* path)
{
    if (worldMapPtr == nullptr || path == nullptr || !worldMap_GetSupported())
        return false;
    
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    NSError* writeError = nil;
    NSURL* url = [[NSURL alloc] initFileURLWithPath:[NSString stringWithUTF8String:path] isDirectory:false];
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:worldMap];
    [data writeToURL:url options:(NSDataWritingAtomic) error:&writeError];
 
    if (writeError)
        NSLog(@"%@", writeError);

    return (writeError == nil);
}

void* worldMap_Load(const char* path)
{
    if (!worldMap_GetSupported())
        return nullptr;
    
    NSError* error = nil;
    NSURL* url = [[NSURL alloc] initFileURLWithPath:[NSString stringWithUTF8String:path] isDirectory:false];
    NSData *wmdata = [NSData dataWithContentsOfURL:url options:NSDataReadingMappedAlways error:&error];

    if (error)
        NSLog(@"%@", error);

    ARWorldMap* worldMap = [NSKeyedUnarchiver unarchiveObjectWithData:wmdata];
    
    return (__bridge_retained void*)worldMap;
}

long worldMap_SerializedLength(const void* worldMapPtr)
{
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:worldMap];
    return data.length;
}
    
void worldMap_SerializeToByteArray(const void*  worldMapPtr, void*  pinnedArray)
{
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:worldMap];
    memcpy(pinnedArray, data.bytes, data.length);
    
}
    
void* worldMap_SerializeFromByteArray(const void*  pinnedArray, long lengthBytes)
{
    NSData *wmdata = [NSData dataWithBytes:pinnedArray length:lengthBytes];
    
    ARWorldMap* worldMap = [NSKeyedUnarchiver unarchiveObjectWithData:wmdata];
    
    return (__bridge_retained void*)worldMap;
}

UnityARVector3 worldMap_GetCenter(const void* worldMapPtr)
{
    if (worldMapPtr == nullptr || !worldMap_GetSupported())
        return UnityARVector3{0, 0, 0};
    
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    return UnityARVector3
    {
        worldMap.center.x,
        worldMap.center.y,
        worldMap.center.z
    };
}

UnityARVector3 worldMap_GetExtent(const void* worldMapPtr)
{
    if (worldMapPtr == nullptr || !worldMap_GetSupported())
        return UnityARVector3{0, 0, 0};
    
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    return UnityARVector3
    {
        worldMap.extent.x,
        worldMap.extent.y,
        worldMap.extent.z
    };
}

void* worldMap_GetPointCloud(const void* worldMapPtr)
{
    if (worldMapPtr == nullptr || !worldMap_GetSupported())
        return nullptr;
    
    ARWorldMap* worldMap = (__bridge ARWorldMap*)worldMapPtr;
    
    ARPointCloud *pointCloud = [worldMap rawFeaturePoints];

    return (__bridge_retained void*)pointCloud;
}

#ifdef __cplusplus
}
#endif

