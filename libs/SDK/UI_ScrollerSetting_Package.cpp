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
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.GetCurrentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollerSetting_C::GetCurrentValue(int32_t* Value, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.GetCurrentValue");
		
		UUI_ScrollerSetting_C_GetCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ScrollerSetting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.PreConstruct");
		
		UUI_ScrollerSetting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ScrollerSetting_C::SetLabel(const class FText& Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetLabel");
		
		UUI_ScrollerSetting_C_SetLabel_Params params {};
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_ScrollerSetting_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.UpdateVisuals");
		
		UUI_ScrollerSetting_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ScrollerSetting_C::BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_ScrollerSetting_C_BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ScrollerSetting_C::BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_ScrollerSetting_C_BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollerSetting_C::SetValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValue");
		
		UUI_ScrollerSetting_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValuesEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Values                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ScrollerSetting_C::SetValuesEvent(TArray<class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValuesEvent");
		
		UUI_ScrollerSetting_C_SetValuesEvent_Params params {};
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValueFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Str                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollerSetting_C::SetValueFromString(const class FString& Str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValueFromString");
		
		UUI_ScrollerSetting_C_SetValueFromString_Params params {};
		params.Str = Str;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.ExecuteUbergraph_UI_ScrollerSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollerSetting_C::ExecuteUbergraph_UI_ScrollerSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.ExecuteUbergraph_UI_ScrollerSetting");
		
		UUI_ScrollerSetting_C_ExecuteUbergraph_UI_ScrollerSetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScrollerSetting.UI_ScrollerSetting_C.ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollerSetting_C::ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollerSetting.UI_ScrollerSetting_C.ValueChanged__DelegateSignature");
		
		UUI_ScrollerSetting_C_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScrollerSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScrollerSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScrollerSetting.UI_ScrollerSetting_C");
		return ptr;
	}

}


