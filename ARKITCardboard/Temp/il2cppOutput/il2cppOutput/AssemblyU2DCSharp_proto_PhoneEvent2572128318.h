#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Gene2979169773.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"

// proto.PhoneEvent
struct PhoneEvent_t2572128318;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t4072706903;
// proto.PhoneEvent/Types/GyroscopeEvent
struct GyroscopeEvent_t182225200;
// proto.PhoneEvent/Types/AccelerometerEvent
struct AccelerometerEvent_t1893725728;
// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t1516604558;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t2038376807;
// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t639576718;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent
struct  PhoneEvent_t2572128318  : public GeneratedMessageLite_2_t2979169773
{
public:
	// System.Boolean proto.PhoneEvent::hasType
	bool ___hasType_4;
	// proto.PhoneEvent/Types/Type proto.PhoneEvent::type_
	int32_t ___type__5;
	// System.Boolean proto.PhoneEvent::hasMotionEvent
	bool ___hasMotionEvent_7;
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent::motionEvent_
	MotionEvent_t4072706903 * ___motionEvent__8;
	// System.Boolean proto.PhoneEvent::hasGyroscopeEvent
	bool ___hasGyroscopeEvent_10;
	// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent::gyroscopeEvent_
	GyroscopeEvent_t182225200 * ___gyroscopeEvent__11;
	// System.Boolean proto.PhoneEvent::hasAccelerometerEvent
	bool ___hasAccelerometerEvent_13;
	// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent::accelerometerEvent_
	AccelerometerEvent_t1893725728 * ___accelerometerEvent__14;
	// System.Boolean proto.PhoneEvent::hasDepthMapEvent
	bool ___hasDepthMapEvent_16;
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent::depthMapEvent_
	DepthMapEvent_t1516604558 * ___depthMapEvent__17;
	// System.Boolean proto.PhoneEvent::hasOrientationEvent
	bool ___hasOrientationEvent_19;
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent::orientationEvent_
	OrientationEvent_t2038376807 * ___orientationEvent__20;
	// System.Boolean proto.PhoneEvent::hasKeyEvent
	bool ___hasKeyEvent_22;
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent::keyEvent_
	KeyEvent_t639576718 * ___keyEvent__23;
	// System.Int32 proto.PhoneEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_24;

public:
	inline static int32_t get_offset_of_hasType_4() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasType_4)); }
	inline bool get_hasType_4() const { return ___hasType_4; }
	inline bool* get_address_of_hasType_4() { return &___hasType_4; }
	inline void set_hasType_4(bool value)
	{
		___hasType_4 = value;
	}

	inline static int32_t get_offset_of_type__5() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___type__5)); }
	inline int32_t get_type__5() const { return ___type__5; }
	inline int32_t* get_address_of_type__5() { return &___type__5; }
	inline void set_type__5(int32_t value)
	{
		___type__5 = value;
	}

	inline static int32_t get_offset_of_hasMotionEvent_7() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasMotionEvent_7)); }
	inline bool get_hasMotionEvent_7() const { return ___hasMotionEvent_7; }
	inline bool* get_address_of_hasMotionEvent_7() { return &___hasMotionEvent_7; }
	inline void set_hasMotionEvent_7(bool value)
	{
		___hasMotionEvent_7 = value;
	}

	inline static int32_t get_offset_of_motionEvent__8() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___motionEvent__8)); }
	inline MotionEvent_t4072706903 * get_motionEvent__8() const { return ___motionEvent__8; }
	inline MotionEvent_t4072706903 ** get_address_of_motionEvent__8() { return &___motionEvent__8; }
	inline void set_motionEvent__8(MotionEvent_t4072706903 * value)
	{
		___motionEvent__8 = value;
		Il2CppCodeGenWriteBarrier(&___motionEvent__8, value);
	}

	inline static int32_t get_offset_of_hasGyroscopeEvent_10() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasGyroscopeEvent_10)); }
	inline bool get_hasGyroscopeEvent_10() const { return ___hasGyroscopeEvent_10; }
	inline bool* get_address_of_hasGyroscopeEvent_10() { return &___hasGyroscopeEvent_10; }
	inline void set_hasGyroscopeEvent_10(bool value)
	{
		___hasGyroscopeEvent_10 = value;
	}

	inline static int32_t get_offset_of_gyroscopeEvent__11() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___gyroscopeEvent__11)); }
	inline GyroscopeEvent_t182225200 * get_gyroscopeEvent__11() const { return ___gyroscopeEvent__11; }
	inline GyroscopeEvent_t182225200 ** get_address_of_gyroscopeEvent__11() { return &___gyroscopeEvent__11; }
	inline void set_gyroscopeEvent__11(GyroscopeEvent_t182225200 * value)
	{
		___gyroscopeEvent__11 = value;
		Il2CppCodeGenWriteBarrier(&___gyroscopeEvent__11, value);
	}

	inline static int32_t get_offset_of_hasAccelerometerEvent_13() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasAccelerometerEvent_13)); }
	inline bool get_hasAccelerometerEvent_13() const { return ___hasAccelerometerEvent_13; }
	inline bool* get_address_of_hasAccelerometerEvent_13() { return &___hasAccelerometerEvent_13; }
	inline void set_hasAccelerometerEvent_13(bool value)
	{
		___hasAccelerometerEvent_13 = value;
	}

	inline static int32_t get_offset_of_accelerometerEvent__14() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___accelerometerEvent__14)); }
	inline AccelerometerEvent_t1893725728 * get_accelerometerEvent__14() const { return ___accelerometerEvent__14; }
	inline AccelerometerEvent_t1893725728 ** get_address_of_accelerometerEvent__14() { return &___accelerometerEvent__14; }
	inline void set_accelerometerEvent__14(AccelerometerEvent_t1893725728 * value)
	{
		___accelerometerEvent__14 = value;
		Il2CppCodeGenWriteBarrier(&___accelerometerEvent__14, value);
	}

	inline static int32_t get_offset_of_hasDepthMapEvent_16() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasDepthMapEvent_16)); }
	inline bool get_hasDepthMapEvent_16() const { return ___hasDepthMapEvent_16; }
	inline bool* get_address_of_hasDepthMapEvent_16() { return &___hasDepthMapEvent_16; }
	inline void set_hasDepthMapEvent_16(bool value)
	{
		___hasDepthMapEvent_16 = value;
	}

	inline static int32_t get_offset_of_depthMapEvent__17() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___depthMapEvent__17)); }
	inline DepthMapEvent_t1516604558 * get_depthMapEvent__17() const { return ___depthMapEvent__17; }
	inline DepthMapEvent_t1516604558 ** get_address_of_depthMapEvent__17() { return &___depthMapEvent__17; }
	inline void set_depthMapEvent__17(DepthMapEvent_t1516604558 * value)
	{
		___depthMapEvent__17 = value;
		Il2CppCodeGenWriteBarrier(&___depthMapEvent__17, value);
	}

	inline static int32_t get_offset_of_hasOrientationEvent_19() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasOrientationEvent_19)); }
	inline bool get_hasOrientationEvent_19() const { return ___hasOrientationEvent_19; }
	inline bool* get_address_of_hasOrientationEvent_19() { return &___hasOrientationEvent_19; }
	inline void set_hasOrientationEvent_19(bool value)
	{
		___hasOrientationEvent_19 = value;
	}

	inline static int32_t get_offset_of_orientationEvent__20() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___orientationEvent__20)); }
	inline OrientationEvent_t2038376807 * get_orientationEvent__20() const { return ___orientationEvent__20; }
	inline OrientationEvent_t2038376807 ** get_address_of_orientationEvent__20() { return &___orientationEvent__20; }
	inline void set_orientationEvent__20(OrientationEvent_t2038376807 * value)
	{
		___orientationEvent__20 = value;
		Il2CppCodeGenWriteBarrier(&___orientationEvent__20, value);
	}

	inline static int32_t get_offset_of_hasKeyEvent_22() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___hasKeyEvent_22)); }
	inline bool get_hasKeyEvent_22() const { return ___hasKeyEvent_22; }
	inline bool* get_address_of_hasKeyEvent_22() { return &___hasKeyEvent_22; }
	inline void set_hasKeyEvent_22(bool value)
	{
		___hasKeyEvent_22 = value;
	}

	inline static int32_t get_offset_of_keyEvent__23() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___keyEvent__23)); }
	inline KeyEvent_t639576718 * get_keyEvent__23() const { return ___keyEvent__23; }
	inline KeyEvent_t639576718 ** get_address_of_keyEvent__23() { return &___keyEvent__23; }
	inline void set_keyEvent__23(KeyEvent_t639576718 * value)
	{
		___keyEvent__23 = value;
		Il2CppCodeGenWriteBarrier(&___keyEvent__23, value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_24() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318, ___memoizedSerializedSize_24)); }
	inline int32_t get_memoizedSerializedSize_24() const { return ___memoizedSerializedSize_24; }
	inline int32_t* get_address_of_memoizedSerializedSize_24() { return &___memoizedSerializedSize_24; }
	inline void set_memoizedSerializedSize_24(int32_t value)
	{
		___memoizedSerializedSize_24 = value;
	}
};

