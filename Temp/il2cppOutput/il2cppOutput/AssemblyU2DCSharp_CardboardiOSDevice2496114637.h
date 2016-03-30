#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_BaseCardboardDevice2358938779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardiOSDevice
struct  CardboardiOSDevice_t2496114637  : public BaseCardboardDevice_t2358938779
{
public:
	// System.Boolean CardboardiOSDevice::isOpenGL
	bool ___isOpenGL_35;
	// System.Boolean CardboardiOSDevice::debugOnboarding
	bool ___debugOnboarding_36;

public:
	inline static int32_t get_offset_of_isOpenGL_35() { return static_cast<int32_t>(offsetof(CardboardiOSDevice_t2496114637, ___isOpenGL_35)); }
	inline bool get_isOpenGL_35() const { return ___isOpenGL_35; }
	inline bool* get_address_of_isOpenGL_35() { return &___isOpenGL_35; }
	inline void set_isOpenGL_35(bool value)
	{
		___isOpenGL_35 = value;
	}

	inline static int32_t get_offset_of_debugOnboarding_36() { return static_cast<int32_t>(offsetof(CardboardiOSDevice_t2496114637, ___debugOnboarding_36)); }
	inline bool get_debugOnboarding_36() const { return ___debugOnboarding_36; }
	inline bool* get_address_of_debugOnboarding_36() { return &___debugOnboarding_36; }
	inline void set_debugOnboarding_36(bool value)
	{
		___debugOnboarding_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
