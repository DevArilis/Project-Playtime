#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_Presets.UI_Presets_C.FilterOutEmotes
	 */
	struct UUI_Presets_C_FilterOutEmotes_Params
	{
	public:
		struct FPresetSlot                                         Input;                                                   // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FPresetSlot                                         ReturnValue;                                             // 0x0058(0x0058)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.PresetNameSimilar
	 */
	struct UUI_Presets_C_PresetNameSimilar_Params
	{
	public:
		TArray<class FName>                                        TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                ItemToFind;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.EquipAllInPreset
	 */
	struct UUI_Presets_C_EquipAllInPreset_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.GetPresetsByType
	 */
	struct UUI_Presets_C_GetPresetsByType_Params
	{
	public:
		class UCustomizationSaveGame*                              SaveGame;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FName, struct FPresetSlot>                      ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.LoadPresets
	 */
	struct UUI_Presets_C_LoadPresets_Params
	{
	public:
		class UCustomizationSaveGame*                              CustomizationSave;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.RefreshPresets
	 */
	struct UUI_Presets_C_RefreshPresets_Params
	{	};

	/**
	 * Function UI_Presets.UI_Presets_C.BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Presets_C_BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Presets.UI_Presets_C.MakeNewPreset
	 */
	struct UUI_Presets_C_MakeNewPreset_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.DeletePreset
	 */
	struct UUI_Presets_C_DeletePreset_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.ApplyPreset
	 */
	struct UUI_Presets_C_ApplyPreset_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                Name;                                                    // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Presets.UI_Presets_C.ExecuteUbergraph_UI_Presets
	 */
	struct UUI_Presets_C_ExecuteUbergraph_UI_Presets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
