#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Speed
struct Speed_t80089127;
// Boundary
struct Boundary_t2244299850;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2729311524  : public MonoBehaviour_t667441552
{
public:
	// Speed EnemyController::speed
	Speed_t80089127 * ___speed_2;
	// Boundary EnemyController::boundary
	Boundary_t2244299850 * ___boundary_3;
	// UnityEngine.GameObject EnemyController::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_4;
	// GameController EnemyController::_gameController
	GameController_t2782302542 * ____gameController_5;
	// System.Single EnemyController::_CurrentSpeed
	float ____CurrentSpeed_6;
	// System.Single EnemyController::_CurrentDrift
	float ____CurrentDrift_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___speed_2)); }
	inline Speed_t80089127 * get_speed_2() const { return ___speed_2; }
	inline Speed_t80089127 ** get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Speed_t80089127 * value)
	{
		___speed_2 = value;
		Il2CppCodeGenWriteBarrier(&___speed_2, value);
	}

	inline static int32_t get_offset_of_boundary_3() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___boundary_3)); }
	inline Boundary_t2244299850 * get_boundary_3() const { return ___boundary_3; }
	inline Boundary_t2244299850 ** get_address_of_boundary_3() { return &___boundary_3; }
	inline void set_boundary_3(Boundary_t2244299850 * value)
	{
		___boundary_3 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_3, value);
	}

	inline static int32_t get_offset_of__gameControllerObject_4() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____gameControllerObject_4)); }
	inline GameObject_t3674682005 * get__gameControllerObject_4() const { return ____gameControllerObject_4; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_4() { return &____gameControllerObject_4; }
	inline void set__gameControllerObject_4(GameObject_t3674682005 * value)
	{
		____gameControllerObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_4, value);
	}

	inline static int32_t get_offset_of__gameController_5() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____gameController_5)); }
	inline GameController_t2782302542 * get__gameController_5() const { return ____gameController_5; }
	inline GameController_t2782302542 ** get_address_of__gameController_5() { return &____gameController_5; }
	inline void set__gameController_5(GameController_t2782302542 * value)
	{
		____gameController_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_5, value);
	}

	inline static int32_t get_offset_of__CurrentSpeed_6() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____CurrentSpeed_6)); }
	inline float get__CurrentSpeed_6() const { return ____CurrentSpeed_6; }
	inline float* get_address_of__CurrentSpeed_6() { return &____CurrentSpeed_6; }
	inline void set__CurrentSpeed_6(float value)
	{
		____CurrentSpeed_6 = value;
	}

	inline static int32_t get_offset_of__CurrentDrift_7() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____CurrentDrift_7)); }
	inline float get__CurrentDrift_7() const { return ____CurrentDrift_7; }
	inline float* get_address_of__CurrentDrift_7() { return &____CurrentDrift_7; }
	inline void set__CurrentDrift_7(float value)
	{
		____CurrentDrift_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
