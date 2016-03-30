#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StereoRenderEffect
struct  StereoRenderEffect_t4012593919  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material StereoRenderEffect::material
	Material_t1886596500 * ___material_2;
	// UnityEngine.Camera StereoRenderEffect::camera
	Camera_t3533968274 * ___camera_3;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t4012593919, ___material_2)); }
	inline Material_t1886596500 * get_material_2() const { return ___material_2; }
	inline Material_t1886596500 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t1886596500 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_camera_3() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t4012593919, ___camera_3)); }
	inline Camera_t3533968274 * get_camera_3() const { return ___camera_3; }
	inline Camera_t3533968274 ** get_address_of_camera_3() { return &___camera_3; }
	inline void set_camera_3(Camera_t3533968274 * value)
	{
		___camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___camera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
