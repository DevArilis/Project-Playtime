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
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.PreConstruct
	 */
	struct UUI_EmoteSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.SetHovered
	 */
	struct UUI_EmoteSlot_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.UpdateVisuals
	 */
	struct UUI_EmoteSlot_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.SetItemID
	 */
	struct UUI_EmoteSlot_C_SetItemID_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.ExecuteUbergraph_UI_EmoteSlot
	 */
	struct UUI_EmoteSlot_C_ExecuteUbergraph_UI_EmoteSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
