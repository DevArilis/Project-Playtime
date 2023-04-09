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
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.UpdateEnabled
	 */
	struct UUI_CosmeticItem_C_UpdateEnabled_Params
	{	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.ShouldForceType
	 */
	struct UUI_CosmeticItem_C_ShouldForceType_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.PreConstruct
	 */
	struct UUI_CosmeticItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.Construct
	 */
	struct UUI_CosmeticItem_C_Construct_Params
	{	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.SetEquipStatus
	 */
	struct UUI_CosmeticItem_C_SetEquipStatus_Params
	{
	public:
		bool                                                       Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.ExecuteUbergraph_UI_CosmeticItem
	 */
	struct UUI_CosmeticItem_C_ExecuteUbergraph_UI_CosmeticItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTRJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnReleased__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_Item_OnReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QVLV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnUnhovered__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_Item_OnUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnHovered__DelegateSignature
	 */
	struct UUI_CosmeticItem_C_Item_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
