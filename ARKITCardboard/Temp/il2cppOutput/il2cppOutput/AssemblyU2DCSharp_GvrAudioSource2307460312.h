#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode2229549515.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSource
struct  GvrAudioSource_t2307460312  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrAudioSource::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single GvrAudioSource::directivityAlpha
	float ___directivityAlpha_3;
	// System.Single GvrAudioSource::directivitySharpness
	float ___directivitySharpness_4;
	// System.Single GvrAudioSource::gainDb
	float ___gainDb_5;
	// System.Boolean GvrAudioSource::occlusionEnabled
	bool ___occlusionEnabled_6;
	// System.Boolean GvrAudioSource::playOnAwake
	bool ___playOnAwake_7;
	// UnityEngine.AudioRolloffMode GvrAudioSource::rolloffMode
	int32_t ___rolloffMode_8;
	// System.Single GvrAudioSource::spread
	float ___spread_9;
	// UnityEngine.AudioClip GvrAudioSource::sourceClip
	AudioClip_t1932558630 * ___sourceClip_10;
	// System.Boolean GvrAudioSource::sourceLoop
	bool ___sourceLoop_11;
	// System.Boolean GvrAudioSource::sourceMute
	bool ___sourceMute_12;
	// System.Single GvrAudioSource::sourcePitch
	float ___sourcePitch_13;
	// System.Single GvrAudioSource::sourceVolume
	float ___sourceVolume_14;
	// System.Single GvrAudioSource::sourceMaxDistance
	float ___sourceMaxDistance_15;
	// System.Single GvrAudioSource::sourceMinDistance
	float ___sourceMinDistance_16;
	// System.Boolean GvrAudioSource::hrtfEnabled
	bool ___hrtfEnabled_17;
	// System.Int32 GvrAudioSource::id
	int32_t ___id_18;
	// System.Single GvrAudioSource::currentOcclusion
	float ___currentOcclusion_19;
	// System.Single GvrAudioSource::nextOcclusionUpdate
	float ___nextOcclusionUpdate_20;
	// UnityEngine.AudioSource GvrAudioSource::audioSource
	AudioSource_t1135106623 * ___audioSource_21;
	// System.Boolean GvrAudioSource::isPaused
	bool ___isPaused_22;

