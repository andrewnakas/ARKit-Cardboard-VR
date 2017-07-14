#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t1625295921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t1304606600  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t1625295921 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t1304606600, ___m_Fields_1)); }
	inline List_1_t1625295921 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t1625295921 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t1625295921 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Fields_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
