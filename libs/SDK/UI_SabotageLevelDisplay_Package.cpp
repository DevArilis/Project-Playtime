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
	 * 		Name   -> Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SabotageLevelDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.PreConstruct");
		
		UUI_SabotageLevelDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_SabotageLevelDisplay_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.UpdateVisuals");
		
		UUI_SabotageLevelDisplay_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageLevelDisplay_C::SetLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetLevel");
		
		UUI_SabotageLevelDisplay_C_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Sabotage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageLevelDisplay_C::SetSabotage(const class FName& Sabotage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetSabotage");
		
		UUI_SabotageLevelDisplay_C_SetSabotage_Params params {};
		params.Sabotage = Sabotage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.ExecuteUbergraph_UI_SabotageLevelDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageLevelDisplay_C::ExecuteUbergraph_UI_SabotageLevelDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.ExecuteUbergraph_UI_SabotageLevelDisplay");
		
		UUI_SabotageLevelDisplay_C_ExecuteUbergraph_UI_SabotageLevelDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SabotageLevelDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SabotageLevelDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C");
		return ptr;
	}

}


