#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1068911718.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t1304606600;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t2191537572  : public MonoBehaviour_t1158329972
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t309261261 * ___m_Dict_3;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_4;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t1304606600 * ___m_TrackableProperty_5;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_6;

public:
	inline static int32_t get_offset_of_m_EventName_2() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_EventName_2)); }
	inline String_t* get_m_EventName_2() const { return ___m_EventName_2; }
	inline String_t** get_address_of_m_EventName_2() { return &___m_EventName_2; }
	inline void set_m_EventName_2(String_t* value)
	{
		___m_EventName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventName_2, value);
	}

	inline static int32_t get_offset_of_m_Dict_3() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_Dict_3)); }
	inline Dictionary_2_t309261261 * get_m_Dict_3() const { return ___m_Dict_3; }
	inline Dictionary_2_t309261261 ** get_address_of_m_Dict_3() { return &___m_Dict_3; }
	inline void set_m_Dict_3(Dictionary_2_t309261261 * value)
	{
		___m_Dict_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dict_3, value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_PrevDictHash_4)); }
	inline int32_t get_m_PrevDictHash_4() const { return ___m_PrevDictHash_4; }
	inline int32_t* get_address_of_m_PrevDictHash_4() { return &___m_PrevDictHash_4; }
	inline void set_m_PrevDictHash_4(int32_t value)
	{
		___m_PrevDictHash_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_TrackableProperty_5)); }
	inline TrackableProperty_t1304606600 * get_m_TrackableProperty_5() const { return ___m_TrackableProperty_5; }
	inline TrackableProperty_t1304606600 ** get_address_of_m_TrackableProperty_5() { return &___m_TrackableProperty_5; }
	inline void set_m_TrackableProperty_5(TrackableProperty_t1304606600 * value)
	{
		___m_TrackableProperty_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_TrackableProperty_5, value);
	}

	inline static int32_t get_offset_of_m_Trigger_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_Trigger_6)); }
	inline int32_t get_m_Trigger_6() const { return ___m_Trigger_6; }
	inline int32_t* get_address_of_m_Trigger_6() { return &___m_Trigger_6; }
	inline void set_m_Trigger_6(int32_t value)
	{
		___m_Trigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
