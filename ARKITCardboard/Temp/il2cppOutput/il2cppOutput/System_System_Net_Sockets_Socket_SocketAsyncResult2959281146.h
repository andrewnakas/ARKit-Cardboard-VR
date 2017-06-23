#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3328960782.h"

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Exception
struct Exception_t1927440687;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t3135158083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketAsyncResult
struct  SocketAsyncResult_t2959281146  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t3821512045 * ___Sock_0;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	IntPtr_t ___handle_1;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	Il2CppObject * ___state_2;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t163412349 * ___callback_3;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t677569169 * ___waithandle_4;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t1927440687 * ___delayedException_5;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t4156119363 * ___EndPoint_6;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t3397334013* ___Buffer_7;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size_9;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags_10;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t3821512045 * ___AcceptSocket_11;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t4087230954* ___Addresses_12;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port_13;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	Il2CppObject* ___Buffers_14;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t3821512045 * ___acc_socket_16;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::total
	int32_t ___total_17;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed
	bool ___completed_19;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::blocking
	bool ___blocking_20;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::error
	int32_t ___error_21;
	// System.Net.Sockets.Socket/SocketOperation System.Net.Sockets.Socket/SocketAsyncResult::operation
	int32_t ___operation_22;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::ares
	Il2CppObject * ___ares_23;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::EndCalled
	int32_t ___EndCalled_24;

public:
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Sock_0)); }
	inline Socket_t3821512045 * get_Sock_0() const { return ___Sock_0; }
	inline Socket_t3821512045 ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(Socket_t3821512045 * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sock_0, value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___state_2)); }
	inline Il2CppObject * get_state_2() const { return ___state_2; }
	inline Il2CppObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(Il2CppObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier(&___state_2, value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___callback_3)); }
	inline AsyncCallback_t163412349 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t163412349 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t163412349 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___callback_3, value);
	}

	inline static int32_t get_offset_of_waithandle_4() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___waithandle_4)); }
	inline WaitHandle_t677569169 * get_waithandle_4() const { return ___waithandle_4; }
	inline WaitHandle_t677569169 ** get_address_of_waithandle_4() { return &___waithandle_4; }
	inline void set_waithandle_4(WaitHandle_t677569169 * value)
	{
		___waithandle_4 = value;
		Il2CppCodeGenWriteBarrier(&___waithandle_4, value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___delayedException_5)); }
	inline Exception_t1927440687 * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t1927440687 ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t1927440687 * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier(&___delayedException_5, value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___EndPoint_6)); }
	inline EndPoint_t4156119363 * get_EndPoint_6() const { return ___EndPoint_6; }
	inline EndPoint_t4156119363 ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(EndPoint_t4156119363 * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___EndPoint_6, value);
	}

	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Buffer_7)); }
	inline ByteU5BU5D_t3397334013* get_Buffer_7() const { return ___Buffer_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(ByteU5BU5D_t3397334013* value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_7, value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___AcceptSocket_11)); }
	inline Socket_t3821512045 * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline Socket_t3821512045 ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(Socket_t3821512045 * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier(&___AcceptSocket_11, value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Addresses_12)); }
	inline IPAddressU5BU5D_t4087230954* get_Addresses_12() const { return ___Addresses_12; }
	inline IPAddressU5BU5D_t4087230954** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(IPAddressU5BU5D_t4087230954* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier(&___Addresses_12, value);
	}

	inline static int32_t get_offset_of_Port_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Port_13)); }
	inline int32_t get_Port_13() const { return ___Port_13; }
	inline int32_t* get_address_of_Port_13() { return &___Port_13; }
	inline void set_Port_13(int32_t value)
	{
		___Port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___Buffers_14)); }
	inline Il2CppObject* get_Buffers_14() const { return ___Buffers_14; }
	inline Il2CppObject** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(Il2CppObject* value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier(&___Buffers_14, value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___acc_socket_16)); }
	inline Socket_t3821512045 * get_acc_socket_16() const { return ___acc_socket_16; }
	inline Socket_t3821512045 ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(Socket_t3821512045 * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier(&___acc_socket_16, value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_blocking_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___blocking_20)); }
	inline bool get_blocking_20() const { return ___blocking_20; }
	inline bool* get_address_of_blocking_20() { return &___blocking_20; }
	inline void set_blocking_20(bool value)
	{
		___blocking_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___ares_23)); }
	inline Il2CppObject * get_ares_23() const { return ___ares_23; }
	inline Il2CppObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(Il2CppObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier(&___ares_23, value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2959281146, ___EndCalled_24)); }
	inline int32_t get_EndCalled_24() const { return ___EndCalled_24; }
	inline int32_t* get_address_of_EndCalled_24() { return &___EndCalled_24; }
	inline void set_EndCalled_24(int32_t value)
	{
		___EndCalled_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2959281146_marshaled_pinvoke
{
	Socket_t3821512045 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t677569169 * ___waithandle_4;
	Exception_t1927440687 * ___delayedException_5;
	EndPoint_t4156119363 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t3821512045 * ___AcceptSocket_11;
	IPAddressU5BU5D_t4087230954* ___Addresses_12;
	int32_t ___Port_13;
	Il2CppObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t3821512045 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
// Native definition for COM marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2959281146_marshaled_com
{
	Socket_t3821512045 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t677569169 * ___waithandle_4;
	Exception_t1927440687 * ___delayedException_5;
	EndPoint_t4156119363 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t3821512045 * ___AcceptSocket_11;
	IPAddressU5BU5D_t4087230954* ___Addresses_12;
	int32_t ___Port_13;
	Il2CppObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t3821512045 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
