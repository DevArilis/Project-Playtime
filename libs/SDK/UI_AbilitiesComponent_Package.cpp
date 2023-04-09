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
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySabotageAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilitiesComponent_C::PlaySabotageAbilityRechargeAnim(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySabotageAbilityRechargeAnim");
		
		UUI_AbilitiesComponent_C_PlaySabotageAbilityRechargeAnim_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.Init
	 * 		Flags  -> ()
	 */
	void UUI_AbilitiesComponent_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.Init");
		
		UUI_AbilitiesComponent_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySecondAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilitiesComponent_C::PlaySecondAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySecondAbilityRechargeAnim");
		
		UUI_AbilitiesComponent_C_PlaySecondAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlayFirstAbilityRechargeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cooldown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilitiesComponent_C::PlayFirstAbilityRechargeAnim(float Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlayFirstAbilityRechargeAnim");
		
		UUI_AbilitiesComponent_C_PlayFirstAbilityRechargeAnim_Params params {};
		params.Cooldown = Cooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.SetAbilityImageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Imag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilitiesComponent_C::SetAbilityImageIcon(class UImage* Imag, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.SetAbilityImageIcon");
		
		UUI_AbilitiesComponent_C_SetAbilityImageIcon_Params params {};
		params.Imag = Imag;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AbilitiesComponent_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PreConstruct");
		
		UUI_AbilitiesComponent_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.ExecuteUbergraph_UI_AbilitiesComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AbilitiesComponent_C::ExecuteUbergraph_UI_AbilitiesComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.ExecuteUbergraph_UI_AbilitiesComponent");
		
		UUI_AbilitiesComponent_C_ExecuteUbergraph_UI_AbilitiesComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AbilitiesComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AbilitiesComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AbilitiesComponent.UI_AbilitiesComponent_C");
		return ptr;
	}

}


