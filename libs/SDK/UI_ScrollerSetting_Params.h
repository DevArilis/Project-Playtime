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
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.GetCurrentValue
	 */
	struct UUI_ScrollerSetting_C_GetCurrentValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TP5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Output;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.PreConstruct
	 */
	struct UUI_ScrollerSetting_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetLabel
	 */
	struct UUI_ScrollerSetting_C_SetLabel_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.UpdateVisuals
	 */
	struct UUI_ScrollerSetting_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_ScrollerSetting_C_BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_ScrollerSetting_C_BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValue
	 */
	struct UUI_ScrollerSetting_C_SetValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValuesEvent
	 */
	struct UUI_ScrollerSetting_C_SetValuesEvent_Params
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.SetValueFromString
	 */
	struct UUI_ScrollerSetting_C_SetValueFromString_Params
	{
	public:
		class FString                                              Str;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.ExecuteUbergraph_UI_ScrollerSetting
	 */
	struct UUI_ScrollerSetting_C_ExecuteUbergraph_UI_ScrollerSetting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScrollerSetting.UI_ScrollerSetting_C.ValueChanged__DelegateSignature
	 */
	struct UUI_ScrollerSetting_C_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJPY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