struct PhoneEvent_t2572128318_StaticFields
{
public:
	// proto.PhoneEvent proto.PhoneEvent::defaultInstance
	PhoneEvent_t2572128318 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent::_phoneEventFieldNames
	StringU5BU5D_t1642385972* ____phoneEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent::_phoneEventFieldTags
	UInt32U5BU5D_t59386216* ____phoneEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318_StaticFields, ___defaultInstance_0)); }
	inline PhoneEvent_t2572128318 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline PhoneEvent_t2572128318 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(PhoneEvent_t2572128318 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInstance_0, value);
	}

	inline static int32_t get_offset_of__phoneEventFieldNames_1() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318_StaticFields, ____phoneEventFieldNames_1)); }
	inline StringU5BU5D_t1642385972* get__phoneEventFieldNames_1() const { return ____phoneEventFieldNames_1; }
	inline StringU5BU5D_t1642385972** get_address_of__phoneEventFieldNames_1() { return &____phoneEventFieldNames_1; }
	inline void set__phoneEventFieldNames_1(StringU5BU5D_t1642385972* value)
	{
		____phoneEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier(&____phoneEventFieldNames_1, value);
	}

	inline static int32_t get_offset_of__phoneEventFieldTags_2() { return static_cast<int32_t>(offsetof(PhoneEvent_t2572128318_StaticFields, ____phoneEventFieldTags_2)); }
	inline UInt32U5BU5D_t59386216* get__phoneEventFieldTags_2() const { return ____phoneEventFieldTags_2; }
	inline UInt32U5BU5D_t59386216** get_address_of__phoneEventFieldTags_2() { return &____phoneEventFieldTags_2; }
	inline void set__phoneEventFieldTags_2(UInt32U5BU5D_t59386216* value)
	{
		____phoneEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier(&____phoneEventFieldTags_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
