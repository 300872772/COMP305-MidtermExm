#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// GameController
struct GameController_t2782302542;
// Boundary
struct Boundary_t2244299850;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PlayerController::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_2;
	// GameController PlayerController::_gameController
	GameController_t2782302542 * ____gameController_3;
	// UnityEngine.Vector2 PlayerController::_newPosition
	Vector2_t4282066565  ____newPosition_4;
	// Boundary PlayerController::boundary
	Boundary_t2244299850 * ___boundary_5;
	// System.Single PlayerController::speed
	float ___speed_6;
	// UnityEngine.Camera PlayerController::camera
	Camera_t2727095145 * ___camera_7;

public:
	inline static int32_t get_offset_of__gameControllerObject_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____gameControllerObject_2)); }
	inline GameObject_t3674682005 * get__gameControllerObject_2() const { return ____gameControllerObject_2; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_2() { return &____gameControllerObject_2; }
	inline void set__gameControllerObject_2(GameObject_t3674682005 * value)
	{
		____gameControllerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_2, value);
	}

	inline static int32_t get_offset_of__gameController_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____gameController_3)); }
	inline GameController_t2782302542 * get__gameController_3() const { return ____gameController_3; }
	inline GameController_t2782302542 ** get_address_of__gameController_3() { return &____gameController_3; }
	inline void set__gameController_3(GameController_t2782302542 * value)
	{
		____gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_3, value);
	}

	inline static int32_t get_offset_of__newPosition_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____newPosition_4)); }
	inline Vector2_t4282066565  get__newPosition_4() const { return ____newPosition_4; }
	inline Vector2_t4282066565 * get_address_of__newPosition_4() { return &____newPosition_4; }
	inline void set__newPosition_4(Vector2_t4282066565  value)
	{
		____newPosition_4 = value;
	}

	inline static int32_t get_offset_of_boundary_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boundary_5)); }
	inline Boundary_t2244299850 * get_boundary_5() const { return ___boundary_5; }
	inline Boundary_t2244299850 ** get_address_of_boundary_5() { return &___boundary_5; }
	inline void set_boundary_5(Boundary_t2244299850 * value)
	{
		___boundary_5 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_5, value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_camera_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___camera_7)); }
	inline Camera_t2727095145 * get_camera_7() const { return ___camera_7; }
	inline Camera_t2727095145 ** get_address_of_camera_7() { return &___camera_7; }
	inline void set_camera_7(Camera_t2727095145 * value)
	{
		___camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___camera_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
