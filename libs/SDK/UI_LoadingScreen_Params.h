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
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.GetText_1
	 */
	struct UUI_LoadingScreen_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.ClearTimer
	 */
	struct UUI_LoadingScreen_C_ClearTimer_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.GetTimeoutText
	 */
	struct UUI_LoadingScreen_C_GetTimeoutText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.OnFailure_F68ED22C430FAEAB863EDF93B38CF1AC
	 */
	struct UUI_LoadingScreen_C_OnFailure_F68ED22C430FAEAB863EDF93B38CF1AC_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.OnSuccess_F68ED22C430FAEAB863EDF93B38CF1AC
	 */
	struct UUI_LoadingScreen_C_OnSuccess_F68ED22C430FAEAB863EDF93B38CF1AC_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.Construct
	 */
	struct UUI_LoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.BndEvt__UI_LoadingScreen_B_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_LoadingScreen_C_BndEvt__UI_LoadingScreen_B_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.PreConstruct
	 */
	struct UUI_LoadingScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.OnTimeout
	 */
	struct UUI_LoadingScreen_C_OnTimeout_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.ClearLoadingMessage
	 */
	struct UUI_LoadingScreen_C_ClearLoadingMessage_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.ReconnectingLoadingMessage
	 */
	struct UUI_LoadingScreen_C_ReconnectingLoadingMessage_Params
	{	};

	/**
	 * Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen
	 */
	struct UUI_LoadingScreen_C_ExecuteUbergraph_UI_LoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
