#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_EndPoint4156119363.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t2615413766  : public EndPoint_t4156119363
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t1399971723 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t2615413766, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t2615413766, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
