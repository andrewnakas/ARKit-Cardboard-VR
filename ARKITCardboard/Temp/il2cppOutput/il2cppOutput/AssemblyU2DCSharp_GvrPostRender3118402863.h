#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPostRender
struct  GvrPostRender_t3118402863  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GvrPostRender::<cam>k__BackingField
	Camera_t189460977 * ___U3CcamU3Ek__BackingField_2;
	// UnityEngine.Mesh GvrPostRender::distortionMesh
	Mesh_t1356156583 * ___distortionMesh_6;
	// UnityEngine.Material GvrPostRender::meshMaterial
	Material_t193706927 * ___meshMaterial_7;
	// UnityEngine.Material GvrPostRender::uiMaterial
	Material_t193706927 * ___uiMaterial_8;
	// System.Single GvrPostRender::centerWidthPx
	float ___centerWidthPx_9;
	// System.Single GvrPostRender::buttonWidthPx
	float ___buttonWidthPx_10;
	// System.Single GvrPostRender::xScale
	float ___xScale_11;
	// System.Single GvrPostRender::yScale
	float ___yScale_12;
	// UnityEngine.Matrix4x4 GvrPostRender::xfm
	Matrix4x4_t2933234003  ___xfm_13;

public:
	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___U3CcamU3Ek__BackingField_2)); }
	inline Camera_t189460977 * get_U3CcamU3Ek__BackingField_2() const { return ___U3CcamU3Ek__BackingField_2; }
	inline Camera_t189460977 ** get_address_of_U3CcamU3Ek__BackingField_2() { return &___U3CcamU3Ek__BackingField_2; }
	inline void set_U3CcamU3Ek__BackingField_2(Camera_t189460977 * value)
	{
		___U3CcamU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_distortionMesh_6() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___distortionMesh_6)); }
	inline Mesh_t1356156583 * get_distortionMesh_6() const { return ___distortionMesh_6; }
	inline Mesh_t1356156583 ** get_address_of_distortionMesh_6() { return &___distortionMesh_6; }
	inline void set_distortionMesh_6(Mesh_t1356156583 * value)
	{
		___distortionMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___distortionMesh_6, value);
	}

	inline static int32_t get_offset_of_meshMaterial_7() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___meshMaterial_7)); }
	inline Material_t193706927 * get_meshMaterial_7() const { return ___meshMaterial_7; }
	inline Material_t193706927 ** get_address_of_meshMaterial_7() { return &___meshMaterial_7; }
	inline void set_meshMaterial_7(Material_t193706927 * value)
	{
		___meshMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshMaterial_7, value);
	}

	inline static int32_t get_offset_of_uiMaterial_8() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___uiMaterial_8)); }
	inline Material_t193706927 * get_uiMaterial_8() const { return ___uiMaterial_8; }
	inline Material_t193706927 ** get_address_of_uiMaterial_8() { return &___uiMaterial_8; }
	inline void set_uiMaterial_8(Material_t193706927 * value)
	{
		___uiMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___uiMaterial_8, value);
	}

	inline static int32_t get_offset_of_centerWidthPx_9() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___centerWidthPx_9)); }
	inline float get_centerWidthPx_9() const { return ___centerWidthPx_9; }
	inline float* get_address_of_centerWidthPx_9() { return &___centerWidthPx_9; }
	inline void set_centerWidthPx_9(float value)
	{
		___centerWidthPx_9 = value;
	}

	inline static int32_t get_offset_of_buttonWidthPx_10() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___buttonWidthPx_10)); }
	inline float get_buttonWidthPx_10() const { return ___buttonWidthPx_10; }
	inline float* get_address_of_buttonWidthPx_10() { return &___buttonWidthPx_10; }
	inline void set_buttonWidthPx_10(float value)
	{
		___buttonWidthPx_10 = value;
	}

	inline static int32_t get_offset_of_xScale_11() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___xScale_11)); }
	inline float get_xScale_11() const { return ___xScale_11; }
	inline float* get_address_of_xScale_11() { return &___xScale_11; }
	inline void set_xScale_11(float value)
	{
		___xScale_11 = value;
	}

	inline static int32_t get_offset_of_yScale_12() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___yScale_12)); }
	inline float get_yScale_12() const { return ___yScale_12; }
	inline float* get_address_of_yScale_12() { return &___yScale_12; }
	inline void set_yScale_12(float value)
	{
		___yScale_12 = value;
	}

	inline static int32_t get_offset_of_xfm_13() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863, ___xfm_13)); }
	inline Matrix4x4_t2933234003  get_xfm_13() const { return ___xfm_13; }
	inline Matrix4x4_t2933234003 * get_address_of_xfm_13() { return &___xfm_13; }
	inline void set_xfm_13(Matrix4x4_t2933234003  value)
	{
		___xfm_13 = value;
	}
};

struct GvrPostRender_t3118402863_StaticFields
{
public:
	// System.Single[] GvrPostRender::Angles
	SingleU5BU5D_t577127397* ___Angles_23;

public:
	inline static int32_t get_offset_of_Angles_23() { return static_cast<int32_t>(offsetof(GvrPostRender_t3118402863_StaticFields, ___Angles_23)); }
	inline SingleU5BU5D_t577127397* get_Angles_23() const { return ___Angles_23; }
	inline SingleU5BU5D_t577127397** get_address_of_Angles_23() { return &___Angles_23; }
	inline void set_Angles_23(SingleU5BU5D_t577127397* value)
	{
		___Angles_23 = value;
		Il2CppCodeGenWriteBarrier(&___Angles_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
