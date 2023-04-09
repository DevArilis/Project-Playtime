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
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.UpdateCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTotal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UT_CurrencyDisplay_C::UpdateCoins(int32_t NewTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.UpdateCoins");
		
		UT_CurrencyDisplay_C_UpdateCoins_Params params {};
		params.NewTotal = NewTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.BeforeDec15
	 * 		Flags  -> ()
	 */
	bool UT_CurrencyDisplay_C::BeforeDec15()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.BeforeDec15");
		
		UT_CurrencyDisplay_C_BeforeDec15_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.HasHazmatSuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   SteamItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSteamItemDetails                           ItemDefinition                                             (Parm, OutParm)
	 */
	bool UT_CurrencyDisplay_C::HasHazmatSuit(TArray<struct FSteamItemDetails>* SteamItems, struct FSteamItemDetails* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.HasHazmatSuit");
		
		UT_CurrencyDisplay_C_HasHazmatSuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamItems != nullptr)
			*SteamItems = params.SteamItems;
		if (ItemDefinition != nullptr)
			*ItemDefinition = params.ItemDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.Refresh
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.Refresh");
		
		UT_CurrencyDisplay_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.RefreshTicketCount
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::RefreshTicketCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.RefreshTicketCount");
		
		UT_CurrencyDisplay_C_RefreshTicketCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.OnInitialized");
		
		UT_CurrencyDisplay_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.FoundSteamInventory");
		
		UT_CurrencyDisplay_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.LowPrioritySilentRefresh
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::LowPrioritySilentRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.LowPrioritySilentRefresh");
		
		UT_CurrencyDisplay_C_LowPrioritySilentRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UT_CurrencyDisplay_C_BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.HidePlaycoins
	 * 		Flags  -> ()
	 */
	void UT_CurrencyDisplay_C::HidePlaycoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.HidePlaycoins");
		
		UT_CurrencyDisplay_C_HidePlaycoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.Fail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UT_CurrencyDisplay_C::Fail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.Fail");
		
		UT_CurrencyDisplay_C_Fail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UT_CurrencyDisplay_C::Complete(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.Complete");
		
		UT_CurrencyDisplay_C_Complete_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function T_CurrencyDisplay.T_CurrencyDisplay_C.ExecuteUbergraph_T_CurrencyDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UT_CurrencyDisplay_C::ExecuteUbergraph_T_CurrencyDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function T_CurrencyDisplay.T_CurrencyDisplay_C.ExecuteUbergraph_T_CurrencyDisplay");
		
		UT_CurrencyDisplay_C_ExecuteUbergraph_T_CurrencyDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UT_CurrencyDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UT_CurrencyDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass T_CurrencyDisplay.T_CurrencyDisplay_C");
		return ptr;
	}

}


