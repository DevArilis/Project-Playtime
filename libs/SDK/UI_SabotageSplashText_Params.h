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
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.SequenceEvent__ENTRYPOINTUI_SabotageSplashText_1
	 */
	struct UUI_SabotageSplashText_C_SequenceEvent__ENTRYPOINTUI_SabotageSplashText_1_Params
	{	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.AnimationFinished
	 */
	struct UUI_SabotageSplashText_C_AnimationFinished_Params
	{	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.BeginLifecycle
	 */
	struct UUI_SabotageSplashText_C_BeginLifecycle_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.PseudoConstruct
	 */
	struct UUI_SabotageSplashText_C_PseudoConstruct_Params
	{
	public:
		struct FSabotageDef                                        SabotageDef;                                             // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    SabotageLevel;                                           // 0x00C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.TriggerIconHandoff
	 */
	struct UUI_SabotageSplashText_C_TriggerIconHandoff_Params
	{	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.WithdrawFinished
	 */
	struct UUI_SabotageSplashText_C_WithdrawFinished_Params
	{	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.ExecuteUbergraph_UI_SabotageSplashText
	 */
	struct UUI_SabotageSplashText_C_ExecuteUbergraph_UI_SabotageSplashText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26H1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SabotageSplashText.UI_SabotageSplashText_C.IconHandoff__DelegateSignature
	 */
	struct UUI_SabotageSplashText_C_IconHandoff__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
