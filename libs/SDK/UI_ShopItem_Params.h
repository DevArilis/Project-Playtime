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
	 * Function UI_ShopItem.UI_ShopItem_C.SetParent
	 */
	struct UUI_ShopItem_C_SetParent_Params
	{
	public:
		class UUI_Shoppy_C*                                        Parent;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.SetItem
	 */
	struct UUI_ShopItem_C_SetItem_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TB0G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.Construct
	 */
	struct UUI_ShopItem_C_Construct_Params
	{	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_ShopItem_C_BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.PreConstruct
	 */
	struct UUI_ShopItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_ShopItem_C_BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_ShopItem_C_BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.ExecuteUbergraph_UI_ShopItem
	 */
	struct UUI_ShopItem_C_ExecuteUbergraph_UI_ShopItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShopItem.UI_ShopItem_C.ShopItemReleased__DelegateSignature
	 */
	struct UUI_ShopItem_C_ShopItemReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
