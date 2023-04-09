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
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.GetSessionSettingStringFromKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_N_ServerRow_C::GetSessionSettingStringFromKey(const class FString& Key, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.GetSessionSettingStringFromKey");
		
		UUI_N_ServerRow_C_GetSessionSettingStringFromKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.SetStyle
	 * 		Flags  -> ()
	 */
	void UUI_N_ServerRow_C::SetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.SetStyle");
		
		UUI_N_ServerRow_C_SetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_N_ServerRow_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.SetSelected");
		
		UUI_N_ServerRow_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_N_ServerRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.Construct");
		
		UUI_N_ServerRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_ServerRow_C::BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_N_ServerRow_C_BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_ServerRow.UI_N_ServerRow_C.ExecuteUbergraph_UI_N_ServerRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_ServerRow_C::ExecuteUbergraph_UI_N_ServerRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_ServerRow.UI_N_ServerRow_C.ExecuteUbergraph_UI_N_ServerRow");
		
		UUI_N_ServerRow_C_ExecuteUbergraph_UI_N_ServerRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_N_ServerRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_N_ServerRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_N_ServerRow.UI_N_ServerRow_C");
		return ptr;
	}

}


