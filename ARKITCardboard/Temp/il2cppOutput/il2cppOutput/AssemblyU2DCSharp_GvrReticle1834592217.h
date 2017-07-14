#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrReticle
struct  GvrReticle_t1834592217  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GvrReticle::reticleSegments
	int32_t ___reticleSegments_2;
	// System.Single GvrReticle::reticleGrowthSpeed
	float ___reticleGrowthSpeed_3;
	// UnityEngine.Material GvrReticle::materialComp
	Material_t193706927 * ___materialComp_4;
	// UnityEngine.GameObject GvrReticle::targetObj
	GameObject_t1756533147 * ___targetObj_5;
	// System.Single GvrReticle::reticleInnerAngle
	float ___reticleInnerAngle_6;
	// System.Single GvrReticle::reticleOuterAngle
	float ___reticleOuterAngle_7;
	// System.Single GvrReticle::reticleDistanceInMeters
	float ___reticleDistanceInMeters_8;
	// System.Single GvrReticle::reticleInnerDiameter
	float ___reticleInnerDiameter_14;
	// System.Single GvrReticle::reticleOuterDiameter
	float ___reticleOuterDiameter_15;

public:
	inline static int32_t get_offset_of_reticleSegments_2() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleSegments_2)); }
	inline int32_t get_reticleSegments_2() const { return ___reticleSegments_2; }
	inline int32_t* get_address_of_reticleSegments_2() { return &___reticleSegments_2; }
	inline void set_reticleSegments_2(int32_t value)
	{
		___reticleSegments_2 = value;
	}

	inline static int32_t get_offset_of_reticleGrowthSpeed_3() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleGrowthSpeed_3)); }
	inline float get_reticleGrowthSpeed_3() const { return ___reticleGrowthSpeed_3; }
	inline float* get_address_of_reticleGrowthSpeed_3() { return &___reticleGrowthSpeed_3; }
	inline void set_reticleGrowthSpeed_3(float value)
	{
		___reticleGrowthSpeed_3 = value;
	}

	inline static int32_t get_offset_of_materialComp_4() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___materialComp_4)); }
	inline Material_t193706927 * get_materialComp_4() const { return ___materialComp_4; }
	inline Material_t193706927 ** get_address_of_materialComp_4() { return &___materialComp_4; }
	inline void set_materialComp_4(Material_t193706927 * value)
	{
		___materialComp_4 = value;
		Il2CppCodeGenWriteBarrier(&___materialComp_4, value);
	}

	inline static int32_t get_offset_of_targetObj_5() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___targetObj_5)); }
	inline GameObject_t1756533147 * get_targetObj_5() const { return ___targetObj_5; }
	inline GameObject_t1756533147 ** get_address_of_targetObj_5() { return &___targetObj_5; }
	inline void set_targetObj_5(GameObject_t1756533147 * value)
	{
		___targetObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetObj_5, value);
	}

	inline static int32_t get_offset_of_reticleInnerAngle_6() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleInnerAngle_6)); }
	inline float get_reticleInnerAngle_6() const { return ___reticleInnerAngle_6; }
	inline float* get_address_of_reticleInnerAngle_6() { return &___reticleInnerAngle_6; }
	inline void set_reticleInnerAngle_6(float value)
	{
		___reticleInnerAngle_6 = value;
	}

	inline static int32_t get_offset_of_reticleOuterAngle_7() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleOuterAngle_7)); }
	inline float get_reticleOuterAngle_7() const { return ___reticleOuterAngle_7; }
	inline float* get_address_of_reticleOuterAngle_7() { return &___reticleOuterAngle_7; }
	inline void set_reticleOuterAngle_7(float value)
	{
		___reticleOuterAngle_7 = value;
	}

	inline static int32_t get_offset_of_reticleDistanceInMeters_8() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleDistanceInMeters_8)); }
	inline float get_reticleDistanceInMeters_8() const { return ___reticleDistanceInMeters_8; }
	inline float* get_address_of_reticleDistanceInMeters_8() { return &___reticleDistanceInMeters_8; }
	inline void set_reticleDistanceInMeters_8(float value)
	{
		___reticleDistanceInMeters_8 = value;
	}

	inline static int32_t get_offset_of_reticleInnerDiameter_14() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleInnerDiameter_14)); }
	inline float get_reticleInnerDiameter_14() const { return ___reticleInnerDiameter_14; }
	inline float* get_address_of_reticleInnerDiameter_14() { return &___reticleInnerDiameter_14; }
	inline void set_reticleInnerDiameter_14(float value)
	{
		___reticleInnerDiameter_14 = value;
	}

	inline static int32_t get_offset_of_reticleOuterDiameter_15() { return static_cast<int32_t>(offsetof(GvrReticle_t1834592217, ___reticleOuterDiameter_15)); }
	inline float get_reticleOuterDiameter_15() const { return ___reticleOuterDiameter_15; }
	inline float* get_address_of_reticleOuterDiameter_15() { return &___reticleOuterDiameter_15; }
	inline void set_reticleOuterDiameter_15(float value)
	{
		___reticleOuterDiameter_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
