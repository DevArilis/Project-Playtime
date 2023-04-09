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
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshOwnershipOfBattlePass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::RefreshOwnershipOfBattlePass(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshOwnershipOfBattlePass");
		
		UPlaytimeAPILibrary_C_RefreshOwnershipOfBattlePass_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewardedItemsFromTransactionsResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TransactionsResponse                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    AwardedItems                                               (Parm, OutParm)
	 */
	void UPlaytimeAPILibrary_C::GetRewardedItemsFromTransactionsResponse(const class FString& TransactionsResponse, class UObject* __WorldContext, TArray<int32_t>* AwardedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewardedItemsFromTransactionsResponse");
		
		UPlaytimeAPILibrary_C_GetRewardedItemsFromTransactionsResponse_Params params {};
		params.TransactionsResponse = TransactionsResponse;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AwardedItems != nullptr)
			*AwardedItems = params.AwardedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::HandleRewardsFailure(class UVaRestRequestJSON* self2, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsFailure");
		
		UPlaytimeAPILibrary_C_HandleRewardsFailure_Params params {};
		params.self2 = self2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::HandleRewardsSuccess(class UVaRestRequestJSON* self2, class UObject* Caller, class UObject* __WorldContext, class FString* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsSuccess");
		
		UPlaytimeAPILibrary_C_HandleRewardsSuccess_Params params {};
		params.self2 = self2;
		params.Caller = Caller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Failure                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::GetRewards(const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewards");
		
		UPlaytimeAPILibrary_C_GetRewards_Params params {};
		params.Success = Success;
		params.Failure = Failure;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshTierDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::RefreshTierDisplay(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshTierDisplay");
		
		UPlaytimeAPILibrary_C_RefreshTierDisplay_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Refresh Currency Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Silent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::RefreshCurrencyDisplay(bool Silent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Refresh Currency Display");
		
		UPlaytimeAPILibrary_C_RefreshCurrencyDisplay_Params params {};
		params.Silent = Silent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.PostCharge (Exchange Coins for XP)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CoinsToExchangeForXP                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Failure                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::PostChargeExchangeCoinsforXP(int32_t CoinsToExchangeForXP, const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.PostCharge (Exchange Coins for XP)");
		
		UPlaytimeAPILibrary_C_PostChargeExchangeCoinsforXP_Params params {};
		params.CoinsToExchangeForXP = CoinsToExchangeForXP;
		params.Success = Success;
		params.Failure = Failure;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Get Rewarded Items from Points Response
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PointsResponse                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    RewardedItemDefIds                                         (Parm, OutParm)
	 */
	void UPlaytimeAPILibrary_C::GetRewardedItemsfromPointsResponse(const class FString& PointsResponse, class UObject* __WorldContext, TArray<int32_t>* RewardedItemDefIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Get Rewarded Items from Points Response");
		
		UPlaytimeAPILibrary_C_GetRewardedItemsfromPointsResponse_Params params {};
		params.PointsResponse = PointsResponse;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardedItemDefIds != nullptr)
			*RewardedItemDefIds = params.RewardedItemDefIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.ImprovedPostPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Failure                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeAPILibrary_C::ImprovedPostPoints(int32_t PlayerCount, const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.ImprovedPostPoints");
		
		UPlaytimeAPILibrary_C_ImprovedPostPoints_Params params {};
		params.PlayerCount = PlayerCount;
		params.Success = Success;
		params.Failure = Failure;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeAPILibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeAPILibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaytimeAPILibrary.PlaytimeAPILibrary_C");
		return ptr;
	}

}


