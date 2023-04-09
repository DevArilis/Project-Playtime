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
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetReviveSpeed
	 */
	struct ABP_WormholeEntrance_C_GetReviveSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetHandFromReviver
	 */
	struct ABP_WormholeEntrance_C_GetHandFromReviver_Params
	{
	public:
		class AANetworkHand*                                       Hand;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Reviver Is Local
	 */
	struct ABP_WormholeEntrance_C_ReviverIsLocal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Progress
	 */
	struct ABP_WormholeEntrance_C_OnRep_Progress_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ViewProgress
	 */
	struct ABP_WormholeEntrance_C_ViewProgress_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Opened
	 */
	struct ABP_WormholeEntrance_C_OnRep_Opened_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.UserConstructionScript
	 */
	struct ABP_WormholeEntrance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__FinishedFunc
	 */
	struct ABP_WormholeEntrance_C_CloseDoorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__UpdateFunc
	 */
	struct ABP_WormholeEntrance_C_CloseDoorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__FinishedFunc
	 */
	struct ABP_WormholeEntrance_C_OpenDoorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__UpdateFunc
	 */
	struct ABP_WormholeEntrance_C_OpenDoorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Cancel Reviver Tooltip
	 */
	struct ABP_WormholeEntrance_C_MulticastCancelReviverTooltip_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Success Reviver Tooltip
	 */
	struct ABP_WormholeEntrance_C_MulticastSuccessReviverTooltip_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Start Reviver Tooltip
	 */
	struct ABP_WormholeEntrance_C_MulticastStartReviverTooltip_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FEXU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Net_DetachHands
	 */
	struct ABP_WormholeEntrance_C_Net_DetachHands_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReviveSuccess
	 */
	struct ABP_WormholeEntrance_C_ReviveSuccess_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ShowReviveIndicator
	 */
	struct ABP_WormholeEntrance_C_ShowReviveIndicator_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Spawn Reviver Tooltip
	 */
	struct ABP_WormholeEntrance_C_MulticastSpawnReviverTooltip_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.MonsterShowNavIndicator
	 */
	struct ABP_WormholeEntrance_C_MonsterShowNavIndicator_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveTick
	 */
	struct ABP_WormholeEntrance_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorAnim
	 */
	struct ABP_WormholeEntrance_C_CloseDoorAnim_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorAnim
	 */
	struct ABP_WormholeEntrance_C_OpenDoorAnim_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast_DetachHands
	 */
	struct ABP_WormholeEntrance_C_Multicast_DetachHands_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Close Door
	 */
	struct ABP_WormholeEntrance_C_CloseDoor_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Open Door
	 */
	struct ABP_WormholeEntrance_C_OpenDoor_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.PutPlayerInto
	 */
	struct ABP_WormholeEntrance_C_PutPlayerInto_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PlayerMovingThrough;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.Set Hinge Rotation
	 */
	struct ABP_WormholeEntrance_C_SetHingeRotation_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveBeginPlay
	 */
	struct ABP_WormholeEntrance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.ExecuteUbergraph_BP_WormholeEntrance
	 */
	struct ABP_WormholeEntrance_C_ExecuteUbergraph_BP_WormholeEntrance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnDroppedInHole__DelegateSignature
	 */
	struct ABP_WormholeEntrance_C_OnDroppedInHole__DelegateSignature_Params
	{
	public:
		class ABP_DualSplineFollower_C*                            DSF;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
