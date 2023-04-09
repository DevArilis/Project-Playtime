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
	 * 		Name   -> Function UI_StatsScreen.UI_StatsScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatsScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatsScreen.UI_StatsScreen_C.PreConstruct");
		
		UUI_StatsScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatsScreen.UI_StatsScreen_C.RefreshStats
	 * 		Flags  -> ()
	 */
	void UUI_StatsScreen_C::RefreshStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatsScreen.UI_StatsScreen_C.RefreshStats");
		
		UUI_StatsScreen_C_RefreshStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatsScreen.UI_StatsScreen_C.BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatsScreen_C::BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatsScreen.UI_StatsScreen_C.BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature");
		
		UUI_StatsScreen_C_BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatsScreen.UI_StatsScreen_C.ExecuteUbergraph_UI_StatsScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatsScreen_C::ExecuteUbergraph_UI_StatsScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatsScreen.UI_StatsScreen_C.ExecuteUbergraph_UI_StatsScreen");
		
		UUI_StatsScreen_C_ExecuteUbergraph_UI_StatsScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatsScreen.UI_StatsScreen_C.Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatsScreen_C::Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatsScreen.UI_StatsScreen_C.Back__DelegateSignature");
		
		UUI_StatsScreen_C_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatsScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatsScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatsScreen.UI_StatsScreen_C");
		return ptr;
	}

}


