#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"

// Gvr.Internal.EmulatorConfig
struct EmulatorConfig_t616150261;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorConfig
struct  EmulatorConfig_t616150261  : public MonoBehaviour_t1158329972
{
public:
	// Gvr.Internal.EmulatorConfig/Mode Gvr.Internal.EmulatorConfig::PHONE_EVENT_MODE
	int32_t ___PHONE_EVENT_MODE_3;

public:
	inline static int32_t get_offset_of_PHONE_EVENT_MODE_3() { return static_cast<int32_t>(offsetof(EmulatorConfig_t616150261, ___PHONE_EVENT_MODE_3)); }
	inline int32_t get_PHONE_EVENT_MODE_3() const { return ___PHONE_EVENT_MODE_3; }
	inline int32_t* get_address_of_PHONE_EVENT_MODE_3() { return &___PHONE_EVENT_MODE_3; }
	inline void set_PHONE_EVENT_MODE_3(int32_t value)
	{
		___PHONE_EVENT_MODE_3 = value;
	}
};

struct EmulatorConfig_t616150261_StaticFields
{
public:
	// Gvr.Internal.EmulatorConfig Gvr.Internal.EmulatorConfig::instance
	EmulatorConfig_t616150261 * ___instance_2;
	// System.String Gvr.Internal.EmulatorConfig::USB_SERVER_IP
	String_t* ___USB_SERVER_IP_4;
	// System.String Gvr.Internal.EmulatorConfig::WIFI_SERVER_IP
	String_t* ___WIFI_SERVER_IP_5;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(EmulatorConfig_t616150261_StaticFields, ___instance_2)); }
	inline EmulatorConfig_t616150261 * get_instance_2() const { return ___instance_2; }
	inline EmulatorConfig_t616150261 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(EmulatorConfig_t616150261 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_USB_SERVER_IP_4() { return static_cast<int32_t>(offsetof(EmulatorConfig_t616150261_StaticFields, ___USB_SERVER_IP_4)); }
	inline String_t* get_USB_SERVER_IP_4() const { return ___USB_SERVER_IP_4; }
	inline String_t** get_address_of_USB_SERVER_IP_4() { return &___USB_SERVER_IP_4; }
	inline void set_USB_SERVER_IP_4(String_t* value)
	{
		___USB_SERVER_IP_4 = value;
		Il2CppCodeGenWriteBarrier(&___USB_SERVER_IP_4, value);
	}

	inline static int32_t get_offset_of_WIFI_SERVER_IP_5() { return static_cast<int32_t>(offsetof(EmulatorConfig_t616150261_StaticFields, ___WIFI_SERVER_IP_5)); }
	inline String_t* get_WIFI_SERVER_IP_5() const { return ___WIFI_SERVER_IP_5; }
	inline String_t** get_address_of_WIFI_SERVER_IP_5() { return &___WIFI_SERVER_IP_5; }
	inline void set_WIFI_SERVER_IP_5(String_t* value)
	{
		___WIFI_SERVER_IP_5 = value;
		Il2CppCodeGenWriteBarrier(&___WIFI_SERVER_IP_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
