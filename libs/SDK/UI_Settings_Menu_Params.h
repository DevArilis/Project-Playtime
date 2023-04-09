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
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.MinimalHUD_OnValueChanged
	 */
	struct UUI_Settings_Menu_C_MinimalHUD_OnValueChanged_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.PreConstruct
	 */
	struct UUI_Settings_Menu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.UpdateVisuals
	 */
	struct UUI_Settings_Menu_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.Set Current Tab
	 */
	struct UUI_Settings_Menu_C_SetCurrentTab_Params
	{
	public:
		int32_t                                                    CurrentTab;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.LoadSettings
	 */
	struct UUI_Settings_Menu_C_LoadSettings_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6844[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Anti-Aliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_AntiAliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMY6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X3W9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MXBC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G5SZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LL6D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IDTF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_MinimalHUD_K2Node_ComponentBoundEvent_17_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PBT9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOH4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SM6R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZAF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W9MD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.CloseMenu
	 */
	struct UUI_Settings_Menu_C_CloseMenu_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.ForceCloseMenu
	 */
	struct UUI_Settings_Menu_C_ForceCloseMenu_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UEO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XO6S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1CDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.ApplyFOVCorrectly
	 */
	struct UUI_Settings_Menu_C_ApplyFOVCorrectly_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89ZP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6F9E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.SaveSettingsOnDelay
	 */
	struct UUI_Settings_Menu_C_SaveSettingsOnDelay_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.Construct
	 */
	struct UUI_Settings_Menu_C_Construct_Params
	{	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4MH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F2JG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.ExecuteUbergraph_UI_Settings_Menu
	 */
	struct UUI_Settings_Menu_C_ExecuteUbergraph_UI_Settings_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CBOA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Settings_Menu.UI_Settings_Menu_C.Back__DelegateSignature
	 */
	struct UUI_Settings_Menu_C_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
