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
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.Get_T_Tooltip_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_Tooltip_C::Get_T_Tooltip_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.Get_T_Tooltip_Text_1");
		
		UUI_Tooltip_C_Get_T_Tooltip_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.SetupTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Tooltip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Tooltip_C::SetupTooltip(const class FString& Tooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.SetupTooltip");
		
		UUI_Tooltip_C_SetupTooltip_Params params {};
		params.Tooltip = Tooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Tooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.Construct");
		
		UUI_Tooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.ExecuteUbergraph_UI_Tooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Tooltip_C::ExecuteUbergraph_UI_Tooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.ExecuteUbergraph_UI_Tooltip");
		
		UUI_Tooltip_C_ExecuteUbergraph_UI_Tooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.OnTooltipConstructed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Tooltip_C::OnTooltipConstructed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.OnTooltipConstructed__DelegateSignature");
		
		UUI_Tooltip_C_OnTooltipConstructed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Tooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Tooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Tooltip.UI_Tooltip_C");
		return ptr;
	}

}


