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
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetSolve
	 */
	struct ABP_MP_Puzzle_Trigger_C_SetWidgetSolve_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XWC5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Get Puzzle Name Tag
	 */
	struct ABP_MP_Puzzle_Trigger_C_GetPuzzleNameTag_Params
	{
	public:
		class UUI_PuzzleNametag_C*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetDistance
	 */
	struct ABP_MP_Puzzle_Trigger_C_SetWidgetDistance_Params
	{
	public:
		float                                                      InFloat;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G2P7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Check All Goals
	 */
	struct ABP_MP_Puzzle_Trigger_C_CheckAllGoals_Params
	{	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.OnRep_Solved
	 */
	struct ABP_MP_Puzzle_Trigger_C_OnRep_Solved_Params
	{	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveTick
	 */
	struct ABP_MP_Puzzle_Trigger_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveBeginPlay
	 */
	struct ABP_MP_Puzzle_Trigger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ExecuteUbergraph_BP_MP_Puzzle_Trigger
	 */
	struct ABP_MP_Puzzle_Trigger_C_ExecuteUbergraph_BP_MP_Puzzle_Trigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPBF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
