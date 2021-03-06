﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardReticle
struct  CardboardReticle_t626826654  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 CardboardReticle::reticleSegments
	int32_t ___reticleSegments_7;
	// System.Single CardboardReticle::reticleGrowthSpeed
	float ___reticleGrowthSpeed_8;
	// UnityEngine.Material CardboardReticle::materialComp
	Material_t1886596500 * ___materialComp_9;
	// UnityEngine.GameObject CardboardReticle::targetObj
	GameObject_t4012695102 * ___targetObj_10;
	// System.Single CardboardReticle::reticleInnerAngle
	float ___reticleInnerAngle_11;
	// System.Single CardboardReticle::reticleOuterAngle
	float ___reticleOuterAngle_12;
	// System.Single CardboardReticle::reticleDistanceInMeters
	float ___reticleDistanceInMeters_13;
	// System.Single CardboardReticle::reticleInnerDiameter
	float ___reticleInnerDiameter_14;
	// System.Single CardboardReticle::reticleOuterDiameter
	float ___reticleOuterDiameter_15;

public:
	inline static int32_t get_offset_of_reticleSegments_7() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleSegments_7)); }
	inline int32_t get_reticleSegments_7() const { return ___reticleSegments_7; }
	inline int32_t* get_address_of_reticleSegments_7() { return &___reticleSegments_7; }
	inline void set_reticleSegments_7(int32_t value)
	{
		___reticleSegments_7 = value;
	}

	inline static int32_t get_offset_of_reticleGrowthSpeed_8() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleGrowthSpeed_8)); }
	inline float get_reticleGrowthSpeed_8() const { return ___reticleGrowthSpeed_8; }
	inline float* get_address_of_reticleGrowthSpeed_8() { return &___reticleGrowthSpeed_8; }
	inline void set_reticleGrowthSpeed_8(float value)
	{
		___reticleGrowthSpeed_8 = value;
	}

	inline static int32_t get_offset_of_materialComp_9() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___materialComp_9)); }
	inline Material_t1886596500 * get_materialComp_9() const { return ___materialComp_9; }
	inline Material_t1886596500 ** get_address_of_materialComp_9() { return &___materialComp_9; }
	inline void set_materialComp_9(Material_t1886596500 * value)
	{
		___materialComp_9 = value;
		Il2CppCodeGenWriteBarrier(&___materialComp_9, value);
	}

	inline static int32_t get_offset_of_targetObj_10() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___targetObj_10)); }
	inline GameObject_t4012695102 * get_targetObj_10() const { return ___targetObj_10; }
	inline GameObject_t4012695102 ** get_address_of_targetObj_10() { return &___targetObj_10; }
	inline void set_targetObj_10(GameObject_t4012695102 * value)
	{
		___targetObj_10 = value;
		Il2CppCodeGenWriteBarrier(&___targetObj_10, value);
	}

	inline static int32_t get_offset_of_reticleInnerAngle_11() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleInnerAngle_11)); }
	inline float get_reticleInnerAngle_11() const { return ___reticleInnerAngle_11; }
	inline float* get_address_of_reticleInnerAngle_11() { return &___reticleInnerAngle_11; }
	inline void set_reticleInnerAngle_11(float value)
	{
		___reticleInnerAngle_11 = value;
	}

	inline static int32_t get_offset_of_reticleOuterAngle_12() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleOuterAngle_12)); }
	inline float get_reticleOuterAngle_12() const { return ___reticleOuterAngle_12; }
	inline float* get_address_of_reticleOuterAngle_12() { return &___reticleOuterAngle_12; }
	inline void set_reticleOuterAngle_12(float value)
	{
		___reticleOuterAngle_12 = value;
	}

	inline static int32_t get_offset_of_reticleDistanceInMeters_13() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleDistanceInMeters_13)); }
	inline float get_reticleDistanceInMeters_13() const { return ___reticleDistanceInMeters_13; }
	inline float* get_address_of_reticleDistanceInMeters_13() { return &___reticleDistanceInMeters_13; }
	inline void set_reticleDistanceInMeters_13(float value)
	{
		___reticleDistanceInMeters_13 = value;
	}

	inline static int32_t get_offset_of_reticleInnerDiameter_14() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleInnerDiameter_14)); }
	inline float get_reticleInnerDiameter_14() const { return ___reticleInnerDiameter_14; }
	inline float* get_address_of_reticleInnerDiameter_14() { return &___reticleInnerDiameter_14; }
	inline void set_reticleInnerDiameter_14(float value)
	{
		___reticleInnerDiameter_14 = value;
	}

	inline static int32_t get_offset_of_reticleOuterDiameter_15() { return static_cast<int32_t>(offsetof(CardboardReticle_t626826654, ___reticleOuterDiameter_15)); }
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
