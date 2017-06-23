#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVRARSwitchers
struct  GVRARSwitchers_t1881700182  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GVRARSwitchers::arCam
	Camera_t189460977 * ___arCam_2;
	// UnityEngine.GameObject GVRARSwitchers::Cam1
	GameObject_t1756533147 * ___Cam1_3;
	// UnityEngine.GameObject GVRARSwitchers::bacCam
	GameObject_t1756533147 * ___bacCam_4;
	// UnityEngine.GameObject GVRARSwitchers::gvrMgr
	GameObject_t1756533147 * ___gvrMgr_5;
	// System.Boolean GVRARSwitchers::camOn
	bool ___camOn_6;
	// System.Boolean GVRARSwitchers::stereoCheck
	bool ___stereoCheck_7;
	// UnityEngine.RenderTexture GVRARSwitchers::rend
	RenderTexture_t2666733923 * ___rend_8;
	// UnityEngine.UI.Toggle GVRARSwitchers::stereoTog
	Toggle_t3976754468 * ___stereoTog_9;
	// UnityEngine.GameObject GVRARSwitchers::quad
	GameObject_t1756533147 * ___quad_10;

public:
	inline static int32_t get_offset_of_arCam_2() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___arCam_2)); }
	inline Camera_t189460977 * get_arCam_2() const { return ___arCam_2; }
	inline Camera_t189460977 ** get_address_of_arCam_2() { return &___arCam_2; }
	inline void set_arCam_2(Camera_t189460977 * value)
	{
		___arCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___arCam_2, value);
	}

	inline static int32_t get_offset_of_Cam1_3() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___Cam1_3)); }
	inline GameObject_t1756533147 * get_Cam1_3() const { return ___Cam1_3; }
	inline GameObject_t1756533147 ** get_address_of_Cam1_3() { return &___Cam1_3; }
	inline void set_Cam1_3(GameObject_t1756533147 * value)
	{
		___Cam1_3 = value;
		Il2CppCodeGenWriteBarrier(&___Cam1_3, value);
	}

	inline static int32_t get_offset_of_bacCam_4() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___bacCam_4)); }
	inline GameObject_t1756533147 * get_bacCam_4() const { return ___bacCam_4; }
	inline GameObject_t1756533147 ** get_address_of_bacCam_4() { return &___bacCam_4; }
	inline void set_bacCam_4(GameObject_t1756533147 * value)
	{
		___bacCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___bacCam_4, value);
	}

	inline static int32_t get_offset_of_gvrMgr_5() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___gvrMgr_5)); }
	inline GameObject_t1756533147 * get_gvrMgr_5() const { return ___gvrMgr_5; }
	inline GameObject_t1756533147 ** get_address_of_gvrMgr_5() { return &___gvrMgr_5; }
	inline void set_gvrMgr_5(GameObject_t1756533147 * value)
	{
		___gvrMgr_5 = value;
		Il2CppCodeGenWriteBarrier(&___gvrMgr_5, value);
	}

	inline static int32_t get_offset_of_camOn_6() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___camOn_6)); }
	inline bool get_camOn_6() const { return ___camOn_6; }
	inline bool* get_address_of_camOn_6() { return &___camOn_6; }
	inline void set_camOn_6(bool value)
	{
		___camOn_6 = value;
	}

	inline static int32_t get_offset_of_stereoCheck_7() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___stereoCheck_7)); }
	inline bool get_stereoCheck_7() const { return ___stereoCheck_7; }
	inline bool* get_address_of_stereoCheck_7() { return &___stereoCheck_7; }
	inline void set_stereoCheck_7(bool value)
	{
		___stereoCheck_7 = value;
	}

	inline static int32_t get_offset_of_rend_8() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___rend_8)); }
	inline RenderTexture_t2666733923 * get_rend_8() const { return ___rend_8; }
	inline RenderTexture_t2666733923 ** get_address_of_rend_8() { return &___rend_8; }
	inline void set_rend_8(RenderTexture_t2666733923 * value)
	{
		___rend_8 = value;
		Il2CppCodeGenWriteBarrier(&___rend_8, value);
	}

	inline static int32_t get_offset_of_stereoTog_9() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___stereoTog_9)); }
	inline Toggle_t3976754468 * get_stereoTog_9() const { return ___stereoTog_9; }
	inline Toggle_t3976754468 ** get_address_of_stereoTog_9() { return &___stereoTog_9; }
	inline void set_stereoTog_9(Toggle_t3976754468 * value)
	{
		___stereoTog_9 = value;
		Il2CppCodeGenWriteBarrier(&___stereoTog_9, value);
	}

	inline static int32_t get_offset_of_quad_10() { return static_cast<int32_t>(offsetof(GVRARSwitchers_t1881700182, ___quad_10)); }
	inline GameObject_t1756533147 * get_quad_10() const { return ___quad_10; }
	inline GameObject_t1756533147 ** get_address_of_quad_10() { return &___quad_10; }
	inline void set_quad_10(GameObject_t1756533147 * value)
	{
		___quad_10 = value;
		Il2CppCodeGenWriteBarrier(&___quad_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
