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
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.InitToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ToyType                                          ToySelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameIndicatorComponent_C::InitToyPart(E_ToyType ToySelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.InitToyPart");
		
		UUI_GameIndicatorComponent_C_InitToyPart_Params params {};
		params.ToySelection = ToySelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.CheckDownPlayers
	 * 		Flags  -> ()
	 */
	void UUI_GameIndicatorComponent_C::CheckDownPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.CheckDownPlayers");
		
		UUI_GameIndicatorComponent_C_CheckDownPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Update Toy Count
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_GameIndicatorComponent_C::UpdateToyCount(TArray<bool>* ToysFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Update Toy Count");
		
		UUI_GameIndicatorComponent_C_UpdateToyCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToysFound != nullptr)
			*ToysFound = params.ToysFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.How Many Bools True
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	int32_t UUI_GameIndicatorComponent_C::HowManyBoolsTrue(TArray<bool>* Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.How Many Bools True");
		
		UUI_GameIndicatorComponent_C_HowManyBoolsTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameIndicatorComponent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Construct");
		
		UUI_GameIndicatorComponent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.ExecuteUbergraph_UI_GameIndicatorComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameIndicatorComponent_C::ExecuteUbergraph_UI_GameIndicatorComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.ExecuteUbergraph_UI_GameIndicatorComponent");
		
		UUI_GameIndicatorComponent_C_ExecuteUbergraph_UI_GameIndicatorComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameIndicatorComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameIndicatorComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameIndicatorComponent.UI_GameIndicatorComponent_C");
		return ptr;
	}

}


