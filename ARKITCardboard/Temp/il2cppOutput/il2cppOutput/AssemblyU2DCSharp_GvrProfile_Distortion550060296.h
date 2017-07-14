#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrProfile/Distortion
struct  Distortion_t550060296 
{
public:
	// System.Single[] GvrProfile/Distortion::coef
	SingleU5BU5D_t577127397* ___coef_0;

public:
	inline static int32_t get_offset_of_coef_0() { return static_cast<int32_t>(offsetof(Distortion_t550060296, ___coef_0)); }
	inline SingleU5BU5D_t577127397* get_coef_0() const { return ___coef_0; }
	inline SingleU5BU5D_t577127397** get_address_of_coef_0() { return &___coef_0; }
	inline void set_coef_0(SingleU5BU5D_t577127397* value)
	{
		___coef_0 = value;
		Il2CppCodeGenWriteBarrier(&___coef_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GvrProfile/Distortion
struct Distortion_t550060296_marshaled_pinvoke
{
	float* ___coef_0;
};
// Native definition for COM marshalling of GvrProfile/Distortion
struct Distortion_t550060296_marshaled_com
{
	float* ___coef_0;
};
