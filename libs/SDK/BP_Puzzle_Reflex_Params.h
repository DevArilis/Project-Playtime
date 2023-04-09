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
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_ReflexSoundReplicator
	 */
	struct ABP_Puzzle_Reflex_C_OnRep_ReflexSoundReplicator_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Check for Think Fast Finish
	 */
	struct ABP_Puzzle_Reflex_C_CheckforThinkFastFinish_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToSolved
	 */
	struct ABP_Puzzle_Reflex_C_ToSolved_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_Progress_Implementation
	 */
	struct ABP_Puzzle_Reflex_C_OnRep_Progress_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DecrementingToInProgress
	 */
	struct ABP_Puzzle_Reflex_C_DecrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IncrementingToInProgress
	 */
	struct ABP_Puzzle_Reflex_C_IncrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.FailedPuzzle
	 */
	struct ABP_Puzzle_Reflex_C_FailedPuzzle_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoIncrement
	 */
	struct ABP_Puzzle_Reflex_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_State_Implementation
	 */
	struct ABP_Puzzle_Reflex_C_OnRep_State_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToIdle
	 */
	struct ABP_Puzzle_Reflex_C_ToIdle_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IdleToInProgress
	 */
	struct ABP_Puzzle_Reflex_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToggleTileHighlight
	 */
	struct ABP_Puzzle_Reflex_C_ToggleTileHighlight_Params
	{
	public:
		bool                                                       Highlight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ACRP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TileIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoesSelectionCount?
	 */
	struct ABP_Puzzle_Reflex_C_DoesSelectionCount_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5FMI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnIndex;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ReceiveBeginPlay
	 */
	struct ABP_Puzzle_Reflex_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.TimedOut
	 */
	struct ABP_Puzzle_Reflex_C_TimedOut_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Select
	 */
	struct ABP_Puzzle_Reflex_C_Select_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DisplaySelection
	 */
	struct ABP_Puzzle_Reflex_C_DisplaySelection_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ShowTileToBeSmacked
	 */
	struct ABP_Puzzle_Reflex_C_ShowTileToBeSmacked_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.GenerateRandomTile
	 */
	struct ABP_Puzzle_Reflex_C_GenerateRandomTile_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.SetRandomTile
	 */
	struct ABP_Puzzle_Reflex_C_SetRandomTile_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Timeout
	 */
	struct ABP_Puzzle_Reflex_C_Timeout_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ClearTiles
	 */
	struct ABP_Puzzle_Reflex_C_ClearTiles_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Event UpdateSelection
	 */
	struct ABP_Puzzle_Reflex_C_EventUpdateSelection_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlaySound
	 */
	struct ABP_Puzzle_Reflex_C_PlaySound_Params
	{
	public:
		bool                                                       Correct;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlayTickingSound
	 */
	struct ABP_Puzzle_Reflex_C_PlayTickingSound_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Solved_ButtonGlow
	 */
	struct ABP_Puzzle_Reflex_C_Solved_ButtonGlow_Params
	{	};

	/**
	 * Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ExecuteUbergraph_BP_Puzzle_Reflex
	 */
	struct ABP_Puzzle_Reflex_C_ExecuteUbergraph_BP_Puzzle_Reflex_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
