#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses2112994543.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV1743211906.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrProfile/Viewer
struct  Viewer_t1642017539 
{
public:
	// GvrProfile/Lenses GvrProfile/Viewer::lenses
	Lenses_t2112994543  ___lenses_0;
	// GvrProfile/MaxFOV GvrProfile/Viewer::maxFOV
	MaxFOV_t1743211906  ___maxFOV_1;
	// GvrProfile/Distortion GvrProfile/Viewer::distortion
	Distortion_t550060296  ___distortion_2;
	// GvrProfile/Distortion GvrProfile/Viewer::inverse
	Distortion_t550060296  ___inverse_3;

public:
	inline static int32_t get_offset_of_lenses_0() { return static_cast<int32_t>(offsetof(Viewer_t1642017539, ___lenses_0)); }
	inline Lenses_t2112994543  get_lenses_0() const { return ___lenses_0; }
	inline Lenses_t2112994543 * get_address_of_lenses_0() { return &___lenses_0; }
	inline void set_lenses_0(Lenses_t2112994543  value)
	{
		___lenses_0 = value;
	}

	inline static int32_t get_offset_of_maxFOV_1() { return static_cast<int32_t>(offsetof(Viewer_t1642017539, ___maxFOV_1)); }
	inline MaxFOV_t1743211906  get_maxFOV_1() const { return ___maxFOV_1; }
	inline MaxFOV_t1743211906 * get_address_of_maxFOV_1() { return &___maxFOV_1; }
	inline void set_maxFOV_1(MaxFOV_t1743211906  value)
	{
		___maxFOV_1 = value;
	}

	inline static int32_t get_offset_of_distortion_2() { return static_cast<int32_t>(offsetof(Viewer_t1642017539, ___distortion_2)); }
	inline Distortion_t550060296  get_distortion_2() const { return ___distortion_2; }
	inline Distortion_t550060296 * get_address_of_distortion_2() { return &___distortion_2; }
	inline void set_distortion_2(Distortion_t550060296  value)
	{
		___distortion_2 = value;
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(Viewer_t1642017539, ___inverse_3)); }
	inline Distortion_t550060296  get_inverse_3() const { return ___inverse_3; }
	inline Distortion_t550060296 * get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(Distortion_t550060296  value)
	{
		___inverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GvrProfile/Viewer
struct Viewer_t1642017539_marshaled_pinvoke
{
	Lenses_t2112994543  ___lenses_0;
	MaxFOV_t1743211906  ___maxFOV_1;
	Distortion_t550060296_marshaled_pinvoke ___distortion_2;
	Distortion_t550060296_marshaled_pinvoke ___inverse_3;
};
// Native definition for COM marshalling of GvrProfile/Viewer
struct Viewer_t1642017539_marshaled_com
{
	Lenses_t2112994543  ___lenses_0;
	MaxFOV_t1743211906  ___maxFOV_1;
	Distortion_t550060296_marshaled_com ___distortion_2;
	Distortion_t550060296_marshaled_com ___inverse_3;
};
