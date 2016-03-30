#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct  MouseLook_t2714862275  : public MonoBehaviour_t3012272455
{
public:
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_3;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_8;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_9;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_t1891715979  ___m_CharacterTargetRot_10;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_t1891715979  ___m_CameraTargetRot_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_12;

public:
	inline static int32_t get_offset_of_XSensitivity_2() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___XSensitivity_2)); }
	inline float get_XSensitivity_2() const { return ___XSensitivity_2; }
	inline float* get_address_of_XSensitivity_2() { return &___XSensitivity_2; }
	inline void set_XSensitivity_2(float value)
	{
		___XSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_YSensitivity_3() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___YSensitivity_3)); }
	inline float get_YSensitivity_3() const { return ___YSensitivity_3; }
	inline float* get_address_of_YSensitivity_3() { return &___YSensitivity_3; }
	inline void set_YSensitivity_3(float value)
	{
		___YSensitivity_3 = value;
	}

	inline static int32_t get_offset_of_clampVerticalRotation_4() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___clampVerticalRotation_4)); }
	inline bool get_clampVerticalRotation_4() const { return ___clampVerticalRotation_4; }
	inline bool* get_address_of_clampVerticalRotation_4() { return &___clampVerticalRotation_4; }
	inline void set_clampVerticalRotation_4(bool value)
	{
		___clampVerticalRotation_4 = value;
	}

	inline static int32_t get_offset_of_MinimumX_5() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___MinimumX_5)); }
	inline float get_MinimumX_5() const { return ___MinimumX_5; }
	inline float* get_address_of_MinimumX_5() { return &___MinimumX_5; }
	inline void set_MinimumX_5(float value)
	{
		___MinimumX_5 = value;
	}

	inline static int32_t get_offset_of_MaximumX_6() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___MaximumX_6)); }
	inline float get_MaximumX_6() const { return ___MaximumX_6; }
	inline float* get_address_of_MaximumX_6() { return &___MaximumX_6; }
	inline void set_MaximumX_6(float value)
	{
		___MaximumX_6 = value;
	}

	inline static int32_t get_offset_of_smooth_7() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___smooth_7)); }
	inline bool get_smooth_7() const { return ___smooth_7; }
	inline bool* get_address_of_smooth_7() { return &___smooth_7; }
	inline void set_smooth_7(bool value)
	{
		___smooth_7 = value;
	}

	inline static int32_t get_offset_of_smoothTime_8() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___smoothTime_8)); }
	inline float get_smoothTime_8() const { return ___smoothTime_8; }
	inline float* get_address_of_smoothTime_8() { return &___smoothTime_8; }
	inline void set_smoothTime_8(float value)
	{
		___smoothTime_8 = value;
	}

	inline static int32_t get_offset_of_lockCursor_9() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___lockCursor_9)); }
	inline bool get_lockCursor_9() const { return ___lockCursor_9; }
	inline bool* get_address_of_lockCursor_9() { return &___lockCursor_9; }
	inline void set_lockCursor_9(bool value)
	{
		___lockCursor_9 = value;
	}

	inline static int32_t get_offset_of_m_CharacterTargetRot_10() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___m_CharacterTargetRot_10)); }
	inline Quaternion_t1891715979  get_m_CharacterTargetRot_10() const { return ___m_CharacterTargetRot_10; }
	inline Quaternion_t1891715979 * get_address_of_m_CharacterTargetRot_10() { return &___m_CharacterTargetRot_10; }
	inline void set_m_CharacterTargetRot_10(Quaternion_t1891715979  value)
	{
		___m_CharacterTargetRot_10 = value;
	}

	inline static int32_t get_offset_of_m_CameraTargetRot_11() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___m_CameraTargetRot_11)); }
	inline Quaternion_t1891715979  get_m_CameraTargetRot_11() const { return ___m_CameraTargetRot_11; }
	inline Quaternion_t1891715979 * get_address_of_m_CameraTargetRot_11() { return &___m_CameraTargetRot_11; }
	inline void set_m_CameraTargetRot_11(Quaternion_t1891715979  value)
	{
		___m_CameraTargetRot_11 = value;
	}

	inline static int32_t get_offset_of_m_cursorIsLocked_12() { return static_cast<int32_t>(offsetof(MouseLook_t2714862275, ___m_cursorIsLocked_12)); }
	inline bool get_m_cursorIsLocked_12() const { return ___m_cursorIsLocked_12; }
	inline bool* get_address_of_m_cursorIsLocked_12() { return &___m_cursorIsLocked_12; }
	inline void set_m_cursorIsLocked_12(bool value)
	{
		___m_cursorIsLocked_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
