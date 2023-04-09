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
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2
	 */
	struct UUI_BuyBattlePass_C_SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2_Params
	{
	public:
		class UWidgetSwitcher*                                     Widgets;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1
	 */
	struct UUI_BuyBattlePass_C_SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1_Params
	{
	public:
		class UWidgetSwitcher*                                     Widgets;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_1_Text_1
	 */
	struct UUI_BuyBattlePass_C_Get_PremiumDescription_1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_Text_1
	 */
	struct UUI_BuyBattlePass_C_Get_PremiumDescription_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.GetText_1
	 */
	struct UUI_BuyBattlePass_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PurchaseConfirmText_Text_1
	 */
	struct UUI_BuyBattlePass_C_Get_PurchaseConfirmText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoinsForSoloPurchaseOf25Tiers
	 */
	struct UUI_BuyBattlePass_C_CheckHasEnoughCoinsForSoloPurchaseOf25Tiers_Params
	{
	public:
		TArray<class UT_CurrencyDisplay_C*>                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       Enough;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5W9B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoins
	 */
	struct UUI_BuyBattlePass_C_CheckHasEnoughCoins_Params
	{
	public:
		TArray<class UT_CurrencyDisplay_C*>                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       Enough;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RHYZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.ShowTransactionScreen
	 */
	struct UUI_BuyBattlePass_C_ShowTransactionScreen_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0B6B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Widgets_SwitchToDesiredWidget
	 */
	struct UUI_BuyBattlePass_C_Widgets_SwitchToDesiredWidget_Params
	{
	public:
		class UWidgetSwitcher*                                     Widgets;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Construct
	 */
	struct UUI_BuyBattlePass_C_Construct_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BuyBattlePass
	 */
	struct UUI_BuyBattlePass_C_BuyBattlePass_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Success
	 */
	struct UUI_BuyBattlePass_C_Success_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.Fail
	 */
	struct UUI_BuyBattlePass_C_Fail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.FinishXP
	 */
	struct UUI_BuyBattlePass_C_FinishXP_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.FailXP
	 */
	struct UUI_BuyBattlePass_C_FailXP_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.TransitionToDesiredWidget
	 */
	struct UUI_BuyBattlePass_C_TransitionToDesiredWidget_Params
	{
	public:
		class UWidget*                                             DesiredWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseBackward;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsSuccess
	 */
	struct UUI_BuyBattlePass_C_RewardsSuccess_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsFailure
	 */
	struct UUI_BuyBattlePass_C_RewardsFailure_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.OnTimeout
	 */
	struct UUI_BuyBattlePass_C_OnTimeout_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.RemoveFromParentIfChargeDone
	 */
	struct UUI_BuyBattlePass_C_RemoveFromParentIfChargeDone_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.RunLocalGetRewards
	 */
	struct UUI_BuyBattlePass_C_RunLocalGetRewards_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.PreConstruct
	 */
	struct UUI_BuyBattlePass_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.SayYesTo25Tiers
	 */
	struct UUI_BuyBattlePass_C_SayYesTo25Tiers_Params
	{	};

	/**
	 * Function UI_BuyBattlePass.UI_BuyBattlePass_C.ExecuteUbergraph_UI_BuyBattlePass
	 */
	struct UUI_BuyBattlePass_C_ExecuteUbergraph_UI_BuyBattlePass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0E0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
