#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene1621421753.h"

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t4072706903;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/MotionEvent/Builder
struct  Builder_t3452538341  : public GeneratedBuilderLite_2_t1621421753
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::result
	MotionEvent_t4072706903 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t3452538341, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t3452538341, ___result_1)); }
	inline MotionEvent_t4072706903 * get_result_1() const { return ___result_1; }
	inline MotionEvent_t4072706903 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(MotionEvent_t4072706903 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
