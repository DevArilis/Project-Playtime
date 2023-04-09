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
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.SlotsEqual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 PresetSlot                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPresetSlot                                 PresetSlot2                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UUI_PresetIndividual_C::SlotsEqual(const struct FPresetSlot& PresetSlot, const struct FPresetSlot& PresetSlot2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.SlotsEqual");
		
		UUI_PresetIndividual_C_SlotsEqual_Params params {};
		params.PresetSlot = PresetSlot;
		params.PresetSlot2 = PresetSlot2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.CheckIfApplied
	 * 		Flags  -> ()
	 */
	void UUI_PresetIndividual_C::CheckIfApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.CheckIfApplied");
		
		UUI_PresetIndividual_C_CheckIfApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PresetIndividual_C::BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_PresetIndividual_C_BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.ConfirmDelete
	 * 		Flags  -> ()
	 */
	void UUI_PresetIndividual_C::ConfirmDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.ConfirmDelete");
		
		UUI_PresetIndividual_C_ConfirmDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PresetIndividual_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.Construct");
		
		UUI_PresetIndividual_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PresetIndividual_C::BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_PresetIndividual_C_BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.ExecuteUbergraph_UI_PresetIndividual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PresetIndividual_C::ExecuteUbergraph_UI_PresetIndividual(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.ExecuteUbergraph_UI_PresetIndividual");
		
		UUI_PresetIndividual_C_ExecuteUbergraph_UI_PresetIndividual_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.ApplyPreset__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PresetIndividual_C::ApplyPreset__DelegateSignature(const struct FPresetSlot& Preset, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.ApplyPreset__DelegateSignature");
		
		UUI_PresetIndividual_C_ApplyPreset__DelegateSignature_Params params {};
		params.Preset = Preset;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PresetIndividual.UI_PresetIndividual_C.DeletePreset__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PresetIndividual_C::DeletePreset__DelegateSignature(const class FName& Preset, ECharacterType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PresetIndividual.UI_PresetIndividual_C.DeletePreset__DelegateSignature");
		
		UUI_PresetIndividual_C_DeletePreset__DelegateSignature_Params params {};
		params.Preset = Preset;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PresetIndividual_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PresetIndividual_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PresetIndividual.UI_PresetIndividual_C");
		return ptr;
	}

}


