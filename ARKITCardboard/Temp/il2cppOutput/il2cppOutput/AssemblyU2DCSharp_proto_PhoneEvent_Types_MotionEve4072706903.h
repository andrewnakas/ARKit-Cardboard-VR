#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene2989368125.h"

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t4072706903;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct PopsicleList_1_t3701374430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/MotionEvent
struct  MotionEvent_t4072706903  : public GeneratedMessageLite_2_t2989368125
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/MotionEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasAction
	bool ___hasAction_7;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::action_
	int32_t ___action__8;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::pointers_
	PopsicleList_1_t3701374430 * ___pointers__10;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_11;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasAction_7() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___hasAction_7)); }
	inline bool get_hasAction_7() const { return ___hasAction_7; }
	inline bool* get_address_of_hasAction_7() { return &___hasAction_7; }
	inline void set_hasAction_7(bool value)
	{
		___hasAction_7 = value;
	}

	inline static int32_t get_offset_of_action__8() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___action__8)); }
	inline int32_t get_action__8() const { return ___action__8; }
	inline int32_t* get_address_of_action__8() { return &___action__8; }
	inline void set_action__8(int32_t value)
	{
		___action__8 = value;
	}

	inline static int32_t get_offset_of_pointers__10() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___pointers__10)); }
	inline PopsicleList_1_t3701374430 * get_pointers__10() const { return ___pointers__10; }
	inline PopsicleList_1_t3701374430 ** get_address_of_pointers__10() { return &___pointers__10; }
	inline void set_pointers__10(PopsicleList_1_t3701374430 * value)
	{
		___pointers__10 = value;
		Il2CppCodeGenWriteBarrier(&___pointers__10, value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_11() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903, ___memoizedSerializedSize_11)); }
	inline int32_t get_memoizedSerializedSize_11() const { return ___memoizedSerializedSize_11; }
	inline int32_t* get_address_of_memoizedSerializedSize_11() { return &___memoizedSerializedSize_11; }
	inline void set_memoizedSerializedSize_11(int32_t value)
	{
		___memoizedSerializedSize_11 = value;
	}
};

struct MotionEvent_t4072706903_StaticFields
{
public:
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::defaultInstance
	MotionEvent_t4072706903 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldNames
	StringU5BU5D_t1642385972* ____motionEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldTags
	UInt32U5BU5D_t59386216* ____motionEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903_StaticFields, ___defaultInstance_0)); }
	inline MotionEvent_t4072706903 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline MotionEvent_t4072706903 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(MotionEvent_t4072706903 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_0, value);
	}

	inline static int32_t get_offset_of__motionEventFieldNames_1() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903_StaticFields, ____motionEventFieldNames_1)); }
	inline StringU5BU5D_t1642385972* get__motionEventFieldNames_1() const { return ____motionEventFieldNames_1; }
	inline StringU5BU5D_t1642385972** get_address_of__motionEventFieldNames_1() { return &____motionEventFieldNames_1; }
	inline void set__motionEventFieldNames_1(StringU5BU5D_t1642385972* value)
	{
		____motionEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier(&____motionEventFieldNames_1, value);
	}

	inline static int32_t get_offset_of__motionEventFieldTags_2() { return static_cast<int32_t>(offsetof(MotionEvent_t4072706903_StaticFields, ____motionEventFieldTags_2)); }
	inline UInt32U5BU5D_t59386216* get__motionEventFieldTags_2() const { return ____motionEventFieldTags_2; }
	inline UInt32U5BU5D_t59386216** get_address_of__motionEventFieldTags_2() { return &____motionEventFieldTags_2; }
	inline void set__motionEventFieldTags_2(UInt32U5BU5D_t59386216* value)
	{
		____motionEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier(&____motionEventFieldTags_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
