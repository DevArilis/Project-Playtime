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
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_Progress_Implementation
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_Progress_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DecrementingToInProgress
	 */
	struct ABP_Puzzle_Claw_Fun_C_DecrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_RandomizationIndexer
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_RandomizationIndexer_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_REPNOTButtonLEDSetter
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_REPNOTButtonLEDSetter_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_Hand_1
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_Hand_1_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_SK Hand
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_SKHand_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_Current Preset
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_CurrentPreset_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_ReplicatedHandSetter
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_ReplicatedHandSetter_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_REPNOT Tube Pos
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_REPNOTTubePos_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_HandScale
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_HandScale_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_ItemSelectorArray
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_ItemSelectorArray_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Randomize Items
	 */
	struct ABP_Puzzle_Claw_Fun_C_RandomizeItems_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.IsButtonPressable
	 */
	struct ABP_Puzzle_Claw_Fun_C_IsButtonPressable_Params
	{
	public:
		bool                                                       Pressable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_HandPos
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_HandPos_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_TimeLeft
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_TimeLeft_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.FailedPuzzle
	 */
	struct ABP_Puzzle_Claw_Fun_C_FailedPuzzle_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ToSolved
	 */
	struct ABP_Puzzle_Claw_Fun_C_ToSolved_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.IncrementingToInProgress
	 */
	struct ABP_Puzzle_Claw_Fun_C_IncrementingToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DoesTouchCount
	 */
	struct ABP_Puzzle_Claw_Fun_C_DoesTouchCount_Params
	{
	public:
		class UHandMagnetComponent*                                Magnet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Counts;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A2C4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.OnRep_ItemToGet
	 */
	struct ABP_Puzzle_Claw_Fun_C_OnRep_ItemToGet_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DoIncrement
	 */
	struct ABP_Puzzle_Claw_Fun_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ZBG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ToIdle
	 */
	struct ABP_Puzzle_Claw_Fun_C_ToIdle_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.IdleToInProgress
	 */
	struct ABP_Puzzle_Claw_Fun_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ReturnClaw TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ReturnClawTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ReturnClaw TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ReturnClawTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DropHand TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropHandTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DropHand TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropHandTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ThrowTimeline__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ThrowTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ThrowTimeline__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ThrowTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ItemHeight__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ItemHeight__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ItemHeight__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_ItemHeight__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Drop TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Drop TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandPickup TL 1__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandPickupTL1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandPickup TL 1__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandPickupTL1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.TubeMoving TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_TubeMovingTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.TubeMoving TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_TubeMovingTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopHand TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopHandTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopHand TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopHandTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.RaiseHand TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_RaiseHandTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.RaiseHand TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_RaiseHandTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnNewItems TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnNewItemsTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnNewItems TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnNewItemsTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandHiding TL__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandHidingTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandHiding TL__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandHidingTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandPickupTL 2__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandPickupTL2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandPickupTL 2__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandPickupTL2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.EXAMPLE_TL_Randomizing__FinishedFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_EXAMPLE_TL_Randomizing__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.EXAMPLE_TL_Randomizing__UpdateFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_EXAMPLE_TL_Randomizing__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.EXAMPLE_TL_Randomizing__NewRandom__EventFunc
	 */
	struct ABP_Puzzle_Claw_Fun_C_EXAMPLE_TL_Randomizing__NewRandom__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnClawMovingSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnClawMovingSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopClawMovingSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopClawMovingSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PlayItemSelectedSounds
	 */
	struct ABP_Puzzle_Claw_Fun_C_PlayItemSelectedSounds_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PlayRandomizingSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_PlayRandomizingSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PlaySuccessSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_PlaySuccessSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnClawReturnSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnClawReturnSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PlayClawDropSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_PlayClawDropSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PlayGrabSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_PlayGrabSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnFailSound
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnFailSound_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SpawnItemThunk
	 */
	struct ABP_Puzzle_Claw_Fun_C_SpawnItemThunk_Params
	{
	public:
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.BndEvt__BP_Puzzle_BigMeatyClaw_DButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Claw_Fun_C_BndEvt__BP_Puzzle_BigMeatyClaw_DButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ReceiveBeginPlay
	 */
	struct ABP_Puzzle_Claw_Fun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Grab
	 */
	struct ABP_Puzzle_Claw_Fun_C_Grab_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.BndEvt__BP_Puzzle_BigMeatyClaw_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Claw_Fun_C_BndEvt__BP_Puzzle_BigMeatyClaw_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T3EP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Randomize ItemToGet
	 */
	struct ABP_Puzzle_Claw_Fun_C_RandomizeItemToGet_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Prepare Deposit Box For Item
	 */
	struct ABP_Puzzle_Claw_Fun_C_PrepareDepositBoxForItem_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Flash Item
	 */
	struct ABP_Puzzle_Claw_Fun_C_FlashItem_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopCycling
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopCycling_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Flash ButtonLight
	 */
	struct ABP_Puzzle_Claw_Fun_C_FlashButtonLight_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.PissedPants
	 */
	struct ABP_Puzzle_Claw_Fun_C_PissedPants_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Victory LED
	 */
	struct ABP_Puzzle_Claw_Fun_C_VictoryLED_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Pooped Pants
	 */
	struct ABP_Puzzle_Claw_Fun_C_PoopedPants_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DropInHand
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropInHand_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ThrowItem
	 */
	struct ABP_Puzzle_Claw_Fun_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HandPickupAnim
	 */
	struct ABP_Puzzle_Claw_Fun_C_HandPickupAnim_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Interrupt Randomizer
	 */
	struct ABP_Puzzle_Claw_Fun_C_InterruptRandomizer_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Switch Hand Anim Timer
	 */
	struct ABP_Puzzle_Claw_Fun_C_SwitchHandAnimTimer_Params
	{
	public:
		class UTimelineComponent*                                  NewTimeline;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.BndEvt__BP_Puzzle_BigMeatyClaw_GrabberBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Claw_Fun_C_BndEvt__BP_Puzzle_BigMeatyClaw_GrabberBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2HC[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Detach
	 */
	struct ABP_Puzzle_Claw_Fun_C_Detach_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Reset Grab
	 */
	struct ABP_Puzzle_Claw_Fun_C_ResetGrab_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DropHeldItem
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropHeldItem_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.LowerItems
	 */
	struct ABP_Puzzle_Claw_Fun_C_LowerItems_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopTube
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopTube_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.RestartTubeMovement
	 */
	struct ABP_Puzzle_Claw_Fun_C_RestartTubeMovement_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StartTubeMovement
	 */
	struct ABP_Puzzle_Claw_Fun_C_StartTubeMovement_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ReturnClaw
	 */
	struct ABP_Puzzle_Claw_Fun_C_ReturnClaw_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.RaiseUpHand
	 */
	struct ABP_Puzzle_Claw_Fun_C_RaiseUpHand_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.DropNewItems
	 */
	struct ABP_Puzzle_Claw_Fun_C_DropNewItems_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.SuperSecretSuperSillyFix
	 */
	struct ABP_Puzzle_Claw_Fun_C_SuperSecretSuperSillyFix_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.BndEvt__BP_Puzzle_Claw_Fun_HandMagnet_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Claw_Fun_C_BndEvt__BP_Puzzle_Claw_Fun_HandMagnet_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.HideAttachedHand
	 */
	struct ABP_Puzzle_Claw_Fun_C_HideAttachedHand_Params
	{
	public:
		struct FPresetSlot                                         CurrentPreset;                                           // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AANetworkHand*                                       Hand_1;                                                  // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.StopThrow
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopThrow_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Disable Progress Light
	 */
	struct ABP_Puzzle_Claw_Fun_C_DisableProgressLight_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Stop Item Lowering
	 */
	struct ABP_Puzzle_Claw_Fun_C_StopItemLowering_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.Set Items
	 */
	struct ABP_Puzzle_Claw_Fun_C_SetItems_Params
	{	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.BndEvt__BP_Puzzle_Claw_Fun_Box1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Claw_Fun_C_BndEvt__BP_Puzzle_Claw_Fun_Box1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9M3X[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Puzzle_Claw_Fun.BP_Puzzle_Claw_Fun_C.ExecuteUbergraph_BP_Puzzle_Claw_Fun
	 */
	struct ABP_Puzzle_Claw_Fun_C_ExecuteUbergraph_BP_Puzzle_Claw_Fun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
