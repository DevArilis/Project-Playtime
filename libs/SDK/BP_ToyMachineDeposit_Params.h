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
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.InsertToy
	 */
	struct ABP_ToyMachineDeposit_C_InsertToy_Params
	{
	public:
		int32_t                                                    ToyIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08Z7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         ToyMesh;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.PlayDropAnimation
	 */
	struct ABP_ToyMachineDeposit_C_PlayDropAnimation_Params
	{
	public:
		class UStaticMesh*                                         ToyMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.UserConstructionScript
	 */
	struct ABP_ToyMachineDeposit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.ReceiveActorBeginOverlap
	 */
	struct ABP_ToyMachineDeposit_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.MultiAnimateToy
	 */
	struct ABP_ToyMachineDeposit_C_MultiAnimateToy_Params
	{	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.BndEvt__BP_ToyMachineDeposit_HideZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ToyMachineDeposit_C_BndEvt__BP_ToyMachineDeposit_HideZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJ8S[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.ReceiveActorEndOverlap
	 */
	struct ABP_ToyMachineDeposit_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.ReceiveBeginPlay
	 */
	struct ABP_ToyMachineDeposit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.ReceiveTick
	 */
	struct ABP_ToyMachineDeposit_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.ExecuteUbergraph_BP_ToyMachineDeposit
	 */
	struct ABP_ToyMachineDeposit_C_ExecuteUbergraph_BP_ToyMachineDeposit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyMachineDeposit.BP_ToyMachineDeposit_C.OnToyDeposited__DelegateSignature
	 */
	struct ABP_ToyMachineDeposit_C_OnToyDeposited__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
