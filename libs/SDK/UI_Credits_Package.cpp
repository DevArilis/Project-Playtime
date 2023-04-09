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
	 * 		Name   -> Function UI_Credits.UI_Credits_C.ExitCredits
	 * 		Flags  -> ()
	 */
	void UUI_Credits_C::ExitCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.ExitCredits");
		
		UUI_Credits_C_ExitCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Credits.UI_Credits_C.InstantExitCredits
	 * 		Flags  -> ()
	 */
	void UUI_Credits_C::InstantExitCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.InstantExitCredits");
		
		UUI_Credits_C_InstantExitCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Credits.UI_Credits_C.BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Credits_C::BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_Credits_C_BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Credits.UI_Credits_C.EnterCredits
	 * 		Flags  -> ()
	 */
	void UUI_Credits_C::EnterCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.EnterCredits");
		
		UUI_Credits_C_EnterCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Credits.UI_Credits_C.ExecuteUbergraph_UI_Credits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Credits_C::ExecuteUbergraph_UI_Credits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.ExecuteUbergraph_UI_Credits");
		
		UUI_Credits_C_ExecuteUbergraph_UI_Credits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Credits.UI_Credits_C.CreditsBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Credits_C::CreditsBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.CreditsBack__DelegateSignature");
		
		UUI_Credits_C_CreditsBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Credits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Credits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Credits.UI_Credits_C");
		return ptr;
	}

}


