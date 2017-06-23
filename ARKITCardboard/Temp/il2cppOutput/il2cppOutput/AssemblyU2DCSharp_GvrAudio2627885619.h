#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// MutablePose3D
struct MutablePose3D_t1015643808;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudio
struct  GvrAudio_t2627885619  : public Il2CppObject
{
public:

public:
};

struct GvrAudio_t2627885619_StaticFields
{
public:
	// System.Int32 GvrAudio::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 GvrAudio::numChannels
	int32_t ___numChannels_1;
	// System.Int32 GvrAudio::framesPerBuffer
	int32_t ___framesPerBuffer_2;
	// System.Boolean GvrAudio::initialized
	bool ___initialized_16;
	// UnityEngine.Transform GvrAudio::listenerTransform
	Transform_t3275118058 * ___listenerTransform_17;
	// System.Int32 GvrAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_18;
	// MutablePose3D GvrAudio::pose
	MutablePose3D_t1015643808 * ___pose_19;
	// System.Single GvrAudio::worldScaleInverse
	float ___worldScaleInverse_20;

public:
	inline static int32_t get_offset_of_sampleRate_0() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___sampleRate_0)); }
	inline int32_t get_sampleRate_0() const { return ___sampleRate_0; }
	inline int32_t* get_address_of_sampleRate_0() { return &___sampleRate_0; }
	inline void set_sampleRate_0(int32_t value)
	{
		___sampleRate_0 = value;
	}

	inline static int32_t get_offset_of_numChannels_1() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___numChannels_1)); }
	inline int32_t get_numChannels_1() const { return ___numChannels_1; }
	inline int32_t* get_address_of_numChannels_1() { return &___numChannels_1; }
	inline void set_numChannels_1(int32_t value)
	{
		___numChannels_1 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_2() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___framesPerBuffer_2)); }
	inline int32_t get_framesPerBuffer_2() const { return ___framesPerBuffer_2; }
	inline int32_t* get_address_of_framesPerBuffer_2() { return &___framesPerBuffer_2; }
	inline void set_framesPerBuffer_2(int32_t value)
	{
		___framesPerBuffer_2 = value;
	}

	inline static int32_t get_offset_of_initialized_16() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___initialized_16)); }
	inline bool get_initialized_16() const { return ___initialized_16; }
	inline bool* get_address_of_initialized_16() { return &___initialized_16; }
	inline void set_initialized_16(bool value)
	{
		___initialized_16 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_17() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___listenerTransform_17)); }
	inline Transform_t3275118058 * get_listenerTransform_17() const { return ___listenerTransform_17; }
	inline Transform_t3275118058 ** get_address_of_listenerTransform_17() { return &___listenerTransform_17; }
	inline void set_listenerTransform_17(Transform_t3275118058 * value)
	{
		___listenerTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_17, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_18() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___occlusionMaskValue_18)); }
	inline int32_t get_occlusionMaskValue_18() const { return ___occlusionMaskValue_18; }
	inline int32_t* get_address_of_occlusionMaskValue_18() { return &___occlusionMaskValue_18; }
	inline void set_occlusionMaskValue_18(int32_t value)
	{
		___occlusionMaskValue_18 = value;
	}

	inline static int32_t get_offset_of_pose_19() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___pose_19)); }
	inline MutablePose3D_t1015643808 * get_pose_19() const { return ___pose_19; }
	inline MutablePose3D_t1015643808 ** get_address_of_pose_19() { return &___pose_19; }
	inline void set_pose_19(MutablePose3D_t1015643808 * value)
	{
		___pose_19 = value;
		Il2CppCodeGenWriteBarrier(&___pose_19, value);
	}

	inline static int32_t get_offset_of_worldScaleInverse_20() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___worldScaleInverse_20)); }
	inline float get_worldScaleInverse_20() const { return ___worldScaleInverse_20; }
	inline float* get_address_of_worldScaleInverse_20() { return &___worldScaleInverse_20; }
	inline void set_worldScaleInverse_20(float value)
	{
		___worldScaleInverse_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
