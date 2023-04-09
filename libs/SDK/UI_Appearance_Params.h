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
	 * Function UI_Appearance.UI_Appearance_C.SetCharacterType
	 */
	struct UUI_Appearance_C_SetCharacterType_Params
	{
	public:
		ECharacterType                                             NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.SetMenuCharacter
	 */
	struct UUI_Appearance_C_SetMenuCharacter_Params
	{
	public:
		class ABP_CustomizationMenuCharacter_C*                    MenuCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.UpdateVisuals
	 */
	struct UUI_Appearance_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2UHG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CosmeticFor;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.PreConstruct
	 */
	struct UUI_Appearance_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.Back
	 */
	struct UUI_Appearance_C_Back_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.Construct
	 */
	struct UUI_Appearance_C_Construct_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.ShowFoundSteamInventory
	 */
	struct UUI_Appearance_C_ShowFoundSteamInventory_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.UpdateSteamInventory
	 */
	struct UUI_Appearance_C_UpdateSteamInventory_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.SetColorMenuStatus
	 */
	struct UUI_Appearance_C_SetColorMenuStatus_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.ColorSelected
	 */
	struct UUI_Appearance_C_ColorSelected_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CM7E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ColorItem_C*                                     SelectedColor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.SwitchCategory
	 */
	struct UUI_Appearance_C_SwitchCategory_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature_Params
	{
	public:
		int32_t                                                    EquippedItemID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.PlaySelectAnimations
	 */
	struct UUI_Appearance_C_PlaySelectAnimations_Params
	{	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.SetTypeAnimations
	 */
	struct UUI_Appearance_C_SetTypeAnimations_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature
	 */
	struct UUI_Appearance_C_BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.ExecuteUbergraph_UI_Appearance
	 */
	struct UUI_Appearance_C_ExecuteUbergraph_UI_Appearance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Appearance.UI_Appearance_C.ChangedAppearance__DelegateSignature
	 */
	struct UUI_Appearance_C_ChangedAppearance__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
