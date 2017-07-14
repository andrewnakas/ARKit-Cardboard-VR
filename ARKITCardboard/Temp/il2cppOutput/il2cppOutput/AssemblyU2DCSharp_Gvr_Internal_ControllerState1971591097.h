#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GvrConnectionState1596129842.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.ControllerState
struct  ControllerState_t1971591097  : public Il2CppObject
{
public:
	// GvrConnectionState Gvr.Internal.ControllerState::connectionState
	int32_t ___connectionState_0;
	// UnityEngine.Quaternion Gvr.Internal.ControllerState::orientation
	Quaternion_t4030073918  ___orientation_1;
	// UnityEngine.Vector3 Gvr.Internal.ControllerState::gyro
	Vector3_t2243707580  ___gyro_2;
	// UnityEngine.Vector3 Gvr.Internal.ControllerState::accel
	Vector3_t2243707580  ___accel_3;
	// System.Boolean Gvr.Internal.ControllerState::isTouching
	bool ___isTouching_4;
	// UnityEngine.Vector2 Gvr.Internal.ControllerState::touchPos
	Vector2_t2243707579  ___touchPos_5;
	// System.Boolean Gvr.Internal.ControllerState::touchDown
	bool ___touchDown_6;
	// System.Boolean Gvr.Internal.ControllerState::touchUp
	bool ___touchUp_7;
	// System.Boolean Gvr.Internal.ControllerState::recentering
	bool ___recentering_8;
	// System.Boolean Gvr.Internal.ControllerState::recentered
	bool ___recentered_9;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonState
	bool ___clickButtonState_10;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonDown
	bool ___clickButtonDown_11;
	// System.Boolean Gvr.Internal.ControllerState::clickButtonUp
	bool ___clickButtonUp_12;
	// System.Boolean Gvr.Internal.ControllerState::appButtonState
	bool ___appButtonState_13;
	// System.Boolean Gvr.Internal.ControllerState::appButtonDown
	bool ___appButtonDown_14;
	// System.Boolean Gvr.Internal.ControllerState::appButtonUp
	bool ___appButtonUp_15;
	// System.String Gvr.Internal.ControllerState::errorDetails
	String_t* ___errorDetails_16;

public:
	inline static int32_t get_offset_of_connectionState_0() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___connectionState_0)); }
	inline int32_t get_connectionState_0() const { return ___connectionState_0; }
	inline int32_t* get_address_of_connectionState_0() { return &___connectionState_0; }
	inline void set_connectionState_0(int32_t value)
	{
		___connectionState_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___orientation_1)); }
	inline Quaternion_t4030073918  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t4030073918 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t4030073918  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_gyro_2() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___gyro_2)); }
	inline Vector3_t2243707580  get_gyro_2() const { return ___gyro_2; }
	inline Vector3_t2243707580 * get_address_of_gyro_2() { return &___gyro_2; }
	inline void set_gyro_2(Vector3_t2243707580  value)
	{
		___gyro_2 = value;
	}

	inline static int32_t get_offset_of_accel_3() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___accel_3)); }
	inline Vector3_t2243707580  get_accel_3() const { return ___accel_3; }
	inline Vector3_t2243707580 * get_address_of_accel_3() { return &___accel_3; }
	inline void set_accel_3(Vector3_t2243707580  value)
	{
		___accel_3 = value;
	}

	inline static int32_t get_offset_of_isTouching_4() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___isTouching_4)); }
	inline bool get_isTouching_4() const { return ___isTouching_4; }
	inline bool* get_address_of_isTouching_4() { return &___isTouching_4; }
	inline void set_isTouching_4(bool value)
	{
		___isTouching_4 = value;
	}

	inline static int32_t get_offset_of_touchPos_5() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchPos_5)); }
	inline Vector2_t2243707579  get_touchPos_5() const { return ___touchPos_5; }
	inline Vector2_t2243707579 * get_address_of_touchPos_5() { return &___touchPos_5; }
	inline void set_touchPos_5(Vector2_t2243707579  value)
	{
		___touchPos_5 = value;
	}

	inline static int32_t get_offset_of_touchDown_6() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchDown_6)); }
	inline bool get_touchDown_6() const { return ___touchDown_6; }
	inline bool* get_address_of_touchDown_6() { return &___touchDown_6; }
	inline void set_touchDown_6(bool value)
	{
		___touchDown_6 = value;
	}

	inline static int32_t get_offset_of_touchUp_7() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___touchUp_7)); }
	inline bool get_touchUp_7() const { return ___touchUp_7; }
	inline bool* get_address_of_touchUp_7() { return &___touchUp_7; }
	inline void set_touchUp_7(bool value)
	{
		___touchUp_7 = value;
	}

	inline static int32_t get_offset_of_recentering_8() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___recentering_8)); }
	inline bool get_recentering_8() const { return ___recentering_8; }
	inline bool* get_address_of_recentering_8() { return &___recentering_8; }
	inline void set_recentering_8(bool value)
	{
		___recentering_8 = value;
	}

	inline static int32_t get_offset_of_recentered_9() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___recentered_9)); }
	inline bool get_recentered_9() const { return ___recentered_9; }
	inline bool* get_address_of_recentered_9() { return &___recentered_9; }
	inline void set_recentered_9(bool value)
	{
		___recentered_9 = value;
	}

	inline static int32_t get_offset_of_clickButtonState_10() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonState_10)); }
	inline bool get_clickButtonState_10() const { return ___clickButtonState_10; }
	inline bool* get_address_of_clickButtonState_10() { return &___clickButtonState_10; }
	inline void set_clickButtonState_10(bool value)
	{
		___clickButtonState_10 = value;
	}

	inline static int32_t get_offset_of_clickButtonDown_11() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonDown_11)); }
	inline bool get_clickButtonDown_11() const { return ___clickButtonDown_11; }
	inline bool* get_address_of_clickButtonDown_11() { return &___clickButtonDown_11; }
	inline void set_clickButtonDown_11(bool value)
	{
		___clickButtonDown_11 = value;
	}

	inline static int32_t get_offset_of_clickButtonUp_12() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___clickButtonUp_12)); }
	inline bool get_clickButtonUp_12() const { return ___clickButtonUp_12; }
	inline bool* get_address_of_clickButtonUp_12() { return &___clickButtonUp_12; }
	inline void set_clickButtonUp_12(bool value)
	{
		___clickButtonUp_12 = value;
	}

	inline static int32_t get_offset_of_appButtonState_13() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonState_13)); }
	inline bool get_appButtonState_13() const { return ___appButtonState_13; }
	inline bool* get_address_of_appButtonState_13() { return &___appButtonState_13; }
	inline void set_appButtonState_13(bool value)
	{
		___appButtonState_13 = value;
	}

	inline static int32_t get_offset_of_appButtonDown_14() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonDown_14)); }
	inline bool get_appButtonDown_14() const { return ___appButtonDown_14; }
	inline bool* get_address_of_appButtonDown_14() { return &___appButtonDown_14; }
	inline void set_appButtonDown_14(bool value)
	{
		___appButtonDown_14 = value;
	}

	inline static int32_t get_offset_of_appButtonUp_15() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___appButtonUp_15)); }
	inline bool get_appButtonUp_15() const { return ___appButtonUp_15; }
	inline bool* get_address_of_appButtonUp_15() { return &___appButtonUp_15; }
	inline void set_appButtonUp_15(bool value)
	{
		___appButtonUp_15 = value;
	}

	inline static int32_t get_offset_of_errorDetails_16() { return static_cast<int32_t>(offsetof(ControllerState_t1971591097, ___errorDetails_16)); }
	inline String_t* get_errorDetails_16() const { return ___errorDetails_16; }
	inline String_t** get_address_of_errorDetails_16() { return &___errorDetails_16; }
	inline void set_errorDetails_16(String_t* value)
	{
		___errorDetails_16 = value;
		Il2CppCodeGenWriteBarrier(&___errorDetails_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
