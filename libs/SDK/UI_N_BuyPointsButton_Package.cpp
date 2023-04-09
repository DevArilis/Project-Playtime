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
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.SetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_N_BuyPointsButton_C::SetPrice(const class FString& Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.SetPrice");
		
		UUI_N_BuyPointsButton_C_SetPrice_Params params {};
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.SetStyle
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::SetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.SetStyle");
		
		UUI_N_BuyPointsButton_C_SetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_N_BuyPointsButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.PreConstruct");
		
		UUI_N_BuyPointsButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_N_BuyPointsButton_C_BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.Construct");
		
		UUI_N_BuyPointsButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_N_BuyPointsButton_C_BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_N_BuyPointsButton_C_BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.ExecuteUbergraph_UI_N_BuyPointsButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_BuyPointsButton_C::ExecuteUbergraph_UI_N_BuyPointsButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.ExecuteUbergraph_UI_N_BuyPointsButton");
		
		UUI_N_BuyPointsButton_C_ExecuteUbergraph_UI_N_BuyPointsButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BuyPointsButton_C::Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BuyPointsButton.UI_N_BuyPointsButton_C.Clicked__DelegateSignature");
		
		UUI_N_BuyPointsButton_C_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_N_BuyPointsButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_N_BuyPointsButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_N_BuyPointsButton.UI_N_BuyPointsButton_C");
		return ptr;
	}

}


