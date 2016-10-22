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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReStartController
struct  ReStartController_t818597579  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ReStartController::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_2;
	// GameController ReStartController::_gameController
	GameController_t2782302542 * ____gameController_3;
	// UnityEngine.UI.Text ReStartController::GameOver
	Text_t9039225 * ___GameOver_4;
	// UnityEngine.UI.Text ReStartController::Score
	Text_t9039225 * ___Score_5;

public:
	inline static int32_t get_offset_of__gameControllerObject_2() { return static_cast<int32_t>(offsetof(ReStartController_t818597579, ____gameControllerObject_2)); }
	inline GameObject_t3674682005 * get__gameControllerObject_2() const { return ____gameControllerObject_2; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_2() { return &____gameControllerObject_2; }
	inline void set__gameControllerObject_2(GameObject_t3674682005 * value)
	{
		____gameControllerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_2, value);
	}

	inline static int32_t get_offset_of__gameController_3() { return static_cast<int32_t>(offsetof(ReStartController_t818597579, ____gameController_3)); }
	inline GameController_t2782302542 * get__gameController_3() const { return ____gameController_3; }
	inline GameController_t2782302542 ** get_address_of__gameController_3() { return &____gameController_3; }
	inline void set__gameController_3(GameController_t2782302542 * value)
	{
		____gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_3, value);
	}

	inline static int32_t get_offset_of_GameOver_4() { return static_cast<int32_t>(offsetof(ReStartController_t818597579, ___GameOver_4)); }
	inline Text_t9039225 * get_GameOver_4() const { return ___GameOver_4; }
	inline Text_t9039225 ** get_address_of_GameOver_4() { return &___GameOver_4; }
	inline void set_GameOver_4(Text_t9039225 * value)
	{
		___GameOver_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameOver_4, value);
	}

	inline static int32_t get_offset_of_Score_5() { return static_cast<int32_t>(offsetof(ReStartController_t818597579, ___Score_5)); }
	inline Text_t9039225 * get_Score_5() const { return ___Score_5; }
	inline Text_t9039225 ** get_address_of_Score_5() { return &___Score_5; }
	inline void set_Score_5(Text_t9039225 * value)
	{
		___Score_5 = value;
		Il2CppCodeGenWriteBarrier(&___Score_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
