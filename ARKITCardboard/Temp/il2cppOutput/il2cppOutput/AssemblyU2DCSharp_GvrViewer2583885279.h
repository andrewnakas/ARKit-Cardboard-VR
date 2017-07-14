#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "AssemblyU2DCSharp_GvrViewer_BackButtonModes3874414273.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// GvrViewer
struct GvrViewer_t2583885279;
// UnityEngine.Camera
struct Camera_t189460977;
// StereoController
struct StereoController_t3144380552;
// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t4004462063;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t1350813851;
// System.Uri
struct Uri_t19570940;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrViewer
struct  GvrViewer_t2583885279  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrViewer::uiLayerEnabled
	bool ___uiLayerEnabled_6;
	// System.Boolean GvrViewer::vrModeEnabled
	bool ___vrModeEnabled_7;
	// GvrViewer/DistortionCorrectionMethod GvrViewer::distortionCorrection
	int32_t ___distortionCorrection_8;
	// System.Boolean GvrViewer::enableAlignmentMarker
	bool ___enableAlignmentMarker_9;
	// System.Boolean GvrViewer::enableSettingsButton
	bool ___enableSettingsButton_10;
	// GvrViewer/BackButtonModes GvrViewer::backButtonMode
	int32_t ___backButtonMode_11;
	// System.Single GvrViewer::neckModelScale
	float ___neckModelScale_12;
	// System.Boolean GvrViewer::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_13;
	// System.Boolean GvrViewer::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15;
	// System.Boolean GvrViewer::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_16;
	// System.Single GvrViewer::stereoScreenScale
	float ___stereoScreenScale_17;
	// GvrViewer/StereoScreenChangeDelegate GvrViewer::OnStereoScreenChanged
	StereoScreenChangeDelegate_t1350813851 * ___OnStereoScreenChanged_19;
	// UnityEngine.Vector2 GvrViewer::defaultComfortableViewingRange
	Vector2_t2243707579  ___defaultComfortableViewingRange_20;
	// System.Uri GvrViewer::DefaultDeviceProfile
	Uri_t19570940 * ___DefaultDeviceProfile_21;
	// System.Action GvrViewer::OnTrigger
	Action_t3226471752 * ___OnTrigger_22;
	// System.Action GvrViewer::OnTilt
	Action_t3226471752 * ___OnTilt_23;
	// System.Action GvrViewer::OnProfileChange
	Action_t3226471752 * ___OnProfileChange_24;
	// System.Action GvrViewer::OnBackButton
	Action_t3226471752 * ___OnBackButton_25;
	// System.Boolean GvrViewer::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_26;
	// System.Boolean GvrViewer::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_27;
	// System.Boolean GvrViewer::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_28;
	// System.Boolean GvrViewer::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_29;
	// System.Int32 GvrViewer::updatedToFrame
	int32_t ___updatedToFrame_30;

