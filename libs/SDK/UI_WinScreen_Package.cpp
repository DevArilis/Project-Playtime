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
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.OnFailure_A070BB30474FFF9F1707AE876026909F
	 * 		Flags  -> ()
	 */
	void UUI_WinScreen_C::OnFailure_A070BB30474FFF9F1707AE876026909F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.OnFailure_A070BB30474FFF9F1707AE876026909F");
		
		UUI_WinScreen_C_OnFailure_A070BB30474FFF9F1707AE876026909F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.OnSuccess_A070BB30474FFF9F1707AE876026909F
	 * 		Flags  -> ()
	 */
	void UUI_WinScreen_C::OnSuccess_A070BB30474FFF9F1707AE876026909F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.OnSuccess_A070BB30474FFF9F1707AE876026909F");
		
		UUI_WinScreen_C_OnSuccess_A070BB30474FFF9F1707AE876026909F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.EventLeave
	 * 		Flags  -> ()
	 */
	void UUI_WinScreen_C::EventLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.EventLeave");
		
		UUI_WinScreen_C_EventLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.SetFont
	 * 		Flags  -> ()
	 */
	void UUI_WinScreen_C::SetFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.SetFont");
		
		UUI_WinScreen_C_SetFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_WinScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.Construct");
		
		UUI_WinScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WinScreen.UI_WinScreen_C.ExecuteUbergraph_UI_WinScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WinScreen_C::ExecuteUbergraph_UI_WinScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WinScreen.UI_WinScreen_C.ExecuteUbergraph_UI_WinScreen");
		
		UUI_WinScreen_C_ExecuteUbergraph_UI_WinScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WinScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WinScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WinScreen.UI_WinScreen_C");
		return ptr;
	}

}


