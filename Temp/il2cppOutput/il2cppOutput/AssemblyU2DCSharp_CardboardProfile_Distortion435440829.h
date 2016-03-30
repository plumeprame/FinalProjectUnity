#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardProfile/Distortion
struct  Distortion_t435440829 
{
public:
	// System.Single CardboardProfile/Distortion::k1
	float ___k1_0;
	// System.Single CardboardProfile/Distortion::k2
	float ___k2_1;

public:
	inline static int32_t get_offset_of_k1_0() { return static_cast<int32_t>(offsetof(Distortion_t435440829, ___k1_0)); }
	inline float get_k1_0() const { return ___k1_0; }
	inline float* get_address_of_k1_0() { return &___k1_0; }
	inline void set_k1_0(float value)
	{
		___k1_0 = value;
	}

	inline static int32_t get_offset_of_k2_1() { return static_cast<int32_t>(offsetof(Distortion_t435440829, ___k2_1)); }
	inline float get_k2_1() const { return ___k2_1; }
	inline float* get_address_of_k2_1() { return &___k2_1; }
	inline void set_k2_1(float value)
	{
		___k2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CardboardProfile/Distortion
struct Distortion_t435440829_marshaled_pinvoke
{
	float ___k1_0;
	float ___k2_1;
};
// Native definition for marshalling of: CardboardProfile/Distortion
struct Distortion_t435440829_marshaled_com
{
	float ___k1_0;
	float ___k2_1;
};
