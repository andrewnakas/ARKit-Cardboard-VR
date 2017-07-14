#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2051534610;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t1803876613  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Il2CppObject * ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Il2CppObject * ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1642385972* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t3030399641* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.Regex::capnames
	Dictionary_2_t3986656710 * ___capnames_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.Regex::caps
	Dictionary_2_t1079703083 * ___caps_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1642385972* ___capslist_13;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___machineFactory_1)); }
	inline Il2CppObject * get_machineFactory_1() const { return ___machineFactory_1; }
	inline Il2CppObject ** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(Il2CppObject * value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&___machineFactory_1, value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___mapping_2)); }
	inline Il2CppObject * get_mapping_2() const { return ___mapping_2; }
	inline Il2CppObject ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(Il2CppObject * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_2, value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_refsInitialized_5() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___refsInitialized_5)); }
	inline bool get_refsInitialized_5() const { return ___refsInitialized_5; }
	inline bool* get_address_of_refsInitialized_5() { return &___refsInitialized_5; }
	inline void set_refsInitialized_5(bool value)
	{
		___refsInitialized_5 = value;
	}

	inline static int32_t get_offset_of_group_names_6() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_names_6)); }
	inline StringU5BU5D_t1642385972* get_group_names_6() const { return ___group_names_6; }
	inline StringU5BU5D_t1642385972** get_address_of_group_names_6() { return &___group_names_6; }
	inline void set_group_names_6(StringU5BU5D_t1642385972* value)
	{
		___group_names_6 = value;
		Il2CppCodeGenWriteBarrier(&___group_names_6, value);
	}

	inline static int32_t get_offset_of_group_numbers_7() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_numbers_7)); }
	inline Int32U5BU5D_t3030399641* get_group_numbers_7() const { return ___group_numbers_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_group_numbers_7() { return &___group_numbers_7; }
	inline void set_group_numbers_7(Int32U5BU5D_t3030399641* value)
	{
		___group_numbers_7 = value;
		Il2CppCodeGenWriteBarrier(&___group_numbers_7, value);
	}

	inline static int32_t get_offset_of_pattern_8() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___pattern_8)); }
	inline String_t* get_pattern_8() const { return ___pattern_8; }
	inline String_t** get_address_of_pattern_8() { return &___pattern_8; }
	inline void set_pattern_8(String_t* value)
	{
		___pattern_8 = value;
		Il2CppCodeGenWriteBarrier(&___pattern_8, value);
	}

	inline static int32_t get_offset_of_roptions_9() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___roptions_9)); }
	inline int32_t get_roptions_9() const { return ___roptions_9; }
	inline int32_t* get_address_of_roptions_9() { return &___roptions_9; }
	inline void set_roptions_9(int32_t value)
	{
		___roptions_9 = value;
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___capnames_10)); }
	inline Dictionary_2_t3986656710 * get_capnames_10() const { return ___capnames_10; }
	inline Dictionary_2_t3986656710 ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Dictionary_2_t3986656710 * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier(&___capnames_10, value);
	}

	inline static int32_t get_offset_of_caps_11() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___caps_11)); }
	inline Dictionary_2_t1079703083 * get_caps_11() const { return ___caps_11; }
	inline Dictionary_2_t1079703083 ** get_address_of_caps_11() { return &___caps_11; }
	inline void set_caps_11(Dictionary_2_t1079703083 * value)
	{
		___caps_11 = value;
		Il2CppCodeGenWriteBarrier(&___caps_11, value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_capslist_13() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___capslist_13)); }
	inline StringU5BU5D_t1642385972* get_capslist_13() const { return ___capslist_13; }
	inline StringU5BU5D_t1642385972** get_address_of_capslist_13() { return &___capslist_13; }
	inline void set_capslist_13(StringU5BU5D_t1642385972* value)
	{
		___capslist_13 = value;
		Il2CppCodeGenWriteBarrier(&___capslist_13, value);
	}
};

struct Regex_t1803876613_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2051534610 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t1803876613_StaticFields, ___cache_0)); }
	inline FactoryCache_t2051534610 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2051534610 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2051534610 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier(&___cache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
