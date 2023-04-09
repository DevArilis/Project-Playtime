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
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetMonsterSkin
	 */
	struct UUI_N_BattlePassTierMain_C_SetMonsterSkin_Params
	{
	public:
		struct FCosmetic                                           Item;                                                    // 0x0000(0x0248)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Scale;                                                   // 0x0248(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJTN[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimationAsset*                                     Anim;                                                    // 0x0250(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       DefaultSkin;                                             // 0x0258(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPreviewCharacter
	 */
	struct UUI_N_BattlePassTierMain_C_SetPreviewCharacter_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.IsCoins
	 */
	struct UUI_N_BattlePassTierMain_C_IsCoins_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetOutfit
	 */
	struct UUI_N_BattlePassTierMain_C_SetOutfit_Params
	{
	public:
		TArray<int32_t>                                            Bundle;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetUnlockedByXP
	 */
	struct UUI_N_BattlePassTierMain_C_SetUnlockedByXP_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.DeactivateActiveCards
	 */
	struct UUI_N_BattlePassTierMain_C_DeactivateActiveCards_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetActive
	 */
	struct UUI_N_BattlePassTierMain_C_SetActive_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1TF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPage
	 */
	struct UUI_N_BattlePassTierMain_C_SetPage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5183[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_BattlePassMain_C*                                Parent;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemStyle
	 */
	struct UUI_N_BattlePassTierMain_C_UpdateItemStyle_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemData
	 */
	struct UUI_N_BattlePassTierMain_C_UpdateItemData_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.ExecuteUbergraph_UI_N_BattlePassTierMain
	 */
	struct UUI_N_BattlePassTierMain_C_ExecuteUbergraph_UI_N_BattlePassTierMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0BB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
