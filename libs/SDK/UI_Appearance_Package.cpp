/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.SetCharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::SetCharacterType(ECharacterType NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.SetCharacterType");
		
		UUI_Appearance_C_SetCharacterType_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.SetMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CustomizationMenuCharacter_C*            MenuCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::SetMenuCharacter(class ABP_CustomizationMenuCharacter_C* MenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.SetMenuCharacter");
		
		UUI_Appearance_C_SetMenuCharacter_Params params {};
		params.MenuCharacter = MenuCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.UpdateVisuals");
		
		UUI_Appearance_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CosmeticFor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature(int32_t ItemID, ECosmeticTypeEnum Type, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		params.Type = Type;
		params.Caller = Caller;
		params.CosmeticFor = CosmeticFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Appearance_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.PreConstruct");
		
		UUI_Appearance_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.Back
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.Back");
		
		UUI_Appearance_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.Construct");
		
		UUI_Appearance_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.ShowFoundSteamInventory
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::ShowFoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.ShowFoundSteamInventory");
		
		UUI_Appearance_C_ShowFoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.UpdateSteamInventory
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::UpdateSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.UpdateSteamInventory");
		
		UUI_Appearance_C_UpdateSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.SetColorMenuStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::SetColorMenuStatus(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.SetColorMenuStatus");
		
		UUI_Appearance_C_SetColorMenuStatus_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.ColorSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ColorItem_C*                             SelectedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::ColorSelected(int32_t ColorIndex, class UUI_ColorItem_C* SelectedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.ColorSelected");
		
		UUI_Appearance_C_ColorSelected_Params params {};
		params.ColorIndex = ColorIndex;
		params.SelectedColor = SelectedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.SwitchCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::SwitchCategory(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.SwitchCategory");
		
		UUI_Appearance_C_SwitchCategory_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EquippedItemID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature(int32_t EquippedItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature_Params params {};
		params.EquippedItemID = EquippedItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.PlaySelectAnimations
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::PlaySelectAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.PlaySelectAnimations");
		
		UUI_Appearance_C_PlaySelectAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.SetTypeAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::SetTypeAnimations(ECosmeticTypeEnum CosmeticType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.SetTypeAnimations");
		
		UUI_Appearance_C_SetTypeAnimations_Params params {};
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature");
		
		UUI_Appearance_C_BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.ExecuteUbergraph_UI_Appearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Appearance_C::ExecuteUbergraph_UI_Appearance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.ExecuteUbergraph_UI_Appearance");
		
		UUI_Appearance_C_ExecuteUbergraph_UI_Appearance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Appearance.UI_Appearance_C.ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Appearance_C::ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Appearance.UI_Appearance_C.ChangedAppearance__DelegateSignature");
		
		UUI_Appearance_C_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Appearance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Appearance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Appearance.UI_Appearance_C");
		return ptr;
	}

}


