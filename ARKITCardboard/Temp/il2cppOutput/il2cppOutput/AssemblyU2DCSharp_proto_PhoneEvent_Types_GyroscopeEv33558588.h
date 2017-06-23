#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene3091469235.h"

// proto.PhoneEvent/Types/GyroscopeEvent
struct GyroscopeEvent_t182225200;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/GyroscopeEvent/Builder
struct  Builder_t33558588  : public GeneratedBuilderLite_2_t3091469235
{
public:
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::result
	GyroscopeEvent_t182225200 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t33558588, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t33558588, ___result_1)); }
	inline GyroscopeEvent_t182225200 * get_result_1() const { return ___result_1; }
	inline GyroscopeEvent_t182225200 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(GyroscopeEvent_t182225200 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
