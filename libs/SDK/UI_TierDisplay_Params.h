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
	 * Function UI_TierDisplay.UI_TierDisplay_C.SetWidgetStyle
	 */
	struct UUI_TierDisplay_C_SetWidgetStyle_Params
	{	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.OnInitialized
	 */
	struct UUI_TierDisplay_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.ManualGetXP
	 */
	struct UUI_TierDisplay_C_ManualGetXP_Params
	{	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.SetLoading
	 */
	struct UUI_TierDisplay_C_SetLoading_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.XP_API_SUCCESS
	 */
	struct UUI_TierDisplay_C_XP_API_SUCCESS_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.XP_API_Failure
	 */
	struct UUI_TierDisplay_C_XP_API_Failure_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TierDisplay.UI_TierDisplay_C.ExecuteUbergraph_UI_TierDisplay
	 */
	struct UUI_TierDisplay_C_ExecuteUbergraph_UI_TierDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OM86[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
