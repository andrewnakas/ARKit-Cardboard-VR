#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioListener
struct  GvrAudioListener_t1521766837  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GvrAudioListener::globalGainDb
	float ___globalGainDb_2;
	// System.Single GvrAudioListener::worldScale
	float ___worldScale_3;
	// UnityEngine.LayerMask GvrAudioListener::occlusionMask
	LayerMask_t3188175821  ___occlusionMask_4;
	// GvrAudio/Quality GvrAudioListener::quality
	int32_t ___quality_5;

public:
	inline static int32_t get_offset_of_globalGainDb_2() { return static_cast<int32_t>(offsetof(GvrAudioListener_t1521766837, ___globalGainDb_2)); }
	inline float get_globalGainDb_2() const { return ___globalGainDb_2; }
	inline float* get_address_of_globalGainDb_2() { return &___globalGainDb_2; }
	inline void set_globalGainDb_2(float value)
	{
		___globalGainDb_2 = value;
	}

	inline static int32_t get_offset_of_worldScale_3() { return static_cast<int32_t>(offsetof(GvrAudioListener_t1521766837, ___worldScale_3)); }
	inline float get_worldScale_3() const { return ___worldScale_3; }
	inline float* get_address_of_worldScale_3() { return &___worldScale_3; }
	inline void set_worldScale_3(float value)
	{
		___worldScale_3 = value;
	}

	inline static int32_t get_offset_of_occlusionMask_4() { return static_cast<int32_t>(offsetof(GvrAudioListener_t1521766837, ___occlusionMask_4)); }
	inline LayerMask_t3188175821  get_occlusionMask_4() const { return ___occlusionMask_4; }
	inline LayerMask_t3188175821 * get_address_of_occlusionMask_4() { return &___occlusionMask_4; }
	inline void set_occlusionMask_4(LayerMask_t3188175821  value)
	{
		___occlusionMask_4 = value;
	}

	inline static int32_t get_offset_of_quality_5() { return static_cast<int32_t>(offsetof(GvrAudioListener_t1521766837, ___quality_5)); }
	inline int32_t get_quality_5() const { return ___quality_5; }
	inline int32_t* get_address_of_quality_5() { return &___quality_5; }
	inline void set_quality_5(int32_t value)
	{
		___quality_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
