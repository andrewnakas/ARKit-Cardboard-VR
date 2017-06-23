#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene3695499659.h"

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t639576718;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/KeyEvent
struct  KeyEvent_t639576718  : public GeneratedMessageLite_2_t3695499659
{
public:
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasAction
	bool ___hasAction_4;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::action_
	int32_t ___action__5;
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasCode
	bool ___hasCode_7;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::code_
	int32_t ___code__8;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_9;

public:
	inline static int32_t get_offset_of_hasAction_4() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718, ___hasAction_4)); }
	inline bool get_hasAction_4() const { return ___hasAction_4; }
	inline bool* get_address_of_hasAction_4() { return &___hasAction_4; }
	inline void set_hasAction_4(bool value)
	{
		___hasAction_4 = value;
	}

	inline static int32_t get_offset_of_action__5() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718, ___action__5)); }
	inline int32_t get_action__5() const { return ___action__5; }
	inline int32_t* get_address_of_action__5() { return &___action__5; }
	inline void set_action__5(int32_t value)
	{
		___action__5 = value;
	}

	inline static int32_t get_offset_of_hasCode_7() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718, ___hasCode_7)); }
	inline bool get_hasCode_7() const { return ___hasCode_7; }
	inline bool* get_address_of_hasCode_7() { return &___hasCode_7; }
	inline void set_hasCode_7(bool value)
	{
		___hasCode_7 = value;
	}

	inline static int32_t get_offset_of_code__8() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718, ___code__8)); }
	inline int32_t get_code__8() const { return ___code__8; }
	inline int32_t* get_address_of_code__8() { return &___code__8; }
	inline void set_code__8(int32_t value)
	{
		___code__8 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_9() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718, ___memoizedSerializedSize_9)); }
	inline int32_t get_memoizedSerializedSize_9() const { return ___memoizedSerializedSize_9; }
	inline int32_t* get_address_of_memoizedSerializedSize_9() { return &___memoizedSerializedSize_9; }
	inline void set_memoizedSerializedSize_9(int32_t value)
	{
		___memoizedSerializedSize_9 = value;
	}
};

struct KeyEvent_t639576718_StaticFields
{
public:
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::defaultInstance
	KeyEvent_t639576718 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldNames
	StringU5BU5D_t1642385972* ____keyEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldTags
	UInt32U5BU5D_t59386216* ____keyEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718_StaticFields, ___defaultInstance_0)); }
	inline KeyEvent_t639576718 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline KeyEvent_t639576718 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(KeyEvent_t639576718 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_0, value);
	}

	inline static int32_t get_offset_of__keyEventFieldNames_1() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718_StaticFields, ____keyEventFieldNames_1)); }
	inline StringU5BU5D_t1642385972* get__keyEventFieldNames_1() const { return ____keyEventFieldNames_1; }
	inline StringU5BU5D_t1642385972** get_address_of__keyEventFieldNames_1() { return &____keyEventFieldNames_1; }
	inline void set__keyEventFieldNames_1(StringU5BU5D_t1642385972* value)
	{
		____keyEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier(&____keyEventFieldNames_1, value);
	}

	inline static int32_t get_offset_of__keyEventFieldTags_2() { return static_cast<int32_t>(offsetof(KeyEvent_t639576718_StaticFields, ____keyEventFieldTags_2)); }
	inline UInt32U5BU5D_t59386216* get__keyEventFieldTags_2() const { return ____keyEventFieldTags_2; }
	inline UInt32U5BU5D_t59386216** get_address_of__keyEventFieldTags_2() { return &____keyEventFieldTags_2; }
	inline void set__keyEventFieldTags_2(UInt32U5BU5D_t59386216* value)
	{
		____keyEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier(&____keyEventFieldTags_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
