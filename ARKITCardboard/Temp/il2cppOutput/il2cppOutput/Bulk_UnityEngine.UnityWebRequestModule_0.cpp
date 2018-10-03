#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Double
struct Double_t594665363;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2327118887;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1209798546;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.UInt16
struct UInt16_t2177724958;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestUtils_t3541624225_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral97523668;
extern const uint32_t CertificateHandler_Dispose_m2100863831_MetadataUsageId;
extern const uint32_t WebRequestUtils_RedirectTo_m55747000_MetadataUsageId;
extern const uint32_t WebRequestUtils__cctor_m4190982137_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef WEBREQUESTUTILS_T3541624225_H
#define WEBREQUESTUTILS_T3541624225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3541624225  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3541624225_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3657309853 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3541624225_StaticFields, ___domainRegex_0)); }
	inline Regex_t3657309853 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3657309853 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3657309853 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3541624225_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T3816567336_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1281789340* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t385246372* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.Regex::capnames
	Dictionary_2_t2736202052 * ___capnames_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.Regex::caps
	Dictionary_2_t1839659084 * ___caps_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1281789340* ___capslist_13;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_refsInitialized_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___refsInitialized_5)); }
	inline bool get_refsInitialized_5() const { return ___refsInitialized_5; }
	inline bool* get_address_of_refsInitialized_5() { return &___refsInitialized_5; }
	inline void set_refsInitialized_5(bool value)
	{
		___refsInitialized_5 = value;
	}

	inline static int32_t get_offset_of_group_names_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_names_6)); }
	inline StringU5BU5D_t1281789340* get_group_names_6() const { return ___group_names_6; }
	inline StringU5BU5D_t1281789340** get_address_of_group_names_6() { return &___group_names_6; }
	inline void set_group_names_6(StringU5BU5D_t1281789340* value)
	{
		___group_names_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_6), value);
	}

	inline static int32_t get_offset_of_group_numbers_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_numbers_7)); }
	inline Int32U5BU5D_t385246372* get_group_numbers_7() const { return ___group_numbers_7; }
	inline Int32U5BU5D_t385246372** get_address_of_group_numbers_7() { return &___group_numbers_7; }
	inline void set_group_numbers_7(Int32U5BU5D_t385246372* value)
	{
		___group_numbers_7 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_7), value);
	}

	inline static int32_t get_offset_of_pattern_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_8)); }
	inline String_t* get_pattern_8() const { return ___pattern_8; }
	inline String_t** get_address_of_pattern_8() { return &___pattern_8; }
	inline void set_pattern_8(String_t* value)
	{
		___pattern_8 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_8), value);
	}

	inline static int32_t get_offset_of_roptions_9() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_9)); }
	inline int32_t get_roptions_9() const { return ___roptions_9; }
	inline int32_t* get_address_of_roptions_9() { return &___roptions_9; }
	inline void set_roptions_9(int32_t value)
	{
		___roptions_9 = value;
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capnames_10)); }
	inline Dictionary_2_t2736202052 * get_capnames_10() const { return ___capnames_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Dictionary_2_t2736202052 * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_10), value);
	}

	inline static int32_t get_offset_of_caps_11() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___caps_11)); }
	inline Dictionary_2_t1839659084 * get_caps_11() const { return ___caps_11; }
	inline Dictionary_2_t1839659084 ** get_address_of_caps_11() { return &___caps_11; }
	inline void set_caps_11(Dictionary_2_t1839659084 * value)
	{
		___caps_11 = value;
		Il2CppCodeGenWriteBarrier((&___caps_11), value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_capslist_13() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capslist_13)); }
	inline StringU5BU5D_t1281789340* get_capslist_13() const { return ___capslist_13; }
	inline StringU5BU5D_t1281789340** get_address_of_capslist_13() { return &___capslist_13; }
	inline void set_capslist_13(StringU5BU5D_t1281789340* value)
	{
		___capslist_13 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_13), value);
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2327118887 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cache_0)); }
	inline FactoryCache_t2327118887 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2327118887 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2327118887 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m3040793867 (Uri_t100236324 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m2582056986 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m253204164 (Uri_t100236324 * __this, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m897876424 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m648790222_ftn) (CertificateHandler_t2739891000 *);
	static CertificateHandler_Release_m648790222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m648790222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Finalize_m2289088740 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CertificateHandler_Dispose_m2100863831(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m937187171 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m2315002656 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___certificateData0;
		bool L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CertificateHandler_Dispose_m2100863831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m648790222(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m55747000 (RuntimeObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m55747000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t100236324 * V_2 = NULL;
	Uri_t100236324 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m2986988803(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t100236324 * L_3 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t100236324 * L_5 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t100236324 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_m3666899587(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_t100236324 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_AbsoluteUri_m2582056986(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0057;
	}

IL_003b:
	{
		String_t* L_10 = ___baseUri0;
		Uri_t100236324 * L_11 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_11, L_10, 1, /*hidden argument*/NULL);
		V_2 = L_11;
		Uri_t100236324 * L_12 = V_2;
		Uri_t100236324 * L_13 = V_0;
		Uri_t100236324 * L_14 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m253204164(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Uri_t100236324 * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_AbsoluteUri_m2582056986(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m4190982137 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m4190982137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t3657309853 * L_0 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m897876424(L_0, _stringLiteral97523668, /*hidden argument*/NULL);
		((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
