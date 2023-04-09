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
	 * Function BP_NetworkHand.BP_NetworkHand_C.SetStyle
	 */
	struct ABP_NetworkHand_C_SetStyle_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.UserConstructionScript
	 */
	struct ABP_NetworkHand_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.OnEndTouch_Event
	 */
	struct ABP_NetworkHand_C_OnEndTouch_Event_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.OnBeginTouch_Event
	 */
	struct ABP_NetworkHand_C_OnBeginTouch_Event_Params
	{
	public:
		float                                                      Out_GrabbedThickness;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Out_DistanceFromPalm;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       AnimToPlay;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoDestroy_Event
	 */
	struct ABP_NetworkHand_C_OnPseudoDestroy_Event_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoSpawn_Event
	 */
	struct ABP_NetworkHand_C_OnPseudoSpawn_Event_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkHand_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.DetermineVisuals
	 */
	struct ABP_NetworkHand_C_DetermineVisuals_Params
	{	};

	/**
	 * Function BP_NetworkHand.BP_NetworkHand_C.ExecuteUbergraph_BP_NetworkHand
	 */
	struct ABP_NetworkHand_C_ExecuteUbergraph_BP_NetworkHand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
