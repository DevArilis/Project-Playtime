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
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CrosshairComponent_C::SetLockerOpenVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenVisibility");
		
		UUI_CrosshairComponent_C_SetLockerOpenVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::SetLockerOpenPercent(int32_t Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenPercent");
		
		UUI_CrosshairComponent_C_SetLockerOpenPercent_Params params {};
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.ResetRadialRecharge
	 * 		Flags  -> ()
	 */
	void UUI_CrosshairComponent_C::ResetRadialRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.ResetRadialRecharge");
		
		UUI_CrosshairComponent_C_ResetRadialRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.RadialRecharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::RadialRecharge(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.RadialRecharge");
		
		UUI_CrosshairComponent_C_RadialRecharge_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::SetCrosshairProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairProgress");
		
		UUI_CrosshairComponent_C_SetCrosshairProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayHitmarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::PlayHitmarker(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayHitmarker");
		
		UUI_CrosshairComponent_C_PlayHitmarker_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairRed
	 * 		Flags  -> ()
	 */
	void UUI_CrosshairComponent_C::ColorCrosshairRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairRed");
		
		UUI_CrosshairComponent_C_ColorCrosshairRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairWhite
	 * 		Flags  -> ()
	 */
	void UUI_CrosshairComponent_C::ColorCrosshairWhite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairWhite");
		
		UUI_CrosshairComponent_C_ColorCrosshairWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::SetCrosshairColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairColor");
		
		UUI_CrosshairComponent_C_SetCrosshairColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayAttackAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::PlayAttackAnimation(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayAttackAnimation");
		
		UUI_CrosshairComponent_C_PlayAttackAnimation_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.Tick");
		
		UUI_CrosshairComponent_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CrosshairComponent.UI_CrosshairComponent_C.ExecuteUbergraph_UI_CrosshairComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CrosshairComponent_C::ExecuteUbergraph_UI_CrosshairComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CrosshairComponent.UI_CrosshairComponent_C.ExecuteUbergraph_UI_CrosshairComponent");
		
		UUI_CrosshairComponent_C_ExecuteUbergraph_UI_CrosshairComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CrosshairComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CrosshairComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CrosshairComponent.UI_CrosshairComponent_C");
		return ptr;
	}

}


