#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Gvr.Internal.ControllerState
struct ControllerState_t1971591097;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.DummyControllerProvider
struct  DummyControllerProvider_t462852303  : public Il2CppObject
{
public:
	// Gvr.Internal.ControllerState Gvr.Internal.DummyControllerProvider::dummyState
	ControllerState_t1971591097 * ___dummyState_0;

public:
	inline static int32_t get_offset_of_dummyState_0() { return static_cast<int32_t>(offsetof(DummyControllerProvider_t462852303, ___dummyState_0)); }
	inline ControllerState_t1971591097 * get_dummyState_0() const { return ___dummyState_0; }
	inline ControllerState_t1971591097 ** get_address_of_dummyState_0() { return &___dummyState_0; }
	inline void set_dummyState_0(ControllerState_t1971591097 * value)
	{
		___dummyState_0 = value;
		Il2CppCodeGenWriteBarrier(&___dummyState_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
