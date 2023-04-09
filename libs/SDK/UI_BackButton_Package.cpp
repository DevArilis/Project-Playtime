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
	 * 		Name   -> Function UI_BackButton.UI_BackButton_C.BndEvt__UI_BackButton_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BackButton_C::BndEvt__UI_BackButton_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BackButton.UI_BackButton_C.BndEvt__UI_BackButton_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_BackButton_C_BndEvt__UI_BackButton_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BackButton.UI_BackButton_C.ExecuteUbergraph_UI_BackButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BackButton_C::ExecuteUbergraph_UI_BackButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BackButton.UI_BackButton_C.ExecuteUbergraph_UI_BackButton");
		
		UUI_BackButton_C_ExecuteUbergraph_UI_BackButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BackButton.UI_BackButton_C.Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BackButton_C::Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BackButton.UI_BackButton_C.Released__DelegateSignature");
		
		UUI_BackButton_C_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BackButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BackButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BackButton.UI_BackButton_C");
		return ptr;
	}

}


