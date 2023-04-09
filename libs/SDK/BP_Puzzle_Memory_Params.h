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
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_MemorySoundReplicator
	 */
	struct ABP_Puzzle_Memory_C_OnRep_MemorySoundReplicator_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_IsGeneratingPattern
	 */
	struct ABP_Puzzle_Memory_C_OnRep_IsGeneratingPattern_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_I_PlayerPattern
	 */
	struct ABP_Puzzle_Memory_C_OnRep_I_PlayerPattern_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToSolved
	 */
	struct ABP_Puzzle_Memory_C_ToSolved_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateRandomPattern
	 */
	struct ABP_Puzzle_Memory_C_GenerateRandomPattern_Params
	{
	public:
		TArray<int32_t>                                            GeneratedPattern;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.AllButtonHighlight
	 */
	struct ABP_Puzzle_Memory_C_AllButtonHighlight_Params
	{
	public:
		class UMaterial*                                           Mat;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ButtonHighlight
	 */
	struct ABP_Puzzle_Memory_C_ButtonHighlight_Params
	{
	public:
		TArray<int32_t>                                            ButtonsToHighlight;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UMaterialInstance*                                   Mat;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_State_Implementation
	 */
	struct ABP_Puzzle_Memory_C_OnRep_State_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToIdle
	 */
	struct ABP_Puzzle_Memory_C_ToIdle_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IncrementingToInProgress
	 */
	struct ABP_Puzzle_Memory_C_IncrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DecrementingToInProgress
	 */
	struct ABP_Puzzle_Memory_C_DecrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IdleToInProgress
	 */
	struct ABP_Puzzle_Memory_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DoIncrement
	 */
	struct ABP_Puzzle_Memory_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Select
	 */
	struct ABP_Puzzle_Memory_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WNZC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.UserConstructionScript
	 */
	struct ABP_Puzzle_Memory_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FinishedFunc
	 */
	struct ABP_Puzzle_Memory_C_NewPatternTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__UpdateFunc
	 */
	struct ABP_Puzzle_Memory_C_NewPatternTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__CyclePattern__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_NewPatternTimeline__CyclePattern__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOff__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_NewPatternTimeline__FlashOff__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOn__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_NewPatternTimeline__FlashOn__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__FinishedFunc
	 */
	struct ABP_Puzzle_Memory_C_FailureTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__UpdateFunc
	 */
	struct ABP_Puzzle_Memory_C_FailureTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__Off__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_FailureTimeline__Off__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__On__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_FailureTimeline__On__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__FinishedFunc
	 */
	struct ABP_Puzzle_Memory_C_SuccessTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__UpdateFunc
	 */
	struct ABP_Puzzle_Memory_C_SuccessTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__Off__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_SuccessTimeline__Off__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__On__EventFunc
	 */
	struct ABP_Puzzle_Memory_C_SuccessTimeline__On__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayRandomizingSound
	 */
	struct ABP_Puzzle_Memory_C_PlayRandomizingSound_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayButtonSound
	 */
	struct ABP_Puzzle_Memory_C_PlayButtonSound_Params
	{
	public:
		bool                                                       Correct;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ShowPlayerPattern
	 */
	struct ABP_Puzzle_Memory_C_ShowPlayerPattern_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ReceiveBeginPlay
	 */
	struct ABP_Puzzle_Memory_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_ClearButtons
	 */
	struct ABP_Puzzle_Memory_C_Multicast_ClearButtons_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateNewPatternAndShowIt
	 */
	struct ABP_Puzzle_Memory_C_GenerateNewPatternAndShowIt_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StartNewPatternTimeline
	 */
	struct ABP_Puzzle_Memory_C_Multicast_StartNewPatternTimeline_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StopNewPatternTimeline
	 */
	struct ABP_Puzzle_Memory_C_Multicast_StopNewPatternTimeline_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Solved_ButtonGlow
	 */
	struct ABP_Puzzle_Memory_C_Solved_ButtonGlow_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlaySuccessAnimation
	 */
	struct ABP_Puzzle_Memory_C_PlaySuccessAnimation_Params
	{	};

	/**
	 * Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ExecuteUbergraph_BP_Puzzle_Memory
	 */
	struct ABP_Puzzle_Memory_C_ExecuteUbergraph_BP_Puzzle_Memory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
