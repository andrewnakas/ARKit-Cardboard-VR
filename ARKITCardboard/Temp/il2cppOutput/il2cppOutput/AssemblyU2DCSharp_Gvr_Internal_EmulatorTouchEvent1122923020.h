#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>
struct List_1_t2369806134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorTouchEvent
struct  EmulatorTouchEvent_t1122923020 
{
public:
	// System.Int32 Gvr.Internal.EmulatorTouchEvent::action
	int32_t ___action_0;
	// System.Int32 Gvr.Internal.EmulatorTouchEvent::relativeTimestamp
	int32_t ___relativeTimestamp_1;
	// System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer> Gvr.Internal.EmulatorTouchEvent::pointers
	List_1_t2369806134 * ___pointers_2;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_relativeTimestamp_1() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020, ___relativeTimestamp_1)); }
	inline int32_t get_relativeTimestamp_1() const { return ___relativeTimestamp_1; }
	inline int32_t* get_address_of_relativeTimestamp_1() { return &___relativeTimestamp_1; }
	inline void set_relativeTimestamp_1(int32_t value)
	{
		___relativeTimestamp_1 = value;
	}

	inline static int32_t get_offset_of_pointers_2() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020, ___pointers_2)); }
	inline List_1_t2369806134 * get_pointers_2() const { return ___pointers_2; }
	inline List_1_t2369806134 ** get_address_of_pointers_2() { return &___pointers_2; }
	inline void set_pointers_2(List_1_t2369806134 * value)
	{
		___pointers_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointers_2, value);
	}
};

struct EmulatorTouchEvent_t1122923020_StaticFields
{
public:
	// System.Int32 Gvr.Internal.EmulatorTouchEvent::ACTION_POINTER_INDEX_SHIFT
	int32_t ___ACTION_POINTER_INDEX_SHIFT_3;
	// System.Int32 Gvr.Internal.EmulatorTouchEvent::ACTION_POINTER_INDEX_MASK
	int32_t ___ACTION_POINTER_INDEX_MASK_4;
	// System.Int32 Gvr.Internal.EmulatorTouchEvent::ACTION_MASK
	int32_t ___ACTION_MASK_5;

public:
	inline static int32_t get_offset_of_ACTION_POINTER_INDEX_SHIFT_3() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020_StaticFields, ___ACTION_POINTER_INDEX_SHIFT_3)); }
	inline int32_t get_ACTION_POINTER_INDEX_SHIFT_3() const { return ___ACTION_POINTER_INDEX_SHIFT_3; }
	inline int32_t* get_address_of_ACTION_POINTER_INDEX_SHIFT_3() { return &___ACTION_POINTER_INDEX_SHIFT_3; }
	inline void set_ACTION_POINTER_INDEX_SHIFT_3(int32_t value)
	{
		___ACTION_POINTER_INDEX_SHIFT_3 = value;
	}

	inline static int32_t get_offset_of_ACTION_POINTER_INDEX_MASK_4() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020_StaticFields, ___ACTION_POINTER_INDEX_MASK_4)); }
	inline int32_t get_ACTION_POINTER_INDEX_MASK_4() const { return ___ACTION_POINTER_INDEX_MASK_4; }
	inline int32_t* get_address_of_ACTION_POINTER_INDEX_MASK_4() { return &___ACTION_POINTER_INDEX_MASK_4; }
	inline void set_ACTION_POINTER_INDEX_MASK_4(int32_t value)
	{
		___ACTION_POINTER_INDEX_MASK_4 = value;
	}

	inline static int32_t get_offset_of_ACTION_MASK_5() { return static_cast<int32_t>(offsetof(EmulatorTouchEvent_t1122923020_StaticFields, ___ACTION_MASK_5)); }
	inline int32_t get_ACTION_MASK_5() const { return ___ACTION_MASK_5; }
	inline int32_t* get_address_of_ACTION_MASK_5() { return &___ACTION_MASK_5; }
	inline void set_ACTION_MASK_5(int32_t value)
	{
		___ACTION_MASK_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Gvr.Internal.EmulatorTouchEvent
struct EmulatorTouchEvent_t1122923020_marshaled_pinvoke
{
	int32_t ___action_0;
	int32_t ___relativeTimestamp_1;
	List_1_t2369806134 * ___pointers_2;
};
// Native definition for COM marshalling of Gvr.Internal.EmulatorTouchEvent
struct EmulatorTouchEvent_t1122923020_marshaled_com
{
	int32_t ___action_0;
	int32_t ___relativeTimestamp_1;
	List_1_t2369806134 * ___pointers_2;
};
