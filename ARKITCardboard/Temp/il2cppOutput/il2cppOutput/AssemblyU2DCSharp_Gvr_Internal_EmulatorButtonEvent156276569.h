#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorButtonEvent
struct  EmulatorButtonEvent_t156276569 
{
public:
	// Gvr.Internal.EmulatorButtonEvent/ButtonCode Gvr.Internal.EmulatorButtonEvent::code
	int32_t ___code_0;
	// System.Boolean Gvr.Internal.EmulatorButtonEvent::down
	bool ___down_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(EmulatorButtonEvent_t156276569, ___code_0)); }
	inline int32_t get_code_0() const { return ___code_0; }
	inline int32_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(int32_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_down_1() { return static_cast<int32_t>(offsetof(EmulatorButtonEvent_t156276569, ___down_1)); }
	inline bool get_down_1() const { return ___down_1; }
	inline bool* get_address_of_down_1() { return &___down_1; }
	inline void set_down_1(bool value)
	{
		___down_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Gvr.Internal.EmulatorButtonEvent
struct EmulatorButtonEvent_t156276569_marshaled_pinvoke
{
	int32_t ___code_0;
	int32_t ___down_1;
};
// Native definition for COM marshalling of Gvr.Internal.EmulatorButtonEvent
struct EmulatorButtonEvent_t156276569_marshaled_com
{
	int32_t ___code_0;
	int32_t ___down_1;
};
