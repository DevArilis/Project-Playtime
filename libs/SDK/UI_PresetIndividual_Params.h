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
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.SlotsEqual
	 */
	struct UUI_PresetIndividual_C_SlotsEqual_Params
	{
	public:
		struct FPresetSlot                                         PresetSlot;                                              // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPresetSlot                                         PresetSlot2;                                             // 0x0058(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.CheckIfApplied
	 */
	struct UUI_PresetIndividual_C_CheckIfApplied_Params
	{	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_PresetIndividual_C_BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.ConfirmDelete
	 */
	struct UUI_PresetIndividual_C_ConfirmDelete_Params
	{	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.Construct
	 */
	struct UUI_PresetIndividual_C_Construct_Params
	{	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_PresetIndividual_C_BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.ExecuteUbergraph_UI_PresetIndividual
	 */
	struct UUI_PresetIndividual_C_ExecuteUbergraph_UI_PresetIndividual_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYYY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.ApplyPreset__DelegateSignature
	 */
	struct UUI_PresetIndividual_C_ApplyPreset__DelegateSignature_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                Name;                                                    // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PresetIndividual.UI_PresetIndividual_C.DeletePreset__DelegateSignature
	 */
	struct UUI_PresetIndividual_C_DeletePreset__DelegateSignature_Params
	{
	public:
		class FName                                                Preset;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
