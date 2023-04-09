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
	 * Function BP_TrainCall.BP_TrainCall_C.OnRep_Active
	 */
	struct ABP_TrainCall_C_OnRep_Active_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.ReceiveBeginPlay
	 */
	struct ABP_TrainCall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.ToggleActive
	 */
	struct ABP_TrainCall_C_ToggleActive_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.PanelActivated
	 */
	struct ABP_TrainCall_C_PanelActivated_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.IsPlayerNearby
	 */
	struct ABP_TrainCall_C_IsPlayerNearby_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.ReceiveActorEndOverlap
	 */
	struct ABP_TrainCall_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.ChangeObj
	 */
	struct ABP_TrainCall_C_ChangeObj_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.CheckIfTrainArrived
	 */
	struct ABP_TrainCall_C_CheckIfTrainArrived_Params
	{	};

	/**
	 * Function BP_TrainCall.BP_TrainCall_C.ExecuteUbergraph_BP_TrainCall
	 */
	struct ABP_TrainCall_C_ExecuteUbergraph_BP_TrainCall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
