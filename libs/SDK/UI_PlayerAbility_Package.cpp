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
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::AbilityCooldown(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityCooldown");
		
		UUI_PlayerAbility_C_AbilityCooldown_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.SetMappedPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::SetMappedPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.SetMappedPercent");
		
		UUI_PlayerAbility_C_SetMappedPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.ResetFillColorAndOpacity
	 * 		Flags  -> ()
	 */
	void UUI_PlayerAbility_C::ResetFillColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.ResetFillColorAndOpacity");
		
		UUI_PlayerAbility_C_ResetFillColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.SetFillColorAndOpacity");
		
		UUI_PlayerAbility_C_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.SetAbilityFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::SetAbilityFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.SetAbilityFillColorAndOpacity");
		
		UUI_PlayerAbility_C_SetAbilityFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.SetTextFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::SetTextFillColorAndOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.SetTextFillColorAndOpacity");
		
		UUI_PlayerAbility_C_SetTextFillColorAndOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityRecharged
	 * 		Flags  -> ()
	 */
	void UUI_PlayerAbility_C::AbilityRecharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityRecharged");
		
		UUI_PlayerAbility_C_AbilityRecharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerAbility.UI_PlayerAbility_C.ExecuteUbergraph_UI_PlayerAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerAbility_C::ExecuteUbergraph_UI_PlayerAbility(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerAbility.UI_PlayerAbility_C.ExecuteUbergraph_UI_PlayerAbility");
		
		UUI_PlayerAbility_C_ExecuteUbergraph_UI_PlayerAbility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerAbility.UI_PlayerAbility_C");
		return ptr;
	}

}


