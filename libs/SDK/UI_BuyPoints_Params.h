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
	 * Function UI_BuyPoints.UI_BuyPoints_C.Get_PurchaseConfirmText_Text_1
	 */
	struct UUI_BuyPoints_C_Get_PurchaseConfirmText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.ShowTransactionScreen
	 */
	struct UUI_BuyPoints_C_ShowTransactionScreen_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FZ9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_6F72935A464FBAFF7E9FC5A2297C521A
	 */
	struct UUI_BuyPoints_C_OnCallback_6F72935A464FBAFF7E9FC5A2297C521A_Params
	{
	public:
		struct FSteamInventoryStartPurchaseResult                  Data;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bWasSuccessful;                                          // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_02A12AEA43C3F739CE86D384936AC92C
	 */
	struct UUI_BuyPoints_C_OnCallback_02A12AEA43C3F739CE86D384936AC92C_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2
	 */
	struct UUI_BuyPoints_C_OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.Construct
	 */
	struct UUI_BuyPoints_C_Construct_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.Run
	 */
	struct UUI_BuyPoints_C_Run_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.OnEscapeInputCapture
	 */
	struct UUI_BuyPoints_C_OnEscapeInputCapture_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 */
	struct UUI_BuyPoints_C_BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.MicroTransactionAuthorized
	 */
	struct UUI_BuyPoints_C_MicroTransactionAuthorized_Params
	{
	public:
		struct FMicroTxnAuthorizationResponse                      Data;                                                    // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.Success
	 */
	struct UUI_BuyPoints_C_Success_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.DoNothing
	 */
	struct UUI_BuyPoints_C_DoNothing_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.ExecuteUbergraph_UI_BuyPoints
	 */
	struct UUI_BuyPoints_C_ExecuteUbergraph_UI_BuyPoints_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZZG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyPoints.UI_BuyPoints_C.Updated__DelegateSignature
	 */
	struct UUI_BuyPoints_C_Updated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
