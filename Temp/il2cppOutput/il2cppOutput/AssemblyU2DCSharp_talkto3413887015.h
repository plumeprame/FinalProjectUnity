#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// talkto
struct  talkto_t3413887015  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 talkto::TextBoxOnCheck
	int32_t ___TextBoxOnCheck_2;
	// UnityEngine.GameObject talkto::MessageBox
	GameObject_t4012695102 * ___MessageBox_3;
	// UnityEngine.GameObject talkto::TextBox
	GameObject_t4012695102 * ___TextBox_4;
	// System.String talkto::openText
	String_t* ___openText_5;
	// System.String talkto::closeText
	String_t* ___closeText_6;
	// System.String talkto::TextMessage
	String_t* ___TextMessage_7;

public:
	inline static int32_t get_offset_of_TextBoxOnCheck_2() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___TextBoxOnCheck_2)); }
	inline int32_t get_TextBoxOnCheck_2() const { return ___TextBoxOnCheck_2; }
	inline int32_t* get_address_of_TextBoxOnCheck_2() { return &___TextBoxOnCheck_2; }
	inline void set_TextBoxOnCheck_2(int32_t value)
	{
		___TextBoxOnCheck_2 = value;
	}

	inline static int32_t get_offset_of_MessageBox_3() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___MessageBox_3)); }
	inline GameObject_t4012695102 * get_MessageBox_3() const { return ___MessageBox_3; }
	inline GameObject_t4012695102 ** get_address_of_MessageBox_3() { return &___MessageBox_3; }
	inline void set_MessageBox_3(GameObject_t4012695102 * value)
	{
		___MessageBox_3 = value;
		Il2CppCodeGenWriteBarrier(&___MessageBox_3, value);
	}

	inline static int32_t get_offset_of_TextBox_4() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___TextBox_4)); }
	inline GameObject_t4012695102 * get_TextBox_4() const { return ___TextBox_4; }
	inline GameObject_t4012695102 ** get_address_of_TextBox_4() { return &___TextBox_4; }
	inline void set_TextBox_4(GameObject_t4012695102 * value)
	{
		___TextBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___TextBox_4, value);
	}

	inline static int32_t get_offset_of_openText_5() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___openText_5)); }
	inline String_t* get_openText_5() const { return ___openText_5; }
	inline String_t** get_address_of_openText_5() { return &___openText_5; }
	inline void set_openText_5(String_t* value)
	{
		___openText_5 = value;
		Il2CppCodeGenWriteBarrier(&___openText_5, value);
	}

	inline static int32_t get_offset_of_closeText_6() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___closeText_6)); }
	inline String_t* get_closeText_6() const { return ___closeText_6; }
	inline String_t** get_address_of_closeText_6() { return &___closeText_6; }
	inline void set_closeText_6(String_t* value)
	{
		___closeText_6 = value;
		Il2CppCodeGenWriteBarrier(&___closeText_6, value);
	}

	inline static int32_t get_offset_of_TextMessage_7() { return static_cast<int32_t>(offsetof(talkto_t3413887015, ___TextMessage_7)); }
	inline String_t* get_TextMessage_7() const { return ___TextMessage_7; }
	inline String_t** get_address_of_TextMessage_7() { return &___TextMessage_7; }
	inline void set_TextMessage_7(String_t* value)
	{
		___TextMessage_7 = value;
		Il2CppCodeGenWriteBarrier(&___TextMessage_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
