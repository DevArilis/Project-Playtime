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
	 * Function BP_ToyPart.BP_ToyPart_C.MoveToyDown
	 */
	struct ABP_ToyPart_C_MoveToyDown_Params
	{	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.UserConstructionScript
	 */
	struct ABP_ToyPart_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.ReceiveBeginPlay
	 */
	struct ABP_ToyPart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.DestroyedEvent
	 */
	struct ABP_ToyPart_C_DestroyedEvent_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.IsPlayerNearby
	 */
	struct ABP_ToyPart_C_IsPlayerNearby_Params
	{	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.ReceiveActorEndOverlap
	 */
	struct ABP_ToyPart_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToyPart.BP_ToyPart_C.ExecuteUbergraph_BP_ToyPart
	 */
	struct ABP_ToyPart_C_ExecuteUbergraph_BP_ToyPart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
