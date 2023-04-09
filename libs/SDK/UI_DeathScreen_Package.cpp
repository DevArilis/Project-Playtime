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
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.SetScaryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SuffixText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Direct                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathScreen_C::SetScaryText(const class FString& SuffixText, bool Direct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.SetScaryText");
		
		UUI_DeathScreen_C_SetScaryText_Params params {};
		params.SuffixText = SuffixText;
		params.Direct = Direct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.StartSelfReviveTimer
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::StartSelfReviveTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.StartSelfReviveTimer");
		
		UUI_DeathScreen_C_StartSelfReviveTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.EndSelfReviveTimer
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::EndSelfReviveTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.EndSelfReviveTimer");
		
		UUI_DeathScreen_C_EndSelfReviveTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.CancelSelfReviveTimer
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::CancelSelfReviveTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.CancelSelfReviveTimer");
		
		UUI_DeathScreen_C_CancelSelfReviveTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.SetSelfReviveProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathScreen_C::SetSelfReviveProgress(float Progress, float TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.SetSelfReviveProgress");
		
		UUI_DeathScreen_C_SetSelfReviveProgress_Params params {};
		params.Progress = Progress;
		params.TimeLeft = TimeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.StartCarried
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::StartCarried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.StartCarried");
		
		UUI_DeathScreen_C_StartCarried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.StartHooked
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::StartHooked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.StartHooked");
		
		UUI_DeathScreen_C_StartHooked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DeathScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.Construct");
		
		UUI_DeathScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.KilledEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SpectatedPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_DeathScreen_C::KilledEvent(const class FString& SpectatedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.KilledEvent");
		
		UUI_DeathScreen_C_KilledEvent_Params params {};
		params.SpectatedPlayer = SpectatedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.ChangeSpectatedPlayerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SpectatedPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_DeathScreen_C::ChangeSpectatedPlayerEvent(const class FString& SpectatedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.ChangeSpectatedPlayerEvent");
		
		UUI_DeathScreen_C_ChangeSpectatedPlayerEvent_Params params {};
		params.SpectatedPlayer = SpectatedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathScreen_C::ExecuteUbergraph_UI_DeathScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen");
		
		UUI_DeathScreen_C_ExecuteUbergraph_UI_DeathScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DeathScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DeathScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DeathScreen.UI_DeathScreen_C");
		return ptr;
	}

}


