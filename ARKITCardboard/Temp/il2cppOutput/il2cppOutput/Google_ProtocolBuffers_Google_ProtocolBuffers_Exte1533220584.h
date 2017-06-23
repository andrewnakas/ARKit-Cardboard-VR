#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t3123131269;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_t3333759417;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry
struct  ExtensionRegistry_t1533220584  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t3123131269 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_t3333759417 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1533220584, ___extensionsByName_1)); }
	inline Dictionary_2_t3123131269 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t3123131269 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t3123131269 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionsByName_1, value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1533220584, ___extensionsByNumber_2)); }
	inline Dictionary_2_t3333759417 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_t3333759417 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_t3333759417 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensionsByNumber_2, value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1533220584, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_t1533220584_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_t1533220584 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1533220584_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_t1533220584 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_t1533220584 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_t1533220584 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier(&___empty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
