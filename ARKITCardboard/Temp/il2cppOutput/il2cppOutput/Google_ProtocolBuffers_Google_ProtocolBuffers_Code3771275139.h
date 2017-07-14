#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.CodedInputStream
struct  CodedInputStream_t3771275139  : public Il2CppObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedInputStream::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferPos
	int32_t ___bufferPos_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedInputStream::input
	Stream_t3255436806 * ___input_4;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::lastTag
	uint32_t ___lastTag_5;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::nextTag
	uint32_t ___nextTag_6;
	// System.Boolean Google.ProtocolBuffers.CodedInputStream::hasNextTag
	bool ___hasNextTag_7;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_8;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::currentLimit
	int32_t ___currentLimit_9;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_10;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_12;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_bufferSize_1() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___bufferSize_1)); }
	inline int32_t get_bufferSize_1() const { return ___bufferSize_1; }
	inline int32_t* get_address_of_bufferSize_1() { return &___bufferSize_1; }
	inline void set_bufferSize_1(int32_t value)
	{
		___bufferSize_1 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_2() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___bufferSizeAfterLimit_2)); }
	inline int32_t get_bufferSizeAfterLimit_2() const { return ___bufferSizeAfterLimit_2; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_2() { return &___bufferSizeAfterLimit_2; }
	inline void set_bufferSizeAfterLimit_2(int32_t value)
	{
		___bufferSizeAfterLimit_2 = value;
	}

	inline static int32_t get_offset_of_bufferPos_3() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___bufferPos_3)); }
	inline int32_t get_bufferPos_3() const { return ___bufferPos_3; }
	inline int32_t* get_address_of_bufferPos_3() { return &___bufferPos_3; }
	inline void set_bufferPos_3(int32_t value)
	{
		___bufferPos_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___input_4)); }
	inline Stream_t3255436806 * get_input_4() const { return ___input_4; }
	inline Stream_t3255436806 ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Stream_t3255436806 * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier(&___input_4, value);
	}

	inline static int32_t get_offset_of_lastTag_5() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___lastTag_5)); }
	inline uint32_t get_lastTag_5() const { return ___lastTag_5; }
	inline uint32_t* get_address_of_lastTag_5() { return &___lastTag_5; }
	inline void set_lastTag_5(uint32_t value)
	{
		___lastTag_5 = value;
	}

	inline static int32_t get_offset_of_nextTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___nextTag_6)); }
	inline uint32_t get_nextTag_6() const { return ___nextTag_6; }
	inline uint32_t* get_address_of_nextTag_6() { return &___nextTag_6; }
	inline void set_nextTag_6(uint32_t value)
	{
		___nextTag_6 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___hasNextTag_7)); }
	inline bool get_hasNextTag_7() const { return ___hasNextTag_7; }
	inline bool* get_address_of_hasNextTag_7() { return &___hasNextTag_7; }
	inline void set_hasNextTag_7(bool value)
	{
		___hasNextTag_7 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_8() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___totalBytesRetired_8)); }
	inline int32_t get_totalBytesRetired_8() const { return ___totalBytesRetired_8; }
	inline int32_t* get_address_of_totalBytesRetired_8() { return &___totalBytesRetired_8; }
	inline void set_totalBytesRetired_8(int32_t value)
	{
		___totalBytesRetired_8 = value;
	}

	inline static int32_t get_offset_of_currentLimit_9() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___currentLimit_9)); }
	inline int32_t get_currentLimit_9() const { return ___currentLimit_9; }
	inline int32_t* get_address_of_currentLimit_9() { return &___currentLimit_9; }
	inline void set_currentLimit_9(int32_t value)
	{
		___currentLimit_9 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_10() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___recursionDepth_10)); }
	inline int32_t get_recursionDepth_10() const { return ___recursionDepth_10; }
	inline int32_t* get_address_of_recursionDepth_10() { return &___recursionDepth_10; }
	inline void set_recursionDepth_10(int32_t value)
	{
		___recursionDepth_10 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_11() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___recursionLimit_11)); }
	inline int32_t get_recursionLimit_11() const { return ___recursionLimit_11; }
	inline int32_t* get_address_of_recursionLimit_11() { return &___recursionLimit_11; }
	inline void set_recursionLimit_11(int32_t value)
	{
		___recursionLimit_11 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_t3771275139, ___sizeLimit_12)); }
	inline int32_t get_sizeLimit_12() const { return ___sizeLimit_12; }
	inline int32_t* get_address_of_sizeLimit_12() { return &___sizeLimit_12; }
	inline void set_sizeLimit_12(int32_t value)
	{
		___sizeLimit_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
