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
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetCharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::SetCharacterType(ECharacterType NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetCharacterType");
		
		UUI_CustomizeCharacter_C_SetCharacterType_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.UpdateVisuals");
		
		UUI_CustomizeCharacter_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomizeCharacter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.PreConstruct");
		
		UUI_CustomizeCharacter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_CustomizationMenuCharacter_C*            MenuCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::SetCharacter(class ABP_NetworkCharacter_C* Character, class ABP_CustomizationMenuCharacter_C* MenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetCharacter");
		
		UUI_CustomizeCharacter_C_SetCharacter_Params params {};
		params.Character = Character;
		params.MenuCharacter = MenuCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SelectFirstPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::SelectFirstPage(ECharacterType CharacterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SelectFirstPage");
		
		UUI_CustomizeCharacter_C_SelectFirstPage_Params params {};
		params.CharacterType = CharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_Appearance_K2Node_ComponentBoundEvent_6_ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_Appearance_K2Node_ComponentBoundEvent_6_ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_Appearance_K2Node_ComponentBoundEvent_6_ChangedAppearance__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_CustomizeCharacter_UI_Appearance_K2Node_ComponentBoundEvent_6_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetPersistentButtonStyleOnCorrectButton
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::SetPersistentButtonStyleOnCorrectButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.SetPersistentButtonStyleOnCorrectButton");
		
		UUI_CustomizeCharacter_C_SetPersistentButtonStyleOnCorrectButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.Tick");
		
		UUI_CustomizeCharacter_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.ExecuteUbergraph_UI_CustomizeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::ExecuteUbergraph_UI_CustomizeCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.ExecuteUbergraph_UI_CustomizeCharacter");
		
		UUI_CustomizeCharacter_C_ExecuteUbergraph_UI_CustomizeCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.MouseDragged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DeltaMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeCharacter_C::MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.MouseDragged__DelegateSignature");
		
		UUI_CustomizeCharacter_C_MouseDragged__DelegateSignature_Params params {};
		params.DeltaMouse = DeltaMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.UpdateRotatingCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Rotating                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomizeCharacter_C::UpdateRotatingCharacter__DelegateSignature(bool Rotating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.UpdateRotatingCharacter__DelegateSignature");
		
		UUI_CustomizeCharacter_C_UpdateRotatingCharacter__DelegateSignature_Params params {};
		params.Rotating = Rotating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.ChangedAppearance__DelegateSignature");
		
		UUI_CustomizeCharacter_C_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizeCharacter_C::BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomizeCharacter.UI_CustomizeCharacter_C.BackPressed__DelegateSignature");
		
		UUI_CustomizeCharacter_C_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomizeCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomizeCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomizeCharacter.UI_CustomizeCharacter_C");
		return ptr;
	}

}


