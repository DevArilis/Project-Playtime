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
	 * Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHandsObjective
	 */
	struct ABP_ToyMachine_C_EvaluateHandsObjective_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.HowManyBoolsTrue
	 */
	struct ABP_ToyMachine_C_HowManyBoolsTrue_Params
	{
	public:
		TArray<bool>                                               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHands
	 */
	struct ABP_ToyMachine_C_EvaluateHands_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PipeGrabbable
	 */
	struct ABP_ToyMachine_C_OnRep_PipeGrabbable_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.MakePipeGrabbable
	 */
	struct ABP_ToyMachine_C_MakePipeGrabbable_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PartsAdded
	 */
	struct ABP_ToyMachine_C_OnRep_PartsAdded_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.AddToyPart
	 */
	struct ABP_ToyMachine_C_AddToyPart_Params
	{
	public:
		int32_t                                                    ToyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_95QN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.AreAllPartsAdded
	 */
	struct ABP_ToyMachine_C_AreAllPartsAdded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORX2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ClearToyParts
	 */
	struct ABP_ToyMachine_C_ClearToyParts_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__FinishedFunc
	 */
	struct ABP_ToyMachine_C_ToyAdd__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__UpdateFunc
	 */
	struct ABP_ToyMachine_C_ToyAdd__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__FinishedFunc
	 */
	struct ABP_ToyMachine_C_ToyUp__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__UpdateFunc
	 */
	struct ABP_ToyMachine_C_ToyUp__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__FinishedFunc
	 */
	struct ABP_ToyMachine_C_PullTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__UpdateFunc
	 */
	struct ABP_ToyMachine_C_PullTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.PreSaveActorState
	 */
	struct ABP_ToyMachine_C_PreSaveActorState_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.PlayToyAddAnimation
	 */
	struct ABP_ToyMachine_C_PlayToyAddAnimation_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.PlayToyUpAnimation
	 */
	struct ABP_ToyMachine_C_PlayToyUpAnimation_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ReceiveActorBeginOverlap
	 */
	struct ABP_ToyMachine_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ReceiveBeginPlay
	 */
	struct ABP_ToyMachine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.MultiChangeObjective
	 */
	struct ABP_ToyMachine_C_MultiChangeObjective_Params
	{
	public:
		class FText                                                NewObjective;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.MultiSetIsUse
	 */
	struct ABP_ToyMachine_C_MultiSetIsUse_Params
	{
	public:
		bool                                                       IsUse;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.On Hand Attached
	 */
	struct ABP_ToyMachine_C_OnHandAttached_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.Set Pull Speed Timeline
	 */
	struct ABP_ToyMachine_C_SetPullSpeedTimeline_Params
	{
	public:
		int32_t                                                    PullSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ReceiveTick
	 */
	struct ABP_ToyMachine_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.Multicast_IncrementStat
	 */
	struct ABP_ToyMachine_C_Multicast_IncrementStat_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.LoadActorState
	 */
	struct ABP_ToyMachine_C_LoadActorState_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.IsPlayerNearby
	 */
	struct ABP_ToyMachine_C_IsPlayerNearby_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.Multicast_PlayPullingSound
	 */
	struct ABP_ToyMachine_C_Multicast_PlayPullingSound_Params
	{
	public:
		int32_t                                                    Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ConnectPipe
	 */
	struct ABP_ToyMachine_C_ConnectPipe_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.ExecuteUbergraph_BP_ToyMachine
	 */
	struct ABP_ToyMachine_C_ExecuteUbergraph_BP_ToyMachine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.OnPipeConnected__DelegateSignature
	 */
	struct ABP_ToyMachine_C_OnPipeConnected__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ToyMachine.BP_ToyMachine_C.OnAddToyPart__DelegateSignature
	 */
	struct ABP_ToyMachine_C_OnAddToyPart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
