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
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.Get_PurchaseConfirmText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BuyPoints_C::Get_PurchaseConfirmText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.Get_PurchaseConfirmText_Text_1");
		
		UUI_BuyPoints_C_Get_PurchaseConfirmText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.ShowTransactionScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyPoints_C::ShowTransactionScreen(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.ShowTransactionScreen");
		
		UUI_BuyPoints_C_ShowTransactionScreen_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_6F72935A464FBAFF7E9FC5A2297C521A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryStartPurchaseResult          Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyPoints_C::OnCallback_6F72935A464FBAFF7E9FC5A2297C521A(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_6F72935A464FBAFF7E9FC5A2297C521A");
		
		UUI_BuyPoints_C_OnCallback_6F72935A464FBAFF7E9FC5A2297C521A_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_02A12AEA43C3F739CE86D384936AC92C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyPoints_C::OnCallback_02A12AEA43C3F739CE86D384936AC92C(const class FString& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_02A12AEA43C3F739CE86D384936AC92C");
		
		UUI_BuyPoints_C_OnCallback_02A12AEA43C3F739CE86D384936AC92C_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyPoints_C::OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2(const class FString& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2");
		
		UUI_BuyPoints_C_OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.Construct");
		
		UUI_BuyPoints_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.Run
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::Run()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.Run");
		
		UUI_BuyPoints_C_Run_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.OnEscapeInputCapture
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::OnEscapeInputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.OnEscapeInputCapture");
		
		UUI_BuyPoints_C_OnEscapeInputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature");
		
		UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.MicroTransactionAuthorized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMicroTxnAuthorizationResponse              Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_BuyPoints_C::MicroTransactionAuthorized(const struct FMicroTxnAuthorizationResponse& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.MicroTransactionAuthorized");
		
		UUI_BuyPoints_C_MicroTransactionAuthorized_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyPoints_C::Success(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.Success");
		
		UUI_BuyPoints_C_Success_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.DoNothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyPoints_C::DoNothing(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.DoNothing");
		
		UUI_BuyPoints_C_DoNothing_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.ExecuteUbergraph_UI_BuyPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyPoints_C::ExecuteUbergraph_UI_BuyPoints(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.ExecuteUbergraph_UI_BuyPoints");
		
		UUI_BuyPoints_C_ExecuteUbergraph_UI_BuyPoints_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuyPoints.UI_BuyPoints_C.Updated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BuyPoints_C::Updated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuyPoints.UI_BuyPoints_C.Updated__DelegateSignature");
		
		UUI_BuyPoints_C_Updated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuyPoints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuyPoints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuyPoints.UI_BuyPoints_C");
		return ptr;
	}

}


