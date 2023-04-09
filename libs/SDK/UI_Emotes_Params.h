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
	 * Function UI_Emotes.UI_Emotes_C.Get_CategoryText_Text_1
	 */
	struct UUI_Emotes_C_Get_CategoryText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.SetCharacterType
	 */
	struct UUI_Emotes_C_SetCharacterType_Params
	{
	public:
		ECharacterType                                             NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.UpdateVisuals
	 */
	struct UUI_Emotes_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.PreConstruct
	 */
	struct UUI_Emotes_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature
	 */
	struct UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature
	 */
	struct UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H2L3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CosmeticFor;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature
	 */
	struct UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.Construct
	 */
	struct UUI_Emotes_C_Construct_Params
	{	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature
	 */
	struct UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.ExecuteUbergraph_UI_Emotes
	 */
	struct UUI_Emotes_C_ExecuteUbergraph_UI_Emotes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Emotes.UI_Emotes_C.Changed__DelegateSignature
	 */
	struct UUI_Emotes_C_Changed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
