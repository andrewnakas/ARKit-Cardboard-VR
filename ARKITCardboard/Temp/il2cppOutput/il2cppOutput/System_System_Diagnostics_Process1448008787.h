#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_Component2826673791.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t2898458543;
// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2663114743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process
struct  Process_t1448008787  : public Component_t2826673791
{
public:
	// System.IntPtr System.Diagnostics.Process::process_handle
	IntPtr_t ___process_handle_4;
	// System.Int32 System.Diagnostics.Process::pid
	int32_t ___pid_5;
	// System.IntPtr System.Diagnostics.Process::stdout_rd
	IntPtr_t ___stdout_rd_6;
	// System.IntPtr System.Diagnostics.Process::stderr_rd
	IntPtr_t ___stderr_rd_7;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_8;
	// System.IO.StreamReader System.Diagnostics.Process::error_stream
	StreamReader_t2360341767 * ___error_stream_9;
	// System.IO.StreamWriter System.Diagnostics.Process::input_stream
	StreamWriter_t3858580635 * ___input_stream_10;
	// System.IO.StreamReader System.Diagnostics.Process::output_stream
	StreamReader_t2360341767 * ___output_stream_11;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::start_info
	ProcessStartInfo_t2898458543 * ___start_info_12;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_output
	ProcessAsyncReader_t2663114743 * ___async_output_13;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_error
	ProcessAsyncReader_t2663114743 * ___async_error_14;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_15;

public:
	inline static int32_t get_offset_of_process_handle_4() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___process_handle_4)); }
	inline IntPtr_t get_process_handle_4() const { return ___process_handle_4; }
	inline IntPtr_t* get_address_of_process_handle_4() { return &___process_handle_4; }
	inline void set_process_handle_4(IntPtr_t value)
	{
		___process_handle_4 = value;
	}

	inline static int32_t get_offset_of_pid_5() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___pid_5)); }
	inline int32_t get_pid_5() const { return ___pid_5; }
	inline int32_t* get_address_of_pid_5() { return &___pid_5; }
	inline void set_pid_5(int32_t value)
	{
		___pid_5 = value;
	}

	inline static int32_t get_offset_of_stdout_rd_6() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___stdout_rd_6)); }
	inline IntPtr_t get_stdout_rd_6() const { return ___stdout_rd_6; }
	inline IntPtr_t* get_address_of_stdout_rd_6() { return &___stdout_rd_6; }
	inline void set_stdout_rd_6(IntPtr_t value)
	{
		___stdout_rd_6 = value;
	}

	inline static int32_t get_offset_of_stderr_rd_7() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___stderr_rd_7)); }
	inline IntPtr_t get_stderr_rd_7() const { return ___stderr_rd_7; }
	inline IntPtr_t* get_address_of_stderr_rd_7() { return &___stderr_rd_7; }
	inline void set_stderr_rd_7(IntPtr_t value)
	{
		___stderr_rd_7 = value;
	}

	inline static int32_t get_offset_of_process_name_8() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___process_name_8)); }
	inline String_t* get_process_name_8() const { return ___process_name_8; }
	inline String_t** get_address_of_process_name_8() { return &___process_name_8; }
	inline void set_process_name_8(String_t* value)
	{
		___process_name_8 = value;
		Il2CppCodeGenWriteBarrier(&___process_name_8, value);
	}

	inline static int32_t get_offset_of_error_stream_9() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___error_stream_9)); }
	inline StreamReader_t2360341767 * get_error_stream_9() const { return ___error_stream_9; }
	inline StreamReader_t2360341767 ** get_address_of_error_stream_9() { return &___error_stream_9; }
	inline void set_error_stream_9(StreamReader_t2360341767 * value)
	{
		___error_stream_9 = value;
		Il2CppCodeGenWriteBarrier(&___error_stream_9, value);
	}

	inline static int32_t get_offset_of_input_stream_10() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___input_stream_10)); }
	inline StreamWriter_t3858580635 * get_input_stream_10() const { return ___input_stream_10; }
	inline StreamWriter_t3858580635 ** get_address_of_input_stream_10() { return &___input_stream_10; }
	inline void set_input_stream_10(StreamWriter_t3858580635 * value)
	{
		___input_stream_10 = value;
		Il2CppCodeGenWriteBarrier(&___input_stream_10, value);
	}

	inline static int32_t get_offset_of_output_stream_11() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___output_stream_11)); }
	inline StreamReader_t2360341767 * get_output_stream_11() const { return ___output_stream_11; }
	inline StreamReader_t2360341767 ** get_address_of_output_stream_11() { return &___output_stream_11; }
	inline void set_output_stream_11(StreamReader_t2360341767 * value)
	{
		___output_stream_11 = value;
		Il2CppCodeGenWriteBarrier(&___output_stream_11, value);
	}

	inline static int32_t get_offset_of_start_info_12() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___start_info_12)); }
	inline ProcessStartInfo_t2898458543 * get_start_info_12() const { return ___start_info_12; }
	inline ProcessStartInfo_t2898458543 ** get_address_of_start_info_12() { return &___start_info_12; }
	inline void set_start_info_12(ProcessStartInfo_t2898458543 * value)
	{
		___start_info_12 = value;
		Il2CppCodeGenWriteBarrier(&___start_info_12, value);
	}

	inline static int32_t get_offset_of_async_output_13() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___async_output_13)); }
	inline ProcessAsyncReader_t2663114743 * get_async_output_13() const { return ___async_output_13; }
	inline ProcessAsyncReader_t2663114743 ** get_address_of_async_output_13() { return &___async_output_13; }
	inline void set_async_output_13(ProcessAsyncReader_t2663114743 * value)
	{
		___async_output_13 = value;
		Il2CppCodeGenWriteBarrier(&___async_output_13, value);
	}

	inline static int32_t get_offset_of_async_error_14() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___async_error_14)); }
	inline ProcessAsyncReader_t2663114743 * get_async_error_14() const { return ___async_error_14; }
	inline ProcessAsyncReader_t2663114743 ** get_address_of_async_error_14() { return &___async_error_14; }
	inline void set_async_error_14(ProcessAsyncReader_t2663114743 * value)
	{
		___async_error_14 = value;
		Il2CppCodeGenWriteBarrier(&___async_error_14, value);
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(Process_t1448008787, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
