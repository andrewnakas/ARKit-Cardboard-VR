#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControllerDemoManager
struct  ControllerDemoManager_t4136074806  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ControllerDemoManager::controllerPivot
	GameObject_t1756533147 * ___controllerPivot_2;
	// UnityEngine.GameObject ControllerDemoManager::messageCanvas
	GameObject_t1756533147 * ___messageCanvas_3;
	// UnityEngine.UI.Text ControllerDemoManager::messageText
	Text_t356221433 * ___messageText_4;
	// UnityEngine.Material ControllerDemoManager::cubeInactiveMaterial
	Material_t193706927 * ___cubeInactiveMaterial_5;
	// UnityEngine.Material ControllerDemoManager::cubeHoverMaterial
	Material_t193706927 * ___cubeHoverMaterial_6;
	// UnityEngine.Material ControllerDemoManager::cubeActiveMaterial
	Material_t193706927 * ___cubeActiveMaterial_7;
	// UnityEngine.Renderer ControllerDemoManager::controllerCursorRenderer
	Renderer_t257310565 * ___controllerCursorRenderer_8;
	// UnityEngine.GameObject ControllerDemoManager::selectedObject
	GameObject_t1756533147 * ___selectedObject_9;
	// System.Boolean ControllerDemoManager::dragging
	bool ___dragging_10;

public:
	inline static int32_t get_offset_of_controllerPivot_2() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___controllerPivot_2)); }
	inline GameObject_t1756533147 * get_controllerPivot_2() const { return ___controllerPivot_2; }
	inline GameObject_t1756533147 ** get_address_of_controllerPivot_2() { return &___controllerPivot_2; }
	inline void set_controllerPivot_2(GameObject_t1756533147 * value)
	{
		___controllerPivot_2 = value;
		Il2CppCodeGenWriteBarrier(&___controllerPivot_2, value);
	}

	inline static int32_t get_offset_of_messageCanvas_3() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___messageCanvas_3)); }
	inline GameObject_t1756533147 * get_messageCanvas_3() const { return ___messageCanvas_3; }
	inline GameObject_t1756533147 ** get_address_of_messageCanvas_3() { return &___messageCanvas_3; }
	inline void set_messageCanvas_3(GameObject_t1756533147 * value)
	{
		___messageCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___messageCanvas_3, value);
	}

	inline static int32_t get_offset_of_messageText_4() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___messageText_4)); }
	inline Text_t356221433 * get_messageText_4() const { return ___messageText_4; }
	inline Text_t356221433 ** get_address_of_messageText_4() { return &___messageText_4; }
	inline void set_messageText_4(Text_t356221433 * value)
	{
		___messageText_4 = value;
		Il2CppCodeGenWriteBarrier(&___messageText_4, value);
	}

	inline static int32_t get_offset_of_cubeInactiveMaterial_5() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___cubeInactiveMaterial_5)); }
	inline Material_t193706927 * get_cubeInactiveMaterial_5() const { return ___cubeInactiveMaterial_5; }
	inline Material_t193706927 ** get_address_of_cubeInactiveMaterial_5() { return &___cubeInactiveMaterial_5; }
	inline void set_cubeInactiveMaterial_5(Material_t193706927 * value)
	{
		___cubeInactiveMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubeInactiveMaterial_5, value);
	}

	inline static int32_t get_offset_of_cubeHoverMaterial_6() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___cubeHoverMaterial_6)); }
	inline Material_t193706927 * get_cubeHoverMaterial_6() const { return ___cubeHoverMaterial_6; }
	inline Material_t193706927 ** get_address_of_cubeHoverMaterial_6() { return &___cubeHoverMaterial_6; }
	inline void set_cubeHoverMaterial_6(Material_t193706927 * value)
	{
		___cubeHoverMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___cubeHoverMaterial_6, value);
	}

	inline static int32_t get_offset_of_cubeActiveMaterial_7() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___cubeActiveMaterial_7)); }
	inline Material_t193706927 * get_cubeActiveMaterial_7() const { return ___cubeActiveMaterial_7; }
	inline Material_t193706927 ** get_address_of_cubeActiveMaterial_7() { return &___cubeActiveMaterial_7; }
	inline void set_cubeActiveMaterial_7(Material_t193706927 * value)
	{
		___cubeActiveMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___cubeActiveMaterial_7, value);
	}

	inline static int32_t get_offset_of_controllerCursorRenderer_8() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___controllerCursorRenderer_8)); }
	inline Renderer_t257310565 * get_controllerCursorRenderer_8() const { return ___controllerCursorRenderer_8; }
	inline Renderer_t257310565 ** get_address_of_controllerCursorRenderer_8() { return &___controllerCursorRenderer_8; }
	inline void set_controllerCursorRenderer_8(Renderer_t257310565 * value)
	{
		___controllerCursorRenderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___controllerCursorRenderer_8, value);
	}

	inline static int32_t get_offset_of_selectedObject_9() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___selectedObject_9)); }
	inline GameObject_t1756533147 * get_selectedObject_9() const { return ___selectedObject_9; }
	inline GameObject_t1756533147 ** get_address_of_selectedObject_9() { return &___selectedObject_9; }
	inline void set_selectedObject_9(GameObject_t1756533147 * value)
	{
		___selectedObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___selectedObject_9, value);
	}

	inline static int32_t get_offset_of_dragging_10() { return static_cast<int32_t>(offsetof(ControllerDemoManager_t4136074806, ___dragging_10)); }
	inline bool get_dragging_10() const { return ___dragging_10; }
	inline bool* get_address_of_dragging_10() { return &___dragging_10; }
	inline void set_dragging_10(bool value)
	{
		___dragging_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
