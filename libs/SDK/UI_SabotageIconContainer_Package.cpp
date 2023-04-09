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
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ConvertTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToConvert                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ConvertedTime                                              (Parm, OutParm)
	 */
	void UUI_SabotageIconContainer_C::ConvertTime(float TimeToConvert, class FText* ConvertedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ConvertTime");
		
		UUI_SabotageIconContainer_C_ConvertTime_Params params {};
		params.TimeToConvert = TimeToConvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedTime != nullptr)
			*ConvertedTime = params.ConvertedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ResetSabotageIcon
	 * 		Flags  -> ()
	 */
	void UUI_SabotageIconContainer_C::ResetSabotageIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ResetSabotageIcon");
		
		UUI_SabotageIconContainer_C_ResetSabotageIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.InitializeSabotageIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSabotageDef                                SabotageDef                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            SabotageLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SabotageSplashText_C*                    SabotageSplashTextRef                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageIconContainer_C::InitializeSabotageIcons(const struct FSabotageDef& SabotageDef, int32_t SabotageLevel, class UUI_SabotageSplashText_C* SabotageSplashTextRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.InitializeSabotageIcons");
		
		UUI_SabotageIconContainer_C_InitializeSabotageIcons_Params params {};
		params.SabotageDef = SabotageDef;
		params.SabotageLevel = SabotageLevel;
		params.SabotageSplashTextRef = SabotageSplashTextRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SabotageIconContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.PreConstruct");
		
		UUI_SabotageIconContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageIconContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.Tick");
		
		UUI_SabotageIconContainer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.IconHandoff
	 * 		Flags  -> ()
	 */
	void UUI_SabotageIconContainer_C::IconHandoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.IconHandoff");
		
		UUI_SabotageIconContainer_C_IconHandoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ExecuteUbergraph_UI_SabotageIconContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageIconContainer_C::ExecuteUbergraph_UI_SabotageIconContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ExecuteUbergraph_UI_SabotageIconContainer");
		
		UUI_SabotageIconContainer_C_ExecuteUbergraph_UI_SabotageIconContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SabotageIconContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SabotageIconContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SabotageIconContainer.UI_SabotageIconContainer_C");
		return ptr;
	}

}


