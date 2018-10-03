template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//4. Renderer
	RegisterUnityClass<Renderer>("Core");
	//5. Camera
	RegisterUnityClass<Camera>("Core");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. Light
	RegisterUnityClass<Light>("Core");
	//8. Material
	RegisterUnityClass<Material>("Core");
	//9. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//10. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//11. Texture
	RegisterUnityClass<Texture>("Core");
	//12. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//13. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//14. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//15. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//16. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//17. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//18. GameObject
	RegisterUnityClass<GameObject>("Core");
	//19. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//20. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//21. GameManager
	RegisterUnityClass<GameManager>("Core");
	//22. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//23. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//24. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//25. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//26. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//27. Shader
	RegisterUnityClass<Shader>("Core");
	//28. Skybox
	RegisterUnityClass<Skybox>("Core");
	//29. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//30. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//31. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//32. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//33. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//34. Mesh
	RegisterUnityClass<Mesh>("Core");
	//35. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//36. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//37. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//38. Transform
	RegisterUnityClass<Transform>("Core");
	//39. Sprite
	RegisterUnityClass<Sprite>("Core");
	//40. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//41. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//42. Collider
	RegisterUnityClass<Collider>("Physics");
	//43. Animator
	RegisterUnityClass<Animator>("Animation");
	//44. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//45. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//46. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//47. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//48. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//49. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//50. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//51. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//52. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//53. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//54. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//55. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//56. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//57. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//58. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//59. TagManager
	RegisterUnityClass<TagManager>("Core");
	//60. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//61. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//62. InputManager
	RegisterUnityClass<InputManager>("Core");
	//63. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//64. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//65. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//66. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//67. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//68. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//69. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//70. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//71. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//72. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//73. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//74. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//75. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//76. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//77. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//78. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//79. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");

}
