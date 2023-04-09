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
	 * WidgetBlueprintGeneratedClass UI_Play.UI_Play_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class UUI_Play_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowSwitcher;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   Back;                                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlayCard_C*                                      Host;                                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlayCard_C*                                      Quickplay;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlayCard_C*                                      ServerList;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TR;                                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FindingGame_C*                                   UI_FindingGame;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MP_ServerBrowser_C*                              UI_MP_ServerBrowser;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MP_StartServer_C*                                UI_MP_StartServer;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_135;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             HostReleased;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ListReleased;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             QuickplayReleased;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GoBack;                                                  // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		int32_t GetMinutesTimespan(const struct FTimespan& InTimespan);
		void OnFailure_0A33D4554B1C14C6362812B574431F02();
		void OnSuccess_0A33D4554B1C14C6362812B574431F02();
		void BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
		void Construct();
		void BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature();
		void BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature();
		void BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature();
		void BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature();
		void BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature();
		void BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature();
		void BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
		void BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
		void ExecuteUbergraph_UI_Play(int32_t EntryPoint);
		void GoBack__DelegateSignature();
		void QuickplayReleased__DelegateSignature();
		void ListReleased__DelegateSignature();
		void HostReleased__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
