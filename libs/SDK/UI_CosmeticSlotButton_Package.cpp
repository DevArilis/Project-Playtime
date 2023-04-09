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
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.IsActive
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticSlotButton_C::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.IsActive");
		
		UUI_CosmeticSlotButton_C_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CosmeticSlotButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.PreConstruct");
		
		UUI_CosmeticSlotButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticSlotButton_C::BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_CosmeticSlotButton_C_BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelectedCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSlotButton_C::SetSelectedCosmetic(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelectedCosmetic");
		
		UUI_CosmeticSlotButton_C_SetSelectedCosmetic_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ResetSelectedCosmetic
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticSlotButton_C::ResetSelectedCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ResetSelectedCosmetic");
		
		UUI_CosmeticSlotButton_C_ResetSelectedCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CosmeticSlotButton_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelected");
		
		UUI_CosmeticSlotButton_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ExecuteUbergraph_UI_CosmeticSlotButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSlotButton_C::ExecuteUbergraph_UI_CosmeticSlotButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ExecuteUbergraph_UI_CosmeticSlotButton");
		
		UUI_CosmeticSlotButton_C_ExecuteUbergraph_UI_CosmeticSlotButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSlotButton_C::Released__DelegateSignature(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.Released__DelegateSignature");
		
		UUI_CosmeticSlotButton_C_Released__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CosmeticSlotButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CosmeticSlotButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CosmeticSlotButton.UI_CosmeticSlotButton_C");
		return ptr;
	}

}


