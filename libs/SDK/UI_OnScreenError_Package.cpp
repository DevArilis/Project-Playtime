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
	 * 		Name   -> Function UI_OnScreenError.UI_OnScreenError_C.PrintInfoToLog
	 * 		Flags  -> ()
	 */
	void UUI_OnScreenError_C::PrintInfoToLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnScreenError.UI_OnScreenError_C.PrintInfoToLog");
		
		UUI_OnScreenError_C_PrintInfoToLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OnScreenError.UI_OnScreenError_C.HandleColor
	 * 		Flags  -> ()
	 */
	void UUI_OnScreenError_C::HandleColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnScreenError.UI_OnScreenError_C.HandleColor");
		
		UUI_OnScreenError_C_HandleColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OnScreenError.UI_OnScreenError_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_OnScreenError_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnScreenError.UI_OnScreenError_C.Construct");
		
		UUI_OnScreenError_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OnScreenError.UI_OnScreenError_C.ExecuteUbergraph_UI_OnScreenError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OnScreenError_C::ExecuteUbergraph_UI_OnScreenError(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnScreenError.UI_OnScreenError_C.ExecuteUbergraph_UI_OnScreenError");
		
		UUI_OnScreenError_C_ExecuteUbergraph_UI_OnScreenError_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OnScreenError_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OnScreenError_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OnScreenError.UI_OnScreenError_C");
		return ptr;
	}

}


