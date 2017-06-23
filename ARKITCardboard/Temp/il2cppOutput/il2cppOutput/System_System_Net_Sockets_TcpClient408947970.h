#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Sockets_TcpClient_Properties4286508698.h"

// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.Sockets.LingerOption
struct LingerOption_t1165263720;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t408947970  : public Il2CppObject
{
public:
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::stream
	NetworkStream_t581172200 * ___stream_0;
	// System.Boolean System.Net.Sockets.TcpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::client
	Socket_t3821512045 * ___client_2;
	// System.Boolean System.Net.Sockets.TcpClient::disposed
	bool ___disposed_3;
	// System.Net.Sockets.TcpClient/Properties System.Net.Sockets.TcpClient::values
	uint32_t ___values_4;
	// System.Int32 System.Net.Sockets.TcpClient::recv_timeout
	int32_t ___recv_timeout_5;
	// System.Int32 System.Net.Sockets.TcpClient::send_timeout
	int32_t ___send_timeout_6;
	// System.Int32 System.Net.Sockets.TcpClient::recv_buffer_size
	int32_t ___recv_buffer_size_7;
	// System.Int32 System.Net.Sockets.TcpClient::send_buffer_size
	int32_t ___send_buffer_size_8;
	// System.Net.Sockets.LingerOption System.Net.Sockets.TcpClient::linger_state
	LingerOption_t1165263720 * ___linger_state_9;
	// System.Boolean System.Net.Sockets.TcpClient::no_delay
	bool ___no_delay_10;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___stream_0)); }
	inline NetworkStream_t581172200 * get_stream_0() const { return ___stream_0; }
	inline NetworkStream_t581172200 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(NetworkStream_t581172200 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___client_2)); }
	inline Socket_t3821512045 * get_client_2() const { return ___client_2; }
	inline Socket_t3821512045 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(Socket_t3821512045 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier(&___client_2, value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_values_4() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___values_4)); }
	inline uint32_t get_values_4() const { return ___values_4; }
	inline uint32_t* get_address_of_values_4() { return &___values_4; }
	inline void set_values_4(uint32_t value)
	{
		___values_4 = value;
	}

	inline static int32_t get_offset_of_recv_timeout_5() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___recv_timeout_5)); }
	inline int32_t get_recv_timeout_5() const { return ___recv_timeout_5; }
	inline int32_t* get_address_of_recv_timeout_5() { return &___recv_timeout_5; }
	inline void set_recv_timeout_5(int32_t value)
	{
		___recv_timeout_5 = value;
	}

	inline static int32_t get_offset_of_send_timeout_6() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___send_timeout_6)); }
	inline int32_t get_send_timeout_6() const { return ___send_timeout_6; }
	inline int32_t* get_address_of_send_timeout_6() { return &___send_timeout_6; }
	inline void set_send_timeout_6(int32_t value)
	{
		___send_timeout_6 = value;
	}

	inline static int32_t get_offset_of_recv_buffer_size_7() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___recv_buffer_size_7)); }
	inline int32_t get_recv_buffer_size_7() const { return ___recv_buffer_size_7; }
	inline int32_t* get_address_of_recv_buffer_size_7() { return &___recv_buffer_size_7; }
	inline void set_recv_buffer_size_7(int32_t value)
	{
		___recv_buffer_size_7 = value;
	}

	inline static int32_t get_offset_of_send_buffer_size_8() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___send_buffer_size_8)); }
	inline int32_t get_send_buffer_size_8() const { return ___send_buffer_size_8; }
	inline int32_t* get_address_of_send_buffer_size_8() { return &___send_buffer_size_8; }
	inline void set_send_buffer_size_8(int32_t value)
	{
		___send_buffer_size_8 = value;
	}

	inline static int32_t get_offset_of_linger_state_9() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___linger_state_9)); }
	inline LingerOption_t1165263720 * get_linger_state_9() const { return ___linger_state_9; }
	inline LingerOption_t1165263720 ** get_address_of_linger_state_9() { return &___linger_state_9; }
	inline void set_linger_state_9(LingerOption_t1165263720 * value)
	{
		___linger_state_9 = value;
		Il2CppCodeGenWriteBarrier(&___linger_state_9, value);
	}

	inline static int32_t get_offset_of_no_delay_10() { return static_cast<int32_t>(offsetof(TcpClient_t408947970, ___no_delay_10)); }
	inline bool get_no_delay_10() const { return ___no_delay_10; }
	inline bool* get_address_of_no_delay_10() { return &___no_delay_10; }
	inline void set_no_delay_10(bool value)
	{
		___no_delay_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
