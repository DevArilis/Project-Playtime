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
	 * Function BP_Tooltip.BP_Tooltip_C.SelfDestruct
	 */
	struct ABP_Tooltip_C_SelfDestruct_Params
	{	};

	/**
	 * Function BP_Tooltip.BP_Tooltip_C.ReceiveBeginPlay
	 */
	struct ABP_Tooltip_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Tooltip.BP_Tooltip_C.SetNonEssentialHUDVisibility
	 */
	struct ABP_Tooltip_C_SetNonEssentialHUDVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tooltip.BP_Tooltip_C.ExecuteUbergraph_BP_Tooltip
	 */
	struct ABP_Tooltip_C_ExecuteUbergraph_BP_Tooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
