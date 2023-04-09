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
	 * Function UI_PerkSlot.UI_PerkSlot_C.Construct
	 */
	struct UUI_PerkSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_PerkSlot_C_BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.InitPerkSlot
	 */
	struct UUI_PerkSlot_C_InitPerkSlot_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.EquipPerk
	 */
	struct UUI_PerkSlot_C_EquipPerk_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EquipSuccess;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.ClearSlot
	 */
	struct UUI_PerkSlot_C_ClearSlot_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.UnSelectSlot
	 */
	struct UUI_PerkSlot_C_UnSelectSlot_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot
	 */
	struct UUI_PerkSlot_C_ExecuteUbergraph_UI_PerkSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SSO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.PerkSlotSelected__DelegateSignature
	 */
	struct UUI_PerkSlot_C_PerkSlotSelected__DelegateSignature_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
