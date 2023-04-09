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
	 * Function UI_Preset_New.UI_Preset_New_C.ContainsEnglishCharacters
	 */
	struct UUI_Preset_New_C_ContainsEnglishCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.SetOtherWindowsFocus
	 */
	struct UUI_Preset_New_C_SetOtherWindowsFocus_Params
	{
	public:
		bool                                                       IsFocusable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_Preset_New_C_BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UUI_Preset_New_C_BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 */
	struct UUI_Preset_New_C_BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.Construct
	 */
	struct UUI_Preset_New_C_Construct_Params
	{	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.ExecuteUbergraph_UI_Preset_New
	 */
	struct UUI_Preset_New_C_ExecuteUbergraph_UI_Preset_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_66ZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Preset_New.UI_Preset_New_C.ClickOkayButton__DelegateSignature
	 */
	struct UUI_Preset_New_C_ClickOkayButton__DelegateSignature_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
