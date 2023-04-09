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
	 * Function UI_Shoppy.UI_Shoppy_C.GetTimeToDisplay
	 */
	struct UUI_Shoppy_C_GetTimeToDisplay_Params
	{
	public:
		bool                                                       ShowEventTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JIH4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Time;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.FormatTime
	 */
	struct UUI_Shoppy_C_FormatTime_Params
	{
	public:
		struct FTimespan                                           Timespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.CacheStockParents
	 */
	struct UUI_Shoppy_C_CacheStockParents_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.Load Items
	 */
	struct UUI_Shoppy_C_LoadItems_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.RandomlyRetrieveItems
	 */
	struct UUI_Shoppy_C_RandomlyRetrieveItems_Params
	{
	public:
		TArray<int32_t>                                            ShopItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.SetThingsEnabled
	 */
	struct UUI_Shoppy_C_SetThingsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.CheckTime
	 */
	struct UUI_Shoppy_C_CheckTime_Params
	{
	public:
		bool                                                       ShowEventTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_818U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.GetFeaturedTimeLeft
	 */
	struct UUI_Shoppy_C_GetFeaturedTimeLeft_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.GetSeedFromDateTime
	 */
	struct UUI_Shoppy_C_GetSeedFromDateTime_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RATY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.CacheTopButtons
	 */
	struct UUI_Shoppy_C_CacheTopButtons_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.Construct
	 */
	struct UUI_Shoppy_C_Construct_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.LoadItemsFor
	 */
	struct UUI_Shoppy_C_LoadItemsFor_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.LoadShop
	 */
	struct UUI_Shoppy_C_LoadShop_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.LoadSuccess
	 */
	struct UUI_Shoppy_C_LoadSuccess_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.LoadFail
	 */
	struct UUI_Shoppy_C_LoadFail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.TimeUp
	 */
	struct UUI_Shoppy_C_TimeUp_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UUI_Shoppy_C_BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_New_C*                           Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.Refresh
	 */
	struct UUI_Shoppy_C_Refresh_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 */
	struct UUI_Shoppy_C_BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.LoadEventItems
	 */
	struct UUI_Shoppy_C_LoadEventItems_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.ShopItemSelected
	 */
	struct UUI_Shoppy_C_ShopItemSelected_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.CloseShoppyPreviewLoading
	 */
	struct UUI_Shoppy_C_CloseShoppyPreviewLoading_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.CallCheckTime
	 */
	struct UUI_Shoppy_C_CallCheckTime_Params
	{	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.ExecuteUbergraph_UI_Shoppy
	 */
	struct UUI_Shoppy_C_ExecuteUbergraph_UI_Shoppy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy.UI_Shoppy_C.BackReleased__DelegateSignature
	 */
	struct UUI_Shoppy_C_BackReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
