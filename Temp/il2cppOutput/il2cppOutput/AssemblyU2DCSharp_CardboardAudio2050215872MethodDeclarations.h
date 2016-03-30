#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CardboardAudioListener
struct CardboardAudioListener_t1952397460;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.Transform
struct Transform_t284553113;
// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t3915230557;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardAudioListener1952397460.h"
#include "AssemblyU2DCSharp_CardboardAudio_Quality2315868383.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode3071838028.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void CardboardAudio::.cctor()
extern "C"  void CardboardAudio__cctor_m1852486194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_SampleRate()
extern "C"  int32_t CardboardAudio_get_SampleRate_m3881895562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_NumChannels()
extern "C"  int32_t CardboardAudio_get_NumChannels_m4079003256 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_FramesPerBuffer()
extern "C"  int32_t CardboardAudio_get_FramesPerBuffer_m1145913849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudioListener,CardboardAudio/Quality)
extern "C"  void CardboardAudio_Initialize_m1550916369 (Il2CppObject * __this /* static, unused */, CardboardAudioListener_t1952397460 * ___listener, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown(CardboardAudioListener)
extern "C"  void CardboardAudio_Shutdown_m2163868491 (Il2CppObject * __this /* static, unused */, CardboardAudioListener_t1952397460 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessAudioListener(System.Single[],System.Int32)
extern "C"  void CardboardAudio_ProcessAudioListener_m2745259570 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioListener(System.Single,System.Single)
extern "C"  void CardboardAudio_UpdateAudioListener_m75382006 (Il2CppObject * __this /* static, unused */, float ___globalGainDb, float ___worldScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t CardboardAudio_CreateAudioSource_m3640419927 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioSource(System.Int32)
extern "C"  void CardboardAudio_DestroyAudioSource_m3624347089 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessAudioSource(System.Int32,System.Single[],System.Int32)
extern "C"  void CardboardAudio_ProcessAudioSource_m1137709432 (Il2CppObject * __this /* static, unused */, int32_t ___id, SingleU5BU5D_t1219431280* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioSource(System.Int32,UnityEngine.Transform,System.Single,UnityEngine.AudioRolloffMode,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_UpdateAudioSource_m2290556155 (Il2CppObject * __this /* static, unused */, int32_t ___id, Transform_t284553113 * ___transform, float ___gainDb, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, float ___alpha, float ___sharpness, float ___occlusion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioRoom()
extern "C"  int32_t CardboardAudio_CreateAudioRoom_m2391569056 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioRoom(System.Int32)
extern "C"  void CardboardAudio_DestroyAudioRoom_m539862929 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioRoom(System.Int32,UnityEngine.Transform,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3)
extern "C"  void CardboardAudio_UpdateAudioRoom_m506809698 (Il2CppObject * __this /* static, unused */, int32_t ___id, Transform_t284553113 * ___transform, SurfaceMaterialU5BU5D_t3915230557* ___materials, float ___reflectivity, float ___reverbGainDb, float ___reverbBrightness, float ___reverbTime, Vector3_t3525329789  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float CardboardAudio_ComputeOcclusion_m2850513842 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___sourceTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] CardboardAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t2741383957* CardboardAudio_Generate2dPolarPattern_m4233546370 (Il2CppObject * __this /* static, unused */, float ___alpha, float ___order, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float CardboardAudio_ConvertAmplitudeFromDb_m3890921214 (Il2CppObject * __this /* static, unused */, float ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void CardboardAudio_ConvertAudioTransformFromUnity_m54255961 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessListener(System.Single[],System.Int32)
extern "C"  void CardboardAudio_ProcessListener_m1835548394 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___data, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerGain(System.Single)
extern "C"  void CardboardAudio_SetListenerGain_m3977633245 (Il2CppObject * __this /* static, unused */, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetListenerTransform_m1729603530 (Il2CppObject * __this /* static, unused */, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateSource(System.Boolean)
extern "C"  int32_t CardboardAudio_CreateSource_m3465173509 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroySource(System.Int32)
extern "C"  void CardboardAudio_DestroySource_m134339007 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessSource(System.Int32,System.Int32,System.Single[],System.Single[])
extern "C"  void CardboardAudio_ProcessSource_m292773161 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, int32_t ___bufferSize, SingleU5BU5D_t1219431280* ___input, SingleU5BU5D_t1219431280* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceDirectivity_m3216441311 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___alpha, float ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDistanceAttenuationMethod(System.Int32,UnityEngine.AudioRolloffMode,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceDistanceAttenuationMethod_m2309881959 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceGain(System.Int32,System.Single)
extern "C"  void CardboardAudio_SetSourceGain_m605946219 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void CardboardAudio_SetSourceOcclusionIntensity_m2571863506 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceTransform(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceTransform_m296947089 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateRoom()
extern "C"  int32_t CardboardAudio_CreateRoom_m3399713358 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyRoom(System.Int32)
extern "C"  void CardboardAudio_DestroyRoom_m1501593343 (Il2CppObject * __this /* static, unused */, int32_t ___roomId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetRoomProperties(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetRoomProperties_m1701032588 (Il2CppObject * __this /* static, unused */, int32_t ___roomId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, float ___dx, float ___dy, float ___dz, SurfaceMaterialU5BU5D_t3915230557* ___materialNames, float ___reflectionScalar, float ___reverbGain, float ___reverbBrightness, float ___reverbTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C"  void CardboardAudio_Initialize_m3624276046 (Il2CppObject * __this /* static, unused */, int32_t ___quality, int32_t ___sampleRate, int32_t ___numChannels, int32_t ___framesPerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown()
extern "C"  void CardboardAudio_Shutdown_m3984913887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
