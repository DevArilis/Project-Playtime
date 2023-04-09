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
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AbilityComponent_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.PreConstruct");
		
		UUI_AbilityComponent_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.DoRefill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::DoRefill(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.DoRefill");
		
		UUI_AbilityComponent_C_DoRefill_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.SetMappedPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::SetMappedPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.SetMappedPercent");
		
		UUI_AbilityComponent_C_SetMappedPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.ResetFillColorAndOpacity
	 * 		Flags  -> ()
	 */
	void UUI_AbilityComponent_C::ResetFillColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.ResetFillColorAndOpacity");
		
		UUI_AbilityComponent_C_ResetFillColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.SetFillColorAndOpacity");
		
		UUI_AbilityComponent_C_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::SetAbilityFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityFillColorAndOpacity");
		
		UUI_AbilityComponent_C_SetAbilityFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.SetTextFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::SetTextFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.SetTextFillColorAndOpacity");
		
		UUI_AbilityComponent_C_SetTextFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.AbilityRecharged
	 * 		Flags  -> ()
	 */
	void UUI_AbilityComponent_C::AbilityRecharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.AbilityRecharged");
		
		UUI_AbilityComponent_C_AbilityRecharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityIconScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::SetAbilityIconScale(const struct FVector2D& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityIconScale");
		
		UUI_AbilityComponent_C_SetAbilityIconScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilityComponent.UI_AbilityComponent_C.ExecuteUbergraph_UI_AbilityComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilityComponent_C::ExecuteUbergraph_UI_AbilityComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilityComponent.UI_AbilityComponent_C.ExecuteUbergraph_UI_AbilityComponent");
		
		UUI_AbilityComponent_C_ExecuteUbergraph_UI_AbilityComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AbilityComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AbilityComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AbilityComponent.UI_AbilityComponent_C");
		return ptr;
	}

}


