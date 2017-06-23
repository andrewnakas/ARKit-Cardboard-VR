#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t4004462063;
// GvrProfile
struct GvrProfile_t2070273202;
// MutablePose3D
struct MutablePose3D_t1015643808;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.BaseVRDevice
struct  BaseVRDevice_t4004462063  : public Il2CppObject
{
public:
	// GvrProfile Gvr.Internal.BaseVRDevice::<Profile>k__BackingField
	GvrProfile_t2070273202 * ___U3CProfileU3Ek__BackingField_1;
	// MutablePose3D Gvr.Internal.BaseVRDevice::headPose
	MutablePose3D_t1015643808 * ___headPose_2;
	// MutablePose3D Gvr.Internal.BaseVRDevice::leftEyePose
	MutablePose3D_t1015643808 * ___leftEyePose_3;
	// MutablePose3D Gvr.Internal.BaseVRDevice::rightEyePose
	MutablePose3D_t1015643808 * ___rightEyePose_4;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::leftEyeDistortedProjection
	Matrix4x4_t2933234003  ___leftEyeDistortedProjection_5;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::rightEyeDistortedProjection
	Matrix4x4_t2933234003  ___rightEyeDistortedProjection_6;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::leftEyeUndistortedProjection
	Matrix4x4_t2933234003  ___leftEyeUndistortedProjection_7;
	// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::rightEyeUndistortedProjection
	Matrix4x4_t2933234003  ___rightEyeUndistortedProjection_8;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::leftEyeDistortedViewport
	Rect_t3681755626  ___leftEyeDistortedViewport_9;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::rightEyeDistortedViewport
	Rect_t3681755626  ___rightEyeDistortedViewport_10;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::leftEyeUndistortedViewport
	Rect_t3681755626  ___leftEyeUndistortedViewport_11;
	// UnityEngine.Rect Gvr.Internal.BaseVRDevice::rightEyeUndistortedViewport
	Rect_t3681755626  ___rightEyeUndistortedViewport_12;
	// UnityEngine.Vector2 Gvr.Internal.BaseVRDevice::recommendedTextureSize
	Vector2_t2243707579  ___recommendedTextureSize_13;
	// System.Int32 Gvr.Internal.BaseVRDevice::leftEyeOrientation
	int32_t ___leftEyeOrientation_14;
	// System.Int32 Gvr.Internal.BaseVRDevice::rightEyeOrientation
	int32_t ___rightEyeOrientation_15;
	// System.Boolean Gvr.Internal.BaseVRDevice::triggered
	bool ___triggered_16;
	// System.Boolean Gvr.Internal.BaseVRDevice::tilted
	bool ___tilted_17;
	// System.Boolean Gvr.Internal.BaseVRDevice::profileChanged
	bool ___profileChanged_18;
	// System.Boolean Gvr.Internal.BaseVRDevice::backButtonPressed
	bool ___backButtonPressed_19;

public:
	inline static int32_t get_offset_of_U3CProfileU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___U3CProfileU3Ek__BackingField_1)); }
	inline GvrProfile_t2070273202 * get_U3CProfileU3Ek__BackingField_1() const { return ___U3CProfileU3Ek__BackingField_1; }
	inline GvrProfile_t2070273202 ** get_address_of_U3CProfileU3Ek__BackingField_1() { return &___U3CProfileU3Ek__BackingField_1; }
	inline void set_U3CProfileU3Ek__BackingField_1(GvrProfile_t2070273202 * value)
	{
		___U3CProfileU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProfileU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_headPose_2() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___headPose_2)); }
	inline MutablePose3D_t1015643808 * get_headPose_2() const { return ___headPose_2; }
	inline MutablePose3D_t1015643808 ** get_address_of_headPose_2() { return &___headPose_2; }
	inline void set_headPose_2(MutablePose3D_t1015643808 * value)
	{
		___headPose_2 = value;
		Il2CppCodeGenWriteBarrier(&___headPose_2, value);
	}

	inline static int32_t get_offset_of_leftEyePose_3() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyePose_3)); }
	inline MutablePose3D_t1015643808 * get_leftEyePose_3() const { return ___leftEyePose_3; }
	inline MutablePose3D_t1015643808 ** get_address_of_leftEyePose_3() { return &___leftEyePose_3; }
	inline void set_leftEyePose_3(MutablePose3D_t1015643808 * value)
	{
		___leftEyePose_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyePose_3, value);
	}

	inline static int32_t get_offset_of_rightEyePose_4() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyePose_4)); }
	inline MutablePose3D_t1015643808 * get_rightEyePose_4() const { return ___rightEyePose_4; }
	inline MutablePose3D_t1015643808 ** get_address_of_rightEyePose_4() { return &___rightEyePose_4; }
	inline void set_rightEyePose_4(MutablePose3D_t1015643808 * value)
	{
		___rightEyePose_4 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyePose_4, value);
	}

	inline static int32_t get_offset_of_leftEyeDistortedProjection_5() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyeDistortedProjection_5)); }
	inline Matrix4x4_t2933234003  get_leftEyeDistortedProjection_5() const { return ___leftEyeDistortedProjection_5; }
	inline Matrix4x4_t2933234003 * get_address_of_leftEyeDistortedProjection_5() { return &___leftEyeDistortedProjection_5; }
	inline void set_leftEyeDistortedProjection_5(Matrix4x4_t2933234003  value)
	{
		___leftEyeDistortedProjection_5 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedProjection_6() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyeDistortedProjection_6)); }
	inline Matrix4x4_t2933234003  get_rightEyeDistortedProjection_6() const { return ___rightEyeDistortedProjection_6; }
	inline Matrix4x4_t2933234003 * get_address_of_rightEyeDistortedProjection_6() { return &___rightEyeDistortedProjection_6; }
	inline void set_rightEyeDistortedProjection_6(Matrix4x4_t2933234003  value)
	{
		___rightEyeDistortedProjection_6 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedProjection_7() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyeUndistortedProjection_7)); }
	inline Matrix4x4_t2933234003  get_leftEyeUndistortedProjection_7() const { return ___leftEyeUndistortedProjection_7; }
	inline Matrix4x4_t2933234003 * get_address_of_leftEyeUndistortedProjection_7() { return &___leftEyeUndistortedProjection_7; }
	inline void set_leftEyeUndistortedProjection_7(Matrix4x4_t2933234003  value)
	{
		___leftEyeUndistortedProjection_7 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedProjection_8() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyeUndistortedProjection_8)); }
	inline Matrix4x4_t2933234003  get_rightEyeUndistortedProjection_8() const { return ___rightEyeUndistortedProjection_8; }
	inline Matrix4x4_t2933234003 * get_address_of_rightEyeUndistortedProjection_8() { return &___rightEyeUndistortedProjection_8; }
	inline void set_rightEyeUndistortedProjection_8(Matrix4x4_t2933234003  value)
	{
		___rightEyeUndistortedProjection_8 = value;
	}

	inline static int32_t get_offset_of_leftEyeDistortedViewport_9() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyeDistortedViewport_9)); }
	inline Rect_t3681755626  get_leftEyeDistortedViewport_9() const { return ___leftEyeDistortedViewport_9; }
	inline Rect_t3681755626 * get_address_of_leftEyeDistortedViewport_9() { return &___leftEyeDistortedViewport_9; }
	inline void set_leftEyeDistortedViewport_9(Rect_t3681755626  value)
	{
		___leftEyeDistortedViewport_9 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedViewport_10() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyeDistortedViewport_10)); }
	inline Rect_t3681755626  get_rightEyeDistortedViewport_10() const { return ___rightEyeDistortedViewport_10; }
	inline Rect_t3681755626 * get_address_of_rightEyeDistortedViewport_10() { return &___rightEyeDistortedViewport_10; }
	inline void set_rightEyeDistortedViewport_10(Rect_t3681755626  value)
	{
		___rightEyeDistortedViewport_10 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedViewport_11() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyeUndistortedViewport_11)); }
	inline Rect_t3681755626  get_leftEyeUndistortedViewport_11() const { return ___leftEyeUndistortedViewport_11; }
	inline Rect_t3681755626 * get_address_of_leftEyeUndistortedViewport_11() { return &___leftEyeUndistortedViewport_11; }
	inline void set_leftEyeUndistortedViewport_11(Rect_t3681755626  value)
	{
		___leftEyeUndistortedViewport_11 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedViewport_12() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyeUndistortedViewport_12)); }
	inline Rect_t3681755626  get_rightEyeUndistortedViewport_12() const { return ___rightEyeUndistortedViewport_12; }
	inline Rect_t3681755626 * get_address_of_rightEyeUndistortedViewport_12() { return &___rightEyeUndistortedViewport_12; }
	inline void set_rightEyeUndistortedViewport_12(Rect_t3681755626  value)
	{
		___rightEyeUndistortedViewport_12 = value;
	}

	inline static int32_t get_offset_of_recommendedTextureSize_13() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___recommendedTextureSize_13)); }
	inline Vector2_t2243707579  get_recommendedTextureSize_13() const { return ___recommendedTextureSize_13; }
	inline Vector2_t2243707579 * get_address_of_recommendedTextureSize_13() { return &___recommendedTextureSize_13; }
	inline void set_recommendedTextureSize_13(Vector2_t2243707579  value)
	{
		___recommendedTextureSize_13 = value;
	}

	inline static int32_t get_offset_of_leftEyeOrientation_14() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___leftEyeOrientation_14)); }
	inline int32_t get_leftEyeOrientation_14() const { return ___leftEyeOrientation_14; }
	inline int32_t* get_address_of_leftEyeOrientation_14() { return &___leftEyeOrientation_14; }
	inline void set_leftEyeOrientation_14(int32_t value)
	{
		___leftEyeOrientation_14 = value;
	}

	inline static int32_t get_offset_of_rightEyeOrientation_15() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___rightEyeOrientation_15)); }
	inline int32_t get_rightEyeOrientation_15() const { return ___rightEyeOrientation_15; }
	inline int32_t* get_address_of_rightEyeOrientation_15() { return &___rightEyeOrientation_15; }
	inline void set_rightEyeOrientation_15(int32_t value)
	{
		___rightEyeOrientation_15 = value;
	}

	inline static int32_t get_offset_of_triggered_16() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___triggered_16)); }
	inline bool get_triggered_16() const { return ___triggered_16; }
	inline bool* get_address_of_triggered_16() { return &___triggered_16; }
	inline void set_triggered_16(bool value)
	{
		___triggered_16 = value;
	}

	inline static int32_t get_offset_of_tilted_17() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___tilted_17)); }
	inline bool get_tilted_17() const { return ___tilted_17; }
	inline bool* get_address_of_tilted_17() { return &___tilted_17; }
	inline void set_tilted_17(bool value)
	{
		___tilted_17 = value;
	}

	inline static int32_t get_offset_of_profileChanged_18() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___profileChanged_18)); }
	inline bool get_profileChanged_18() const { return ___profileChanged_18; }
	inline bool* get_address_of_profileChanged_18() { return &___profileChanged_18; }
	inline void set_profileChanged_18(bool value)
	{
		___profileChanged_18 = value;
	}

	inline static int32_t get_offset_of_backButtonPressed_19() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063, ___backButtonPressed_19)); }
	inline bool get_backButtonPressed_19() const { return ___backButtonPressed_19; }
	inline bool* get_address_of_backButtonPressed_19() { return &___backButtonPressed_19; }
	inline void set_backButtonPressed_19(bool value)
	{
		___backButtonPressed_19 = value;
	}
};

struct BaseVRDevice_t4004462063_StaticFields
{
public:
	// Gvr.Internal.BaseVRDevice Gvr.Internal.BaseVRDevice::device
	BaseVRDevice_t4004462063 * ___device_0;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4004462063_StaticFields, ___device_0)); }
	inline BaseVRDevice_t4004462063 * get_device_0() const { return ___device_0; }
	inline BaseVRDevice_t4004462063 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BaseVRDevice_t4004462063 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
