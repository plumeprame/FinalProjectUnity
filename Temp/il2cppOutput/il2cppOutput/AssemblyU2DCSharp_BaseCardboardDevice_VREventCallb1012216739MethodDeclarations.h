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

// BaseCardboardDevice/VREventCallback
struct VREventCallback_t1012216739;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BaseCardboardDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void VREventCallback__ctor_m618645638 (VREventCallback_t1012216739 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice/VREventCallback::Invoke(System.Int32)
extern "C"  void VREventCallback_Invoke_m2799646129 (VREventCallback_t1012216739 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t1012216739(Il2CppObject* delegate, int32_t ___eventID);
// System.IAsyncResult BaseCardboardDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VREventCallback_BeginInvoke_m2405046434 (VREventCallback_t1012216739 * __this, int32_t ___eventID, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void VREventCallback_EndInvoke_m2395499926 (VREventCallback_t1012216739 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
