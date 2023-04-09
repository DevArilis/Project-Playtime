﻿#pragma once

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
	 * Function UI_Perks.UI_Perks_C.Get_level3_Text_1
	 */
	struct UUI_Perks_C_Get_level3_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.Get_level2_Text_1
	 */
	struct UUI_Perks_C_Get_level2_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.Get_level1_Text_1
	 */
	struct UUI_Perks_C_Get_level1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.PreConstruct
	 */
	struct UUI_Perks_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.PerkButtonPressed
	 */
	struct UUI_Perks_C_PerkButtonPressed_Params
	{
	public:
		EPerkType                                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.UpdateVisuals
	 */
	struct UUI_Perks_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.BndEvt__UI_Perks_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Perks_C_BndEvt__UI_Perks_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.BndEvt__UI_Perks_UpgradeButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Perks_C_BndEvt__UI_Perks_UpgradeButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.OnInitialized
	 */
	struct UUI_Perks_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.RefreshUpgradeButton
	 */
	struct UUI_Perks_C_RefreshUpgradeButton_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.BndEvt__UI_Perks_DEV_moretickets_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Perks_C_BndEvt__UI_Perks_DEV_moretickets_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.RefreshBuyButton
	 */
	struct UUI_Perks_C_RefreshBuyButton_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.SetSelectedPerkSlot
	 */
	struct UUI_Perks_C_SetSelectedPerkSlot_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.SetPerksEnabled
	 */
	struct UUI_Perks_C_SetPerksEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks.UI_Perks_C.BndEvt__UI_Perks_ClearSlotButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Perks_C_BndEvt__UI_Perks_ClearSlotButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks.UI_Perks_C.ExecuteUbergraph_UI_Perks
	 */
	struct UUI_Perks_C_ExecuteUbergraph_UI_Perks_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
