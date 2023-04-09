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
	 * Function UI_ColorItem.UI_ColorItem_C.BndEvt__UI_ColorItem_Button_53_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_ColorItem_C_BndEvt__UI_ColorItem_Button_53_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ColorItem.UI_ColorItem_C.Construct
	 */
	struct UUI_ColorItem_C_Construct_Params
	{	};

	/**
	 * Function UI_ColorItem.UI_ColorItem_C.IsSelected
	 */
	struct UUI_ColorItem_C_IsSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ColorItem.UI_ColorItem_C.ExecuteUbergraph_UI_ColorItem
	 */
	struct UUI_ColorItem_C_ExecuteUbergraph_UI_ColorItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorItem.UI_ColorItem_C.ColorSelectedItem__DelegateSignature
	 */
	struct UUI_ColorItem_C_ColorSelectedItem__DelegateSignature_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_67WM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ColorItem_C*                                     SelectedColor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
