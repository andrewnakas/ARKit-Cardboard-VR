#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.GeneratedCodeAttribute
struct  GeneratedCodeAttribute_t4009325960  : public Attribute_t542643598
{
public:
	// System.String System.CodeDom.Compiler.GeneratedCodeAttribute::tool
	String_t* ___tool_0;
	// System.String System.CodeDom.Compiler.GeneratedCodeAttribute::version
	String_t* ___version_1;

public:
	inline static int32_t get_offset_of_tool_0() { return static_cast<int32_t>(offsetof(GeneratedCodeAttribute_t4009325960, ___tool_0)); }
	inline String_t* get_tool_0() const { return ___tool_0; }
	inline String_t** get_address_of_tool_0() { return &___tool_0; }
	inline void set_tool_0(String_t* value)
	{
		___tool_0 = value;
		Il2CppCodeGenWriteBarrier(&___tool_0, value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(GeneratedCodeAttribute_t4009325960, ___version_1)); }
	inline String_t* get_version_1() const { return ___version_1; }
	inline String_t** get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(String_t* value)
	{
		___version_1 = value;
		Il2CppCodeGenWriteBarrier(&___version_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
