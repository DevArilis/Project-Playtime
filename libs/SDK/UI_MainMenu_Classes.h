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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C
	 * Size -> 0x02A0 (FullSize[0x0500] - InheritedSize[0x0260])
	 */
	class UUI_MainMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MoveOtherOut;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoverTapes;                                              // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MoveOut;                                                 // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BlackScreen;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   BugReportButton;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Career;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Credits;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Customize;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EventSplash;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   ExitPatchNotes;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Master;                                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   MonsterTutorial;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NotifTheater;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     OtherMenus;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PatchNoteBackground;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      Patchnotebody;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   PatchNotes;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          PatchNotesScroll;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Play;                                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   PlayerTutorial;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SeasonName;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Selected_ToyBoxButton;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Socials;                                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Store;                                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UT_CurrencyDisplay_C*                                T_CurrencyDisplay;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Theater;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeRemainingText;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ToyBoxButton;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BattlePassMain_C*                                UI_BattlePassMain;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Credits_C*                                       UI_Credits;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Customize_C*                                     UI_CustomizeB;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EarlyAccess_Overlay_C*                           UI_EarlyAccess_Overlay;                                  // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Play_C*                                          UI_Play;                                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MainmenuSettingsExitButton_C*                    UI_SetExit;                                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Settings_Menu_C*                                 UI_Settings_Menu;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Shoppy_C*                                        UI_Shoppy;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatsScreen_C*                                   UI_StatsScreen;                                          // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Theater_C*                                       UI_Theater;                                              // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Unselected_ToyBoxButton;                                 // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAudioComponent*                                     MainMenuAudioComponent;                                  // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TutorialMessage;                                         // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CustomizeStartTime;                                      // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BF1[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraMoveSpeed;                                         // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          TargetTransform;                                         // 0x03E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          PreviousTransform;                                       // 0x0410(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_NetworkCharacter_C*                              BattlePassCharacter;                                     // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FRotator                                            OriginalCharacterRotation;                               // 0x0448(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M9YN[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ResetPlayerSmooth;                                       // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      TargetFOV;                                               // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousFOV;                                             // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MovieScreen;                                             // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            Tapes;                                                   // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDateTime                                           FirstTapeDate;                                           // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_CameraMoverMain_C*                               CameraManager;                                           // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              BattlepassResponse;                                      // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       AtMainMenu;                                              // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5VQ4[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASkeletalMeshActor*                                  BattlePassMonster;                                       // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FFloatSpringState                                   SpringState;                                             // 0x04B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      ToyButtonScale;                                          // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ToyButtonHighlighted;                                    // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UAGO[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          MenuMusic;                                               // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdateRotatingCharacter;                                 // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             MouseDragged;                                            // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_CustomizationMenuCharacter_C*                    MenuPlayerCharacter;                                     // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_MonsterAndPlayerMenuCharacter_C*                 PlayerMonsterMenuCharacter;                              // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		class FText Get_TimeRemainingText_Text_1();
		bool GetTimePassedFromFirstTapeStamp(int32_t Days);
		void SetCanEscQuit(bool CanEscQuit);
		void FadeOut();
		void OnFailure_1FBF49BF46D9F261BC8273A034EA0D92();
		void OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92();
		void OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB();
		void OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB();
		void BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature();
		void OnInitialized();
		void BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature();
		void ReplayMonsterTutorial();
		void BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void UpdateToyBoxButtonHighlighted(bool Highlighted);
		void BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature();
		void BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse);
		void BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature(bool UpdateRotatingCharacter);
		void BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature();
		void BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature();
		void ReloadTutorial();
		void BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature();
		void BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature();
		void BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature();
		void BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature();
		void Construct();
		void BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature();
		void BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature();
		void FadeBack();
		void BackToMainMenu(float Speed);
		void EscapeReleased();
		void EscapePressed();
		void Return(class UVaRestRequestJSON* Request);
		void Fail(class UVaRestRequestJSON* Request);
		void SwitchSelectedScreen(class UWidget* Widget, float Speed, const class FName& Camera);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void EventHost(bool bUseLAN, bool bShouldAdvertise, bool bAllowInvites, const class FString& Level);
		void EventHostNEW(bool bUseLAN, bool bShouldAdvertise, bool bFriendsOnly, const class FString& Level);
		void ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint);
		void MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse);
		void UpdateRotatingCharacter__DelegateSignature(bool UpdateRotatingCharacter);
		void ResetPlayerSmooth__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
