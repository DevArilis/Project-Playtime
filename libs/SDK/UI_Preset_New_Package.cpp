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
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.ContainsEnglishCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UUI_Preset_New_C::ContainsEnglishCharacters(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.ContainsEnglishCharacters");
		
		UUI_Preset_New_C_ContainsEnglishCharacters_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.SetOtherWindowsFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocusable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Preset_New_C::SetOtherWindowsFocus(bool IsFocusable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.SetOtherWindowsFocus");
		
		UUI_Preset_New_C_SetOtherWindowsFocus_Params params {};
		params.IsFocusable = IsFocusable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Preset_New_C::BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_Preset_New_C_BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Preset_New_C::BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_Preset_New_C_BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Preset_New_C::BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature");
		
		UUI_Preset_New_C_BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Preset_New_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.Construct");
		
		UUI_Preset_New_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.ExecuteUbergraph_UI_Preset_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Preset_New_C::ExecuteUbergraph_UI_Preset_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.ExecuteUbergraph_UI_Preset_New");
		
		UUI_Preset_New_C_ExecuteUbergraph_UI_Preset_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Preset_New.UI_Preset_New_C.ClickOkayButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Preset_New_C::ClickOkayButton__DelegateSignature(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Preset_New.UI_Preset_New_C.ClickOkayButton__DelegateSignature");
		
		UUI_Preset_New_C_ClickOkayButton__DelegateSignature_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Preset_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Preset_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Preset_New.UI_Preset_New_C");
		return ptr;
	}

}


