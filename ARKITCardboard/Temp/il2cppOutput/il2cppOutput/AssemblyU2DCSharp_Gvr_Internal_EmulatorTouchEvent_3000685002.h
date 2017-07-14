#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorTouchEvent/Pointer
struct  Pointer_t3000685002 
{
public:
	// System.Int32 Gvr.Internal.EmulatorTouchEvent/Pointer::fingerId
	int32_t ___fingerId_0;
	// System.Single Gvr.Internal.EmulatorTouchEvent/Pointer::normalizedX
	float ___normalizedX_1;
	// System.Single Gvr.Internal.EmulatorTouchEvent/Pointer::normalizedY
	float ___normalizedY_2;

public:
	inline static int32_t get_offset_of_fingerId_0() { return static_cast<int32_t>(offsetof(Pointer_t3000685002, ___fingerId_0)); }
	inline int32_t get_fingerId_0() const { return ___fingerId_0; }
	inline int32_t* get_address_of_fingerId_0() { return &___fingerId_0; }
	inline void set_fingerId_0(int32_t value)
	{
		___fingerId_0 = value;
	}

	inline static int32_t get_offset_of_normalizedX_1() { return static_cast<int32_t>(offsetof(Pointer_t3000685002, ___normalizedX_1)); }
	inline float get_normalizedX_1() const { return ___normalizedX_1; }
	inline float* get_address_of_normalizedX_1() { return &___normalizedX_1; }
	inline void set_normalizedX_1(float value)
	{
		___normalizedX_1 = value;
	}

	inline static int32_t get_offset_of_normalizedY_2() { return static_cast<int32_t>(offsetof(Pointer_t3000685002, ___normalizedY_2)); }
	inline float get_normalizedY_2() const { return ___normalizedY_2; }
	inline float* get_address_of_normalizedY_2() { return &___normalizedY_2; }
	inline void set_normalizedY_2(float value)
	{
		___normalizedY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
