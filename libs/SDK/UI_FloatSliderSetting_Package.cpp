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
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FloatSliderSetting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.PreConstruct");
		
		UUI_FloatSliderSetting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.SetLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_FloatSliderSetting_C::SetLabel(const class FText& Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.SetLabel");
		
		UUI_FloatSliderSetting_C_SetLabel_Params params {};
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_FloatSliderSetting_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.UpdateVisuals");
		
		UUI_FloatSliderSetting_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FloatSliderSetting_C::SetValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.SetValue");
		
		UUI_FloatSliderSetting_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FloatSliderSetting_C::BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUI_FloatSliderSetting_C_BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.BndEvt__UI_FloatSliderSetting_UI_FloatSlider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FloatSliderSetting_C::BndEvt__UI_FloatSliderSetting_UI_FloatSlider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.BndEvt__UI_FloatSliderSetting_UI_FloatSlider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature");
		
		UUI_FloatSliderSetting_C_BndEvt__UI_FloatSliderSetting_UI_FloatSlider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.ExecuteUbergraph_UI_FloatSliderSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FloatSliderSetting_C::ExecuteUbergraph_UI_FloatSliderSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.ExecuteUbergraph_UI_FloatSliderSetting");
		
		UUI_FloatSliderSetting_C_ExecuteUbergraph_UI_FloatSliderSetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FloatSliderSetting_C::ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FloatSliderSetting.UI_FloatSliderSetting_C.ValueChanged__DelegateSignature");
		
		UUI_FloatSliderSetting_C_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FloatSliderSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FloatSliderSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FloatSliderSetting.UI_FloatSliderSetting_C");
		return ptr;
	}

}


