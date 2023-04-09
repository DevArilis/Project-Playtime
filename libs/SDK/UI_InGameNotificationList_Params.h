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
	 * Function UI_InGameNotificationList.UI_InGameNotificationList_C.HandleNotificationAddition
	 */
	struct UUI_InGameNotificationList_C_HandleNotificationAddition_Params
	{
	public:
		class UWidget*                                             HandledWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameNotificationList.UI_InGameNotificationList_C.PreConstruct
	 */
	struct UUI_InGameNotificationList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InGameNotificationList.UI_InGameNotificationList_C.DisplayNotification
	 */
	struct UUI_InGameNotificationList_C_DisplayNotification_Params
	{
	public:
		class FText                                                NotifText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TicketReward;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_InGameNotificationList.UI_InGameNotificationList_C.OnInitialized
	 */
	struct UUI_InGameNotificationList_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_InGameNotificationList.UI_InGameNotificationList_C.ExecuteUbergraph_UI_InGameNotificationList
	 */
	struct UUI_InGameNotificationList_C_ExecuteUbergraph_UI_InGameNotificationList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
