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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_Analytics_U3CModuleU3E3783534214.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt2191537572.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge309261261.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka1304606600.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1068911718.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult3037633135.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka2256174789.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1625295921.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1160025595.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1593300101.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Type1303803226.h"

// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t2191537572;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2281509423;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t1304606600;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t1625295921;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t2256174789;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern Il2CppClass* TrackableProperty_t1304606600_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2085192365_MethodInfo_var;
extern const uint32_t AnalyticsTracker__ctor_m47609255_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m2906452444_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m2752429983_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1498956632_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m3826582300_MethodInfo_var;
extern const uint32_t AnalyticsTracker_BuildParameters_m1716991151_MetadataUsageId;
extern const MethodInfo* List_1_GetEnumerator_m2194315060_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3357972160_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2967912146_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m4224423677_MethodInfo_var;
extern const uint32_t TrackableProperty_GetHashCode_m1993064614_MetadataUsageId;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t FieldWithTarget_GetValue_m3773769385_MetadataUsageId;

// System.String[]
struct StringU5BU5D_t1642385972  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t1328083999  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_gshared (Dictionary_2_t2281509423 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m2325793156_gshared (Dictionary_2_t2281509423 * __this, const MethodInfo* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2375293942_gshared (List_1_t2058570427 * __this, const MethodInfo* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  Il2CppObject * List_1_get_Item_m2062981835_gshared (List_1_t2058570427 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m1004257024_gshared (Dictionary_2_t2281509423 * __this, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t1593300101  List_1_GetEnumerator_m2837081829_gshared (List_1_t2058570427 * __this, const MethodInfo* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  Il2CppObject * Enumerator_get_Current_m2577424081_gshared (Enumerator_t1593300101 * __this, const MethodInfo* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m44995089_gshared (Enumerator_t1593300101 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3736175406_gshared (Enumerator_t1593300101 * __this, const MethodInfo* method);

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2085192365(__this, method) ((  void (*) (Dictionary_2_t309261261 *, const MethodInfo*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C"  void TrackableProperty__ctor_m462583363 (TrackableProperty_t1304606600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C"  void AnalyticsTracker_TriggerEvent_m1494303835 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C"  void AnalyticsTracker_BuildParameters_m1716991151 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C"  void AnalyticsTracker_SendEvent_m374303143 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m2343610239 (Il2CppObject * __this /* static, unused */, String_t* p0, Il2CppObject* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m2906452444(__this, method) ((  void (*) (Dictionary_2_t309261261 *, const MethodInfo*))Dictionary_2_Clear_m2325793156_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C"  List_1_t1625295921 * TrackableProperty_get_fields_m3107932385 (TrackableProperty_t1304606600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Count()
#define List_1_get_Count_m2752429983(__this, method) ((  int32_t (*) (List_1_t1625295921 *, const MethodInfo*))List_1_get_Count_m2375293942_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Item(System.Int32)
#define List_1_get_Item_m1498956632(__this, p0, method) ((  FieldWithTarget_t2256174789 * (*) (List_1_t1625295921 *, int32_t, const MethodInfo*))List_1_get_Item_m2062981835_gshared)(__this, p0, method)
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C"  Object_t1021602117 * FieldWithTarget_get_target_m1391127050 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C"  bool FieldWithTarget_get_doStatic_m86470931 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C"  Il2CppObject * FieldWithTarget_GetValue_m3773769385 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C"  String_t* FieldWithTarget_get_paramName_m2715104421 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3826582300(__this, p0, p1, method) ((  void (*) (Dictionary_2_t309261261 *, String_t*, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1004257024_gshared)(__this, p0, p1, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::GetEnumerator()
#define List_1_GetEnumerator_m2194315060(__this, method) ((  Enumerator_t1160025595  (*) (List_1_t1625295921 *, const MethodInfo*))List_1_GetEnumerator_m2837081829_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Current()
#define Enumerator_get_Current_m3357972160(__this, method) ((  FieldWithTarget_t2256174789 * (*) (Enumerator_t1160025595 *, const MethodInfo*))Enumerator_get_Current_m2577424081_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::MoveNext()
#define Enumerator_MoveNext_m2967912146(__this, method) ((  bool (*) (Enumerator_t1160025595 *, const MethodInfo*))Enumerator_MoveNext_m44995089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::Dispose()
#define Enumerator_Dispose_m4224423677(__this, method) ((  void (*) (Enumerator_t1160025595 *, const MethodInfo*))Enumerator_Dispose_m3736175406_gshared)(__this, method)
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1642385972* String_Split_m3326265864 (String_t* __this, CharU5BU5D_t1328083999* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m191970594 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C"  PropertyInfo_t * Type_GetProperty_m808359402 (Type_t * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m3036413258 (Type_t * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
extern "C"  void AnalyticsTracker__ctor_m47609255 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker__ctor_m47609255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t309261261 * L_0 = (Dictionary_2_t309261261 *)il2cpp_codegen_object_new(Dictionary_2_t309261261_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2085192365(L_0, /*hidden argument*/Dictionary_2__ctor_m2085192365_MethodInfo_var);
		__this->set_m_Dict_3(L_0);
		__this->set_m_PrevDictHash_4(0);
		TrackableProperty_t1304606600 * L_1 = (TrackableProperty_t1304606600 *)il2cpp_codegen_object_new(TrackableProperty_t1304606600_il2cpp_TypeInfo_var);
		TrackableProperty__ctor_m462583363(L_1, /*hidden argument*/NULL);
		__this->set_m_TrackableProperty_5(L_1);
		__this->set_m_Trigger_6(0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
extern "C"  String_t* AnalyticsTracker_get_eventName_m492472474 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_EventName_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
extern "C"  void AnalyticsTracker_set_eventName_m3418854143 (AnalyticsTracker_t2191537572 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_EventName_2(L_0);
		return;
	}
}
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
extern "C"  TrackableProperty_t1304606600 * AnalyticsTracker_get_TP_m2972917566 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	TrackableProperty_t1304606600 * V_0 = NULL;
	{
		TrackableProperty_t1304606600 * L_0 = __this->get_m_TrackableProperty_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TrackableProperty_t1304606600 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
extern "C"  void AnalyticsTracker_set_TP_m2860685991 (AnalyticsTracker_t2191537572 * __this, TrackableProperty_t1304606600 * ___value0, const MethodInfo* method)
{
	{
		TrackableProperty_t1304606600 * L_0 = ___value0;
		__this->set_m_TrackableProperty_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
extern "C"  void AnalyticsTracker_Awake_m2456570402 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
extern "C"  void AnalyticsTracker_Start_m90834595 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
extern "C"  void AnalyticsTracker_OnEnable_m1011291651 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
extern "C"  void AnalyticsTracker_OnDisable_m2590423102 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
extern "C"  void AnalyticsTracker_OnApplicationPause_m112444632 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
extern "C"  void AnalyticsTracker_OnDestroy_m2461673364 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m1494303835(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C"  void AnalyticsTracker_TriggerEvent_m1494303835 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		AnalyticsTracker_BuildParameters_m1716991151(__this, /*hidden argument*/NULL);
		AnalyticsTracker_SendEvent_m374303143(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C"  void AnalyticsTracker_SendEvent_m374303143 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_EventName_2();
		Dictionary_2_t309261261 * L_1 = __this->get_m_Dict_3();
		Analytics_CustomEvent_m2343610239(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C"  void AnalyticsTracker_BuildParameters_m1716991151 (AnalyticsTracker_t2191537572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker_BuildParameters_m1716991151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FieldWithTarget_t2256174789 * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		TrackableProperty_t1304606600 * L_0 = __this->get_m_TrackableProperty_5();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_PrevDictHash_4();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t309261261 * L_4 = __this->get_m_Dict_3();
		NullCheck(L_4);
		Dictionary_2_Clear_m2906452444(L_4, /*hidden argument*/Dictionary_2_Clear_m2906452444_MethodInfo_var);
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		__this->set_m_PrevDictHash_4(L_5);
		V_1 = 0;
		TrackableProperty_t1304606600 * L_6 = __this->get_m_TrackableProperty_5();
		NullCheck(L_6);
		List_1_t1625295921 * L_7 = TrackableProperty_get_fields_m3107932385(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2752429983(L_7, /*hidden argument*/List_1_get_Count_m2752429983_MethodInfo_var);
		V_2 = L_8;
		goto IL_0099;
	}

IL_0043:
	{
		TrackableProperty_t1304606600 * L_9 = __this->get_m_TrackableProperty_5();
		NullCheck(L_9);
		List_1_t1625295921 * L_10 = TrackableProperty_get_fields_m3107932385(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		FieldWithTarget_t2256174789 * L_12 = List_1_get_Item_m1498956632(L_10, L_11, /*hidden argument*/List_1_get_Item_m1498956632_MethodInfo_var);
		V_3 = L_12;
		FieldWithTarget_t2256174789 * L_13 = V_3;
		NullCheck(L_13);
		Object_t1021602117 * L_14 = FieldWithTarget_get_target_m1391127050(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_14, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		FieldWithTarget_t2256174789 * L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = FieldWithTarget_get_doStatic_m86470931(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}

IL_0072:
	{
		FieldWithTarget_t2256174789 * L_18 = V_3;
		NullCheck(L_18);
		Il2CppObject * L_19 = FieldWithTarget_GetValue_m3773769385(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		Dictionary_2_t309261261 * L_21 = __this->get_m_Dict_3();
		FieldWithTarget_t2256174789 * L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23 = FieldWithTarget_get_paramName_m2715104421(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_4;
		NullCheck(L_21);
		Dictionary_2_set_Item_m3826582300(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_set_Item_m3826582300_MethodInfo_var);
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C"  void TrackableProperty__ctor_m462583363 (TrackableProperty_t1304606600 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C"  List_1_t1625295921 * TrackableProperty_get_fields_m3107932385 (TrackableProperty_t1304606600 * __this, const MethodInfo* method)
{
	List_1_t1625295921 * V_0 = NULL;
	{
		List_1_t1625295921 * L_0 = __this->get_m_Fields_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t1625295921 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>)
extern "C"  void TrackableProperty_set_fields_m4153705492 (TrackableProperty_t1304606600 * __this, List_1_t1625295921 * ___value0, const MethodInfo* method)
{
	{
		List_1_t1625295921 * L_0 = ___value0;
		__this->set_m_Fields_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.TrackableProperty::GetHashCode()
extern "C"  int32_t TrackableProperty_GetHashCode_m1993064614 (TrackableProperty_t1304606600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableProperty_GetHashCode_m1993064614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithTarget_t2256174789 * V_1 = NULL;
	Enumerator_t1160025595  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((int32_t)17);
		List_1_t1625295921 * L_0 = __this->get_m_Fields_1();
		NullCheck(L_0);
		Enumerator_t1160025595  L_1 = List_1_GetEnumerator_m2194315060(L_0, /*hidden argument*/List_1_GetEnumerator_m2194315060_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0017:
		{
			FieldWithTarget_t2256174789 * L_2 = Enumerator_get_Current_m3357972160((&V_2), /*hidden argument*/Enumerator_get_Current_m3357972160_MethodInfo_var);
			V_1 = L_2;
			int32_t L_3 = V_0;
			FieldWithTarget_t2256174789 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = FieldWithTarget_get_paramName_m2715104421(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
			V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_6));
		}

IL_0030:
		{
			bool L_7 = Enumerator_MoveNext_m2967912146((&V_2), /*hidden argument*/Enumerator_MoveNext_m2967912146_MethodInfo_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4224423677((&V_2), /*hidden argument*/Enumerator_Dispose_m4224423677_MethodInfo_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_004f:
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0056;
	}

IL_0056:
	{
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::.ctor()
extern "C"  void FieldWithTarget__ctor_m3122216809 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C"  String_t* FieldWithTarget_get_paramName_m2715104421 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParamName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_paramName(System.String)
extern "C"  void FieldWithTarget_set_paramName_m786299954 (FieldWithTarget_t2256174789 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ParamName_0(L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C"  Object_t1021602117 * FieldWithTarget_get_target_m1391127050 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	Object_t1021602117 * V_0 = NULL;
	{
		Object_t1021602117 * L_0 = __this->get_m_Target_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_t1021602117 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_target(UnityEngine.Object)
extern "C"  void FieldWithTarget_set_target_m1859868783 (FieldWithTarget_t2256174789 * __this, Object_t1021602117 * ___value0, const MethodInfo* method)
{
	{
		Object_t1021602117 * L_0 = ___value0;
		__this->set_m_Target_1(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_fieldPath()
extern "C"  String_t* FieldWithTarget_get_fieldPath_m354282076 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_FieldPath_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_fieldPath(System.String)
extern "C"  void FieldWithTarget_set_fieldPath_m4229814661 (FieldWithTarget_t2256174789 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_2(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_typeString()
extern "C"  String_t* FieldWithTarget_get_typeString_m124716110 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_TypeString_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_typeString(System.String)
extern "C"  void FieldWithTarget_set_typeString_m2154747307 (FieldWithTarget_t2256174789 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_TypeString_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C"  bool FieldWithTarget_get_doStatic_m86470931 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_DoStatic_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_doStatic(System.Boolean)
extern "C"  void FieldWithTarget_set_doStatic_m3820651670 (FieldWithTarget_t2256174789 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DoStatic_4(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_staticString()
extern "C"  String_t* FieldWithTarget_get_staticString_m3599225804 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StaticString_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_staticString(System.String)
extern "C"  void FieldWithTarget_set_staticString_m2234360111 (FieldWithTarget_t2256174789 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StaticString_5(L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C"  Il2CppObject * FieldWithTarget_GetValue_m3773769385 (FieldWithTarget_t2256174789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithTarget_GetValue_m3773769385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1642385972* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_m_DoStatic_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = __this->get_m_StaticString_5();
		V_0 = L_1;
		goto IL_009c;
	}

IL_0019:
	{
		Object_t1021602117 * L_2 = __this->get_m_Target_1();
		V_1 = L_2;
		String_t* L_3 = __this->get_m_FieldPath_2();
		CharU5BU5D_t1328083999* L_4 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t1642385972* L_5 = String_Split_m3326265864(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		V_4 = 0;
		goto IL_008b;
	}

IL_0040:
	{
		StringU5BU5D_t1642385972* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		Il2CppObject * L_10 = V_1;
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m191970594(L_10, /*hidden argument*/NULL);
		String_t* L_12 = V_2;
		NullCheck(L_11);
		PropertyInfo_t * L_13 = Type_GetProperty_m808359402(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		PropertyInfo_t * L_14 = V_5;
		Il2CppObject * L_15 = V_1;
		NullCheck(L_14);
		Il2CppObject * L_16 = VirtFuncInvoker2< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t3614634134* >::Invoke(22 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, L_15, (ObjectU5BU5D_t3614634134*)(ObjectU5BU5D_t3614634134*)NULL);
		V_1 = L_16;
		goto IL_0084;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->klass))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		Il2CppObject * L_17 = V_1;
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m191970594(L_17, /*hidden argument*/NULL);
		String_t* L_19 = V_2;
		NullCheck(L_18);
		FieldInfo_t * L_20 = Type_GetField_m3036413258(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		FieldInfo_t * L_21 = V_6;
		Il2CppObject * L_22 = V_1;
		NullCheck(L_21);
		Il2CppObject * L_23 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_21, L_22);
		V_1 = L_23;
		goto IL_0084;
	} // end catch (depth: 1)

IL_0084:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_25 = V_4;
		StringU5BU5D_t1642385972* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_26)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppObject * L_27 = V_1;
		V_0 = L_27;
		goto IL_009c;
	}

IL_009c:
	{
		Il2CppObject * L_28 = V_0;
		return L_28;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
