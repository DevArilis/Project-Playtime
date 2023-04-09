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
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ShowEmotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::ShowEmotes(ECharacterType Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ShowEmotes");
		
		UUI_MonsterHUDInterface_C_ShowEmotes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetSabotageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::SetSabotageIcon(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetSabotageIcon");
		
		UUI_MonsterHUDInterface_C_SetSabotageIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySabotageAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::PlaySabotageAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySabotageAbilityRechargeAnim");
		
		UUI_MonsterHUDInterface_C_PlaySabotageAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ResetRadialRecharge
	 * 		Flags  -> ()
	 */
	void UUI_MonsterHUDInterface_C::ResetRadialRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ResetRadialRecharge");
		
		UUI_MonsterHUDInterface_C_ResetRadialRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.RadialRecharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::RadialRecharge(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.RadialRecharge");
		
		UUI_MonsterHUDInterface_C_RadialRecharge_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.CheckDownPlayers
	 * 		Flags  -> ()
	 */
	void UUI_MonsterHUDInterface_C::CheckDownPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.CheckDownPlayers");
		
		UUI_MonsterHUDInterface_C_CheckDownPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySecondAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::PlaySecondAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySecondAbilityRechargeAnim");
		
		UUI_MonsterHUDInterface_C_PlaySecondAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayFirstAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::PlayFirstAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayFirstAbilityRechargeAnim");
		
		UUI_MonsterHUDInterface_C_PlayFirstAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.UpdateToyCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MonsterHUDInterface_C::UpdateToyCount(TArray<bool> ToysFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.UpdateToyCount");
		
		UUI_MonsterHUDInterface_C_UpdateToyCount_Params params {};
		params.ToysFound = ToysFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::SetCrosshairProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairProgress");
		
		UUI_MonsterHUDInterface_C_SetCrosshairProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayAttackAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::PlayAttackAnimation(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayAttackAnimation");
		
		UUI_MonsterHUDInterface_C_PlayAttackAnimation_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayHitmarker
	 * 		Flags  -> ()
	 */
	void UUI_MonsterHUDInterface_C::PlayHitmarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayHitmarker");
		
		UUI_MonsterHUDInterface_C_PlayHitmarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToWhite
	 * 		Flags  -> ()
	 */
	void UUI_MonsterHUDInterface_C::SetCrosshairToWhite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToWhite");
		
		UUI_MonsterHUDInterface_C_SetCrosshairToWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToRed
	 * 		Flags  -> ()
	 */
	void UUI_MonsterHUDInterface_C::SetCrosshairToRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToRed");
		
		UUI_MonsterHUDInterface_C_SetCrosshairToRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterHUDInterface_C::SetCrosshairColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairColor");
		
		UUI_MonsterHUDInterface_C_SetCrosshairColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MonsterHUDInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MonsterHUDInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UI_MonsterHUDInterface.UI_MonsterHUDInterface_C");
		return ptr;
	}

}


