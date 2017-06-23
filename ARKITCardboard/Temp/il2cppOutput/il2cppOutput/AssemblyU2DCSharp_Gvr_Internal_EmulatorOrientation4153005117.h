#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorOrientationEvent
struct  EmulatorOrientationEvent_t4153005117 
{
public:
	// System.Int64 Gvr.Internal.EmulatorOrientationEvent::timestamp
	int64_t ___timestamp_0;
	// UnityEngine.Quaternion Gvr.Internal.EmulatorOrientationEvent::orientation
	Quaternion_t4030073918  ___orientation_1;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t4153005117, ___timestamp_0)); }
	inline int64_t get_timestamp_0() const { return ___timestamp_0; }
	inline int64_t* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(int64_t value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t4153005117, ___orientation_1)); }
	inline Quaternion_t4030073918  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t4030073918 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t4030073918  value)
	{
		___orientation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
