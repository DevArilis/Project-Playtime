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
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_PianoSoundReplicator
	 */
	struct ABP_Puzzle_Piano_C_OnRep_PianoSoundReplicator_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ToSolved
	 */
	struct ABP_Puzzle_Piano_C_ToSolved_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.FailedPuzzle
	 */
	struct ABP_Puzzle_Piano_C_FailedPuzzle_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DecrementingToInProgress
	 */
	struct ABP_Puzzle_Piano_C_DecrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_State_Implementation
	 */
	struct ABP_Puzzle_Piano_C_OnRep_State_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.IdleToInProgress
	 */
	struct ABP_Puzzle_Piano_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoIncrement
	 */
	struct ABP_Puzzle_Piano_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.CheckForMasterPianist
	 */
	struct ABP_Puzzle_Piano_C_CheckForMasterPianist_Params
	{
	public:
		int32_t                                                    StreakMax;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentStreak;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Finished;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Sound
	 */
	struct ABP_Puzzle_Piano_C_Sound_Params
	{
	public:
		int32_t                                                    KeyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCorrect;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JUOZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoesKeyCount?
	 */
	struct ABP_Puzzle_Piano_C_DoesKeyCount_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ClearKeys
	 */
	struct ABP_Puzzle_Piano_C_ClearKeys_Params
	{
	public:
		bool                                                       ClearCurrentKey;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKG9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__FinishedFunc
	 */
	struct ABP_Puzzle_Piano_C_TL_Piano__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__UpdateFunc
	 */
	struct ABP_Puzzle_Piano_C_TL_Piano__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Clear__EventFunc
	 */
	struct ABP_Puzzle_Piano_C_TL_Piano__Clear__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Display__EventFunc
	 */
	struct ABP_Puzzle_Piano_C_TL_Piano__Display__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ReceiveBeginPlay
	 */
	struct ABP_Puzzle_Piano_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Sequence
	 */
	struct ABP_Puzzle_Piano_C_R_Sequence_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Select
	 */
	struct ABP_Puzzle_Piano_C_R_Select_Params
	{
	public:
		int32_t                                                    KeyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.PlayKey
	 */
	struct ABP_Puzzle_Piano_C_PlayKey_Params
	{
	public:
		int32_t                                                    KeyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Cancel;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCorrect;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_DisplaySequence
	 */
	struct ABP_Puzzle_Piano_C_Multicast_DisplaySequence_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_PlayKey
	 */
	struct ABP_Puzzle_Piano_C_Multicast_PlayKey_Params
	{
	public:
		int32_t                                                    KeyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCorrect;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Solved_ButtonGlow
	 */
	struct ABP_Puzzle_Piano_C_Solved_ButtonGlow_Params
	{	};

	/**
	 * Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ExecuteUbergraph_BP_Puzzle_Piano
	 */
	struct ABP_Puzzle_Piano_C_ExecuteUbergraph_BP_Puzzle_Piano_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
