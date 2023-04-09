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
	 * Function UI_InGameNotification.UI_InGameNotification_C.PreConstruct
	 */
	struct UUI_InGameNotification_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InGameNotification.UI_InGameNotification_C.EndLife
	 */
	struct UUI_InGameNotification_C_EndLife_Params
	{	};

	/**
	 * Function UI_InGameNotification.UI_InGameNotification_C.FadeOutFinished
	 */
	struct UUI_InGameNotification_C_FadeOutFinished_Params
	{	};

	/**
	 * Function UI_InGameNotification.UI_InGameNotification_C.OnInitialized
	 */
	struct UUI_InGameNotification_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_InGameNotification.UI_InGameNotification_C.ExecuteUbergraph_UI_InGameNotification
	 */
	struct UUI_InGameNotification_C_ExecuteUbergraph_UI_InGameNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3722[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
