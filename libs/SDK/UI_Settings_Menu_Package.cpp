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
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.MinimalHUD_OnValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::MinimalHUD_OnValueChanged(const class FString& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.MinimalHUD_OnValueChanged");
		
		UUI_Settings_Menu_C_MinimalHUD_OnValueChanged_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Menu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.PreConstruct");
		
		UUI_Settings_Menu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.UpdateVisuals");
		
		UUI_Settings_Menu_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.Set Current Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentTab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::SetCurrentTab(int32_t CurrentTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.Set Current Tab");
		
		UUI_Settings_Menu_C_SetCurrentTab_Params params {};
		params.CurrentTab = CurrentTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.LoadSettings
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::LoadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.LoadSettings");
		
		UUI_Settings_Menu_C_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Anti-Aliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_AntiAliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Anti-Aliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_AntiAliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.CloseMenu");
		
		UUI_Settings_Menu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.ForceCloseMenu
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::ForceCloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.ForceCloseMenu");
		
		UUI_Settings_Menu_C_ForceCloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.ApplyFOVCorrectly
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::ApplyFOVCorrectly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.ApplyFOVCorrectly");
		
		UUI_Settings_Menu_C_ApplyFOVCorrectly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.SaveSettingsOnDelay
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::SaveSettingsOnDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.SaveSettingsOnDelay");
		
		UUI_Settings_Menu_C_SaveSettingsOnDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.Construct");
		
		UUI_Settings_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature");
		
		UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.ExecuteUbergraph_UI_Settings_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Menu_C::ExecuteUbergraph_UI_Settings_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.ExecuteUbergraph_UI_Settings_Menu");
		
		UUI_Settings_Menu_C_ExecuteUbergraph_UI_Settings_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings_Menu.UI_Settings_Menu_C.Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_Menu_C::Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Menu.UI_Settings_Menu_C.Back__DelegateSignature");
		
		UUI_Settings_Menu_C_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_Menu.UI_Settings_Menu_C");
		return ptr;
	}

}


