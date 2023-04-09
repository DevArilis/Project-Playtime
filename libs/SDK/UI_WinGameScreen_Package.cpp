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
	 * 		Name   -> Function UI_WinGameScreen.UI_WinGameScreen_C.OnFailure_02BBAA10401390C9AC553689D90391FA
	 * 		Flags  -> ()
	 */
	void UUI_WinGameScreen_C::OnFailure_02BBAA10401390C9AC553689D90391FA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinGameScreen.UI_WinGameScreen_C.OnFailure_02BBAA10401390C9AC553689D90391FA");
		
		UUI_WinGameScreen_C_OnFailure_02BBAA10401390C9AC553689D90391FA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinGameScreen.UI_WinGameScreen_C.OnSuccess_02BBAA10401390C9AC553689D90391FA
	 * 		Flags  -> ()
	 */
	void UUI_WinGameScreen_C::OnSuccess_02BBAA10401390C9AC553689D90391FA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinGameScreen.UI_WinGameScreen_C.OnSuccess_02BBAA10401390C9AC553689D90391FA");
		
		UUI_WinGameScreen_C_OnSuccess_02BBAA10401390C9AC553689D90391FA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinGameScreen.UI_WinGameScreen_C.EventLeave
	 * 		Flags  -> ()
	 */
	void UUI_WinGameScreen_C::EventLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinGameScreen.UI_WinGameScreen_C.EventLeave");
		
		UUI_WinGameScreen_C_EventLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinGameScreen.UI_WinGameScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_WinGameScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinGameScreen.UI_WinGameScreen_C.Construct");
		
		UUI_WinGameScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinGameScreen.UI_WinGameScreen_C.ExecuteUbergraph_UI_WinGameScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WinGameScreen_C::ExecuteUbergraph_UI_WinGameScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinGameScreen.UI_WinGameScreen_C.ExecuteUbergraph_UI_WinGameScreen");
		
		UUI_WinGameScreen_C_ExecuteUbergraph_UI_WinGameScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WinGameScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WinGameScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WinGameScreen.UI_WinGameScreen_C");
		return ptr;
	}

}


