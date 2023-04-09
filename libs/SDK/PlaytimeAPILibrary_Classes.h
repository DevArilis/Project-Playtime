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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlaytimeAPILibrary.PlaytimeAPILibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlaytimeAPILibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void RefreshOwnershipOfBattlePass(class UObject* __WorldContext);
		void GetRewardedItemsFromTransactionsResponse(const class FString& TransactionsResponse, class UObject* __WorldContext, TArray<int32_t>* AwardedItems);
		void HandleRewardsFailure(class UVaRestRequestJSON* self2, class UObject* __WorldContext);
		void HandleRewardsSuccess(class UVaRestRequestJSON* self2, class UObject* Caller, class UObject* __WorldContext, class FString* NewParam);
		void GetRewards(const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext);
		void RefreshTierDisplay(class UObject* __WorldContext);
		void RefreshCurrencyDisplay(bool Silent, class UObject* __WorldContext);
		void PostChargeExchangeCoinsforXP(int32_t CoinsToExchangeForXP, const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext);
		void GetRewardedItemsfromPointsResponse(const class FString& PointsResponse, class UObject* __WorldContext, TArray<int32_t>* RewardedItemDefIds);
		void ImprovedPostPoints(int32_t PlayerCount, const class FScriptDelegate& Success, const class FScriptDelegate& Failure, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
