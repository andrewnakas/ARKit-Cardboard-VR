#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Collections_Specialized_StringDictio1070889667.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t2580846352  : public StringDictionary_t1070889667
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t909839986 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t2580846352, ___table_1)); }
	inline Hashtable_t909839986 * get_table_1() const { return ___table_1; }
	inline Hashtable_t909839986 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t909839986 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
