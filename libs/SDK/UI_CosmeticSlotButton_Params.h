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
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.IsActive
	 */
	struct UUI_CosmeticSlotButton_C_IsActive_Params
	{	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.PreConstruct
	 */
	struct UUI_CosmeticSlotButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_CosmeticSlotButton_C_BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelectedCosmetic
	 */
	struct UUI_CosmeticSlotButton_C_SetSelectedCosmetic_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ResetSelectedCosmetic
	 */
	struct UUI_CosmeticSlotButton_C_ResetSelectedCosmetic_Params
	{	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.SetSelected
	 */
	struct UUI_CosmeticSlotButton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.ExecuteUbergraph_UI_CosmeticSlotButton
	 */
	struct UUI_CosmeticSlotButton_C_ExecuteUbergraph_UI_CosmeticSlotButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M7YK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CosmeticSlotButton.UI_CosmeticSlotButton_C.Released__DelegateSignature
	 */
	struct UUI_CosmeticSlotButton_C_Released__DelegateSignature_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
