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
// Cardboard
struct Cardboard_t1761541558;
// UnityEngine.Camera
struct Camera_t3533968274;
// StereoController
struct StereoController_t1637909972;
// BaseVRDevice
struct BaseVRDevice_t4087747107;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Uri
struct Uri_t2776692961;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMe3847017660.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes756131735.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cardboard
struct  Cardboard_t1761541558  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Cardboard::uiLayerEnabled
	bool ___uiLayerEnabled_6;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_7;
	// Cardboard/DistortionCorrectionMethod Cardboard::distortionCorrection
	int32_t ___distortionCorrection_8;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_9;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_10;
	// Cardboard/BackButtonModes Cardboard::backButtonMode
	int32_t ___backButtonMode_11;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_12;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_13;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_14;
	// System.Boolean Cardboard::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_15;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_16;
	// System.Single Cardboard::stereoScreenScale
	float ___stereoScreenScale_18;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t3525329788  ___defaultComfortableViewingRange_20;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t2776692961 * ___DefaultDeviceProfile_21;
	// System.Int32 Cardboard::updatedToFrame
	int32_t ___updatedToFrame_22;
	// Cardboard/StereoScreenChangeDelegate Cardboard::OnStereoScreenChanged
	StereoScreenChangeDelegate_t4234461465 * ___OnStereoScreenChanged_23;
	// System.Action Cardboard::OnTrigger
	Action_t437523947 * ___OnTrigger_24;
	// System.Action Cardboard::OnTilt
	Action_t437523947 * ___OnTilt_25;
	// System.Action Cardboard::OnProfileChange
	Action_t437523947 * ___OnProfileChange_26;
	// System.Action Cardboard::OnBackButton
	Action_t437523947 * ___OnBackButton_27;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_29;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_30;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_31;
	// System.Boolean Cardboard::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_32;
	// System.Boolean Cardboard::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_uiLayerEnabled_6() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___uiLayerEnabled_6)); }
	inline bool get_uiLayerEnabled_6() const { return ___uiLayerEnabled_6; }
	inline bool* get_address_of_uiLayerEnabled_6() { return &___uiLayerEnabled_6; }
	inline void set_uiLayerEnabled_6(bool value)
	{
		___uiLayerEnabled_6 = value;
	}

	inline static int32_t get_offset_of_vrModeEnabled_7() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___vrModeEnabled_7)); }
	inline bool get_vrModeEnabled_7() const { return ___vrModeEnabled_7; }
	inline bool* get_address_of_vrModeEnabled_7() { return &___vrModeEnabled_7; }
	inline void set_vrModeEnabled_7(bool value)
	{
		___vrModeEnabled_7 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_8() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___distortionCorrection_8)); }
	inline int32_t get_distortionCorrection_8() const { return ___distortionCorrection_8; }
	inline int32_t* get_address_of_distortionCorrection_8() { return &___distortionCorrection_8; }
	inline void set_distortionCorrection_8(int32_t value)
	{
		___distortionCorrection_8 = value;
	}

	inline static int32_t get_offset_of_enableAlignmentMarker_9() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___enableAlignmentMarker_9)); }
	inline bool get_enableAlignmentMarker_9() const { return ___enableAlignmentMarker_9; }
	inline bool* get_address_of_enableAlignmentMarker_9() { return &___enableAlignmentMarker_9; }
	inline void set_enableAlignmentMarker_9(bool value)
	{
		___enableAlignmentMarker_9 = value;
	}

	inline static int32_t get_offset_of_enableSettingsButton_10() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___enableSettingsButton_10)); }
	inline bool get_enableSettingsButton_10() const { return ___enableSettingsButton_10; }
	inline bool* get_address_of_enableSettingsButton_10() { return &___enableSettingsButton_10; }
	inline void set_enableSettingsButton_10(bool value)
	{
		___enableSettingsButton_10 = value;
	}

	inline static int32_t get_offset_of_backButtonMode_11() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___backButtonMode_11)); }
	inline int32_t get_backButtonMode_11() const { return ___backButtonMode_11; }
	inline int32_t* get_address_of_backButtonMode_11() { return &___backButtonMode_11; }
	inline void set_backButtonMode_11(int32_t value)
	{
		___backButtonMode_11 = value;
	}

	inline static int32_t get_offset_of_tapIsTrigger_12() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___tapIsTrigger_12)); }
	inline bool get_tapIsTrigger_12() const { return ___tapIsTrigger_12; }
	inline bool* get_address_of_tapIsTrigger_12() { return &___tapIsTrigger_12; }
	inline void set_tapIsTrigger_12(bool value)
	{
		___tapIsTrigger_12 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_13() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___neckModelScale_13)); }
	inline float get_neckModelScale_13() const { return ___neckModelScale_13; }
	inline float* get_address_of_neckModelScale_13() { return &___neckModelScale_13; }
	inline void set_neckModelScale_13(float value)
	{
		___neckModelScale_13 = value;
	}

	inline static int32_t get_offset_of_autoDriftCorrection_14() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___autoDriftCorrection_14)); }
	inline bool get_autoDriftCorrection_14() const { return ___autoDriftCorrection_14; }
	inline bool* get_address_of_autoDriftCorrection_14() { return &___autoDriftCorrection_14; }
	inline void set_autoDriftCorrection_14(bool value)
	{
		___autoDriftCorrection_14 = value;
	}

	inline static int32_t get_offset_of_electronicDisplayStabilization_15() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___electronicDisplayStabilization_15)); }
	inline bool get_electronicDisplayStabilization_15() const { return ___electronicDisplayStabilization_15; }
	inline bool* get_address_of_electronicDisplayStabilization_15() { return &___electronicDisplayStabilization_15; }
	inline void set_electronicDisplayStabilization_15(bool value)
	{
		___electronicDisplayStabilization_15 = value;
	}

	inline static int32_t get_offset_of_syncWithCardboardApp_16() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___syncWithCardboardApp_16)); }
	inline bool get_syncWithCardboardApp_16() const { return ___syncWithCardboardApp_16; }
	inline bool* get_address_of_syncWithCardboardApp_16() { return &___syncWithCardboardApp_16; }
	inline void set_syncWithCardboardApp_16(bool value)
	{
		___syncWithCardboardApp_16 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_18() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___stereoScreenScale_18)); }
	inline float get_stereoScreenScale_18() const { return ___stereoScreenScale_18; }
	inline float* get_address_of_stereoScreenScale_18() { return &___stereoScreenScale_18; }
	inline void set_stereoScreenScale_18(float value)
	{
		___stereoScreenScale_18 = value;
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_20() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___defaultComfortableViewingRange_20)); }
	inline Vector2_t3525329788  get_defaultComfortableViewingRange_20() const { return ___defaultComfortableViewingRange_20; }
	inline Vector2_t3525329788 * get_address_of_defaultComfortableViewingRange_20() { return &___defaultComfortableViewingRange_20; }
	inline void set_defaultComfortableViewingRange_20(Vector2_t3525329788  value)
	{
		___defaultComfortableViewingRange_20 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_21() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___DefaultDeviceProfile_21)); }
	inline Uri_t2776692961 * get_DefaultDeviceProfile_21() const { return ___DefaultDeviceProfile_21; }
	inline Uri_t2776692961 ** get_address_of_DefaultDeviceProfile_21() { return &___DefaultDeviceProfile_21; }
	inline void set_DefaultDeviceProfile_21(Uri_t2776692961 * value)
	{
		___DefaultDeviceProfile_21 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_21, value);
	}

	inline static int32_t get_offset_of_updatedToFrame_22() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___updatedToFrame_22)); }
	inline int32_t get_updatedToFrame_22() const { return ___updatedToFrame_22; }
	inline int32_t* get_address_of_updatedToFrame_22() { return &___updatedToFrame_22; }
	inline void set_updatedToFrame_22(int32_t value)
	{
		___updatedToFrame_22 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_23() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___OnStereoScreenChanged_23)); }
	inline StereoScreenChangeDelegate_t4234461465 * get_OnStereoScreenChanged_23() const { return ___OnStereoScreenChanged_23; }
	inline StereoScreenChangeDelegate_t4234461465 ** get_address_of_OnStereoScreenChanged_23() { return &___OnStereoScreenChanged_23; }
	inline void set_OnStereoScreenChanged_23(StereoScreenChangeDelegate_t4234461465 * value)
	{
		___OnStereoScreenChanged_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_23, value);
	}

	inline static int32_t get_offset_of_OnTrigger_24() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___OnTrigger_24)); }
	inline Action_t437523947 * get_OnTrigger_24() const { return ___OnTrigger_24; }
	inline Action_t437523947 ** get_address_of_OnTrigger_24() { return &___OnTrigger_24; }
	inline void set_OnTrigger_24(Action_t437523947 * value)
	{
		___OnTrigger_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrigger_24, value);
	}

	inline static int32_t get_offset_of_OnTilt_25() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___OnTilt_25)); }
	inline Action_t437523947 * get_OnTilt_25() const { return ___OnTilt_25; }
	inline Action_t437523947 ** get_address_of_OnTilt_25() { return &___OnTilt_25; }
	inline void set_OnTilt_25(Action_t437523947 * value)
	{
		___OnTilt_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnTilt_25, value);
	}

	inline static int32_t get_offset_of_OnProfileChange_26() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___OnProfileChange_26)); }
	inline Action_t437523947 * get_OnProfileChange_26() const { return ___OnProfileChange_26; }
	inline Action_t437523947 ** get_address_of_OnProfileChange_26() { return &___OnProfileChange_26; }
	inline void set_OnProfileChange_26(Action_t437523947 * value)
	{
		___OnProfileChange_26 = value;
		Il2CppCodeGenWriteBarrier(&___OnProfileChange_26, value);
	}

	inline static int32_t get_offset_of_OnBackButton_27() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___OnBackButton_27)); }
	inline Action_t437523947 * get_OnBackButton_27() const { return ___OnBackButton_27; }
	inline Action_t437523947 ** get_address_of_OnBackButton_27() { return &___OnBackButton_27; }
	inline void set_OnBackButton_27(Action_t437523947 * value)
	{
		___OnBackButton_27 = value;
		Il2CppCodeGenWriteBarrier(&___OnBackButton_27, value);
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CNativeUILayerSupportedU3Ek__BackingField_29)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_29() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_29() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_29; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_29(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CTriggeredU3Ek__BackingField_30)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_30() const { return ___U3CTriggeredU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_30() { return &___U3CTriggeredU3Ek__BackingField_30; }
	inline void set_U3CTriggeredU3Ek__BackingField_30(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CTiltedU3Ek__BackingField_31)); }
	inline bool get_U3CTiltedU3Ek__BackingField_31() const { return ___U3CTiltedU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_31() { return &___U3CTiltedU3Ek__BackingField_31; }
	inline void set_U3CTiltedU3Ek__BackingField_31(bool value)
	{
		___U3CTiltedU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CProfileChangedU3Ek__BackingField_32)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_32() const { return ___U3CProfileChangedU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_32() { return &___U3CProfileChangedU3Ek__BackingField_32; }
	inline void set_U3CProfileChangedU3Ek__BackingField_32(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558, ___U3CBackButtonPressedU3Ek__BackingField_33)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_33() const { return ___U3CBackButtonPressedU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_33() { return &___U3CBackButtonPressedU3Ek__BackingField_33; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_33(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_33 = value;
	}
};

struct Cardboard_t1761541558_StaticFields
{
public:
	// Cardboard Cardboard::sdk
	Cardboard_t1761541558 * ___sdk_3;
	// UnityEngine.Camera Cardboard::currentMainCamera
	Camera_t3533968274 * ___currentMainCamera_4;
	// StereoController Cardboard::currentController
	StereoController_t1637909972 * ___currentController_5;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t4087747107 * ___device_17;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t12905170 * ___stereoScreen_19;

public:
	inline static int32_t get_offset_of_sdk_3() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558_StaticFields, ___sdk_3)); }
	inline Cardboard_t1761541558 * get_sdk_3() const { return ___sdk_3; }
	inline Cardboard_t1761541558 ** get_address_of_sdk_3() { return &___sdk_3; }
	inline void set_sdk_3(Cardboard_t1761541558 * value)
	{
		___sdk_3 = value;
		Il2CppCodeGenWriteBarrier(&___sdk_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t3533968274 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t3533968274 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t3533968274 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_currentController_5() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558_StaticFields, ___currentController_5)); }
	inline StereoController_t1637909972 * get_currentController_5() const { return ___currentController_5; }
	inline StereoController_t1637909972 ** get_address_of_currentController_5() { return &___currentController_5; }
	inline void set_currentController_5(StereoController_t1637909972 * value)
	{
		___currentController_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_5, value);
	}

	inline static int32_t get_offset_of_device_17() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558_StaticFields, ___device_17)); }
	inline BaseVRDevice_t4087747107 * get_device_17() const { return ___device_17; }
	inline BaseVRDevice_t4087747107 ** get_address_of_device_17() { return &___device_17; }
	inline void set_device_17(BaseVRDevice_t4087747107 * value)
	{
		___device_17 = value;
		Il2CppCodeGenWriteBarrier(&___device_17, value);
	}

	inline static int32_t get_offset_of_stereoScreen_19() { return static_cast<int32_t>(offsetof(Cardboard_t1761541558_StaticFields, ___stereoScreen_19)); }
	inline RenderTexture_t12905170 * get_stereoScreen_19() const { return ___stereoScreen_19; }
	inline RenderTexture_t12905170 ** get_address_of_stereoScreen_19() { return &___stereoScreen_19; }
	inline void set_stereoScreen_19(RenderTexture_t12905170 * value)
	{
		___stereoScreen_19 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
