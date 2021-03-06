﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion435440829.h"

// System.Single CardboardProfile/Distortion::distort(System.Single)
extern "C"  float Distortion_distort_m586609828 (Distortion_t435440829 * __this, float ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile/Distortion::distortInv(System.Single)
extern "C"  float Distortion_distortInv_m2315527615 (Distortion_t435440829 * __this, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Distortion_t435440829;
struct Distortion_t435440829_marshaled_pinvoke;

extern "C" void Distortion_t435440829_marshal_pinvoke(const Distortion_t435440829& unmarshaled, Distortion_t435440829_marshaled_pinvoke& marshaled);
extern "C" void Distortion_t435440829_marshal_pinvoke_back(const Distortion_t435440829_marshaled_pinvoke& marshaled, Distortion_t435440829& unmarshaled);
extern "C" void Distortion_t435440829_marshal_pinvoke_cleanup(Distortion_t435440829_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Distortion_t435440829;
struct Distortion_t435440829_marshaled_com;

extern "C" void Distortion_t435440829_marshal_com(const Distortion_t435440829& unmarshaled, Distortion_t435440829_marshaled_com& marshaled);
extern "C" void Distortion_t435440829_marshal_com_back(const Distortion_t435440829_marshaled_com& marshaled, Distortion_t435440829& unmarshaled);
extern "C" void Distortion_t435440829_marshal_com_cleanup(Distortion_t435440829_marshaled_com& marshaled);
