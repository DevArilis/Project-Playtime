#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveTick
	 */
	struct AGM_Escape_Tutorial_Monster_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveBeginPlay
	 */
	struct AGM_Escape_Tutorial_Monster_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.StartEarlyDepartureTimer
	 */
	struct AGM_Escape_Tutorial_Monster_C_StartEarlyDepartureTimer_Params
	{	};

	/**
	 * Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.K2_OnSetMatchState
	 */
	struct AGM_Escape_Tutorial_Monster_C_K2_OnSetMatchState_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ExecuteUbergraph_GM_Escape_Tutorial_Monster
	 */
	struct AGM_Escape_Tutorial_Monster_C_ExecuteUbergraph_GM_Escape_Tutorial_Monster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
