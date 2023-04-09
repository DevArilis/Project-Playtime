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
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshOwnershipOfBattlePass
	 */
	struct UPlaytimeAPILibrary_C_RefreshOwnershipOfBattlePass_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewardedItemsFromTransactionsResponse
	 */
	struct UPlaytimeAPILibrary_C_GetRewardedItemsFromTransactionsResponse_Params
	{
	public:
		class FString                                              TransactionsResponse;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            AwardedItems;                                            // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsFailure
	 */
	struct UPlaytimeAPILibrary_C_HandleRewardsFailure_Params
	{
	public:
		class UVaRestRequestJSON*                                  self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.HandleRewardsSuccess
	 */
	struct UPlaytimeAPILibrary_C_HandleRewardsSuccess_Params
	{
	public:
		class UVaRestRequestJSON*                                  self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              NewParam;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.GetRewards
	 */
	struct UPlaytimeAPILibrary_C_GetRewards_Params
	{
	public:
		class FScriptDelegate                                      Success;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      Failure;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.RefreshTierDisplay
	 */
	struct UPlaytimeAPILibrary_C_RefreshTierDisplay_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Refresh Currency Display
	 */
	struct UPlaytimeAPILibrary_C_RefreshCurrencyDisplay_Params
	{
	public:
		bool                                                       Silent;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E31R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.PostCharge (Exchange Coins for XP)
	 */
	struct UPlaytimeAPILibrary_C_PostChargeExchangeCoinsforXP_Params
	{
	public:
		int32_t                                                    CoinsToExchangeForXP;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Success;                                                 // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      Failure;                                                 // 0x0014(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_RXIJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.Get Rewarded Items from Points Response
	 */
	struct UPlaytimeAPILibrary_C_GetRewardedItemsfromPointsResponse_Params
	{
	public:
		class FString                                              PointsResponse;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            RewardedItemDefIds;                                      // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PlaytimeAPILibrary.PlaytimeAPILibrary_C.ImprovedPostPoints
	 */
	struct UPlaytimeAPILibrary_C_ImprovedPostPoints_Params
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Success;                                                 // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      Failure;                                                 // 0x0014(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_E06X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
