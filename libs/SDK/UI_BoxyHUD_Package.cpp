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
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToRed
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::SetCrosshairToRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToRed");
		
		UUI_BoxyHUD_C_SetCrosshairToRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToWhite
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::SetCrosshairToWhite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToWhite");
		
		UUI_BoxyHUD_C_SetCrosshairToWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PlayHitmarker
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::PlayHitmarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PlayHitmarker");
		
		UUI_BoxyHUD_C_PlayHitmarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PlayAttackAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::PlayAttackAnimation(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PlayAttackAnimation");
		
		UUI_BoxyHUD_C_PlayAttackAnimation_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::SetCrosshairProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairProgress");
		
		UUI_BoxyHUD_C_SetCrosshairProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.UpdateToyCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_BoxyHUD_C::UpdateToyCount(TArray<bool> ToysFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.UpdateToyCount");
		
		UUI_BoxyHUD_C_UpdateToyCount_Params params {};
		params.ToysFound = ToysFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PlayFirstAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::PlayFirstAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PlayFirstAbilityRechargeAnim");
		
		UUI_BoxyHUD_C_PlayFirstAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySecondAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::PlaySecondAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySecondAbilityRechargeAnim");
		
		UUI_BoxyHUD_C_PlaySecondAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.CheckDownPlayers
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::CheckDownPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.CheckDownPlayers");
		
		UUI_BoxyHUD_C_CheckDownPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.RadialRecharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::RadialRecharge(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.RadialRecharge");
		
		UUI_BoxyHUD_C_RadialRecharge_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.ResetRadialRecharge
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::ResetRadialRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.ResetRadialRecharge");
		
		UUI_BoxyHUD_C_ResetRadialRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySabotageAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::PlaySabotageAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySabotageAbilityRechargeAnim");
		
		UUI_BoxyHUD_C_PlaySabotageAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetSabotageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::SetSabotageIcon(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetSabotageIcon");
		
		UUI_BoxyHUD_C_SetSabotageIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.ShowEmotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::ShowEmotes(ECharacterType Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.ShowEmotes");
		
		UUI_BoxyHUD_C_ShowEmotes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BoxyHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.PreConstruct");
		
		UUI_BoxyHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.Construct");
		
		UUI_BoxyHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::SetCrosshairColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairColor");
		
		UUI_BoxyHUD_C_SetCrosshairColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::SetChargeAmount(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeAmount");
		
		UUI_BoxyHUD_C_SetChargeAmount_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::SetChargeColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeColor");
		
		UUI_BoxyHUD_C_SetChargeColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.ResetChargeColor
	 * 		Flags  -> ()
	 */
	void UUI_BoxyHUD_C::ResetChargeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.ResetChargeColor");
		
		UUI_BoxyHUD_C_ResetChargeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BoxyHUD.UI_BoxyHUD_C.ExecuteUbergraph_UI_BoxyHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BoxyHUD_C::ExecuteUbergraph_UI_BoxyHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BoxyHUD.UI_BoxyHUD_C.ExecuteUbergraph_UI_BoxyHUD");
		
		UUI_BoxyHUD_C_ExecuteUbergraph_UI_BoxyHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BoxyHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BoxyHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BoxyHUD.UI_BoxyHUD_C");
		return ptr;
	}

}


