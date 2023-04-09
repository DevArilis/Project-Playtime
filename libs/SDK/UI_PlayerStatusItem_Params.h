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
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_T_PlayerName_ColorAndOpacity_1
	 */
	struct UUI_PlayerStatusItem_C_Get_T_PlayerName_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get Player Status Icon
	 */
	struct UUI_PlayerStatusItem_C_GetPlayerStatusIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Color
	 */
	struct UUI_PlayerStatusItem_C_Get_Status_Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Text
	 */
	struct UUI_PlayerStatusItem_C_Get_Status_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.PreConstruct
	 */
	struct UUI_PlayerStatusItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Construct
	 */
	struct UUI_PlayerStatusItem_C_Construct_Params
	{	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPlayerName
	 */
	struct UUI_PlayerStatusItem_C_SetPlayerName_Params
	{	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPerkIcon
	 */
	struct UUI_PlayerStatusItem_C_SetPerkIcon_Params
	{	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdateHeldToyPart
	 */
	struct UUI_PlayerStatusItem_C_UpdateHeldToyPart_Params
	{
	public:
		class UTexture2D*                                          ToyPart;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHoldingToyPart;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdatePerksVisibility
	 */
	struct UUI_PlayerStatusItem_C_UpdatePerksVisibility_Params
	{	};

	/**
	 * Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.ExecuteUbergraph_UI_PlayerStatusItem
	 */
	struct UUI_PlayerStatusItem_C_ExecuteUbergraph_UI_PlayerStatusItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
