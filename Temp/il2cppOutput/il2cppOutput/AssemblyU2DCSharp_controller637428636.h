#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Cardboard
struct Cardboard_t1761541558;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controller
struct  controller_t637428636  : public MonoBehaviour_t3012272455
{
public:
	// System.Single controller::speed
	float ___speed_2;
	// Cardboard controller::cb
	Cardboard_t1761541558 * ___cb_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(controller_t637428636, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(controller_t637428636, ___cb_3)); }
	inline Cardboard_t1761541558 * get_cb_3() const { return ___cb_3; }
	inline Cardboard_t1761541558 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(Cardboard_t1761541558 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier(&___cb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
