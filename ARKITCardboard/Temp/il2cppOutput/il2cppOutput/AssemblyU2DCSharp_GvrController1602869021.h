#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnection1823409010.h"

// Gvr.Internal.ControllerState
struct ControllerState_t1971591097;
// GvrController
struct GvrController_t1602869021;
// Gvr.Internal.IControllerProvider
struct IControllerProvider_t665503844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrController
struct  GvrController_t1602869021  : public MonoBehaviour_t1158329972
{
public:
	// Gvr.Internal.ControllerState GvrController::controllerState
	ControllerState_t1971591097 * ___controllerState_2;
	// System.Boolean GvrController::enableGyro
	bool ___enableGyro_5;
	// System.Boolean GvrController::enableAccel
	bool ___enableAccel_6;
	// GvrController/EmulatorConnectionMode GvrController::emulatorConnectionMode
	int32_t ___emulatorConnectionMode_7;

public:
	inline static int32_t get_offset_of_controllerState_2() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___controllerState_2)); }
	inline ControllerState_t1971591097 * get_controllerState_2() const { return ___controllerState_2; }
	inline ControllerState_t1971591097 ** get_address_of_controllerState_2() { return &___controllerState_2; }
	inline void set_controllerState_2(ControllerState_t1971591097 * value)
	{
		___controllerState_2 = value;
		Il2CppCodeGenWriteBarrier(&___controllerState_2, value);
	}

	inline static int32_t get_offset_of_enableGyro_5() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___enableGyro_5)); }
	inline bool get_enableGyro_5() const { return ___enableGyro_5; }
	inline bool* get_address_of_enableGyro_5() { return &___enableGyro_5; }
	inline void set_enableGyro_5(bool value)
	{
		___enableGyro_5 = value;
	}

	inline static int32_t get_offset_of_enableAccel_6() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___enableAccel_6)); }
	inline bool get_enableAccel_6() const { return ___enableAccel_6; }
	inline bool* get_address_of_enableAccel_6() { return &___enableAccel_6; }
	inline void set_enableAccel_6(bool value)
	{
		___enableAccel_6 = value;
	}

	inline static int32_t get_offset_of_emulatorConnectionMode_7() { return static_cast<int32_t>(offsetof(GvrController_t1602869021, ___emulatorConnectionMode_7)); }
	inline int32_t get_emulatorConnectionMode_7() const { return ___emulatorConnectionMode_7; }
	inline int32_t* get_address_of_emulatorConnectionMode_7() { return &___emulatorConnectionMode_7; }
	inline void set_emulatorConnectionMode_7(int32_t value)
	{
		___emulatorConnectionMode_7 = value;
	}
};

struct GvrController_t1602869021_StaticFields
{
public:
	// GvrController GvrController::instance
	GvrController_t1602869021 * ___instance_3;
	// Gvr.Internal.IControllerProvider GvrController::controllerProvider
	Il2CppObject * ___controllerProvider_4;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GvrController_t1602869021_StaticFields, ___instance_3)); }
	inline GvrController_t1602869021 * get_instance_3() const { return ___instance_3; }
	inline GvrController_t1602869021 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GvrController_t1602869021 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_controllerProvider_4() { return static_cast<int32_t>(offsetof(GvrController_t1602869021_StaticFields, ___controllerProvider_4)); }
	inline Il2CppObject * get_controllerProvider_4() const { return ___controllerProvider_4; }
	inline Il2CppObject ** get_address_of_controllerProvider_4() { return &___controllerProvider_4; }
	inline void set_controllerProvider_4(Il2CppObject * value)
	{
		___controllerProvider_4 = value;
		Il2CppCodeGenWriteBarrier(&___controllerProvider_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
