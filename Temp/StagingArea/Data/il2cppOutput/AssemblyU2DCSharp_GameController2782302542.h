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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 GameController::enemyCount
	int32_t ___enemyCount_2;
	// UnityEngine.GameObject GameController::enemy
	GameObject_t3674682005 * ___enemy_3;
	// System.Int32 GameController::Score
	int32_t ___Score_4;
	// System.Int32 GameController::HullPoint
	int32_t ___HullPoint_5;
	// UnityEngine.UI.Text GameController::Lives
	Text_t9039225 * ___Lives_6;
	// UnityEngine.UI.Text GameController::ScoreValue
	Text_t9039225 * ___ScoreValue_7;

public:
	inline static int32_t get_offset_of_enemyCount_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___enemyCount_2)); }
	inline int32_t get_enemyCount_2() const { return ___enemyCount_2; }
	inline int32_t* get_address_of_enemyCount_2() { return &___enemyCount_2; }
	inline void set_enemyCount_2(int32_t value)
	{
		___enemyCount_2 = value;
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___enemy_3)); }
	inline GameObject_t3674682005 * get_enemy_3() const { return ___enemy_3; }
	inline GameObject_t3674682005 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(GameObject_t3674682005 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_3, value);
	}

	inline static int32_t get_offset_of_Score_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___Score_4)); }
	inline int32_t get_Score_4() const { return ___Score_4; }
	inline int32_t* get_address_of_Score_4() { return &___Score_4; }
	inline void set_Score_4(int32_t value)
	{
		___Score_4 = value;
	}

	inline static int32_t get_offset_of_HullPoint_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___HullPoint_5)); }
	inline int32_t get_HullPoint_5() const { return ___HullPoint_5; }
	inline int32_t* get_address_of_HullPoint_5() { return &___HullPoint_5; }
	inline void set_HullPoint_5(int32_t value)
	{
		___HullPoint_5 = value;
	}

	inline static int32_t get_offset_of_Lives_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___Lives_6)); }
	inline Text_t9039225 * get_Lives_6() const { return ___Lives_6; }
	inline Text_t9039225 ** get_address_of_Lives_6() { return &___Lives_6; }
	inline void set_Lives_6(Text_t9039225 * value)
	{
		___Lives_6 = value;
		Il2CppCodeGenWriteBarrier(&___Lives_6, value);
	}

	inline static int32_t get_offset_of_ScoreValue_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___ScoreValue_7)); }
	inline Text_t9039225 * get_ScoreValue_7() const { return ___ScoreValue_7; }
	inline Text_t9039225 ** get_address_of_ScoreValue_7() { return &___ScoreValue_7; }
	inline void set_ScoreValue_7(Text_t9039225 * value)
	{
		___ScoreValue_7 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreValue_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
