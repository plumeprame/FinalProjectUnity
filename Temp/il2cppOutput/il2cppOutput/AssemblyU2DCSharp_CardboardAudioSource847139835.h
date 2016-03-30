#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode3071838028.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardAudioSource
struct  CardboardAudioSource_t847139835  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CardboardAudioSource::directivityAlpha
	float ___directivityAlpha_2;
	// System.Single CardboardAudioSource::directivitySharpness
	float ___directivitySharpness_3;
	// System.Single CardboardAudioSource::gainDb
	float ___gainDb_4;
	// System.Boolean CardboardAudioSource::occlusionEnabled
	bool ___occlusionEnabled_5;
	// System.Boolean CardboardAudioSource::playOnAwake
	bool ___playOnAwake_6;
	// UnityEngine.AudioRolloffMode CardboardAudioSource::rolloffMode
	int32_t ___rolloffMode_7;
	// UnityEngine.AudioClip CardboardAudioSource::sourceClip
	AudioClip_t3714538611 * ___sourceClip_8;
	// System.Boolean CardboardAudioSource::sourceLoop
	bool ___sourceLoop_9;
	// System.Boolean CardboardAudioSource::sourceMute
	bool ___sourceMute_10;
	// System.Single CardboardAudioSource::sourcePitch
	float ___sourcePitch_11;
	// System.Single CardboardAudioSource::sourceVolume
	float ___sourceVolume_12;
	// System.Single CardboardAudioSource::sourceMaxDistance
	float ___sourceMaxDistance_13;
	// System.Single CardboardAudioSource::sourceMinDistance
	float ___sourceMinDistance_14;
	// System.Boolean CardboardAudioSource::hrtfEnabled
	bool ___hrtfEnabled_15;
	// System.Int32 CardboardAudioSource::id
	int32_t ___id_16;
	// System.Single CardboardAudioSource::currentOcclusion
	float ___currentOcclusion_17;
	// System.Single CardboardAudioSource::targetOcclusion
	float ___targetOcclusion_18;
	// System.Single CardboardAudioSource::nextOcclusionUpdate
	float ___nextOcclusionUpdate_19;
	// UnityEngine.AudioSource CardboardAudioSource::audioSource
	AudioSource_t3628549054 * ___audioSource_20;
	// System.Boolean CardboardAudioSource::isPaused
	bool ___isPaused_21;

