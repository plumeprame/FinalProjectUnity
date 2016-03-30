#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CardboardEye
struct CardboardEye_t2174202011;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_CardboardAudioRoom_SurfaceMateria459108564.h"
#include "AssemblyU2DCSharp_CardboardEye2174202011.h"

#pragma once
// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t3915230557  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// CardboardEye[]
struct CardboardEyeU5BU5D_t1172581018  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) CardboardEye_t2174202011 * m_Items[1];

public:
	inline CardboardEye_t2174202011 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CardboardEye_t2174202011 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CardboardEye_t2174202011 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
