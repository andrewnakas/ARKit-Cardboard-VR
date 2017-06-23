#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Boolean3825574718.h"

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Threading.Thread
struct Thread_t241561612;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t3364249716;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorClientSocket
struct  EmulatorClientSocket_t2001911543  : public MonoBehaviour_t1158329972
{
public:
	// System.Net.Sockets.TcpClient Gvr.Internal.EmulatorClientSocket::phoneMirroringSocket
	TcpClient_t408947970 * ___phoneMirroringSocket_5;
	// System.Threading.Thread Gvr.Internal.EmulatorClientSocket::phoneEventThread
	Thread_t241561612 * ___phoneEventThread_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Gvr.Internal.EmulatorClientSocket::shouldStop
	bool ___shouldStop_7;
	// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorClientSocket::phoneRemote
	EmulatorManager_t3364249716 * ___phoneRemote_8;
	// System.Boolean Gvr.Internal.EmulatorClientSocket::<connected>k__BackingField
	bool ___U3CconnectedU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_phoneMirroringSocket_5() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543, ___phoneMirroringSocket_5)); }
	inline TcpClient_t408947970 * get_phoneMirroringSocket_5() const { return ___phoneMirroringSocket_5; }
	inline TcpClient_t408947970 ** get_address_of_phoneMirroringSocket_5() { return &___phoneMirroringSocket_5; }
	inline void set_phoneMirroringSocket_5(TcpClient_t408947970 * value)
	{
		___phoneMirroringSocket_5 = value;
		Il2CppCodeGenWriteBarrier(&___phoneMirroringSocket_5, value);
	}

	inline static int32_t get_offset_of_phoneEventThread_6() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543, ___phoneEventThread_6)); }
	inline Thread_t241561612 * get_phoneEventThread_6() const { return ___phoneEventThread_6; }
	inline Thread_t241561612 ** get_address_of_phoneEventThread_6() { return &___phoneEventThread_6; }
	inline void set_phoneEventThread_6(Thread_t241561612 * value)
	{
		___phoneEventThread_6 = value;
		Il2CppCodeGenWriteBarrier(&___phoneEventThread_6, value);
	}

	inline static int32_t get_offset_of_shouldStop_7() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543, ___shouldStop_7)); }
	inline bool get_shouldStop_7() const { return ___shouldStop_7; }
	inline bool* get_address_of_shouldStop_7() { return &___shouldStop_7; }
	inline void set_shouldStop_7(bool value)
	{
		___shouldStop_7 = value;
	}

	inline static int32_t get_offset_of_phoneRemote_8() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543, ___phoneRemote_8)); }
	inline EmulatorManager_t3364249716 * get_phoneRemote_8() const { return ___phoneRemote_8; }
	inline EmulatorManager_t3364249716 ** get_address_of_phoneRemote_8() { return &___phoneRemote_8; }
	inline void set_phoneRemote_8(EmulatorManager_t3364249716 * value)
	{
		___phoneRemote_8 = value;
		Il2CppCodeGenWriteBarrier(&___phoneRemote_8, value);
	}

	inline static int32_t get_offset_of_U3CconnectedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543, ___U3CconnectedU3Ek__BackingField_9)); }
	inline bool get_U3CconnectedU3Ek__BackingField_9() const { return ___U3CconnectedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CconnectedU3Ek__BackingField_9() { return &___U3CconnectedU3Ek__BackingField_9; }
	inline void set_U3CconnectedU3Ek__BackingField_9(bool value)
	{
		___U3CconnectedU3Ek__BackingField_9 = value;
	}
};

struct EmulatorClientSocket_t2001911543_StaticFields
{
public:
	// System.Int32 Gvr.Internal.EmulatorClientSocket::kPhoneEventPort
	int32_t ___kPhoneEventPort_2;

public:
	inline static int32_t get_offset_of_kPhoneEventPort_2() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2001911543_StaticFields, ___kPhoneEventPort_2)); }
	inline int32_t get_kPhoneEventPort_2() const { return ___kPhoneEventPort_2; }
	inline int32_t* get_address_of_kPhoneEventPort_2() { return &___kPhoneEventPort_2; }
	inline void set_kPhoneEventPort_2(int32_t value)
	{
		___kPhoneEventPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
