#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2959281146;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/Worker
struct  Worker_t1317165246  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket/SocketAsyncResult System.Net.Sockets.Socket/Worker::result
	SocketAsyncResult_t2959281146 * ___result_0;
	// System.Boolean System.Net.Sockets.Socket/Worker::requireSocketSecurity
	bool ___requireSocketSecurity_1;
	// System.Int32 System.Net.Sockets.Socket/Worker::send_so_far
	int32_t ___send_so_far_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(Worker_t1317165246, ___result_0)); }
	inline SocketAsyncResult_t2959281146 * get_result_0() const { return ___result_0; }
	inline SocketAsyncResult_t2959281146 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(SocketAsyncResult_t2959281146 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}

	inline static int32_t get_offset_of_requireSocketSecurity_1() { return static_cast<int32_t>(offsetof(Worker_t1317165246, ___requireSocketSecurity_1)); }
	inline bool get_requireSocketSecurity_1() const { return ___requireSocketSecurity_1; }
	inline bool* get_address_of_requireSocketSecurity_1() { return &___requireSocketSecurity_1; }
	inline void set_requireSocketSecurity_1(bool value)
	{
		___requireSocketSecurity_1 = value;
	}

	inline static int32_t get_offset_of_send_so_far_2() { return static_cast<int32_t>(offsetof(Worker_t1317165246, ___send_so_far_2)); }
	inline int32_t get_send_so_far_2() const { return ___send_so_far_2; }
	inline int32_t* get_address_of_send_so_far_2() { return &___send_so_far_2; }
	inline void set_send_so_far_2(int32_t value)
	{
		___send_so_far_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