public:
	inline static int32_t get_offset_of_bypassRoomEffects_2() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___bypassRoomEffects_2)); }
	inline bool get_bypassRoomEffects_2() const { return ___bypassRoomEffects_2; }
	inline bool* get_address_of_bypassRoomEffects_2() { return &___bypassRoomEffects_2; }
	inline void set_bypassRoomEffects_2(bool value)
	{
		___bypassRoomEffects_2 = value;
	}

	inline static int32_t get_offset_of_directivityAlpha_3() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___directivityAlpha_3)); }
	inline float get_directivityAlpha_3() const { return ___directivityAlpha_3; }
	inline float* get_address_of_directivityAlpha_3() { return &___directivityAlpha_3; }
	inline void set_directivityAlpha_3(float value)
	{
		___directivityAlpha_3 = value;
	}

	inline static int32_t get_offset_of_directivitySharpness_4() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___directivitySharpness_4)); }
	inline float get_directivitySharpness_4() const { return ___directivitySharpness_4; }
	inline float* get_address_of_directivitySharpness_4() { return &___directivitySharpness_4; }
	inline void set_directivitySharpness_4(float value)
	{
		___directivitySharpness_4 = value;
	}

	inline static int32_t get_offset_of_gainDb_5() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___gainDb_5)); }
	inline float get_gainDb_5() const { return ___gainDb_5; }
	inline float* get_address_of_gainDb_5() { return &___gainDb_5; }
	inline void set_gainDb_5(float value)
	{
		___gainDb_5 = value;
	}

	inline static int32_t get_offset_of_occlusionEnabled_6() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___occlusionEnabled_6)); }
	inline bool get_occlusionEnabled_6() const { return ___occlusionEnabled_6; }
	inline bool* get_address_of_occlusionEnabled_6() { return &___occlusionEnabled_6; }
	inline void set_occlusionEnabled_6(bool value)
	{
		___occlusionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_7() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___playOnAwake_7)); }
	inline bool get_playOnAwake_7() const { return ___playOnAwake_7; }
	inline bool* get_address_of_playOnAwake_7() { return &___playOnAwake_7; }
	inline void set_playOnAwake_7(bool value)
	{
		___playOnAwake_7 = value;
	}

	inline static int32_t get_offset_of_rolloffMode_8() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___rolloffMode_8)); }
	inline int32_t get_rolloffMode_8() const { return ___rolloffMode_8; }
	inline int32_t* get_address_of_rolloffMode_8() { return &___rolloffMode_8; }
	inline void set_rolloffMode_8(int32_t value)
	{
		___rolloffMode_8 = value;
	}

	inline static int32_t get_offset_of_spread_9() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___spread_9)); }
	inline float get_spread_9() const { return ___spread_9; }
	inline float* get_address_of_spread_9() { return &___spread_9; }
	inline void set_spread_9(float value)
	{
		___spread_9 = value;
	}

	inline static int32_t get_offset_of_sourceClip_10() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceClip_10)); }
	inline AudioClip_t1932558630 * get_sourceClip_10() const { return ___sourceClip_10; }
	inline AudioClip_t1932558630 ** get_address_of_sourceClip_10() { return &___sourceClip_10; }
	inline void set_sourceClip_10(AudioClip_t1932558630 * value)
	{
		___sourceClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___sourceClip_10, value);
	}

	inline static int32_t get_offset_of_sourceLoop_11() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceLoop_11)); }
	inline bool get_sourceLoop_11() const { return ___sourceLoop_11; }
	inline bool* get_address_of_sourceLoop_11() { return &___sourceLoop_11; }
	inline void set_sourceLoop_11(bool value)
	{
		___sourceLoop_11 = value;
	}

	inline static int32_t get_offset_of_sourceMute_12() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMute_12)); }
	inline bool get_sourceMute_12() const { return ___sourceMute_12; }
	inline bool* get_address_of_sourceMute_12() { return &___sourceMute_12; }
	inline void set_sourceMute_12(bool value)
	{
		___sourceMute_12 = value;
	}

	inline static int32_t get_offset_of_sourcePitch_13() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourcePitch_13)); }
	inline float get_sourcePitch_13() const { return ___sourcePitch_13; }
	inline float* get_address_of_sourcePitch_13() { return &___sourcePitch_13; }
	inline void set_sourcePitch_13(float value)
	{
		___sourcePitch_13 = value;
	}

	inline static int32_t get_offset_of_sourceVolume_14() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceVolume_14)); }
	inline float get_sourceVolume_14() const { return ___sourceVolume_14; }
	inline float* get_address_of_sourceVolume_14() { return &___sourceVolume_14; }
	inline void set_sourceVolume_14(float value)
	{
		___sourceVolume_14 = value;
	}

	inline static int32_t get_offset_of_sourceMaxDistance_15() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMaxDistance_15)); }
	inline float get_sourceMaxDistance_15() const { return ___sourceMaxDistance_15; }
	inline float* get_address_of_sourceMaxDistance_15() { return &___sourceMaxDistance_15; }
	inline void set_sourceMaxDistance_15(float value)
	{
		___sourceMaxDistance_15 = value;
	}

	inline static int32_t get_offset_of_sourceMinDistance_16() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMinDistance_16)); }
	inline float get_sourceMinDistance_16() const { return ___sourceMinDistance_16; }
	inline float* get_address_of_sourceMinDistance_16() { return &___sourceMinDistance_16; }
	inline void set_sourceMinDistance_16(float value)
	{
		___sourceMinDistance_16 = value;
	}

	inline static int32_t get_offset_of_hrtfEnabled_17() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___hrtfEnabled_17)); }
	inline bool get_hrtfEnabled_17() const { return ___hrtfEnabled_17; }
	inline bool* get_address_of_hrtfEnabled_17() { return &___hrtfEnabled_17; }
	inline void set_hrtfEnabled_17(bool value)
	{
		___hrtfEnabled_17 = value;
	}

	inline static int32_t get_offset_of_id_18() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___id_18)); }
	inline int32_t get_id_18() const { return ___id_18; }
	inline int32_t* get_address_of_id_18() { return &___id_18; }
	inline void set_id_18(int32_t value)
	{
		___id_18 = value;
	}

	inline static int32_t get_offset_of_currentOcclusion_19() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___currentOcclusion_19)); }
	inline float get_currentOcclusion_19() const { return ___currentOcclusion_19; }
	inline float* get_address_of_currentOcclusion_19() { return &___currentOcclusion_19; }
	inline void set_currentOcclusion_19(float value)
	{
		___currentOcclusion_19 = value;
	}

	inline static int32_t get_offset_of_nextOcclusionUpdate_20() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___nextOcclusionUpdate_20)); }
	inline float get_nextOcclusionUpdate_20() const { return ___nextOcclusionUpdate_20; }
	inline float* get_address_of_nextOcclusionUpdate_20() { return &___nextOcclusionUpdate_20; }
	inline void set_nextOcclusionUpdate_20(float value)
	{
		___nextOcclusionUpdate_20 = value;
	}

	inline static int32_t get_offset_of_audioSource_21() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___audioSource_21)); }
	inline AudioSource_t1135106623 * get_audioSource_21() const { return ___audioSource_21; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_21() { return &___audioSource_21; }
	inline void set_audioSource_21(AudioSource_t1135106623 * value)
	{
		___audioSource_21 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_21, value);
	}

	inline static int32_t get_offset_of_isPaused_22() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___isPaused_22)); }
	inline bool get_isPaused_22() const { return ___isPaused_22; }
	inline bool* get_address_of_isPaused_22() { return &___isPaused_22; }
	inline void set_isPaused_22(bool value)
	{
		___isPaused_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
