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
	 * Function BP_WireConnect.BP_WireConnect_C.OnRep_Connected
	 */
	struct ABP_WireConnect_C_OnRep_Connected_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.OnRep_WireColor
	 */
	struct ABP_WireConnect_C_OnRep_WireColor_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.OnRep_EndLocation
	 */
	struct ABP_WireConnect_C_OnRep_EndLocation_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.SetGrabbed
	 */
	struct ABP_WireConnect_C_SetGrabbed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXDG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.SetConnected
	 */
	struct ABP_WireConnect_C_SetConnected_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnBegin;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.TL_MoveEnd__FinishedFunc
	 */
	struct ABP_WireConnect_C_TL_MoveEnd__FinishedFunc_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.TL_MoveEnd__UpdateFunc
	 */
	struct ABP_WireConnect_C_TL_MoveEnd__UpdateFunc_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.BndEvt__BP_WireConnect_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_WireConnect_C_BndEvt__BP_WireConnect_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.ReceiveTick
	 */
	struct ABP_WireConnect_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.BndEvt__BP_WireConnect_ConnectionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_WireConnect_C_BndEvt__BP_WireConnect_ConnectionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUQE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.MoveEndTo
	 */
	struct ABP_WireConnect_C_MoveEndTo_Params
	{
	public:
		struct FVector                                             EndLocation;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.Setup
	 */
	struct ABP_WireConnect_C_Setup_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.ExecuteUbergraph_BP_WireConnect
	 */
	struct ABP_WireConnect_C_ExecuteUbergraph_BP_WireConnect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.OnWireSetup__DelegateSignature
	 */
	struct ABP_WireConnect_C_OnWireSetup__DelegateSignature_Params
	{	};

	/**
	 * Function BP_WireConnect.BP_WireConnect_C.OnConnected__DelegateSignature
	 */
	struct ABP_WireConnect_C_OnConnected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
