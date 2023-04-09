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
	 * 		Name   -> Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.BndEvt__UI_MainmenuSettingsExitButton_Exit_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainmenuSettingsExitButton_C::BndEvt__UI_MainmenuSettingsExitButton_Exit_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.BndEvt__UI_MainmenuSettingsExitButton_Exit_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_MainmenuSettingsExitButton_C_BndEvt__UI_MainmenuSettingsExitButton_Exit_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.BndEvt__UI_MainmenuSettingsExitButton_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainmenuSettingsExitButton_C::BndEvt__UI_MainmenuSettingsExitButton_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.BndEvt__UI_MainmenuSettingsExitButton_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_MainmenuSettingsExitButton_C_BndEvt__UI_MainmenuSettingsExitButton_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.ExecuteUbergraph_UI_MainmenuSettingsExitButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainmenuSettingsExitButton_C::ExecuteUbergraph_UI_MainmenuSettingsExitButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.ExecuteUbergraph_UI_MainmenuSettingsExitButton");
		
		UUI_MainmenuSettingsExitButton_C_ExecuteUbergraph_UI_MainmenuSettingsExitButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.SettingsReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainmenuSettingsExitButton_C::SettingsReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C.SettingsReleased__DelegateSignature");
		
		UUI_MainmenuSettingsExitButton_C_SettingsReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MainmenuSettingsExitButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MainmenuSettingsExitButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainmenuSettingsExitButton.UI_MainmenuSettingsExitButton_C");
		return ptr;
	}

}


