#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"

// Gvr.Internal.EmulatorManager
struct EmulatorManager_t3364249716;
// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1804908545;
// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t1967739812;
// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t4143287487;
// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t602701282;
// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t358370788;
// System.Collections.Queue
struct Queue_t1288490777;
// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t2001911543;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorManager
struct  EmulatorManager_t3364249716  : public MonoBehaviour_t1158329972
{
public:
	// Gvr.Internal.EmulatorGyroEvent Gvr.Internal.EmulatorManager::currentGyroEvent
	EmulatorGyroEvent_t1858389926  ___currentGyroEvent_3;
	// Gvr.Internal.EmulatorAccelEvent Gvr.Internal.EmulatorManager::currentAccelEvent
	EmulatorAccelEvent_t621139879  ___currentAccelEvent_4;
	// Gvr.Internal.EmulatorTouchEvent Gvr.Internal.EmulatorManager::currentTouchEvent
	EmulatorTouchEvent_t1122923020  ___currentTouchEvent_5;
	// Gvr.Internal.EmulatorOrientationEvent Gvr.Internal.EmulatorManager::currentOrientationEvent
	EmulatorOrientationEvent_t4153005117  ___currentOrientationEvent_6;
	// Gvr.Internal.EmulatorButtonEvent Gvr.Internal.EmulatorManager::currentButtonEvent
	EmulatorButtonEvent_t156276569  ___currentButtonEvent_7;
	// Gvr.Internal.EmulatorManager/OnGyroEvent Gvr.Internal.EmulatorManager::gyroEventListenersInternal
	OnGyroEvent_t1804908545 * ___gyroEventListenersInternal_8;
	// Gvr.Internal.EmulatorManager/OnAccelEvent Gvr.Internal.EmulatorManager::accelEventListenersInternal
	OnAccelEvent_t1967739812 * ___accelEventListenersInternal_9;
	// Gvr.Internal.EmulatorManager/OnTouchEvent Gvr.Internal.EmulatorManager::touchEventListenersInternal
	OnTouchEvent_t4143287487 * ___touchEventListenersInternal_10;
	// Gvr.Internal.EmulatorManager/OnOrientationEvent Gvr.Internal.EmulatorManager::orientationEventListenersInternal
	OnOrientationEvent_t602701282 * ___orientationEventListenersInternal_11;
	// Gvr.Internal.EmulatorManager/OnButtonEvent Gvr.Internal.EmulatorManager::buttonEventListenersInternal
	OnButtonEvent_t358370788 * ___buttonEventListenersInternal_12;
	// System.Collections.Queue Gvr.Internal.EmulatorManager::pendingEvents
	Queue_t1288490777 * ___pendingEvents_13;
	// Gvr.Internal.EmulatorClientSocket Gvr.Internal.EmulatorManager::socket
	EmulatorClientSocket_t2001911543 * ___socket_14;
	// System.Int64 Gvr.Internal.EmulatorManager::lastDownTimeMs
	int64_t ___lastDownTimeMs_15;

public:
	inline static int32_t get_offset_of_currentGyroEvent_3() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___currentGyroEvent_3)); }
	inline EmulatorGyroEvent_t1858389926  get_currentGyroEvent_3() const { return ___currentGyroEvent_3; }
	inline EmulatorGyroEvent_t1858389926 * get_address_of_currentGyroEvent_3() { return &___currentGyroEvent_3; }
	inline void set_currentGyroEvent_3(EmulatorGyroEvent_t1858389926  value)
	{
		___currentGyroEvent_3 = value;
	}

	inline static int32_t get_offset_of_currentAccelEvent_4() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___currentAccelEvent_4)); }
	inline EmulatorAccelEvent_t621139879  get_currentAccelEvent_4() const { return ___currentAccelEvent_4; }
	inline EmulatorAccelEvent_t621139879 * get_address_of_currentAccelEvent_4() { return &___currentAccelEvent_4; }
	inline void set_currentAccelEvent_4(EmulatorAccelEvent_t621139879  value)
	{
		___currentAccelEvent_4 = value;
	}

	inline static int32_t get_offset_of_currentTouchEvent_5() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___currentTouchEvent_5)); }
	inline EmulatorTouchEvent_t1122923020  get_currentTouchEvent_5() const { return ___currentTouchEvent_5; }
	inline EmulatorTouchEvent_t1122923020 * get_address_of_currentTouchEvent_5() { return &___currentTouchEvent_5; }
	inline void set_currentTouchEvent_5(EmulatorTouchEvent_t1122923020  value)
	{
		___currentTouchEvent_5 = value;
	}

	inline static int32_t get_offset_of_currentOrientationEvent_6() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___currentOrientationEvent_6)); }
	inline EmulatorOrientationEvent_t4153005117  get_currentOrientationEvent_6() const { return ___currentOrientationEvent_6; }
	inline EmulatorOrientationEvent_t4153005117 * get_address_of_currentOrientationEvent_6() { return &___currentOrientationEvent_6; }
	inline void set_currentOrientationEvent_6(EmulatorOrientationEvent_t4153005117  value)
	{
		___currentOrientationEvent_6 = value;
	}

	inline static int32_t get_offset_of_currentButtonEvent_7() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___currentButtonEvent_7)); }
	inline EmulatorButtonEvent_t156276569  get_currentButtonEvent_7() const { return ___currentButtonEvent_7; }
	inline EmulatorButtonEvent_t156276569 * get_address_of_currentButtonEvent_7() { return &___currentButtonEvent_7; }
	inline void set_currentButtonEvent_7(EmulatorButtonEvent_t156276569  value)
	{
		___currentButtonEvent_7 = value;
	}

	inline static int32_t get_offset_of_gyroEventListenersInternal_8() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___gyroEventListenersInternal_8)); }
	inline OnGyroEvent_t1804908545 * get_gyroEventListenersInternal_8() const { return ___gyroEventListenersInternal_8; }
	inline OnGyroEvent_t1804908545 ** get_address_of_gyroEventListenersInternal_8() { return &___gyroEventListenersInternal_8; }
	inline void set_gyroEventListenersInternal_8(OnGyroEvent_t1804908545 * value)
	{
		___gyroEventListenersInternal_8 = value;
		Il2CppCodeGenWriteBarrier(&___gyroEventListenersInternal_8, value);
	}

	inline static int32_t get_offset_of_accelEventListenersInternal_9() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___accelEventListenersInternal_9)); }
	inline OnAccelEvent_t1967739812 * get_accelEventListenersInternal_9() const { return ___accelEventListenersInternal_9; }
	inline OnAccelEvent_t1967739812 ** get_address_of_accelEventListenersInternal_9() { return &___accelEventListenersInternal_9; }
	inline void set_accelEventListenersInternal_9(OnAccelEvent_t1967739812 * value)
	{
		___accelEventListenersInternal_9 = value;
		Il2CppCodeGenWriteBarrier(&___accelEventListenersInternal_9, value);
	}

	inline static int32_t get_offset_of_touchEventListenersInternal_10() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___touchEventListenersInternal_10)); }
	inline OnTouchEvent_t4143287487 * get_touchEventListenersInternal_10() const { return ___touchEventListenersInternal_10; }
	inline OnTouchEvent_t4143287487 ** get_address_of_touchEventListenersInternal_10() { return &___touchEventListenersInternal_10; }
	inline void set_touchEventListenersInternal_10(OnTouchEvent_t4143287487 * value)
	{
		___touchEventListenersInternal_10 = value;
		Il2CppCodeGenWriteBarrier(&___touchEventListenersInternal_10, value);
	}

	inline static int32_t get_offset_of_orientationEventListenersInternal_11() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___orientationEventListenersInternal_11)); }
	inline OnOrientationEvent_t602701282 * get_orientationEventListenersInternal_11() const { return ___orientationEventListenersInternal_11; }
	inline OnOrientationEvent_t602701282 ** get_address_of_orientationEventListenersInternal_11() { return &___orientationEventListenersInternal_11; }
	inline void set_orientationEventListenersInternal_11(OnOrientationEvent_t602701282 * value)
	{
		___orientationEventListenersInternal_11 = value;
		Il2CppCodeGenWriteBarrier(&___orientationEventListenersInternal_11, value);
	}

	inline static int32_t get_offset_of_buttonEventListenersInternal_12() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___buttonEventListenersInternal_12)); }
	inline OnButtonEvent_t358370788 * get_buttonEventListenersInternal_12() const { return ___buttonEventListenersInternal_12; }
	inline OnButtonEvent_t358370788 ** get_address_of_buttonEventListenersInternal_12() { return &___buttonEventListenersInternal_12; }
	inline void set_buttonEventListenersInternal_12(OnButtonEvent_t358370788 * value)
	{
		___buttonEventListenersInternal_12 = value;
		Il2CppCodeGenWriteBarrier(&___buttonEventListenersInternal_12, value);
	}

	inline static int32_t get_offset_of_pendingEvents_13() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___pendingEvents_13)); }
	inline Queue_t1288490777 * get_pendingEvents_13() const { return ___pendingEvents_13; }
	inline Queue_t1288490777 ** get_address_of_pendingEvents_13() { return &___pendingEvents_13; }
	inline void set_pendingEvents_13(Queue_t1288490777 * value)
	{
		___pendingEvents_13 = value;
		Il2CppCodeGenWriteBarrier(&___pendingEvents_13, value);
	}

	inline static int32_t get_offset_of_socket_14() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___socket_14)); }
	inline EmulatorClientSocket_t2001911543 * get_socket_14() const { return ___socket_14; }
	inline EmulatorClientSocket_t2001911543 ** get_address_of_socket_14() { return &___socket_14; }
	inline void set_socket_14(EmulatorClientSocket_t2001911543 * value)
	{
		___socket_14 = value;
		Il2CppCodeGenWriteBarrier(&___socket_14, value);
	}

	inline static int32_t get_offset_of_lastDownTimeMs_15() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716, ___lastDownTimeMs_15)); }
	inline int64_t get_lastDownTimeMs_15() const { return ___lastDownTimeMs_15; }
	inline int64_t* get_address_of_lastDownTimeMs_15() { return &___lastDownTimeMs_15; }
	inline void set_lastDownTimeMs_15(int64_t value)
	{
		___lastDownTimeMs_15 = value;
	}
};

struct EmulatorManager_t3364249716_StaticFields
{
public:
	// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorManager::instance
	EmulatorManager_t3364249716 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(EmulatorManager_t3364249716_StaticFields, ___instance_2)); }
	inline EmulatorManager_t3364249716 * get_instance_2() const { return ___instance_2; }
	inline EmulatorManager_t3364249716 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(EmulatorManager_t3364249716 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
