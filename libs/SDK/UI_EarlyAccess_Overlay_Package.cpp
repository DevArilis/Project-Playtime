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
	 * 		Name   -> Function UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EarlyAccess_Overlay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C.PreConstruct");
		
		UUI_EarlyAccess_Overlay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C.ExecuteUbergraph_UI_EarlyAccess_Overlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EarlyAccess_Overlay_C::ExecuteUbergraph_UI_EarlyAccess_Overlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C.ExecuteUbergraph_UI_EarlyAccess_Overlay");
		
		UUI_EarlyAccess_Overlay_C_ExecuteUbergraph_UI_EarlyAccess_Overlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EarlyAccess_Overlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EarlyAccess_Overlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C");
		return ptr;
	}

}


