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
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleSoundReplicator
	 */
	struct ABP_ToyPuzzle_C_OnRep_PuzzleSoundReplicator_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleType
	 */
	struct ABP_ToyPuzzle_C_OnRep_PuzzleType_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzleType
	 */
	struct ABP_ToyPuzzle_C_GetPuzzleType_Params
	{
	public:
		EPuzzleType                                                PuzzleType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoesTouchCount
	 */
	struct ABP_ToyPuzzle_C_DoesTouchCount_Params
	{
	public:
		class UHandMagnetComponent*                                Magnet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Counts;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JPCO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetSavableState
	 */
	struct ABP_ToyPuzzle_C_GetSavableState_Params
	{
	public:
		E_PuzzleState                                              NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress_Implementation
	 */
	struct ABP_ToyPuzzle_C_OnRep_Progress_Implementation_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress
	 */
	struct ABP_ToyPuzzle_C_OnRep_Progress_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State_Implementation
	 */
	struct ABP_ToyPuzzle_C_OnRep_State_Implementation_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State
	 */
	struct ABP_ToyPuzzle_C_OnRep_State_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsBoobyTrapped
	 */
	struct ABP_ToyPuzzle_C_IsBoobyTrapped_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToSolved
	 */
	struct ABP_ToyPuzzle_C_ToSolved_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToShutdown
	 */
	struct ABP_ToyPuzzle_C_ToShutdown_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToBoobyTrapped
	 */
	struct ABP_ToyPuzzle_C_ToBoobyTrapped_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsShutDown
	 */
	struct ABP_ToyPuzzle_C_IsShutDown_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsSolved
	 */
	struct ABP_ToyPuzzle_C_IsSolved_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DecrementingToInProgress
	 */
	struct ABP_ToyPuzzle_C_DecrementingToInProgress_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IncrementingToInProgress
	 */
	struct ABP_ToyPuzzle_C_IncrementingToInProgress_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IdleToInProgress
	 */
	struct ABP_ToyPuzzle_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetState
	 */
	struct ABP_ToyPuzzle_C_GetState_Params
	{
	public:
		E_PuzzleState                                              State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToIdle
	 */
	struct ABP_ToyPuzzle_C_ToIdle_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.FailedPuzzle
	 */
	struct ABP_ToyPuzzle_C_FailedPuzzle_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsInProgress
	 */
	struct ABP_ToyPuzzle_C_IsInProgress_Params
	{
	public:
		bool                                                       InProgress;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoIncrement
	 */
	struct ABP_ToyPuzzle_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsPlayerPlayingPuzzle?
	 */
	struct ABP_ToyPuzzle_C_IsPlayerPlayingPuzzle_Params
	{
	public:
		class UObject*                                             PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.Spawn Failed Indicator
	 */
	struct ABP_ToyPuzzle_C_SpawnFailedIndicator_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_IsBoobyTrapped
	 */
	struct ABP_ToyPuzzle_C_OnRep_IsBoobyTrapped_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DEPREC_IsActive
	 */
	struct ABP_ToyPuzzle_C_DEPREC_IsActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.AttenuateSound
	 */
	struct ABP_ToyPuzzle_C_AttenuateSound_Params
	{
	public:
		float                                                      Initial;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlayerHasPerk?
	 */
	struct ABP_ToyPuzzle_C_PlayerHasPerk_Params
	{
	public:
		EPerkType                                                  PerkType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YFHS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PerkLevel;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.CheckForPerkFinish
	 */
	struct ABP_ToyPuzzle_C_CheckForPerkFinish_Params
	{
	public:
		int32_t                                                    StreakMax;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentStreak;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Finished;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Shutoff_Implementation
	 */
	struct ABP_ToyPuzzle_C_OnRep_Shutoff_Implementation_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Shutoff
	 */
	struct ABP_ToyPuzzle_C_OnRep_Parent_Shutoff_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzlePlayerPingInMS
	 */
	struct ABP_ToyPuzzle_C_GetPuzzlePlayerPingInMS_Params
	{
	public:
		float                                                      PingInMS;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnShutdown
	 */
	struct ABP_ToyPuzzle_C_OnShutdown_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetSolved
	 */
	struct ABP_ToyPuzzle_C_SetSolved_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Initialized
	 */
	struct ABP_ToyPuzzle_C_OnRep_Parent_Initialized_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Initialized_Implementation
	 */
	struct ABP_ToyPuzzle_C_OnRep_Initialized_Implementation_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__FinishedFunc
	 */
	struct ABP_ToyPuzzle_C_DoSparks__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__UpdateFunc
	 */
	struct ABP_ToyPuzzle_C_DoSparks__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__SpawnSpark__EventFunc
	 */
	struct ABP_ToyPuzzle_C_DoSparks__SpawnSpark__EventFunc_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlaySolvedSound
	 */
	struct ABP_ToyPuzzle_C_PlaySolvedSound_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttached
	 */
	struct ABP_ToyPuzzle_C_OnAttached_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReceiveBeginPlay
	 */
	struct ABP_ToyPuzzle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnFailAnim
	 */
	struct ABP_ToyPuzzle_C_SpawnFailAnim_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.Sabotage
	 */
	struct ABP_ToyPuzzle_C_Sabotage_Params
	{
	public:
		float                                                      FixDuration;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReActivate
	 */
	struct ABP_ToyPuzzle_C_ReActivate_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetTextRenderColor
	 */
	struct ABP_ToyPuzzle_C_SetTextRenderColor_Params
	{
	public:
		struct FLinearColor                                        InLinearColor;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparks
	 */
	struct ABP_ToyPuzzle_C_SpawnSparks_Params
	{
	public:
		class UBoxComponent*                                       Box;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.TriggerTrap
	 */
	struct ABP_ToyPuzzle_C_TriggerTrap_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparksBroken
	 */
	struct ABP_ToyPuzzle_C_SpawnSparksBroken_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.TransitionState
	 */
	struct ABP_ToyPuzzle_C_TransitionState_Params
	{
	public:
		E_PuzzleState                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.StartSpawningSparks
	 */
	struct ABP_ToyPuzzle_C_StartSpawningSparks_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.StopSpawningSparks
	 */
	struct ABP_ToyPuzzle_C_StopSpawningSparks_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ForceState
	 */
	struct ABP_ToyPuzzle_C_ForceState_Params
	{
	public:
		E_PuzzleState                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.NotifySabotageEnded
	 */
	struct ABP_ToyPuzzle_C_NotifySabotageEnded_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnBoobyIndicator
	 */
	struct ABP_ToyPuzzle_C_SpawnBoobyIndicator_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ChangeSecondaryObj
	 */
	struct ABP_ToyPuzzle_C_ChangeSecondaryObj_Params
	{
	public:
		bool                                                       HandOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_874A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_NetworkCharacter_C*                              PlayerRef;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.ExecuteUbergraph_BP_ToyPuzzle
	 */
	struct ABP_ToyPuzzle_C_ExecuteUbergraph_BP_ToyPuzzle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleProgress__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnPuzzleProgress__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.BoobytrapTriggered__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_BoobytrapTriggered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttach__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnAttach__DelegateSignature_Params
	{
	public:
		class ABP_ToyPuzzle_C*                                     Puzzle;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleBeginPlay__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnPuzzleBeginPlay__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleDisplayed__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnPuzzleDisplayed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnSolvedPuzzle__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnSolvedPuzzle__DelegateSignature_Params
	{
	public:
		int32_t                                                    PillarIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnInitialized__DelegateSignature
	 */
	struct ABP_ToyPuzzle_C_OnInitialized__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
