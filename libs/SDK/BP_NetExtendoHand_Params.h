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
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ResetOrigin
	 */
	struct ABP_NetExtendoHand_C_ResetOrigin_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.Hit
	 */
	struct ABP_NetExtendoHand_C_Hit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.OpenPanelChargeGate
	 */
	struct ABP_NetExtendoHand_C_OpenPanelChargeGate_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ST4T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Air High Five
	 */
	struct ABP_NetExtendoHand_C_CalculateAirHighFive_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_20MJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorToCheck;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoHighFive;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FOG3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.Handle Wire
	 */
	struct ABP_NetExtendoHand_C_HandleWire_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateGun
	 */
	struct ABP_NetExtendoHand_C_RotateGun_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Panel
	 */
	struct ABP_NetExtendoHand_C_CalculatePanel_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoPanel;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DTN3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MP_HandPanel_C*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.UnattachAndRetract
	 */
	struct ABP_NetExtendoHand_C_UnattachAndRetract_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetHitComponent
	 */
	struct ABP_NetExtendoHand_C_GetHitComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetReturnVelocity
	 */
	struct ABP_NetExtendoHand_C_GetReturnVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateHandToNormal
	 */
	struct ABP_NetExtendoHand_C_RotateHandToNormal_Params
	{
	public:
		struct FVector                                             ImpactNormal;                                            // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.FitHandOnAttachedItem
	 */
	struct ABP_NetExtendoHand_C_FitHandOnAttachedItem_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleHighFive
	 */
	struct ABP_NetExtendoHand_C_HandleHighFive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J49C[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.RetractSound
	 */
	struct ABP_NetExtendoHand_C_RetractSound_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.GrabSound
	 */
	struct ABP_NetExtendoHand_C_GrabSound_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.TraceForHit
	 */
	struct ABP_NetExtendoHand_C_TraceForHit_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleWireLength
	 */
	struct ABP_NetExtendoHand_C_HandleWireLength_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDirection
	 */
	struct ABP_NetExtendoHand_C_SetLocationByDirection_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.CheckIfReadyToDestroy
	 */
	struct ABP_NetExtendoHand_C_CheckIfReadyToDestroy_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReturnHand
	 */
	struct ABP_NetExtendoHand_C_ReturnHand_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDistanceMoved
	 */
	struct ABP_NetExtendoHand_C_SetLocationByDistanceMoved_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.LaunchSound
	 */
	struct ABP_NetExtendoHand_C_LaunchSound_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetHandSide
	 */
	struct ABP_NetExtendoHand_C_SetHandSide_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveTick
	 */
	struct ABP_NetExtendoHand_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveBeginPlay
	 */
	struct ABP_NetExtendoHand_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveDestroyed
	 */
	struct ABP_NetExtendoHand_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToPanel
	 */
	struct ABP_NetExtendoHand_C_EventAttachHandToPanel_Params
	{
	public:
		class ABP_MP_HandPanel_C*                                  HandPanel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToActor
	 */
	struct ABP_NetExtendoHand_C_EventAttachHandToActor_Params
	{	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ToggleRetractionGate
	 */
	struct ABP_NetExtendoHand_C_ToggleRetractionGate_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.ExecuteUbergraph_BP_NetExtendoHand
	 */
	struct ABP_NetExtendoHand_C_ExecuteUbergraph_BP_NetExtendoHand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AE5E[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandAttached__DelegateSignature
	 */
	struct ABP_NetExtendoHand_C_HandAttached__DelegateSignature_Params
	{
	public:
		class AActor*                                              AttachedTo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
