#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t1070889667  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t909839986 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t1070889667, ___contents_0)); }
	inline Hashtable_t909839986 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t909839986 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t909839986 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier(&___contents_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
