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
	 * Function UI_MainMenu.UI_MainMenu_C.Get_TimeRemainingText_Text_1
	 */
	struct UUI_MainMenu_C_Get_TimeRemainingText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetTimePassedFromFirstTapeStamp
	 */
	struct UUI_MainMenu_C_GetTimePassedFromFirstTapeStamp_Params
	{
	public:
		int32_t                                                    Days;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4OI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.SetCanEscQuit
	 */
	struct UUI_MainMenu_C_SetCanEscQuit_Params
	{
	public:
		bool                                                       CanEscQuit;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O47J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.FadeOut
	 */
	struct UUI_MainMenu_C_FadeOut_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnFailure_1FBF49BF46D9F261BC8273A034EA0D92
	 */
	struct UUI_MainMenu_C_OnFailure_1FBF49BF46D9F261BC8273A034EA0D92_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92
	 */
	struct UUI_MainMenu_C_OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB
	 */
	struct UUI_MainMenu_C_OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB
	 */
	struct UUI_MainMenu_C_OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnInitialized
	 */
	struct UUI_MainMenu_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.ReplayMonsterTutorial
	 */
	struct UUI_MainMenu_C_ReplayMonsterTutorial_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.UpdateToyBoxButtonHighlighted
	 */
	struct UUI_MainMenu_C_UpdateToyBoxButtonHighlighted_Params
	{
	public:
		bool                                                       Highlighted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_Mouse Dragged__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_MouseDragged__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           DeltaMouse;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature_Params
	{
	public:
		bool                                                       UpdateRotatingCharacter;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.ReloadTutorial
	 */
	struct UUI_MainMenu_C_ReloadTutorial_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Construct
	 */
	struct UUI_MainMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_Back Pressed__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature
	 */
	struct UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.FadeBack
	 */
	struct UUI_MainMenu_C_FadeBack_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.BackToMainMenu
	 */
	struct UUI_MainMenu_C_BackToMainMenu_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.EscapeReleased
	 */
	struct UUI_MainMenu_C_EscapeReleased_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.EscapePressed
	 */
	struct UUI_MainMenu_C_EscapePressed_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Return
	 */
	struct UUI_MainMenu_C_Return_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Fail
	 */
	struct UUI_MainMenu_C_Fail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.SwitchSelectedScreen
	 */
	struct UUI_MainMenu_C_SwitchSelectedScreen_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Speed;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Camera;                                                  // 0x000C(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Tick
	 */
	struct UUI_MainMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.EventHost
	 */
	struct UUI_MainMenu_C_EventHost_Params
	{
	public:
		bool                                                       bUseLAN;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldAdvertise;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowInvites;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O5M4[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Level;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.EventHostNEW
	 */
	struct UUI_MainMenu_C_EventHostNEW_Params
	{
	public:
		bool                                                       bUseLAN;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldAdvertise;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFriendsOnly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1OJ[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Level;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
	 */
	struct UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2ZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.MouseDragged__DelegateSignature
	 */
	struct UUI_MainMenu_C_MouseDragged__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           DeltaMouse;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.UpdateRotatingCharacter__DelegateSignature
	 */
	struct UUI_MainMenu_C_UpdateRotatingCharacter__DelegateSignature_Params
	{
	public:
		bool                                                       UpdateRotatingCharacter;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Reset Player Smooth__DelegateSignature
	 */
	struct UUI_MainMenu_C_ResetPlayerSmooth__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
