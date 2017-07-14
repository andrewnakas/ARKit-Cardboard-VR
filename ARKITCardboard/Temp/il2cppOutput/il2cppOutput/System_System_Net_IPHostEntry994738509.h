#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPHostEntry
struct  IPHostEntry_t994738509  : public Il2CppObject
{
public:
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t4087230954* ___addressList_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t1642385972* ___aliases_1;
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_2;

public:
	inline static int32_t get_offset_of_addressList_0() { return static_cast<int32_t>(offsetof(IPHostEntry_t994738509, ___addressList_0)); }
	inline IPAddressU5BU5D_t4087230954* get_addressList_0() const { return ___addressList_0; }
	inline IPAddressU5BU5D_t4087230954** get_address_of_addressList_0() { return &___addressList_0; }
	inline void set_addressList_0(IPAddressU5BU5D_t4087230954* value)
	{
		___addressList_0 = value;
		Il2CppCodeGenWriteBarrier(&___addressList_0, value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_t994738509, ___aliases_1)); }
	inline StringU5BU5D_t1642385972* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_t1642385972** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_t1642385972* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier(&___aliases_1, value);
	}

	inline static int32_t get_offset_of_hostName_2() { return static_cast<int32_t>(offsetof(IPHostEntry_t994738509, ___hostName_2)); }
	inline String_t* get_hostName_2() const { return ___hostName_2; }
	inline String_t** get_address_of_hostName_2() { return &___hostName_2; }
	inline void set_hostName_2(String_t* value)
	{
		___hostName_2 = value;
		Il2CppCodeGenWriteBarrier(&___hostName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
