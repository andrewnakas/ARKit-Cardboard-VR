#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorGyroEvent
struct  EmulatorGyroEvent_t1858389926 
{
public:
	// System.Int64 Gvr.Internal.EmulatorGyroEvent::timestamp
	int64_t ___timestamp_0;
	// UnityEngine.Vector3 Gvr.Internal.EmulatorGyroEvent::value
	Vector3_t2243707580  ___value_1;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(EmulatorGyroEvent_t1858389926, ___timestamp_0)); }
	inline int64_t get_timestamp_0() const { return ___timestamp_0; }
	inline int64_t* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(int64_t value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(EmulatorGyroEvent_t1858389926, ___value_1)); }
	inline Vector3_t2243707580  get_value_1() const { return ___value_1; }
	inline Vector3_t2243707580 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector3_t2243707580  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
