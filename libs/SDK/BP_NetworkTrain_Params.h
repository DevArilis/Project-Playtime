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
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TraceForPlayersInDoorway
	 */
	struct ABP_NetworkTrain_C_TraceForPlayersInDoorway_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerExit
	 */
	struct ABP_NetworkTrain_C_OnPlayerExit_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerEnter
	 */
	struct ABP_NetworkTrain_C_OnPlayerEnter_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19E5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.SetArrays
	 */
	struct ABP_NetworkTrain_C_SetArrays_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_ToggleDoors
	 */
	struct ABP_NetworkTrain_C_OnRep_ToggleDoors_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.GetPlayersOnTrain
	 */
	struct ABP_NetworkTrain_C_GetPlayersOnTrain_Params
	{
	public:
		TArray<class ABP_NetworkCharacter_C*>                      Players;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.UpdateVariables
	 */
	struct ABP_NetworkTrain_C_UpdateVariables_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.UpdatePlayersOnTrain
	 */
	struct ABP_NetworkTrain_C_UpdatePlayersOnTrain_Params
	{
	public:
		int32_t                                                    Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.MoveCart
	 */
	struct ABP_NetworkTrain_C_MoveCart_Params
	{
	public:
		class USceneComponent*                                     Cart;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XGXB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    Track;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_R_IsTrainFixed
	 */
	struct ABP_NetworkTrain_C_OnRep_R_IsTrainFixed_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleCarTriggers
	 */
	struct ABP_NetworkTrain_C_ToggleCarTriggers_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.SetupEscapeIndicator
	 */
	struct ABP_NetworkTrain_C_SetupEscapeIndicator_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.GetDistanceOnSpline
	 */
	struct ABP_NetworkTrain_C_GetDistanceOnSpline_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnlyUseLoop;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M40L[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USplineComponent*                                    Track;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerLeftCart
	 */
	struct ABP_NetworkTrain_C_PlayerLeftCart_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Trigger;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Component;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerEnteredCart
	 */
	struct ABP_NetworkTrain_C_PlayerEnteredCart_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.UserConstructionScript
	 */
	struct ABP_NetworkTrain_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__FinishedFunc
	 */
	struct ABP_NetworkTrain_C_TL_Train__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__UpdateFunc
	 */
	struct ABP_NetworkTrain_C_TL_Train__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__BeginDeceleration__EventFunc
	 */
	struct ABP_NetworkTrain_C_TL_Train__BeginDeceleration__EventFunc_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__ReachedFullSpeed__EventFunc
	 */
	struct ABP_NetworkTrain_C_TL_Train__ReachedFullSpeed__EventFunc_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__Start__EventFunc
	 */
	struct ABP_NetworkTrain_C_TL_Train__Start__EventFunc_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.PreSaveActorState
	 */
	struct ABP_NetworkTrain_C_PreSaveActorState_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.CheckForSolved
	 */
	struct ABP_NetworkTrain_C_CheckForSolved_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.R_OnFixed
	 */
	struct ABP_NetworkTrain_C_R_OnFixed_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ToEnd
	 */
	struct ABP_NetworkTrain_C_ToEnd_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.BeginEndGameSequence
	 */
	struct ABP_NetworkTrain_C_BeginEndGameSequence_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.IsPlayerNearby
	 */
	struct ABP_NetworkTrain_C_IsPlayerNearby_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OpenDoor
	 */
	struct ABP_NetworkTrain_C_OpenDoor_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleDoor
	 */
	struct ABP_NetworkTrain_C_ToggleDoor_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.LoadActorState
	 */
	struct ABP_NetworkTrain_C_LoadActorState_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkTrain_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveTick
	 */
	struct ABP_NetworkTrain_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.Multicast Train Leaving Sound
	 */
	struct ABP_NetworkTrain_C_MulticastTrainLeavingSound_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.DeactivateCallButtons
	 */
	struct ABP_NetworkTrain_C_DeactivateCallButtons_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.BeginDeparture
	 */
	struct ABP_NetworkTrain_C_BeginDeparture_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.Countdown
	 */
	struct ABP_NetworkTrain_C_Countdown_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ActivateCallButtons
	 */
	struct ABP_NetworkTrain_C_ActivateCallButtons_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.CallTrain
	 */
	struct ABP_NetworkTrain_C_CallTrain_Params
	{
	public:
		int32_t                                                    Station;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.ExecuteUbergraph_BP_NetworkTrain
	 */
	struct ABP_NetworkTrain_C_ExecuteUbergraph_BP_NetworkTrain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnBoardTrain__DelegateSignature
	 */
	struct ABP_NetworkTrain_C_OnBoardTrain__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainCalled__DelegateSignature
	 */
	struct ABP_NetworkTrain_C_OnTrainCalled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStop__DelegateSignature
	 */
	struct ABP_NetworkTrain_C_OnTrainStop__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStart__DelegateSignature
	 */
	struct ABP_NetworkTrain_C_OnTrainStart__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkTrain.BP_NetworkTrain_C.TrainIsFixed__DelegateSignature
	 */
	struct ABP_NetworkTrain_C_TrainIsFixed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
