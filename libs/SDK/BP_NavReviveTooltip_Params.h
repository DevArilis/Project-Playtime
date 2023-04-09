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
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.StartRevive
	 */
	struct ABP_NavReviveTooltip_C_StartRevive_Params
	{	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SetReviveProgress
	 */
	struct ABP_NavReviveTooltip_C_SetReviveProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SuccessRevive
	 */
	struct ABP_NavReviveTooltip_C_SuccessRevive_Params
	{	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.CancelRevive
	 */
	struct ABP_NavReviveTooltip_C_CancelRevive_Params
	{	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ReceiveBeginPlay
	 */
	struct ABP_NavReviveTooltip_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.OnAnimationFinished
	 */
	struct ABP_NavReviveTooltip_C_OnAnimationFinished_Params
	{	};

	/**
	 * Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ExecuteUbergraph_BP_NavReviveTooltip
	 */
	struct ABP_NavReviveTooltip_C_ExecuteUbergraph_BP_NavReviveTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
