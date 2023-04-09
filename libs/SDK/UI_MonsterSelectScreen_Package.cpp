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
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MonsterSelectScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.PreConstruct");
		
		UUI_MonsterSelectScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.RefreshVisuals");
		
		UUI_MonsterSelectScreen_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Time's Up Event
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::TimesUpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Time's Up Event");
		
		UUI_MonsterSelectScreen_C_TimesUpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterSelectScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Tick");
		
		UUI_MonsterSelectScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.OnInitialized");
		
		UUI_MonsterSelectScreen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.ExecuteUbergraph_UI_MonsterSelectScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterSelectScreen_C::ExecuteUbergraph_UI_MonsterSelectScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.ExecuteUbergraph_UI_MonsterSelectScreen");
		
		UUI_MonsterSelectScreen_C_ExecuteUbergraph_UI_MonsterSelectScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Back Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MonsterSelectScreen_C::BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterSelectScreen.UI_MonsterSelectScreen_C.Back Pressed__DelegateSignature");
		
		UUI_MonsterSelectScreen_C_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MonsterSelectScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MonsterSelectScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MonsterSelectScreen.UI_MonsterSelectScreen_C");
		return ptr;
	}

}


