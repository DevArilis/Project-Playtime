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
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SabotageComponent_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.PreConstruct");
		
		UUI_SabotageComponent_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::DoRefill(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefill");
		
		UUI_SabotageComponent_C_DoRefill_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.SetMappedPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::SetMappedPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.SetMappedPercent");
		
		UUI_SabotageComponent_C_SetMappedPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.ResetFillColorAndOpacity
	 * 		Flags  -> ()
	 */
	void UUI_SabotageComponent_C::ResetFillColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.ResetFillColorAndOpacity");
		
		UUI_SabotageComponent_C_ResetFillColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.SetFillColorAndOpacity");
		
		UUI_SabotageComponent_C_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.SetAbilityFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::SetAbilityFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.SetAbilityFillColorAndOpacity");
		
		UUI_SabotageComponent_C_SetAbilityFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.SetTextFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::SetTextFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.SetTextFillColorAndOpacity");
		
		UUI_SabotageComponent_C_SetTextFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefillAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::DoRefillAbility(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefillAbility");
		
		UUI_SabotageComponent_C_DoRefillAbility_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.SetSabotageCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSabotageDef                                SabotageDef                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SabotageComponent_C::SetSabotageCooldown(const struct FSabotageDef& SabotageDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.SetSabotageCooldown");
		
		UUI_SabotageComponent_C_SetSabotageCooldown_Params params {};
		params.SabotageDef = SabotageDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.DisableSabotageCooldown
	 * 		Flags  -> ()
	 */
	void UUI_SabotageComponent_C::DisableSabotageCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.DisableSabotageCooldown");
		
		UUI_SabotageComponent_C_DisableSabotageCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.Tick");
		
		UUI_SabotageComponent_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageComponent.UI_SabotageComponent_C.ExecuteUbergraph_UI_SabotageComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageComponent_C::ExecuteUbergraph_UI_SabotageComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageComponent.UI_SabotageComponent_C.ExecuteUbergraph_UI_SabotageComponent");
		
		UUI_SabotageComponent_C_ExecuteUbergraph_UI_SabotageComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SabotageComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SabotageComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SabotageComponent.UI_SabotageComponent_C");
		return ptr;
	}

}


