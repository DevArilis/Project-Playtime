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
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_WhiteBGButton_C::SetText(const class FText& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.SetText");
		
		UUI_WhiteBGButton_C_SetText_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WhiteBGButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.PreConstruct");
		
		UUI_WhiteBGButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_WhiteBGButton_C_BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_WhiteBGButton_C_BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_WhiteBGButton_C_BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_WhiteBGButton_C_BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UUI_WhiteBGButton_C_BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.ExecuteUbergraph_UI_WhiteBGButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WhiteBGButton_C::ExecuteUbergraph_UI_WhiteBGButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.ExecuteUbergraph_UI_WhiteBGButton");
		
		UUI_WhiteBGButton_C_ExecuteUbergraph_UI_WhiteBGButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnPressed__DelegateSignature");
		
		UUI_WhiteBGButton_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnClicked__DelegateSignature");
		
		UUI_WhiteBGButton_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnHovered__DelegateSignature");
		
		UUI_WhiteBGButton_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnUnhovered__DelegateSignature");
		
		UUI_WhiteBGButton_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WhiteBGButton_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WhiteBGButton.UI_WhiteBGButton_C.OnReleased__DelegateSignature");
		
		UUI_WhiteBGButton_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WhiteBGButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WhiteBGButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WhiteBGButton.UI_WhiteBGButton_C");
		return ptr;
	}

}


