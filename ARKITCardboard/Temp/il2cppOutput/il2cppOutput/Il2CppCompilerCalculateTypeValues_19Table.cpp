#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Teleport282063519.h"
#include "AssemblyU2DCSharp_GvrAudio2627885619.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"
#include "AssemblyU2DCSharp_GvrAudioListener1521766837.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3590751945.h"
#include "AssemblyU2DCSharp_GvrAudioSource2307460312.h"
#include "AssemblyU2DCSharp_GvrConnectionState1596129842.h"
#include "AssemblyU2DCSharp_GvrController1602869021.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnection1823409010.h"
#include "AssemblyU2DCSharp_GvrController_U3CEndOfFrameU3Ec_1945048840.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerProviderF2872005551.h"
#include "AssemblyU2DCSharp_Gvr_Internal_DummyControllerProvi462852303.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorControllerP4051553744.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerState1971591097.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2001911543.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C4253624923.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent3882078222.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve3452538341.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeEv33558588.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1480486140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3483346914.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2561526853.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_2056133158.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2537253112.h"
#include "AssemblyU2DCSharp_GazeInputModule197612175.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"
#include "AssemblyU2DCSharp_GvrHead3923315805.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate1289521902.h"
#include "AssemblyU2DCSharp_GvrPostRender3118402863.h"
#include "AssemblyU2DCSharp_GvrPreRender2074710158.h"
#include "AssemblyU2DCSharp_GvrProfile2070273202.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen839756045.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses2112994543.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV1743211906.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer1642017539.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes2720173411.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2891453798.h"
#include "AssemblyU2DCSharp_GvrViewer2583885279.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "AssemblyU2DCSharp_GvrViewer_BackButtonModes3874414273.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele1350813851.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "AssemblyU2DCSharp_Pose3D3872859958.h"
#include "AssemblyU2DCSharp_MutablePose3D1015643808.h"
#include "AssemblyU2DCSharp_StereoController3144380552.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33626315335.h"
#include "AssemblyU2DCSharp_StereoRenderEffect958489249.h"
#include "AssemblyU2DCSharp_GvrGaze2249568644.h"
#include "AssemblyU2DCSharp_GvrReticle1834592217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice635821333.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice1373308423.h"
#include "AssemblyU2DCSharp_ColorValues3063098635.h"
#include "AssemblyU2DCSharp_ColorChangedEvent2990895397.h"
#include "AssemblyU2DCSharp_HSVChangedEvent1170297569.h"
#include "AssemblyU2DCSharp_ColorPickerTester1006114474.h"
#include "AssemblyU2DCSharp_TiltWindow1839185375.h"
#include "AssemblyU2DCSharp_ColorImage3157136356.h"
#include "AssemblyU2DCSharp_ColorLabel1884607337.h"
#include "AssemblyU2DCSharp_ColorPicker3035206225.h"
#include "AssemblyU2DCSharp_ColorPresets4120623669.h"
#include "AssemblyU2DCSharp_ColorSlider2729134766.h"
#include "AssemblyU2DCSharp_ColorSliderImage376502149.h"
#include "AssemblyU2DCSharp_HexColorField4192118964.h"
#include "AssemblyU2DCSharp_SVBoxSlider1173082351.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_BoxSlider1871650694.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (Teleport_t282063519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[1] = 
{
	Teleport_t282063519::get_offset_of_startingPosition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (GvrAudio_t2627885619), -1, sizeof(GvrAudio_t2627885619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[22] = 
{
	GvrAudio_t2627885619_StaticFields::get_offset_of_sampleRate_0(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_numChannels_1(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_framesPerBuffer_2(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t2627885619_StaticFields::get_offset_of_initialized_16(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerTransform_17(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_occlusionMaskValue_18(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_pose_19(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_worldScaleInverse_20(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (Quality_t2125366261)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1902[4] = 
{
	Quality_t2125366261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (GvrAudioListener_t1521766837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[4] = 
{
	GvrAudioListener_t1521766837::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t1521766837::get_offset_of_worldScale_3(),
	GvrAudioListener_t1521766837::get_offset_of_occlusionMask_4(),
	GvrAudioListener_t1521766837::get_offset_of_quality_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (GvrAudioRoom_t1253442178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[13] = 
{
	GvrAudioRoom_t1253442178::get_offset_of_leftWall_2(),
	GvrAudioRoom_t1253442178::get_offset_of_rightWall_3(),
	GvrAudioRoom_t1253442178::get_offset_of_floor_4(),
	GvrAudioRoom_t1253442178::get_offset_of_ceiling_5(),
	GvrAudioRoom_t1253442178::get_offset_of_backWall_6(),
	GvrAudioRoom_t1253442178::get_offset_of_frontWall_7(),
	GvrAudioRoom_t1253442178::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t1253442178::get_offset_of_size_12(),
	GvrAudioRoom_t1253442178::get_offset_of_id_13(),
	GvrAudioRoom_t1253442178::get_offset_of_surfaceMaterials_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (SurfaceMaterial_t3590751945)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1905[23] = 
{
	SurfaceMaterial_t3590751945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (GvrAudioSource_t2307460312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[21] = 
{
	GvrAudioSource_t2307460312::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2307460312::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2307460312::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2307460312::get_offset_of_gainDb_5(),
	GvrAudioSource_t2307460312::get_offset_of_occlusionEnabled_6(),
	GvrAudioSource_t2307460312::get_offset_of_playOnAwake_7(),
	GvrAudioSource_t2307460312::get_offset_of_rolloffMode_8(),
	GvrAudioSource_t2307460312::get_offset_of_spread_9(),
	GvrAudioSource_t2307460312::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2307460312::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2307460312::get_offset_of_sourceVolume_14(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMaxDistance_15(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMinDistance_16(),
	GvrAudioSource_t2307460312::get_offset_of_hrtfEnabled_17(),
	GvrAudioSource_t2307460312::get_offset_of_id_18(),
	GvrAudioSource_t2307460312::get_offset_of_currentOcclusion_19(),
	GvrAudioSource_t2307460312::get_offset_of_nextOcclusionUpdate_20(),
	GvrAudioSource_t2307460312::get_offset_of_audioSource_21(),
	GvrAudioSource_t2307460312::get_offset_of_isPaused_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (GvrConnectionState_t1596129842)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1907[6] = 
{
	GvrConnectionState_t1596129842::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (GvrController_t1602869021), -1, sizeof(GvrController_t1602869021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[6] = 
{
	GvrController_t1602869021::get_offset_of_controllerState_2(),
	GvrController_t1602869021_StaticFields::get_offset_of_instance_3(),
	GvrController_t1602869021_StaticFields::get_offset_of_controllerProvider_4(),
	GvrController_t1602869021::get_offset_of_enableGyro_5(),
	GvrController_t1602869021::get_offset_of_enableAccel_6(),
	GvrController_t1602869021::get_offset_of_emulatorConnectionMode_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (EmulatorConnectionMode_t1823409010)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1909[4] = 
{
	EmulatorConnectionMode_t1823409010::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t1945048840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t1945048840::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (ControllerProviderFactory_t2872005551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (DummyControllerProvider_t462852303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[1] = 
{
	DummyControllerProvider_t462852303::get_offset_of_dummyState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (EmulatorControllerProvider_t4051553744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[4] = 
{
	EmulatorControllerProvider_t4051553744::get_offset_of_state_0(),
	EmulatorControllerProvider_t4051553744::get_offset_of_yawCorrection_1(),
	EmulatorControllerProvider_t4051553744::get_offset_of_initialRecenterDone_2(),
	EmulatorControllerProvider_t4051553744::get_offset_of_lastRawOrientation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (ControllerState_t1971591097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[17] = 
{
	ControllerState_t1971591097::get_offset_of_connectionState_0(),
	ControllerState_t1971591097::get_offset_of_orientation_1(),
	ControllerState_t1971591097::get_offset_of_gyro_2(),
	ControllerState_t1971591097::get_offset_of_accel_3(),
	ControllerState_t1971591097::get_offset_of_isTouching_4(),
	ControllerState_t1971591097::get_offset_of_touchPos_5(),
	ControllerState_t1971591097::get_offset_of_touchDown_6(),
	ControllerState_t1971591097::get_offset_of_touchUp_7(),
	ControllerState_t1971591097::get_offset_of_recentering_8(),
	ControllerState_t1971591097::get_offset_of_recentered_9(),
	ControllerState_t1971591097::get_offset_of_clickButtonState_10(),
	ControllerState_t1971591097::get_offset_of_clickButtonDown_11(),
	ControllerState_t1971591097::get_offset_of_clickButtonUp_12(),
	ControllerState_t1971591097::get_offset_of_appButtonState_13(),
	ControllerState_t1971591097::get_offset_of_appButtonDown_14(),
	ControllerState_t1971591097::get_offset_of_appButtonUp_15(),
	ControllerState_t1971591097::get_offset_of_errorDetails_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (EmulatorClientSocket_t2001911543), -1, sizeof(EmulatorClientSocket_t2001911543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1915[8] = 
{
	EmulatorClientSocket_t2001911543_StaticFields::get_offset_of_kPhoneEventPort_2(),
	0,
	0,
	EmulatorClientSocket_t2001911543::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2001911543::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneRemote_8(),
	EmulatorClientSocket_t2001911543::get_offset_of_U3CconnectedU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (EmulatorConfig_t616150261), -1, sizeof(EmulatorConfig_t616150261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[4] = 
{
	EmulatorConfig_t616150261_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t616150261::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (Mode_t1624619217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1917[4] = 
{
	Mode_t1624619217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (EmulatorGyroEvent_t1858389926)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t1858389926 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1918[2] = 
{
	EmulatorGyroEvent_t1858389926::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t1858389926::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (EmulatorAccelEvent_t621139879)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t621139879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1919[2] = 
{
	EmulatorAccelEvent_t621139879::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t621139879::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (EmulatorTouchEvent_t1122923020)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t1122923020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1920[6] = 
{
	EmulatorTouchEvent_t1122923020::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (Action_t936529327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1921[10] = 
{
	Action_t936529327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (Pointer_t3000685002)+ sizeof (Il2CppObject), sizeof(Pointer_t3000685002 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1922[3] = 
{
	Pointer_t3000685002::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (EmulatorOrientationEvent_t4153005117)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t4153005117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1923[2] = 
{
	EmulatorOrientationEvent_t4153005117::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t4153005117::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (EmulatorButtonEvent_t156276569)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t156276569_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1924[2] = 
{
	EmulatorButtonEvent_t156276569::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t156276569::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (ButtonCode_t4043921137)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1925[7] = 
{
	ButtonCode_t4043921137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (EmulatorManager_t3364249716), -1, sizeof(EmulatorManager_t3364249716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1926[14] = 
{
	EmulatorManager_t3364249716_StaticFields::get_offset_of_instance_2(),
	EmulatorManager_t3364249716::get_offset_of_currentGyroEvent_3(),
	EmulatorManager_t3364249716::get_offset_of_currentAccelEvent_4(),
	EmulatorManager_t3364249716::get_offset_of_currentTouchEvent_5(),
	EmulatorManager_t3364249716::get_offset_of_currentOrientationEvent_6(),
	EmulatorManager_t3364249716::get_offset_of_currentButtonEvent_7(),
	EmulatorManager_t3364249716::get_offset_of_gyroEventListenersInternal_8(),
	EmulatorManager_t3364249716::get_offset_of_accelEventListenersInternal_9(),
	EmulatorManager_t3364249716::get_offset_of_touchEventListenersInternal_10(),
	EmulatorManager_t3364249716::get_offset_of_orientationEventListenersInternal_11(),
	EmulatorManager_t3364249716::get_offset_of_buttonEventListenersInternal_12(),
	EmulatorManager_t3364249716::get_offset_of_pendingEvents_13(),
	EmulatorManager_t3364249716::get_offset_of_socket_14(),
	EmulatorManager_t3364249716::get_offset_of_lastDownTimeMs_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (OnGyroEvent_t1804908545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (OnAccelEvent_t1967739812), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (OnTouchEvent_t4143287487), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (OnOrientationEvent_t602701282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (OnButtonEvent_t358370788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t4253624923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1932[5] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24locvar0_0(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24this_1(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24current_2(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24disposing_3(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (PhoneEvent_t3882078222), -1, sizeof(PhoneEvent_t3882078222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1933[1] = 
{
	PhoneEvent_t3882078222_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1934[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1936[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1937[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1939[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (Builder_t3452538341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[2] = 
{
	Builder_t3452538341::get_offset_of_resultIsReadOnly_0(),
	Builder_t3452538341::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (GyroscopeEvent_t182225200), -1, sizeof(GyroscopeEvent_t182225200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1942[16] = 
{
	GyroscopeEvent_t182225200_StaticFields::get_offset_of_defaultInstance_0(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldNames_1(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldTags_2(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasTimestamp_4(),
	GyroscopeEvent_t182225200::get_offset_of_timestamp__5(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasX_7(),
	GyroscopeEvent_t182225200::get_offset_of_x__8(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasY_10(),
	GyroscopeEvent_t182225200::get_offset_of_y__11(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasZ_13(),
	GyroscopeEvent_t182225200::get_offset_of_z__14(),
	GyroscopeEvent_t182225200::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (Builder_t33558588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[2] = 
{
	Builder_t33558588::get_offset_of_resultIsReadOnly_0(),
	Builder_t33558588::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (AccelerometerEvent_t1893725728), -1, sizeof(AccelerometerEvent_t1893725728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1944[16] = 
{
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of_defaultInstance_0(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldNames_1(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldTags_2(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasTimestamp_4(),
	AccelerometerEvent_t1893725728::get_offset_of_timestamp__5(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasX_7(),
	AccelerometerEvent_t1893725728::get_offset_of_x__8(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasY_10(),
	AccelerometerEvent_t1893725728::get_offset_of_y__11(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasZ_13(),
	AccelerometerEvent_t1893725728::get_offset_of_z__14(),
	AccelerometerEvent_t1893725728::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (Builder_t1480486140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[2] = 
{
	Builder_t1480486140::get_offset_of_resultIsReadOnly_0(),
	Builder_t1480486140::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (DepthMapEvent_t1516604558), -1, sizeof(DepthMapEvent_t1516604558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1946[16] = 
{
	DepthMapEvent_t1516604558_StaticFields::get_offset_of_defaultInstance_0(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldNames_1(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldTags_2(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasTimestamp_4(),
	DepthMapEvent_t1516604558::get_offset_of_timestamp__5(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasWidth_7(),
	DepthMapEvent_t1516604558::get_offset_of_width__8(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasHeight_10(),
	DepthMapEvent_t1516604558::get_offset_of_height__11(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t1516604558::get_offset_of_zDistances__14(),
	DepthMapEvent_t1516604558::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (Builder_t3483346914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1947[2] = 
{
	Builder_t3483346914::get_offset_of_resultIsReadOnly_0(),
	Builder_t3483346914::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (OrientationEvent_t2038376807), -1, sizeof(OrientationEvent_t2038376807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1948[19] = 
{
	OrientationEvent_t2038376807_StaticFields::get_offset_of_defaultInstance_0(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldNames_1(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldTags_2(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasTimestamp_4(),
	OrientationEvent_t2038376807::get_offset_of_timestamp__5(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasX_7(),
	OrientationEvent_t2038376807::get_offset_of_x__8(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasY_10(),
	OrientationEvent_t2038376807::get_offset_of_y__11(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasZ_13(),
	OrientationEvent_t2038376807::get_offset_of_z__14(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasW_16(),
	OrientationEvent_t2038376807::get_offset_of_w__17(),
	OrientationEvent_t2038376807::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (Builder_t2561526853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1949[2] = 
{
	Builder_t2561526853::get_offset_of_resultIsReadOnly_0(),
	Builder_t2561526853::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (KeyEvent_t639576718), -1, sizeof(KeyEvent_t639576718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1950[10] = 
{
	KeyEvent_t639576718_StaticFields::get_offset_of_defaultInstance_0(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldNames_1(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldTags_2(),
	0,
	KeyEvent_t639576718::get_offset_of_hasAction_4(),
	KeyEvent_t639576718::get_offset_of_action__5(),
	0,
	KeyEvent_t639576718::get_offset_of_hasCode_7(),
	KeyEvent_t639576718::get_offset_of_code__8(),
	KeyEvent_t639576718::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (Builder_t2056133158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1951[2] = 
{
	Builder_t2056133158::get_offset_of_resultIsReadOnly_0(),
	Builder_t2056133158::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (Builder_t2537253112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1952[2] = 
{
	Builder_t2537253112::get_offset_of_resultIsReadOnly_0(),
	Builder_t2537253112::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (GazeInputModule_t197612175), -1, sizeof(GazeInputModule_t197612175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1954[7] = 
{
	GazeInputModule_t197612175::get_offset_of_vrModeOnly_8(),
	GazeInputModule_t197612175::get_offset_of_clickTime_9(),
	GazeInputModule_t197612175::get_offset_of_hotspot_10(),
	GazeInputModule_t197612175::get_offset_of_pointerData_11(),
	GazeInputModule_t197612175::get_offset_of_lastHeadPose_12(),
	GazeInputModule_t197612175_StaticFields::get_offset_of_gazePointer_13(),
	GazeInputModule_t197612175::get_offset_of_isActive_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (GvrEye_t3930157106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[8] = 
{
	GvrEye_t3930157106::get_offset_of_eye_2(),
	GvrEye_t3930157106::get_offset_of_toggleCullingMask_3(),
	GvrEye_t3930157106::get_offset_of_controller_4(),
	GvrEye_t3930157106::get_offset_of_stereoEffect_5(),
	GvrEye_t3930157106::get_offset_of_monoCamera_6(),
	GvrEye_t3930157106::get_offset_of_realProj_7(),
	GvrEye_t3930157106::get_offset_of_interpPosition_8(),
	GvrEye_t3930157106::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (GvrHead_t3923315805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[6] = 
{
	GvrHead_t3923315805::get_offset_of_trackRotation_2(),
	GvrHead_t3923315805::get_offset_of_trackPosition_3(),
	GvrHead_t3923315805::get_offset_of_target_4(),
	GvrHead_t3923315805::get_offset_of_updateEarly_5(),
	GvrHead_t3923315805::get_offset_of_OnHeadUpdated_6(),
	GvrHead_t3923315805::get_offset_of_updated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (HeadUpdatedDelegate_t1289521902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (GvrPostRender_t3118402863), -1, sizeof(GvrPostRender_t3118402863_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1958[22] = 
{
	GvrPostRender_t3118402863::get_offset_of_U3CcamU3Ek__BackingField_2(),
	0,
	0,
	0,
	GvrPostRender_t3118402863::get_offset_of_distortionMesh_6(),
	GvrPostRender_t3118402863::get_offset_of_meshMaterial_7(),
	GvrPostRender_t3118402863::get_offset_of_uiMaterial_8(),
	GvrPostRender_t3118402863::get_offset_of_centerWidthPx_9(),
	GvrPostRender_t3118402863::get_offset_of_buttonWidthPx_10(),
	GvrPostRender_t3118402863::get_offset_of_xScale_11(),
	GvrPostRender_t3118402863::get_offset_of_yScale_12(),
	GvrPostRender_t3118402863::get_offset_of_xfm_13(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrPostRender_t3118402863_StaticFields::get_offset_of_Angles_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (GvrPreRender_t2074710158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[1] = 
{
	GvrPreRender_t2074710158::get_offset_of_U3CcamU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (GvrProfile_t2070273202), -1, sizeof(GvrProfile_t2070273202_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1960[15] = 
{
	GvrProfile_t2070273202::get_offset_of_screen_0(),
	GvrProfile_t2070273202::get_offset_of_viewer_1(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (Screen_t839756045)+ sizeof (Il2CppObject), sizeof(Screen_t839756045 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1961[3] = 
{
	Screen_t839756045::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (Lenses_t2112994543)+ sizeof (Il2CppObject), sizeof(Lenses_t2112994543 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1962[7] = 
{
	Lenses_t2112994543::get_offset_of_separation_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_screenDistance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_alignment_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (MaxFOV_t1743211906)+ sizeof (Il2CppObject), sizeof(MaxFOV_t1743211906 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1963[4] = 
{
	MaxFOV_t1743211906::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (Distortion_t550060296)+ sizeof (Il2CppObject), sizeof(Distortion_t550060296_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1964[1] = 
{
	Distortion_t550060296::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (Viewer_t1642017539)+ sizeof (Il2CppObject), sizeof(Viewer_t1642017539_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1965[4] = 
{
	Viewer_t1642017539::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (ScreenSizes_t2720173411)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1966[10] = 
{
	ScreenSizes_t2720173411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (ViewerTypes_t2891453798)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1967[4] = 
{
	ViewerTypes_t2891453798::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (GvrViewer_t2583885279), -1, sizeof(GvrViewer_t2583885279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1968[29] = 
{
	0,
	GvrViewer_t2583885279_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentMainCamera_4(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentController_5(),
	GvrViewer_t2583885279::get_offset_of_uiLayerEnabled_6(),
	GvrViewer_t2583885279::get_offset_of_vrModeEnabled_7(),
	GvrViewer_t2583885279::get_offset_of_distortionCorrection_8(),
	GvrViewer_t2583885279::get_offset_of_enableAlignmentMarker_9(),
	GvrViewer_t2583885279::get_offset_of_enableSettingsButton_10(),
	GvrViewer_t2583885279::get_offset_of_backButtonMode_11(),
	GvrViewer_t2583885279::get_offset_of_neckModelScale_12(),
	GvrViewer_t2583885279::get_offset_of_electronicDisplayStabilization_13(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_device_14(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_15(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_16(),
	GvrViewer_t2583885279::get_offset_of_stereoScreenScale_17(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_stereoScreen_18(),
	GvrViewer_t2583885279::get_offset_of_OnStereoScreenChanged_19(),
	GvrViewer_t2583885279::get_offset_of_defaultComfortableViewingRange_20(),
	GvrViewer_t2583885279::get_offset_of_DefaultDeviceProfile_21(),
	GvrViewer_t2583885279::get_offset_of_OnTrigger_22(),
	GvrViewer_t2583885279::get_offset_of_OnTilt_23(),
	GvrViewer_t2583885279::get_offset_of_OnProfileChange_24(),
	GvrViewer_t2583885279::get_offset_of_OnBackButton_25(),
	GvrViewer_t2583885279::get_offset_of_U3CTriggeredU3Ek__BackingField_26(),
	GvrViewer_t2583885279::get_offset_of_U3CTiltedU3Ek__BackingField_27(),
	GvrViewer_t2583885279::get_offset_of_U3CProfileChangedU3Ek__BackingField_28(),
	GvrViewer_t2583885279::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_29(),
	GvrViewer_t2583885279::get_offset_of_updatedToFrame_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (DistortionCorrectionMethod_t1613770858)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1969[4] = 
{
	DistortionCorrectionMethod_t1613770858::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (BackButtonModes_t3874414273)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1970[4] = 
{
	BackButtonModes_t3874414273::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (StereoScreenChangeDelegate_t1350813851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (Eye_t1346324485)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1972[4] = 
{
	Eye_t1346324485::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (Distortion_t351632083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1973[3] = 
{
	Distortion_t351632083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (Pose3D_t3872859958), -1, sizeof(Pose3D_t3872859958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1974[4] = 
{
	Pose3D_t3872859958_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t3872859958::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t3872859958::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t3872859958::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (MutablePose3D_t1015643808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (StereoController_t3144380552), -1, sizeof(StereoController_t3144380552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1976[17] = 
{
	StereoController_t3144380552::get_offset_of_directRender_2(),
	StereoController_t3144380552::get_offset_of_keepStereoUpdated_3(),
	StereoController_t3144380552::get_offset_of_stereoMultiplier_4(),
	StereoController_t3144380552::get_offset_of_matchMonoFOV_5(),
	StereoController_t3144380552::get_offset_of_matchByZoom_6(),
	StereoController_t3144380552::get_offset_of_centerOfInterest_7(),
	StereoController_t3144380552::get_offset_of_radiusOfInterest_8(),
	StereoController_t3144380552::get_offset_of_checkStereoComfort_9(),
	StereoController_t3144380552::get_offset_of_stereoAdjustSmoothing_10(),
	StereoController_t3144380552::get_offset_of_screenParallax_11(),
	StereoController_t3144380552::get_offset_of_stereoPaddingX_12(),
	StereoController_t3144380552::get_offset_of_stereoPaddingY_13(),
	StereoController_t3144380552::get_offset_of_renderedStereo_14(),
	StereoController_t3144380552::get_offset_of_eyes_15(),
	StereoController_t3144380552::get_offset_of_head_16(),
	StereoController_t3144380552::get_offset_of_U3CcamU3Ek__BackingField_17(),
	StereoController_t3144380552_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t3626315335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (StereoRenderEffect_t958489249), -1, sizeof(StereoRenderEffect_t958489249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1978[3] = 
{
	StereoRenderEffect_t958489249::get_offset_of_material_2(),
	StereoRenderEffect_t958489249::get_offset_of_cam_3(),
	StereoRenderEffect_t958489249_StaticFields::get_offset_of_fullRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (GvrGaze_t2249568644), -1, sizeof(GvrGaze_t2249568644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1979[10] = 
{
	GvrGaze_t2249568644::get_offset_of_pointerObject_2(),
	GvrGaze_t2249568644::get_offset_of_pointer_3(),
	GvrGaze_t2249568644::get_offset_of_U3CcamU3Ek__BackingField_4(),
	GvrGaze_t2249568644::get_offset_of_mask_5(),
	GvrGaze_t2249568644::get_offset_of_currentTarget_6(),
	GvrGaze_t2249568644::get_offset_of_currentGazeObject_7(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectPosition_8(),
	GvrGaze_t2249568644::get_offset_of_isTriggered_9(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_10(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (GvrReticle_t1834592217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1980[14] = 
{
	GvrReticle_t1834592217::get_offset_of_reticleSegments_2(),
	GvrReticle_t1834592217::get_offset_of_reticleGrowthSpeed_3(),
	GvrReticle_t1834592217::get_offset_of_materialComp_4(),
	GvrReticle_t1834592217::get_offset_of_targetObj_5(),
	GvrReticle_t1834592217::get_offset_of_reticleInnerAngle_6(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterAngle_7(),
	GvrReticle_t1834592217::get_offset_of_reticleDistanceInMeters_8(),
	0,
	0,
	0,
	0,
	0,
	GvrReticle_t1834592217::get_offset_of_reticleInnerDiameter_14(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterDiameter_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (BaseVRDevice_t4004462063), -1, sizeof(BaseVRDevice_t4004462063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1983[20] = 
{
	BaseVRDevice_t4004462063_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t4004462063::get_offset_of_U3CProfileU3Ek__BackingField_1(),
	BaseVRDevice_t4004462063::get_offset_of_headPose_2(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyePose_3(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyePose_4(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedProjection_5(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedProjection_6(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedProjection_7(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedProjection_8(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedViewport_9(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedViewport_10(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedViewport_11(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedViewport_12(),
	BaseVRDevice_t4004462063::get_offset_of_recommendedTextureSize_13(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeOrientation_14(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeOrientation_15(),
	BaseVRDevice_t4004462063::get_offset_of_triggered_16(),
	BaseVRDevice_t4004462063::get_offset_of_tilted_17(),
	BaseVRDevice_t4004462063::get_offset_of_profileChanged_18(),
	BaseVRDevice_t4004462063::get_offset_of_backButtonPressed_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (GvrDevice_t635821333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1984[14] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrDevice_t635821333::get_offset_of_headData_25(),
	GvrDevice_t635821333::get_offset_of_viewData_26(),
	GvrDevice_t635821333::get_offset_of_profileData_27(),
	GvrDevice_t635821333::get_offset_of_headView_28(),
	GvrDevice_t635821333::get_offset_of_leftEyeView_29(),
	GvrDevice_t635821333::get_offset_of_rightEyeView_30(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeProjections_31(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeUILayer_32(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (iOSDevice_t1373308423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1985[1] = 
{
	iOSDevice_t1373308423::get_offset_of_isOpenGL_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (ColorValues_t3063098635)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1986[8] = 
{
	ColorValues_t3063098635::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (ColorChangedEvent_t2990895397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (HSVChangedEvent_t1170297569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (ColorPickerTester_t1006114474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1989[2] = 
{
	ColorPickerTester_t1006114474::get_offset_of_renderer_2(),
	ColorPickerTester_t1006114474::get_offset_of_picker_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (TiltWindow_t1839185375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1990[4] = 
{
	TiltWindow_t1839185375::get_offset_of_range_2(),
	TiltWindow_t1839185375::get_offset_of_mTrans_3(),
	TiltWindow_t1839185375::get_offset_of_mStart_4(),
	TiltWindow_t1839185375::get_offset_of_mRot_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (ColorImage_t3157136356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[2] = 
{
	ColorImage_t3157136356::get_offset_of_picker_2(),
	ColorImage_t3157136356::get_offset_of_image_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (ColorLabel_t1884607337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[7] = 
{
	ColorLabel_t1884607337::get_offset_of_picker_2(),
	ColorLabel_t1884607337::get_offset_of_type_3(),
	ColorLabel_t1884607337::get_offset_of_prefix_4(),
	ColorLabel_t1884607337::get_offset_of_minValue_5(),
	ColorLabel_t1884607337::get_offset_of_maxValue_6(),
	ColorLabel_t1884607337::get_offset_of_precision_7(),
	ColorLabel_t1884607337::get_offset_of_label_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (ColorPicker_t3035206225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1993[9] = 
{
	ColorPicker_t3035206225::get_offset_of__hue_2(),
	ColorPicker_t3035206225::get_offset_of__saturation_3(),
	ColorPicker_t3035206225::get_offset_of__brightness_4(),
	ColorPicker_t3035206225::get_offset_of__red_5(),
	ColorPicker_t3035206225::get_offset_of__green_6(),
	ColorPicker_t3035206225::get_offset_of__blue_7(),
	ColorPicker_t3035206225::get_offset_of__alpha_8(),
	ColorPicker_t3035206225::get_offset_of_onValueChanged_9(),
	ColorPicker_t3035206225::get_offset_of_onHSVChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (ColorPresets_t4120623669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1994[3] = 
{
	ColorPresets_t4120623669::get_offset_of_picker_2(),
	ColorPresets_t4120623669::get_offset_of_presets_3(),
	ColorPresets_t4120623669::get_offset_of_createPresetImage_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (ColorSlider_t2729134766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1995[4] = 
{
	ColorSlider_t2729134766::get_offset_of_hsvpicker_2(),
	ColorSlider_t2729134766::get_offset_of_type_3(),
	ColorSlider_t2729134766::get_offset_of_slider_4(),
	ColorSlider_t2729134766::get_offset_of_listen_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (ColorSliderImage_t376502149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[4] = 
{
	ColorSliderImage_t376502149::get_offset_of_picker_2(),
	ColorSliderImage_t376502149::get_offset_of_type_3(),
	ColorSliderImage_t376502149::get_offset_of_direction_4(),
	ColorSliderImage_t376502149::get_offset_of_image_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (HexColorField_t4192118964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1997[4] = 
{
	HexColorField_t4192118964::get_offset_of_hsvpicker_2(),
	HexColorField_t4192118964::get_offset_of_displayAlpha_3(),
	HexColorField_t4192118964::get_offset_of_hexInputField_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (SVBoxSlider_t1173082351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1998[5] = 
{
	SVBoxSlider_t1173082351::get_offset_of_picker_2(),
	SVBoxSlider_t1173082351::get_offset_of_slider_3(),
	SVBoxSlider_t1173082351::get_offset_of_image_4(),
	SVBoxSlider_t1173082351::get_offset_of_lastH_5(),
	SVBoxSlider_t1173082351::get_offset_of_listen_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (BoxSlider_t1871650694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[11] = 
{
	BoxSlider_t1871650694::get_offset_of_m_HandleRect_16(),
	BoxSlider_t1871650694::get_offset_of_m_MinValue_17(),
	BoxSlider_t1871650694::get_offset_of_m_MaxValue_18(),
	BoxSlider_t1871650694::get_offset_of_m_WholeNumbers_19(),
	BoxSlider_t1871650694::get_offset_of_m_Value_20(),
	BoxSlider_t1871650694::get_offset_of_m_ValueY_21(),
	BoxSlider_t1871650694::get_offset_of_m_OnValueChanged_22(),
	BoxSlider_t1871650694::get_offset_of_m_HandleTransform_23(),
	BoxSlider_t1871650694::get_offset_of_m_HandleContainerRect_24(),
	BoxSlider_t1871650694::get_offset_of_m_Offset_25(),
	BoxSlider_t1871650694::get_offset_of_m_Tracker_26(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
