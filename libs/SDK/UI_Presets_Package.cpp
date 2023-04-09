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
	 * 		Name   -> Function UI_Presets.UI_Presets_C.FilterOutEmotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FPresetSlot UUI_Presets_C::FilterOutEmotes(const struct FPresetSlot& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.FilterOutEmotes");
		
		UUI_Presets_C_FilterOutEmotes_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.PresetNameSimilar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_Presets_C::PresetNameSimilar(TArray<class FName> TargetArray, const class FName& ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.PresetNameSimilar");
		
		UUI_Presets_C_PresetNameSimilar_Params params {};
		params.TargetArray = TargetArray;
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.EquipAllInPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::EquipAllInPreset(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.EquipAllInPreset");
		
		UUI_Presets_C_EquipAllInPreset_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.GetPresetsByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      SaveGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TMap<class FName, struct FPresetSlot> UUI_Presets_C::GetPresetsByType(class UCustomizationSaveGame* SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.GetPresetsByType");
		
		UUI_Presets_C_GetPresetsByType_Params params {};
		params.SaveGame = SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.LoadPresets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      CustomizationSave                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::LoadPresets(class UCustomizationSaveGame* CustomizationSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.LoadPresets");
		
		UUI_Presets_C_LoadPresets_Params params {};
		params.CustomizationSave = CustomizationSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.RefreshPresets
	 * 		Flags  -> ()
	 */
	void UUI_Presets_C::RefreshPresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.RefreshPresets");
		
		UUI_Presets_C_RefreshPresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Presets_C::BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Presets_C_BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.MakeNewPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::MakeNewPreset(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.MakeNewPreset");
		
		UUI_Presets_C_MakeNewPreset_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.DeletePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::DeletePreset(const class FName& Name, ECharacterType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.DeletePreset");
		
		UUI_Presets_C_DeletePreset_Params params {};
		params.Name = Name;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.ApplyPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::ApplyPreset(const struct FPresetSlot& Preset, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.ApplyPreset");
		
		UUI_Presets_C_ApplyPreset_Params params {};
		params.Preset = Preset;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Presets.UI_Presets_C.ExecuteUbergraph_UI_Presets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Presets_C::ExecuteUbergraph_UI_Presets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Presets.UI_Presets_C.ExecuteUbergraph_UI_Presets");
		
		UUI_Presets_C_ExecuteUbergraph_UI_Presets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Presets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Presets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Presets.UI_Presets_C");
		return ptr;
	}

}


