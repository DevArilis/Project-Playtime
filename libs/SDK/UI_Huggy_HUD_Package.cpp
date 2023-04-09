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
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairToRed
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::SetCrosshairToRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairToRed");
		
		UUI_Huggy_HUD_C_SetCrosshairToRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairToWhite
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::SetCrosshairToWhite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairToWhite");
		
		UUI_Huggy_HUD_C_SetCrosshairToWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayHitmarker
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::PlayHitmarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayHitmarker");
		
		UUI_Huggy_HUD_C_PlayHitmarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayAttackAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::PlayAttackAnimation(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayAttackAnimation");
		
		UUI_Huggy_HUD_C_PlayAttackAnimation_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::SetCrosshairProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairProgress");
		
		UUI_Huggy_HUD_C_SetCrosshairProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.UpdateToyCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Huggy_HUD_C::UpdateToyCount(TArray<bool> ToysFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.UpdateToyCount");
		
		UUI_Huggy_HUD_C_UpdateToyCount_Params params {};
		params.ToysFound = ToysFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayFirstAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::PlayFirstAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlayFirstAbilityRechargeAnim");
		
		UUI_Huggy_HUD_C_PlayFirstAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlaySecondAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::PlaySecondAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlaySecondAbilityRechargeAnim");
		
		UUI_Huggy_HUD_C_PlaySecondAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.CheckDownPlayers
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::CheckDownPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.CheckDownPlayers");
		
		UUI_Huggy_HUD_C_CheckDownPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.RadialRecharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::RadialRecharge(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.RadialRecharge");
		
		UUI_Huggy_HUD_C_RadialRecharge_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.ResetRadialRecharge
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::ResetRadialRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.ResetRadialRecharge");
		
		UUI_Huggy_HUD_C_ResetRadialRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlaySabotageAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::PlaySabotageAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PlaySabotageAbilityRechargeAnim");
		
		UUI_Huggy_HUD_C_PlaySabotageAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetSabotageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::SetSabotageIcon(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetSabotageIcon");
		
		UUI_Huggy_HUD_C_SetSabotageIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.ShowEmotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::ShowEmotes(ECharacterType Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.ShowEmotes");
		
		UUI_Huggy_HUD_C_ShowEmotes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Huggy_HUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.PreConstruct");
		
		UUI_Huggy_HUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Huggy_HUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.Construct");
		
		UUI_Huggy_HUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::SetCrosshairColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.SetCrosshairColor");
		
		UUI_Huggy_HUD_C_SetCrosshairColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Huggy_HUD.UI_Huggy_HUD_C.ExecuteUbergraph_UI_Huggy_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Huggy_HUD_C::ExecuteUbergraph_UI_Huggy_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Huggy_HUD.UI_Huggy_HUD_C.ExecuteUbergraph_UI_Huggy_HUD");
		
		UUI_Huggy_HUD_C_ExecuteUbergraph_UI_Huggy_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Huggy_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Huggy_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Huggy_HUD.UI_Huggy_HUD_C");
		return ptr;
	}

}


