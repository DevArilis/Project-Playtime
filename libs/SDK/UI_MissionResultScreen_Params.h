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
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1
	 */
	struct UUI_MissionResultScreen_C_SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1_Params
	{
	public:
		class UUI_BasicButton_C*                                   LeaveGame_UI_BasicButton;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateResultText
	 */
	struct UUI_MissionResultScreen_C_PopulateResultText_Params
	{
	public:
		class FText                                                ResultText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.Populate XP
	 */
	struct UUI_MissionResultScreen_C_PopulateXP_Params
	{
	public:
		int32_t                                                    XPGained;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMatchResult
	 */
	struct UUI_MissionResultScreen_C_PopulateMatchResult_Params
	{
	public:
		E_EndGameCategory                                          EndGameCategory;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HS0R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MATCHTIME;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.FindHighestRewardingActions
	 */
	struct UUI_MissionResultScreen_C_FindHighestRewardingActions_Params
	{
	public:
		TArray<struct FTicketRewardableAction>                     InputArray;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumOfOutputs;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T8EJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSelf
	 */
	struct UUI_MissionResultScreen_C_PopulateSelf_Params
	{
	public:
		class ABP_MultiplayerPlayerState_C*                        MPPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMonster
	 */
	struct UUI_MissionResultScreen_C_PopulateMonster_Params
	{
	public:
		class ABP_MultiplayerPlayerState_C*                        MultiplayerPlayerState;                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSurvivorList
	 */
	struct UUI_MissionResultScreen_C_PopulateSurvivorList_Params
	{
	public:
		TArray<class ABP_MultiplayerPlayerState_C*>                MultiplayerPlayerStates;                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnFailure_50838ADE4199134ED6915E9403F55DB3
	 */
	struct UUI_MissionResultScreen_C_OnFailure_50838ADE4199134ED6915E9403F55DB3_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnSuccess_50838ADE4199134ED6915E9403F55DB3
	 */
	struct UUI_MissionResultScreen_C_OnSuccess_50838ADE4199134ED6915E9403F55DB3_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.DontQuit
	 */
	struct UUI_MissionResultScreen_C_DontQuit_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.QuitToMenu
	 */
	struct UUI_MissionResultScreen_C_QuitToMenu_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.NextMatchTimer
	 */
	struct UUI_MissionResultScreen_C_NextMatchTimer_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.SetBackground
	 */
	struct UUI_MissionResultScreen_C_SetBackground_Params
	{
	public:
		ECharacterType                                             Monster;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_EndGameCategory                                          EndGameCategory;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectSummary
	 */
	struct UUI_MissionResultScreen_C_ManualSelectSummary_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 */
	struct UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnInitialized
	 */
	struct UUI_MissionResultScreen_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.PreConstruct
	 */
	struct UUI_MissionResultScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.LeaveGame_UI_BasicButton_Event_1
	 */
	struct UUI_MissionResultScreen_C_LeaveGame_UI_BasicButton_Event_1_Params
	{
	public:
		class UUI_BasicButton_C*                                   LeaveGame_UI_BasicButton;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectScoreboard
	 */
	struct UUI_MissionResultScreen_C_ManualSelectScoreboard_Params
	{	};

	/**
	 * Function UI_MissionResultScreen.UI_MissionResultScreen_C.ExecuteUbergraph_UI_MissionResultScreen
	 */
	struct UUI_MissionResultScreen_C_ExecuteUbergraph_UI_MissionResultScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
