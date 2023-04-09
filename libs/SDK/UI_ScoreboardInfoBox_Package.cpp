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
	 * 		Name   -> Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ScoreboardInfoBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.PreConstruct");
		
		UUI_ScoreboardInfoBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.SetValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Value1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScoreboardInfoBox_C::SetValues(const class FText& PlayerName, int32_t Value1, int32_t Value2, int32_t Value3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.SetValues");
		
		UUI_ScoreboardInfoBox_C_SetValues_Params params {};
		params.PlayerName = PlayerName;
		params.Value1 = Value1;
		params.Value2 = Value2;
		params.Value3 = Value3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.UpdateValues
	 * 		Flags  -> ()
	 */
	void UUI_ScoreboardInfoBox_C::UpdateValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.UpdateValues");
		
		UUI_ScoreboardInfoBox_C_UpdateValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.ExecuteUbergraph_UI_ScoreboardInfoBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScoreboardInfoBox_C::ExecuteUbergraph_UI_ScoreboardInfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C.ExecuteUbergraph_UI_ScoreboardInfoBox");
		
		UUI_ScoreboardInfoBox_C_ExecuteUbergraph_UI_ScoreboardInfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScoreboardInfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScoreboardInfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C");
		return ptr;
	}

}


