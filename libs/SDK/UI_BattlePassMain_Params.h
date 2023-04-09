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
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.Get_XPToNextTierText_Text_1
	 */
	struct UUI_BattlePassMain_C_Get_XPToNextTierText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.Get_RewardsProgressText_Text_1
	 */
	struct UUI_BattlePassMain_C_Get_RewardsProgressText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.HandleOwningBattlepass
	 */
	struct UUI_BattlePassMain_C_HandleOwningBattlepass_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.CheckIfUserOwnsBattlepass
	 */
	struct UUI_BattlePassMain_C_CheckIfUserOwnsBattlepass_Params
	{
	public:
		TArray<struct FSteamItemDetails>                           SteamItems;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.GetMainMenu
	 */
	struct UUI_BattlePassMain_C_GetMainMenu_Params
	{
	public:
		class UUI_MainMenu_C*                                      Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.SetOtherVisibleFields
	 */
	struct UUI_BattlePassMain_C_SetOtherVisibleFields_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.GetPassID
	 */
	struct UUI_BattlePassMain_C_GetPassID_Params
	{
	public:
		class FString                                              PassID;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BEAE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.SetCharacter
	 */
	struct UUI_BattlePassMain_C_SetCharacter_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASkeletalMeshActor*                                  Monster;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_MonsterAndPlayerMenuCharacter_C*                 PlayerMonsterMenuCharacter;                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.GetBarProgress
	 */
	struct UUI_BattlePassMain_C_GetBarProgress_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Page;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.SetPreviewID
	 */
	struct UUI_BattlePassMain_C_SetPreviewID_Params
	{
	public:
		int32_t                                                    PreviewID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Paid;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.UpdateBottomPages
	 */
	struct UUI_BattlePassMain_C_UpdateBottomPages_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.SetPage
	 */
	struct UUI_BattlePassMain_C_SetPage_Params
	{
	public:
		int32_t                                                    NewPage;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R2JO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.InitAnimation
	 */
	struct UUI_BattlePassMain_C_InitAnimation_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.Reset Preview Cosmetics
	 */
	struct UUI_BattlePassMain_C_ResetPreviewCosmetics_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_New_C*                           Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.Close
	 */
	struct UUI_BattlePassMain_C_Close_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.OnInitialized
	 */
	struct UUI_BattlePassMain_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.OpenBattlePass
	 */
	struct UUI_BattlePassMain_C_OpenBattlePass_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.Tick
	 */
	struct UUI_BattlePassMain_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.RefreshBattlepassOwnership
	 */
	struct UUI_BattlePassMain_C_RefreshBattlepassOwnership_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.FoundSteamInventory
	 */
	struct UUI_BattlePassMain_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.OnXPUpdate
	 */
	struct UUI_BattlePassMain_C_OnXPUpdate_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.SetOwnershipLoading
	 */
	struct UUI_BattlePassMain_C_SetOwnershipLoading_Params
	{
	public:
		bool                                                       OwnershipLoading;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.HideBuy
	 */
	struct UUI_BattlePassMain_C_HideBuy_Params
	{	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.ExecuteUbergraph_UI_BattlePassMain
	 */
	struct UUI_BattlePassMain_C_ExecuteUbergraph_UI_BattlePassMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3Q8U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BattlePassMain.UI_BattlePassMain_C.GoBack__DelegateSignature
	 */
	struct UUI_BattlePassMain_C_GoBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
