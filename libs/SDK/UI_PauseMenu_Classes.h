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
	 * WidgetBlueprintGeneratedClass UI_PauseMenu.UI_PauseMenu_C
	 * Size -> 0x00B9 (FullSize[0x0319] - InheritedSize[0x0260])
	 */
	class UUI_PauseMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideSettingsMenu;                                        // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Back_BasicButton;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Challenges_BasicButton;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Continue_BasicButton;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          FriendsList;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_101;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   LeaveGame_BasicButton;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Master_Preview;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Menu_BasicButton;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Overlay_Preview;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Settings_BasicButton;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   SkipTutorial_BasicButton;                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Settings_Menu_C*                                 UI_Settings_Menu;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_357;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x02D8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UUI_MP_Notif_C*                                      W_Notif;                                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_Settings_Menu_C*                                 W_Settings;                                              // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUnpause;                                               // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_MP_Notif_C*                                      W_Notif_SkipTutorial;                                    // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableLeaverPenaltySystem;                               // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnFailure_D9C8593747F77C44853ACDB8F04BBFDC(TArray<struct FBPFriendInfo> Results);
		void OnSuccess_D9C8593747F77C44853ACDB8F04BBFDC(TArray<struct FBPFriendInfo> Results);
		void OnFailure_9D648BFD48E7654A92B92387A8A4E70B();
		void OnSuccess_9D648BFD48E7654A92B92387A8A4E70B();
		void QuitToMenu();
		void DontQuit();
		void BndEvt__UI_PauseMenu_Settings_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature();
		void BndEvt__UI_PauseMenu_Continue_BasicButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
		void BndEvt__UI_PauseMenu_LeaveGame_BasicButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature();
		void BndEvt__UI_PauseMenu_Menu_BasicButton_K2Node_ComponentBoundEvent_7_OnReleased__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__UI_PauseMenu_Back_MinimalistButton_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature();
		void ForceUnpause();
		void Construct();
		void BndEvt__UI_PauseMenu_UI_Settings_Menu_K2Node_ComponentBoundEvent_0_Back__DelegateSignature();
		void BndEvt__UI_PauseMenu_LeaveGame_BasicButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
		void SkipTutorial();
		void DontSkip();
		void ExecuteUbergraph_UI_PauseMenu(int32_t EntryPoint);
		void OnUnpause__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
