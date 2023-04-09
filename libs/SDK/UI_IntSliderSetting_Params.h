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
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.PreConstruct
	 */
	struct UUI_IntSliderSetting_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.SetLabel
	 */
	struct UUI_IntSliderSetting_C_SetLabel_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.UpdateVisuals
	 */
	struct UUI_IntSliderSetting_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.BndEvt__UI_IntSliderSetting_UI_IntSlider_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature
	 */
	struct UUI_IntSliderSetting_C_BndEvt__UI_IntSliderSetting_UI_IntSlider_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.SetValue
	 */
	struct UUI_IntSliderSetting_C_SetValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_IntSliderSetting_C_BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.ExecuteUbergraph_UI_IntSliderSetting
	 */
	struct UUI_IntSliderSetting_C_ExecuteUbergraph_UI_IntSliderSetting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_IntSliderSetting.UI_IntSliderSetting_C.ValueChanged__DelegateSignature
	 */
	struct UUI_IntSliderSetting_C_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
