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
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.UpdateCoins
	 */
	struct UT_CurrencyDisplay_C_UpdateCoins_Params
	{
	public:
		int32_t                                                    NewTotal;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_47OW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.BeforeDec15
	 */
	struct UT_CurrencyDisplay_C_BeforeDec15_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TGAU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.HasHazmatSuit
	 */
	struct UT_CurrencyDisplay_C_HasHazmatSuit_Params
	{
	public:
		TArray<struct FSteamItemDetails>                           SteamItems;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSteamItemDetails                                   ItemDefinition;                                          // 0x0010(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7AHY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.Refresh
	 */
	struct UT_CurrencyDisplay_C_Refresh_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.RefreshTicketCount
	 */
	struct UT_CurrencyDisplay_C_RefreshTicketCount_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.OnInitialized
	 */
	struct UT_CurrencyDisplay_C_OnInitialized_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.FoundSteamInventory
	 */
	struct UT_CurrencyDisplay_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.LowPrioritySilentRefresh
	 */
	struct UT_CurrencyDisplay_C_LowPrioritySilentRefresh_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UT_CurrencyDisplay_C_BndEvt__T_CurrencyDisplay_AddButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.HidePlaycoins
	 */
	struct UT_CurrencyDisplay_C_HidePlaycoins_Params
	{	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.Fail
	 */
	struct UT_CurrencyDisplay_C_Fail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.Complete
	 */
	struct UT_CurrencyDisplay_C_Complete_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function T_CurrencyDisplay.T_CurrencyDisplay_C.ExecuteUbergraph_T_CurrencyDisplay
	 */
	struct UT_CurrencyDisplay_C_ExecuteUbergraph_T_CurrencyDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZ84[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
