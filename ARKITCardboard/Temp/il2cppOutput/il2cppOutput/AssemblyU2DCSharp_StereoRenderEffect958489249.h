#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StereoRenderEffect
struct  StereoRenderEffect_t958489249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material StereoRenderEffect::material
	Material_t193706927 * ___material_2;
	// UnityEngine.Camera StereoRenderEffect::cam
	Camera_t189460977 * ___cam_3;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t958489249, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t958489249, ___cam_3)); }
	inline Camera_t189460977 * get_cam_3() const { return ___cam_3; }
	inline Camera_t189460977 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t189460977 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}
};

struct StereoRenderEffect_t958489249_StaticFields
{
public:
	// UnityEngine.Rect StereoRenderEffect::fullRect
	Rect_t3681755626  ___fullRect_4;

public:
	inline static int32_t get_offset_of_fullRect_4() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t958489249_StaticFields, ___fullRect_4)); }
	inline Rect_t3681755626  get_fullRect_4() const { return ___fullRect_4; }
	inline Rect_t3681755626 * get_address_of_fullRect_4() { return &___fullRect_4; }
	inline void set_fullRect_4(Rect_t3681755626  value)
	{
		___fullRect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
