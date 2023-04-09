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
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_T_PlayerName_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PlayerStatusItem_C::Get_T_PlayerName_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_T_PlayerName_ColorAndOpacity_1");
		
		UUI_PlayerStatusItem_C_Get_T_PlayerName_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get Player Status Icon
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_PlayerStatusItem_C::GetPlayerStatusIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get Player Status Icon");
		
		UUI_PlayerStatusItem_C_GetPlayerStatusIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Color
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PlayerStatusItem_C::Get_Status_Color()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Color");
		
		UUI_PlayerStatusItem_C_Get_Status_Color_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Text
	 * 		Flags  -> ()
	 */
	class FText UUI_PlayerStatusItem_C::Get_Status_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Get_Status_Text");
		
		UUI_PlayerStatusItem_C_Get_Status_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerStatusItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.PreConstruct");
		
		UUI_PlayerStatusItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerStatusItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.Construct");
		
		UUI_PlayerStatusItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPlayerName
	 * 		Flags  -> ()
	 */
	void UUI_PlayerStatusItem_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPlayerName");
		
		UUI_PlayerStatusItem_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPerkIcon
	 * 		Flags  -> ()
	 */
	void UUI_PlayerStatusItem_C::SetPerkIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.SetPerkIcon");
		
		UUI_PlayerStatusItem_C_SetPerkIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdateHeldToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  ToyPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHoldingToyPart                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerStatusItem_C::UpdateHeldToyPart(class UTexture2D* ToyPart, bool IsHoldingToyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdateHeldToyPart");
		
		UUI_PlayerStatusItem_C_UpdateHeldToyPart_Params params {};
		params.ToyPart = ToyPart;
		params.IsHoldingToyPart = IsHoldingToyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdatePerksVisibility
	 * 		Flags  -> ()
	 */
	void UUI_PlayerStatusItem_C::UpdatePerksVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.UpdatePerksVisibility");
		
		UUI_PlayerStatusItem_C_UpdatePerksVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.ExecuteUbergraph_UI_PlayerStatusItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerStatusItem_C::ExecuteUbergraph_UI_PlayerStatusItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerStatusItem.UI_PlayerStatusItem_C.ExecuteUbergraph_UI_PlayerStatusItem");
		
		UUI_PlayerStatusItem_C_ExecuteUbergraph_UI_PlayerStatusItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerStatusItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerStatusItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerStatusItem.UI_PlayerStatusItem_C");
		return ptr;
	}

}


