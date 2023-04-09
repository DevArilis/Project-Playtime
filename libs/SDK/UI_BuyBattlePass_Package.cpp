/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetSwitcher*                             Widgets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2(class UWidgetSwitcher* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2");
		
		UUI_BuyBattlePass_C_SequenceEvent__ENTRYPOINTUI_BuyBattlePass_2_Params params {};
		params.Widgets = Widgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetSwitcher*                             Widgets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1(class UWidgetSwitcher* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1");
		
		UUI_BuyBattlePass_C_SequenceEvent__ENTRYPOINTUI_BuyBattlePass_1_Params params {};
		params.Widgets = Widgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_1_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BuyBattlePass_C::Get_PremiumDescription_1_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_1_Text_1");
		
		UUI_BuyBattlePass_C_Get_PremiumDescription_1_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BuyBattlePass_C::Get_PremiumDescription_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PremiumDescription_Text_1");
		
		UUI_BuyBattlePass_C_Get_PremiumDescription_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BuyBattlePass_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.GetText_1");
		
		UUI_BuyBattlePass_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PurchaseConfirmText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BuyBattlePass_C::Get_PurchaseConfirmText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Get_PurchaseConfirmText_Text_1");
		
		UUI_BuyBattlePass_C_Get_PurchaseConfirmText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoinsForSoloPurchaseOf25Tiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UT_CurrencyDisplay_C*>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               Enough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyBattlePass_C::CheckHasEnoughCoinsForSoloPurchaseOf25Tiers(TArray<class UT_CurrencyDisplay_C*>* Array, bool* Enough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoinsForSoloPurchaseOf25Tiers");
		
		UUI_BuyBattlePass_C_CheckHasEnoughCoinsForSoloPurchaseOf25Tiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Enough != nullptr)
			*Enough = params.Enough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UT_CurrencyDisplay_C*>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               Enough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyBattlePass_C::CheckHasEnoughCoins(TArray<class UT_CurrencyDisplay_C*>* Array, bool* Enough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.CheckHasEnoughCoins");
		
		UUI_BuyBattlePass_C_CheckHasEnoughCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Enough != nullptr)
			*Enough = params.Enough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.ShowTransactionScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyBattlePass_C::ShowTransactionScreen(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.ShowTransactionScreen");
		
		UUI_BuyBattlePass_C_ShowTransactionScreen_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Widgets_SwitchToDesiredWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetSwitcher*                             Widgets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::Widgets_SwitchToDesiredWidget(class UWidgetSwitcher* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Widgets_SwitchToDesiredWidget");
		
		UUI_BuyBattlePass_C_Widgets_SwitchToDesiredWidget_Params params {};
		params.Widgets = Widgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Construct");
		
		UUI_BuyBattlePass_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BuyBattlePass
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BuyBattlePass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BuyBattlePass");
		
		UUI_BuyBattlePass_C_BuyBattlePass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::Success(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Success");
		
		UUI_BuyBattlePass_C_Success_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.Fail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::Fail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.Fail");
		
		UUI_BuyBattlePass_C_Fail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.FinishXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::FinishXP(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.FinishXP");
		
		UUI_BuyBattlePass_C_FinishXP_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.FailXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::FailXP(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.FailXP");
		
		UUI_BuyBattlePass_C_FailXP_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.TransitionToDesiredWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     DesiredWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseBackward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyBattlePass_C::TransitionToDesiredWidget(class UWidget* DesiredWidget, bool UseBackward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.TransitionToDesiredWidget");
		
		UUI_BuyBattlePass_C_TransitionToDesiredWidget_Params params {};
		params.DesiredWidget = DesiredWidget;
		params.UseBackward = UseBackward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::RewardsSuccess(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsSuccess");
		
		UUI_BuyBattlePass_C_RewardsSuccess_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::RewardsFailure(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.RewardsFailure");
		
		UUI_BuyBattlePass_C_RewardsFailure_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.OnTimeout
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::OnTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.OnTimeout");
		
		UUI_BuyBattlePass_C_OnTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.RemoveFromParentIfChargeDone
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::RemoveFromParentIfChargeDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.RemoveFromParentIfChargeDone");
		
		UUI_BuyBattlePass_C_RemoveFromParentIfChargeDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.RunLocalGetRewards
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::RunLocalGetRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.RunLocalGetRewards");
		
		UUI_BuyBattlePass_C_RunLocalGetRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyBattlePass_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.PreConstruct");
		
		UUI_BuyBattlePass_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BuyBattlePass_C_BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.SayYesTo25Tiers
	 * 		Flags  -> ()
	 */
	void UUI_BuyBattlePass_C::SayYesTo25Tiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.SayYesTo25Tiers");
		
		UUI_BuyBattlePass_C_SayYesTo25Tiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyBattlePass.UI_BuyBattlePass_C.ExecuteUbergraph_UI_BuyBattlePass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyBattlePass_C::ExecuteUbergraph_UI_BuyBattlePass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyBattlePass.UI_BuyBattlePass_C.ExecuteUbergraph_UI_BuyBattlePass");
		
		UUI_BuyBattlePass_C_ExecuteUbergraph_UI_BuyBattlePass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuyBattlePass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuyBattlePass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuyBattlePass.UI_BuyBattlePass_C");
		return ptr;
	}

}


