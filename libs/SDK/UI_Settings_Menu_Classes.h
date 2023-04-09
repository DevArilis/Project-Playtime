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
	 * WidgetBlueprintGeneratedClass UI_Settings_Menu.UI_Settings_Menu_C
	 * Size -> 0x0230 (FullSize[0x0490] - InheritedSize[0x0260])
	 */
	class UUI_Settings_Menu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             ABorder;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Setting_C*                                       ActionsLabel;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               AntiAliasing;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_WhiteBGButton_C*                                 Apply;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Audio;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   AudioButton;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       backward;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               Bobbing;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CBorder;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ColorblindMode;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Controls;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   ControlsButton;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Crouch;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Emote;                                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Forward;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              FOV;                                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             GABorder;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Gameplay;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   GameplayButton;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FloatSliderSetting_C*                            Gamma;                                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             GBorder;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          GPUDisplay;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Graphics;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BasicButton_C*                                   GraphicsButton;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_124;                                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_177;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Interact;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              IntGrabpackVolume;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              IntMainVolume;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              IntMusicVolume;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              IntSFXVolume;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Jump;                                                    // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               Language;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Left;                                                    // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               MinimalHUD;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               PlayerStatusPerks;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               PostProcessQuality;                                      // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ReflectionQuality;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_WhiteBGButton_C*                                 RESETTODEFAULTS;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               Resolution;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              ResolutionScale;                                         // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Right;                                                   // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Roll;                                                    // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Sabotage;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ScreenMode;                                              // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FloatSliderSetting_C*                            Sensitivity;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FloatSliderSetting_C*                            Severity;                                                // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ShaderQuality;                                           // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ShadowQuality;                                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ShouldLimitFPS;                                          // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               SkipCinematic;                                           // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyBind_C*                                       Sprint;                                                  // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               Subtitles;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_IntSliderSetting_C*                              TargetFPS;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               TextChat;                                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               TextureQuality;                                          // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BackButton_C*                                    UI_BackButton;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_WhiteBGButton_C*                                 UI_WhiteBGButton;                                        // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               VFXQuality;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               ViewDistanceQuality;                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollerSetting_C*                               VSYNC;                                                   // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    CurrentTab;                                              // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_54PX[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Back;                                                    // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USettingsSaveGame*                                   SettingsSaveGame;                                        // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FIntPoint>                                   AvailableResolutions;                                    // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void MinimalHUD_OnValueChanged(const class FString& Selection);
		void PreConstruct(bool IsDesignTime);
		void UpdateVisuals();
		void SetCurrentTab(int32_t CurrentTab);
		void LoadSettings();
		void BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_AntiAliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature(float Value);
		void BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature(float Value);
		void BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature();
		void BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void CloseMenu();
		void ForceCloseMenu();
		void BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature();
		void BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(int32_t Value);
		void ApplyFOVCorrectly();
		void BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void SaveSettingsOnDelay();
		void Construct();
		void BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature(int32_t Value);
		void BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		void ExecuteUbergraph_UI_Settings_Menu(int32_t EntryPoint);
		void Back__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
