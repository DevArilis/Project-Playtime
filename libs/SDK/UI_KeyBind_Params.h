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
	 * Function UI_KeyBind.UI_KeyBind_C.PreConstruct
	 */
	struct UUI_KeyBind_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.SetupKeyBinding
	 */
	struct UUI_KeyBind_C_SetupKeyBinding_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
	 */
	struct UUI_KeyBind_C_BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.RESETTODEFAULTS
	 */
	struct UUI_KeyBind_C_RESETTODEFAULTS_Params
	{	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.Update Visuals
	 */
	struct UUI_KeyBind_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.Construct
	 */
	struct UUI_KeyBind_C_Construct_Params
	{	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.ExecuteUbergraph_UI_KeyBind
	 */
	struct UUI_KeyBind_C_ExecuteUbergraph_UI_KeyBind_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7V7H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KeyBind.UI_KeyBind_C.ValueChanged__DelegateSignature
	 */
	struct UUI_KeyBind_C_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Slider;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ComboBoxIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckBox;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequiresApply;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
