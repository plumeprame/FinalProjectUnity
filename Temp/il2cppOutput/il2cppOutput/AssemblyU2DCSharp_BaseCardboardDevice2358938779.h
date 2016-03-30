#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t260535031;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_BaseVRDevice4087747107.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseCardboardDevice
struct  BaseCardboardDevice_t2358938779  : public BaseVRDevice_t4087747107
{
public:
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t1219431280* ___headData_24;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t1219431280* ___viewData_25;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t1219431280* ___profileData_26;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t277289660  ___headView_27;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t277289660  ___leftEyeView_28;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t277289660  ___rightEyeView_29;
	// System.Collections.Generic.Queue`1<System.Int32> BaseCardboardDevice::eventQueue
	Queue_1_t260535031 * ___eventQueue_30;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_31;
	// System.Boolean BaseCardboardDevice::debugDisableNativeDistortion
	bool ___debugDisableNativeDistortion_32;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_33;
	// System.Int32[] BaseCardboardDevice::events
	Int32U5BU5D_t1809983122* ___events_34;

public:
	inline static int32_t get_offset_of_headData_24() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___headData_24)); }
	inline SingleU5BU5D_t1219431280* get_headData_24() const { return ___headData_24; }
	inline SingleU5BU5D_t1219431280** get_address_of_headData_24() { return &___headData_24; }
	inline void set_headData_24(SingleU5BU5D_t1219431280* value)
	{
		___headData_24 = value;
		Il2CppCodeGenWriteBarrier(&___headData_24, value);
	}

	inline static int32_t get_offset_of_viewData_25() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___viewData_25)); }
	inline SingleU5BU5D_t1219431280* get_viewData_25() const { return ___viewData_25; }
	inline SingleU5BU5D_t1219431280** get_address_of_viewData_25() { return &___viewData_25; }
	inline void set_viewData_25(SingleU5BU5D_t1219431280* value)
	{
		___viewData_25 = value;
		Il2CppCodeGenWriteBarrier(&___viewData_25, value);
	}

	inline static int32_t get_offset_of_profileData_26() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___profileData_26)); }
	inline SingleU5BU5D_t1219431280* get_profileData_26() const { return ___profileData_26; }
	inline SingleU5BU5D_t1219431280** get_address_of_profileData_26() { return &___profileData_26; }
	inline void set_profileData_26(SingleU5BU5D_t1219431280* value)
	{
		___profileData_26 = value;
		Il2CppCodeGenWriteBarrier(&___profileData_26, value);
	}

	inline static int32_t get_offset_of_headView_27() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___headView_27)); }
	inline Matrix4x4_t277289660  get_headView_27() const { return ___headView_27; }
	inline Matrix4x4_t277289660 * get_address_of_headView_27() { return &___headView_27; }
	inline void set_headView_27(Matrix4x4_t277289660  value)
	{
		___headView_27 = value;
	}

	inline static int32_t get_offset_of_leftEyeView_28() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___leftEyeView_28)); }
	inline Matrix4x4_t277289660  get_leftEyeView_28() const { return ___leftEyeView_28; }
	inline Matrix4x4_t277289660 * get_address_of_leftEyeView_28() { return &___leftEyeView_28; }
	inline void set_leftEyeView_28(Matrix4x4_t277289660  value)
	{
		___leftEyeView_28 = value;
	}

	inline static int32_t get_offset_of_rightEyeView_29() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___rightEyeView_29)); }
	inline Matrix4x4_t277289660  get_rightEyeView_29() const { return ___rightEyeView_29; }
	inline Matrix4x4_t277289660 * get_address_of_rightEyeView_29() { return &___rightEyeView_29; }
	inline void set_rightEyeView_29(Matrix4x4_t277289660  value)
	{
		___rightEyeView_29 = value;
	}

	inline static int32_t get_offset_of_eventQueue_30() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___eventQueue_30)); }
	inline Queue_1_t260535031 * get_eventQueue_30() const { return ___eventQueue_30; }
	inline Queue_1_t260535031 ** get_address_of_eventQueue_30() { return &___eventQueue_30; }
	inline void set_eventQueue_30(Queue_1_t260535031 * value)
	{
		___eventQueue_30 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueue_30, value);
	}

	inline static int32_t get_offset_of_debugDisableNativeProjections_31() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___debugDisableNativeProjections_31)); }
	inline bool get_debugDisableNativeProjections_31() const { return ___debugDisableNativeProjections_31; }
	inline bool* get_address_of_debugDisableNativeProjections_31() { return &___debugDisableNativeProjections_31; }
	inline void set_debugDisableNativeProjections_31(bool value)
	{
		___debugDisableNativeProjections_31 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeDistortion_32() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___debugDisableNativeDistortion_32)); }
	inline bool get_debugDisableNativeDistortion_32() const { return ___debugDisableNativeDistortion_32; }
	inline bool* get_address_of_debugDisableNativeDistortion_32() { return &___debugDisableNativeDistortion_32; }
	inline void set_debugDisableNativeDistortion_32(bool value)
	{
		___debugDisableNativeDistortion_32 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeUILayer_33() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___debugDisableNativeUILayer_33)); }
	inline bool get_debugDisableNativeUILayer_33() const { return ___debugDisableNativeUILayer_33; }
	inline bool* get_address_of_debugDisableNativeUILayer_33() { return &___debugDisableNativeUILayer_33; }
	inline void set_debugDisableNativeUILayer_33(bool value)
	{
		___debugDisableNativeUILayer_33 = value;
	}

	inline static int32_t get_offset_of_events_34() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___events_34)); }
	inline Int32U5BU5D_t1809983122* get_events_34() const { return ___events_34; }
	inline Int32U5BU5D_t1809983122** get_address_of_events_34() { return &___events_34; }
	inline void set_events_34(Int32U5BU5D_t1809983122* value)
	{
		___events_34 = value;
		Il2CppCodeGenWriteBarrier(&___events_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
