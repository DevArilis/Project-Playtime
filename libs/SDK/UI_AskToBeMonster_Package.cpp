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
	 * 		Name   -> Function UI_AskToBeMonster.UI_AskToBeMonster_C.GetTimeRemaing
	 * 		Flags  -> ()
	 */
	class FText UUI_AskToBeMonster_C::GetTimeRemaing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AskToBeMonster.UI_AskToBeMonster_C.GetTimeRemaing");
		
		UUI_AskToBeMonster_C_GetTimeRemaing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AskToBeMonster.UI_AskToBeMonster_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_AskToBeMonster_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AskToBeMonster.UI_AskToBeMonster_C.Construct");
		
		UUI_AskToBeMonster_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AskToBeMonster.UI_AskToBeMonster_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AskToBeMonster_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AskToBeMonster.UI_AskToBeMonster_C.PreConstruct");
		
		UUI_AskToBeMonster_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AskToBeMonster.UI_AskToBeMonster_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_AskToBeMonster_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AskToBeMonster.UI_AskToBeMonster_C.Destruct");
		
		UUI_AskToBeMonster_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AskToBeMonster.UI_AskToBeMonster_C.ExecuteUbergraph_UI_AskToBeMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AskToBeMonster_C::ExecuteUbergraph_UI_AskToBeMonster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AskToBeMonster.UI_AskToBeMonster_C.ExecuteUbergraph_UI_AskToBeMonster");
		
		UUI_AskToBeMonster_C_ExecuteUbergraph_UI_AskToBeMonster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AskToBeMonster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AskToBeMonster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AskToBeMonster.UI_AskToBeMonster_C");
		return ptr;
	}

}