public:
	inline static int32_t get_offset_of_uiLayerEnabled_6() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___uiLayerEnabled_6)); }
	inline bool get_uiLayerEnabled_6() const { return ___uiLayerEnabled_6; }
	inline bool* get_address_of_uiLayerEnabled_6() { return &___uiLayerEnabled_6; }
	inline void set_uiLayerEnabled_6(bool value)
	{
		___uiLayerEnabled_6 = value;
	}

	inline static int32_t get_offset_of_vrModeEnabled_7() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___vrModeEnabled_7)); }
	inline bool get_vrModeEnabled_7() const { return ___vrModeEnabled_7; }
	inline bool* get_address_of_vrModeEnabled_7() { return &___vrModeEnabled_7; }
	inline void set_vrModeEnabled_7(bool value)
	{
		___vrModeEnabled_7 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_8() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___distortionCorrection_8)); }
	inline int32_t get_distortionCorrection_8() const { return ___distortionCorrection_8; }
	inline int32_t* get_address_of_distortionCorrection_8() { return &___distortionCorrection_8; }
	inline void set_distortionCorrection_8(int32_t value)
	{
		___distortionCorrection_8 = value;
	}

	inline static int32_t get_offset_of_enableAlignmentMarker_9() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___enableAlignmentMarker_9)); }
	inline bool get_enableAlignmentMarker_9() const { return ___enableAlignmentMarker_9; }
	inline bool* get_address_of_enableAlignmentMarker_9() { return &___enableAlignmentMarker_9; }
	inline void set_enableAlignmentMarker_9(bool value)
	{
		___enableAlignmentMarker_9 = value;
	}

	inline static int32_t get_offset_of_enableSettingsButton_10() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___enableSettingsButton_10)); }
	inline bool get_enableSettingsButton_10() const { return ___enableSettingsButton_10; }
	inline bool* get_address_of_enableSettingsButton_10() { return &___enableSettingsButton_10; }
	inline void set_enableSettingsButton_10(bool value)
	{
		___enableSettingsButton_10 = value;
	}

	inline static int32_t get_offset_of_backButtonMode_11() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___backButtonMode_11)); }
	inline int32_t get_backButtonMode_11() const { return ___backButtonMode_11; }
	inline int32_t* get_address_of_backButtonMode_11() { return &___backButtonMode_11; }
	inline void set_backButtonMode_11(int32_t value)
	{
		___backButtonMode_11 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_12() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___neckModelScale_12)); }
	inline float get_neckModelScale_12() const { return ___neckModelScale_12; }
	inline float* get_address_of_neckModelScale_12() { return &___neckModelScale_12; }
	inline void set_neckModelScale_12(float value)
	{
		___neckModelScale_12 = value;
	}

	inline static int32_t get_offset_of_electronicDisplayStabilization_13() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___electronicDisplayStabilization_13)); }
	inline bool get_electronicDisplayStabilization_13() const { return ___electronicDisplayStabilization_13; }
	inline bool* get_address_of_electronicDisplayStabilization_13() { return &___electronicDisplayStabilization_13; }
	inline void set_electronicDisplayStabilization_13(bool value)
	{
		___electronicDisplayStabilization_13 = value;
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeUILayerSupportedU3Ek__BackingField_16)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_16() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_16() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_16; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_16(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_17() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___stereoScreenScale_17)); }
	inline float get_stereoScreenScale_17() const { return ___stereoScreenScale_17; }
	inline float* get_address_of_stereoScreenScale_17() { return &___stereoScreenScale_17; }
	inline void set_stereoScreenScale_17(float value)
	{
		___stereoScreenScale_17 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_19() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnStereoScreenChanged_19)); }
	inline StereoScreenChangeDelegate_t1350813851 * get_OnStereoScreenChanged_19() const { return ___OnStereoScreenChanged_19; }
	inline StereoScreenChangeDelegate_t1350813851 ** get_address_of_OnStereoScreenChanged_19() { return &___OnStereoScreenChanged_19; }
	inline void set_OnStereoScreenChanged_19(StereoScreenChangeDelegate_t1350813851 * value)
	{
		___OnStereoScreenChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_19, value);
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_20() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___defaultComfortableViewingRange_20)); }
	inline Vector2_t2243707579  get_defaultComfortableViewingRange_20() const { return ___defaultComfortableViewingRange_20; }
	inline Vector2_t2243707579 * get_address_of_defaultComfortableViewingRange_20() { return &___defaultComfortableViewingRange_20; }
	inline void set_defaultComfortableViewingRange_20(Vector2_t2243707579  value)
	{
		___defaultComfortableViewingRange_20 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_21() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___DefaultDeviceProfile_21)); }
	inline Uri_t19570940 * get_DefaultDeviceProfile_21() const { return ___DefaultDeviceProfile_21; }
	inline Uri_t19570940 ** get_address_of_DefaultDeviceProfile_21() { return &___DefaultDeviceProfile_21; }
	inline void set_DefaultDeviceProfile_21(Uri_t19570940 * value)
	{
		___DefaultDeviceProfile_21 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_21, value);
	}

	inline static int32_t get_offset_of_OnTrigger_22() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnTrigger_22)); }
	inline Action_t3226471752 * get_OnTrigger_22() const { return ___OnTrigger_22; }
	inline Action_t3226471752 ** get_address_of_OnTrigger_22() { return &___OnTrigger_22; }
	inline void set_OnTrigger_22(Action_t3226471752 * value)
	{
		___OnTrigger_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrigger_22, value);
	}

	inline static int32_t get_offset_of_OnTilt_23() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnTilt_23)); }
	inline Action_t3226471752 * get_OnTilt_23() const { return ___OnTilt_23; }
	inline Action_t3226471752 ** get_address_of_OnTilt_23() { return &___OnTilt_23; }
	inline void set_OnTilt_23(Action_t3226471752 * value)
	{
		___OnTilt_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnTilt_23, value);
	}

	inline static int32_t get_offset_of_OnProfileChange_24() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnProfileChange_24)); }
	inline Action_t3226471752 * get_OnProfileChange_24() const { return ___OnProfileChange_24; }
	inline Action_t3226471752 ** get_address_of_OnProfileChange_24() { return &___OnProfileChange_24; }
	inline void set_OnProfileChange_24(Action_t3226471752 * value)
	{
		___OnProfileChange_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnProfileChange_24, value);
	}

	inline static int32_t get_offset_of_OnBackButton_25() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnBackButton_25)); }
	inline Action_t3226471752 * get_OnBackButton_25() const { return ___OnBackButton_25; }
	inline Action_t3226471752 ** get_address_of_OnBackButton_25() { return &___OnBackButton_25; }
	inline void set_OnBackButton_25(Action_t3226471752 * value)
	{
		___OnBackButton_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnBackButton_25, value);
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTriggeredU3Ek__BackingField_26)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_26() const { return ___U3CTriggeredU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_26() { return &___U3CTriggeredU3Ek__BackingField_26; }
	inline void set_U3CTriggeredU3Ek__BackingField_26(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTiltedU3Ek__BackingField_27)); }
	inline bool get_U3CTiltedU3Ek__BackingField_27() const { return ___U3CTiltedU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_27() { return &___U3CTiltedU3Ek__BackingField_27; }
	inline void set_U3CTiltedU3Ek__BackingField_27(bool value)
	{
		___U3CTiltedU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CProfileChangedU3Ek__BackingField_28)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_28() const { return ___U3CProfileChangedU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_28() { return &___U3CProfileChangedU3Ek__BackingField_28; }
	inline void set_U3CProfileChangedU3Ek__BackingField_28(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CBackButtonPressedU3Ek__BackingField_29)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_29() const { return ___U3CBackButtonPressedU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_29() { return &___U3CBackButtonPressedU3Ek__BackingField_29; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_29(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_updatedToFrame_30() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___updatedToFrame_30)); }
	inline int32_t get_updatedToFrame_30() const { return ___updatedToFrame_30; }
	inline int32_t* get_address_of_updatedToFrame_30() { return &___updatedToFrame_30; }
	inline void set_updatedToFrame_30(int32_t value)
	{
		___updatedToFrame_30 = value;
	}
};

struct GvrViewer_t2583885279_StaticFields
{
public:
	// GvrViewer GvrViewer::instance
	GvrViewer_t2583885279 * ___instance_3;
	// UnityEngine.Camera GvrViewer::currentMainCamera
	Camera_t189460977 * ___currentMainCamera_4;
	// StereoController GvrViewer::currentController
	StereoController_t3144380552 * ___currentController_5;
	// Gvr.Internal.BaseVRDevice GvrViewer::device
	BaseVRDevice_t4004462063 * ___device_14;
	// UnityEngine.RenderTexture GvrViewer::stereoScreen
	RenderTexture_t2666733923 * ___stereoScreen_18;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___instance_3)); }
	inline GvrViewer_t2583885279 * get_instance_3() const { return ___instance_3; }
	inline GvrViewer_t2583885279 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GvrViewer_t2583885279 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t189460977 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t189460977 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t189460977 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_currentController_5() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentController_5)); }
	inline StereoController_t3144380552 * get_currentController_5() const { return ___currentController_5; }
	inline StereoController_t3144380552 ** get_address_of_currentController_5() { return &___currentController_5; }
	inline void set_currentController_5(StereoController_t3144380552 * value)
	{
		___currentController_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_5, value);
	}

	inline static int32_t get_offset_of_device_14() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___device_14)); }
	inline BaseVRDevice_t4004462063 * get_device_14() const { return ___device_14; }
	inline BaseVRDevice_t4004462063 ** get_address_of_device_14() { return &___device_14; }
	inline void set_device_14(BaseVRDevice_t4004462063 * value)
	{
		___device_14 = value;
		Il2CppCodeGenWriteBarrier(&___device_14, value);
	}

	inline static int32_t get_offset_of_stereoScreen_18() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___stereoScreen_18)); }
	inline RenderTexture_t2666733923 * get_stereoScreen_18() const { return ___stereoScreen_18; }
	inline RenderTexture_t2666733923 ** get_address_of_stereoScreen_18() { return &___stereoScreen_18; }
	inline void set_stereoScreen_18(RenderTexture_t2666733923 * value)
	{
		___stereoScreen_18 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
