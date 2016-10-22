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
// EnemyController
struct EnemyController_t2729311524;
// GameController
struct GameController_t2782302542;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerCollider
struct  PlayerCollider_t3298947605  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PlayerCollider::_enemyControllerObject
	GameObject_t3674682005 * ____enemyControllerObject_2;
	// EnemyController PlayerCollider::_enemyController
	EnemyController_t2729311524 * ____enemyController_3;
	// UnityEngine.GameObject PlayerCollider::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_4;
	// GameController PlayerCollider::_gameController
	GameController_t2782302542 * ____gameController_5;
	// UnityEngine.AudioSource PlayerCollider::HitSound
	AudioSource_t1740077639 * ___HitSound_6;

public:
	inline static int32_t get_offset_of__enemyControllerObject_2() { return static_cast<int32_t>(offsetof(PlayerCollider_t3298947605, ____enemyControllerObject_2)); }
	inline GameObject_t3674682005 * get__enemyControllerObject_2() const { return ____enemyControllerObject_2; }
	inline GameObject_t3674682005 ** get_address_of__enemyControllerObject_2() { return &____enemyControllerObject_2; }
	inline void set__enemyControllerObject_2(GameObject_t3674682005 * value)
	{
		____enemyControllerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____enemyControllerObject_2, value);
	}

	inline static int32_t get_offset_of__enemyController_3() { return static_cast<int32_t>(offsetof(PlayerCollider_t3298947605, ____enemyController_3)); }
	inline EnemyController_t2729311524 * get__enemyController_3() const { return ____enemyController_3; }
	inline EnemyController_t2729311524 ** get_address_of__enemyController_3() { return &____enemyController_3; }
	inline void set__enemyController_3(EnemyController_t2729311524 * value)
	{
		____enemyController_3 = value;
		Il2CppCodeGenWriteBarrier(&____enemyController_3, value);
	}

	inline static int32_t get_offset_of__gameControllerObject_4() { return static_cast<int32_t>(offsetof(PlayerCollider_t3298947605, ____gameControllerObject_4)); }
	inline GameObject_t3674682005 * get__gameControllerObject_4() const { return ____gameControllerObject_4; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_4() { return &____gameControllerObject_4; }
	inline void set__gameControllerObject_4(GameObject_t3674682005 * value)
	{
		____gameControllerObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_4, value);
	}

	inline static int32_t get_offset_of__gameController_5() { return static_cast<int32_t>(offsetof(PlayerCollider_t3298947605, ____gameController_5)); }
	inline GameController_t2782302542 * get__gameController_5() const { return ____gameController_5; }
	inline GameController_t2782302542 ** get_address_of__gameController_5() { return &____gameController_5; }
	inline void set__gameController_5(GameController_t2782302542 * value)
	{
		____gameController_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_5, value);
	}

	inline static int32_t get_offset_of_HitSound_6() { return static_cast<int32_t>(offsetof(PlayerCollider_t3298947605, ___HitSound_6)); }
	inline AudioSource_t1740077639 * get_HitSound_6() const { return ___HitSound_6; }
	inline AudioSource_t1740077639 ** get_address_of_HitSound_6() { return &___HitSound_6; }
	inline void set_HitSound_6(AudioSource_t1740077639 * value)
	{
		___HitSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___HitSound_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
