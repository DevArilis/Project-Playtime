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
	 * Function UI_Tooltip.UI_Tooltip_C.Get_T_Tooltip_Text_1
	 */
	struct UUI_Tooltip_C_Get_T_Tooltip_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.SetupTooltip
	 */
	struct UUI_Tooltip_C_SetupTooltip_Params
	{
	public:
		class FString                                              Tooltip;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.Construct
	 */
	struct UUI_Tooltip_C_Construct_Params
	{	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.ExecuteUbergraph_UI_Tooltip
	 */
	struct UUI_Tooltip_C_ExecuteUbergraph_UI_Tooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.OnTooltipConstructed__DelegateSignature
	 */
	struct UUI_Tooltip_C_OnTooltipConstructed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
