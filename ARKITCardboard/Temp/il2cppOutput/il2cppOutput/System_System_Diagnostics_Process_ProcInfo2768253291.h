#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process/ProcInfo
struct  ProcInfo_t2768253291 
{
public:
	// System.IntPtr System.Diagnostics.Process/ProcInfo::process_handle
	IntPtr_t ___process_handle_0;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::thread_handle
	IntPtr_t ___thread_handle_1;
	// System.Int32 System.Diagnostics.Process/ProcInfo::pid
	int32_t ___pid_2;
	// System.Int32 System.Diagnostics.Process/ProcInfo::tid
	int32_t ___tid_3;
	// System.String[] System.Diagnostics.Process/ProcInfo::envKeys
	StringU5BU5D_t1642385972* ___envKeys_4;
	// System.String[] System.Diagnostics.Process/ProcInfo::envValues
	StringU5BU5D_t1642385972* ___envValues_5;
	// System.String System.Diagnostics.Process/ProcInfo::UserName
	String_t* ___UserName_6;
	// System.String System.Diagnostics.Process/ProcInfo::Domain
	String_t* ___Domain_7;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::Password
	IntPtr_t ___Password_8;
	// System.Boolean System.Diagnostics.Process/ProcInfo::LoadUserProfile
	bool ___LoadUserProfile_9;

public:
	inline static int32_t get_offset_of_process_handle_0() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___process_handle_0)); }
	inline IntPtr_t get_process_handle_0() const { return ___process_handle_0; }
	inline IntPtr_t* get_address_of_process_handle_0() { return &___process_handle_0; }
	inline void set_process_handle_0(IntPtr_t value)
	{
		___process_handle_0 = value;
	}

	inline static int32_t get_offset_of_thread_handle_1() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___thread_handle_1)); }
	inline IntPtr_t get_thread_handle_1() const { return ___thread_handle_1; }
	inline IntPtr_t* get_address_of_thread_handle_1() { return &___thread_handle_1; }
	inline void set_thread_handle_1(IntPtr_t value)
	{
		___thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_tid_3() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___tid_3)); }
	inline int32_t get_tid_3() const { return ___tid_3; }
	inline int32_t* get_address_of_tid_3() { return &___tid_3; }
	inline void set_tid_3(int32_t value)
	{
		___tid_3 = value;
	}

	inline static int32_t get_offset_of_envKeys_4() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___envKeys_4)); }
	inline StringU5BU5D_t1642385972* get_envKeys_4() const { return ___envKeys_4; }
	inline StringU5BU5D_t1642385972** get_address_of_envKeys_4() { return &___envKeys_4; }
	inline void set_envKeys_4(StringU5BU5D_t1642385972* value)
	{
		___envKeys_4 = value;
		Il2CppCodeGenWriteBarrier(&___envKeys_4, value);
	}

	inline static int32_t get_offset_of_envValues_5() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___envValues_5)); }
	inline StringU5BU5D_t1642385972* get_envValues_5() const { return ___envValues_5; }
	inline StringU5BU5D_t1642385972** get_address_of_envValues_5() { return &___envValues_5; }
	inline void set_envValues_5(StringU5BU5D_t1642385972* value)
	{
		___envValues_5 = value;
		Il2CppCodeGenWriteBarrier(&___envValues_5, value);
	}

	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier(&___UserName_6, value);
	}

	inline static int32_t get_offset_of_Domain_7() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___Domain_7)); }
	inline String_t* get_Domain_7() const { return ___Domain_7; }
	inline String_t** get_address_of_Domain_7() { return &___Domain_7; }
	inline void set_Domain_7(String_t* value)
	{
		___Domain_7 = value;
		Il2CppCodeGenWriteBarrier(&___Domain_7, value);
	}

	inline static int32_t get_offset_of_Password_8() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___Password_8)); }
	inline IntPtr_t get_Password_8() const { return ___Password_8; }
	inline IntPtr_t* get_address_of_Password_8() { return &___Password_8; }
	inline void set_Password_8(IntPtr_t value)
	{
		___Password_8 = value;
	}

	inline static int32_t get_offset_of_LoadUserProfile_9() { return static_cast<int32_t>(offsetof(ProcInfo_t2768253291, ___LoadUserProfile_9)); }
	inline bool get_LoadUserProfile_9() const { return ___LoadUserProfile_9; }
	inline bool* get_address_of_LoadUserProfile_9() { return &___LoadUserProfile_9; }
	inline void set_LoadUserProfile_9(bool value)
	{
		___LoadUserProfile_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t2768253291_marshaled_pinvoke
{
	intptr_t ___process_handle_0;
	intptr_t ___thread_handle_1;
	int32_t ___pid_2;
	int32_t ___tid_3;
	char** ___envKeys_4;
	char** ___envValues_5;
	char* ___UserName_6;
	char* ___Domain_7;
	intptr_t ___Password_8;
	int32_t ___LoadUserProfile_9;
};
// Native definition for COM marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t2768253291_marshaled_com
{
	intptr_t ___process_handle_0;
	intptr_t ___thread_handle_1;
	int32_t ___pid_2;
	int32_t ___tid_3;
	Il2CppChar** ___envKeys_4;
	Il2CppChar** ___envValues_5;
	Il2CppChar* ___UserName_6;
	Il2CppChar* ___Domain_7;
	intptr_t ___Password_8;
	int32_t ___LoadUserProfile_9;
};
