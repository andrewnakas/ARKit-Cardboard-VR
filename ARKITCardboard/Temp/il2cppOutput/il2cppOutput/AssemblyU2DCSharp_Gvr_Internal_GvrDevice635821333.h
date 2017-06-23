#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.GvrDevice
struct  GvrDevice_t635821333  : public BaseVRDevice_t4004462063
{
public:
	// System.Single[] Gvr.Internal.GvrDevice::headData
	SingleU5BU5D_t577127397* ___headData_25;
	// System.Single[] Gvr.Internal.GvrDevice::viewData
	SingleU5BU5D_t577127397* ___viewData_26;
	// System.Single[] Gvr.Internal.GvrDevice::profileData
	SingleU5BU5D_t577127397* ___profileData_27;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::headView
	Matrix4x4_t2933234003  ___headView_28;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::leftEyeView
	Matrix4x4_t2933234003  ___leftEyeView_29;
	// UnityEngine.Matrix4x4 Gvr.Internal.GvrDevice::rightEyeView
	Matrix4x4_t2933234003  ___rightEyeView_30;
	// System.Boolean Gvr.Internal.GvrDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_31;
	// System.Boolean Gvr.Internal.GvrDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_32;

public:
	inline static int32_t get_offset_of_headData_25() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___headData_25)); }
	inline SingleU5BU5D_t577127397* get_headData_25() const { return ___headData_25; }
	inline SingleU5BU5D_t577127397** get_address_of_headData_25() { return &___headData_25; }
	inline void set_headData_25(SingleU5BU5D_t577127397* value)
	{
		___headData_25 = value;
		Il2CppCodeGenWriteBarrier(&___headData_25, value);
	}

	inline static int32_t get_offset_of_viewData_26() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___viewData_26)); }
	inline SingleU5BU5D_t577127397* get_viewData_26() const { return ___viewData_26; }
	inline SingleU5BU5D_t577127397** get_address_of_viewData_26() { return &___viewData_26; }
	inline void set_viewData_26(SingleU5BU5D_t577127397* value)
	{
		___viewData_26 = value;
		Il2CppCodeGenWriteBarrier(&___viewData_26, value);
	}

	inline static int32_t get_offset_of_profileData_27() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___profileData_27)); }
	inline SingleU5BU5D_t577127397* get_profileData_27() const { return ___profileData_27; }
	inline SingleU5BU5D_t577127397** get_address_of_profileData_27() { return &___profileData_27; }
	inline void set_profileData_27(SingleU5BU5D_t577127397* value)
	{
		___profileData_27 = value;
		Il2CppCodeGenWriteBarrier(&___profileData_27, value);
	}

	inline static int32_t get_offset_of_headView_28() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___headView_28)); }
	inline Matrix4x4_t2933234003  get_headView_28() const { return ___headView_28; }
	inline Matrix4x4_t2933234003 * get_address_of_headView_28() { return &___headView_28; }
	inline void set_headView_28(Matrix4x4_t2933234003  value)
	{
		___headView_28 = value;
	}

	inline static int32_t get_offset_of_leftEyeView_29() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___leftEyeView_29)); }
	inline Matrix4x4_t2933234003  get_leftEyeView_29() const { return ___leftEyeView_29; }
	inline Matrix4x4_t2933234003 * get_address_of_leftEyeView_29() { return &___leftEyeView_29; }
	inline void set_leftEyeView_29(Matrix4x4_t2933234003  value)
	{
		___leftEyeView_29 = value;
	}

	inline static int32_t get_offset_of_rightEyeView_30() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___rightEyeView_30)); }
	inline Matrix4x4_t2933234003  get_rightEyeView_30() const { return ___rightEyeView_30; }
	inline Matrix4x4_t2933234003 * get_address_of_rightEyeView_30() { return &___rightEyeView_30; }
	inline void set_rightEyeView_30(Matrix4x4_t2933234003  value)
	{
		___rightEyeView_30 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeProjections_31() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___debugDisableNativeProjections_31)); }
	inline bool get_debugDisableNativeProjections_31() const { return ___debugDisableNativeProjections_31; }
	inline bool* get_address_of_debugDisableNativeProjections_31() { return &___debugDisableNativeProjections_31; }
	inline void set_debugDisableNativeProjections_31(bool value)
	{
		___debugDisableNativeProjections_31 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeUILayer_32() { return static_cast<int32_t>(offsetof(GvrDevice_t635821333, ___debugDisableNativeUILayer_32)); }
	inline bool get_debugDisableNativeUILayer_32() const { return ___debugDisableNativeUILayer_32; }
	inline bool* get_address_of_debugDisableNativeUILayer_32() { return &___debugDisableNativeUILayer_32; }
	inline void set_debugDisableNativeUILayer_32(bool value)
	{
		___debugDisableNativeUILayer_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
