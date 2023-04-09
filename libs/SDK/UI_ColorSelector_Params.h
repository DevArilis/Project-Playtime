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
	 * Function UI_ColorSelector.UI_ColorSelector_C.PreConstruct
	 */
	struct UUI_ColorSelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ColorSelector.UI_ColorSelector_C.Construct
	 */
	struct UUI_ColorSelector_C_Construct_Params
	{	};

	/**
	 * Function UI_ColorSelector.UI_ColorSelector_C.PopulateColorMenu
	 */
	struct UUI_ColorSelector_C_PopulateColorMenu_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu_Event
	 */
	struct UUI_ColorSelector_C_ColorSelectedMenu_Event_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FMXL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ColorItem_C*                                     SelectedColor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorSelector.UI_ColorSelector_C.ExecuteUbergraph_UI_ColorSelector
	 */
	struct UUI_ColorSelector_C_ExecuteUbergraph_UI_ColorSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu__DelegateSignature
	 */
	struct UUI_ColorSelector_C_ColorSelectedMenu__DelegateSignature_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8UNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ColorItem_C*                                     SelectedColor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