public:
	inline static int32_t get_offset_of_directivityAlpha_2() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___directivityAlpha_2)); }
	inline float get_directivityAlpha_2() const { return ___directivityAlpha_2; }
	inline float* get_address_of_directivityAlpha_2() { return &___directivityAlpha_2; }
	inline void set_directivityAlpha_2(float value)
	{
		___directivityAlpha_2 = value;
	}

	inline static int32_t get_offset_of_directivitySharpness_3() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___directivitySharpness_3)); }
	inline float get_directivitySharpness_3() const { return ___directivitySharpness_3; }
	inline float* get_address_of_directivitySharpness_3() { return &___directivitySharpness_3; }
	inline void set_directivitySharpness_3(float value)
	{
		___directivitySharpness_3 = value;
	}

	inline static int32_t get_offset_of_gainDb_4() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___gainDb_4)); }
	inline float get_gainDb_4() const { return ___gainDb_4; }
	inline float* get_address_of_gainDb_4() { return &___gainDb_4; }
	inline void set_gainDb_4(float value)
	{
		___gainDb_4 = value;
	}

	inline static int32_t get_offset_of_occlusionEnabled_5() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___occlusionEnabled_5)); }
	inline bool get_occlusionEnabled_5() const { return ___occlusionEnabled_5; }
	inline bool* get_address_of_occlusionEnabled_5() { return &___occlusionEnabled_5; }
	inline void set_occlusionEnabled_5(bool value)
	{
		___occlusionEnabled_5 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_6() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___playOnAwake_6)); }
	inline bool get_playOnAwake_6() const { return ___playOnAwake_6; }
	inline bool* get_address_of_playOnAwake_6() { return &___playOnAwake_6; }
	inline void set_playOnAwake_6(bool value)
	{
		___playOnAwake_6 = value;
	}

	inline static int32_t get_offset_of_rolloffMode_7() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___rolloffMode_7)); }
	inline int32_t get_rolloffMode_7() const { return ___rolloffMode_7; }
	inline int32_t* get_address_of_rolloffMode_7() { return &___rolloffMode_7; }
	inline void set_rolloffMode_7(int32_t value)
	{
		___rolloffMode_7 = value;
	}

	inline static int32_t get_offset_of_sourceClip_8() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceClip_8)); }
	inline AudioClip_t3714538611 * get_sourceClip_8() const { return ___sourceClip_8; }
	inline AudioClip_t3714538611 ** get_address_of_sourceClip_8() { return &___sourceClip_8; }
	inline void set_sourceClip_8(AudioClip_t3714538611 * value)
	{
		___sourceClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___sourceClip_8, value);
	}

	inline static int32_t get_offset_of_sourceLoop_9() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceLoop_9)); }
	inline bool get_sourceLoop_9() const { return ___sourceLoop_9; }
	inline bool* get_address_of_sourceLoop_9() { return &___sourceLoop_9; }
	inline void set_sourceLoop_9(bool value)
	{
		___sourceLoop_9 = value;
	}

	inline static int32_t get_offset_of_sourceMute_10() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceMute_10)); }
	inline bool get_sourceMute_10() const { return ___sourceMute_10; }
	inline bool* get_address_of_sourceMute_10() { return &___sourceMute_10; }
	inline void set_sourceMute_10(bool value)
	{
		___sourceMute_10 = value;
	}

	inline static int32_t get_offset_of_sourcePitch_11() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourcePitch_11)); }
	inline float get_sourcePitch_11() const { return ___sourcePitch_11; }
	inline float* get_address_of_sourcePitch_11() { return &___sourcePitch_11; }
	inline void set_sourcePitch_11(float value)
	{
		___sourcePitch_11 = value;
	}

	inline static int32_t get_offset_of_sourceVolume_12() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceVolume_12)); }
	inline float get_sourceVolume_12() const { return ___sourceVolume_12; }
	inline float* get_address_of_sourceVolume_12() { return &___sourceVolume_12; }
	inline void set_sourceVolume_12(float value)
	{
		___sourceVolume_12 = value;
	}

	inline static int32_t get_offset_of_sourceMaxDistance_13() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceMaxDistance_13)); }
	inline float get_sourceMaxDistance_13() const { return ___sourceMaxDistance_13; }
	inline float* get_address_of_sourceMaxDistance_13() { return &___sourceMaxDistance_13; }
	inline void set_sourceMaxDistance_13(float value)
	{
		___sourceMaxDistance_13 = value;
	}

	inline static int32_t get_offset_of_sourceMinDistance_14() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___sourceMinDistance_14)); }
	inline float get_sourceMinDistance_14() const { return ___sourceMinDistance_14; }
	inline float* get_address_of_sourceMinDistance_14() { return &___sourceMinDistance_14; }
	inline void set_sourceMinDistance_14(float value)
	{
		___sourceMinDistance_14 = value;
	}

	inline static int32_t get_offset_of_hrtfEnabled_15() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___hrtfEnabled_15)); }
	inline bool get_hrtfEnabled_15() const { return ___hrtfEnabled_15; }
	inline bool* get_address_of_hrtfEnabled_15() { return &___hrtfEnabled_15; }
	inline void set_hrtfEnabled_15(bool value)
	{
		___hrtfEnabled_15 = value;
	}

	inline static int32_t get_offset_of_id_16() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___id_16)); }
	inline int32_t get_id_16() const { return ___id_16; }
	inline int32_t* get_address_of_id_16() { return &___id_16; }
	inline void set_id_16(int32_t value)
	{
		___id_16 = value;
	}

	inline static int32_t get_offset_of_currentOcclusion_17() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___currentOcclusion_17)); }
	inline float get_currentOcclusion_17() const { return ___currentOcclusion_17; }
	inline float* get_address_of_currentOcclusion_17() { return &___currentOcclusion_17; }
	inline void set_currentOcclusion_17(float value)
	{
		___currentOcclusion_17 = value;
	}

	inline static int32_t get_offset_of_targetOcclusion_18() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___targetOcclusion_18)); }
	inline float get_targetOcclusion_18() const { return ___targetOcclusion_18; }
	inline float* get_address_of_targetOcclusion_18() { return &___targetOcclusion_18; }
	inline void set_targetOcclusion_18(float value)
	{
		___targetOcclusion_18 = value;
	}

	inline static int32_t get_offset_of_nextOcclusionUpdate_19() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___nextOcclusionUpdate_19)); }
	inline float get_nextOcclusionUpdate_19() const { return ___nextOcclusionUpdate_19; }
	inline float* get_address_of_nextOcclusionUpdate_19() { return &___nextOcclusionUpdate_19; }
	inline void set_nextOcclusionUpdate_19(float value)
	{
		___nextOcclusionUpdate_19 = value;
	}

	inline static int32_t get_offset_of_audioSource_20() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___audioSource_20)); }
	inline AudioSource_t3628549054 * get_audioSource_20() const { return ___audioSource_20; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_20() { return &___audioSource_20; }
	inline void set_audioSource_20(AudioSource_t3628549054 * value)
	{
		___audioSource_20 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_20, value);
	}

	inline static int32_t get_offset_of_isPaused_21() { return static_cast<int32_t>(offsetof(CardboardAudioSource_t847139835, ___isPaused_21)); }
	inline bool get_isPaused_21() const { return ___isPaused_21; }
	inline bool* get_address_of_isPaused_21() { return &___isPaused_21; }
	inline void set_isPaused_21(bool value)
	{
		___isPaused_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
