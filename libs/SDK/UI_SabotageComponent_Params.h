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
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.PreConstruct
	 */
	struct UUI_SabotageComponent_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefill
	 */
	struct UUI_SabotageComponent_C_DoRefill_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.SetMappedPercent
	 */
	struct UUI_SabotageComponent_C_SetMappedPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.ResetFillColorAndOpacity
	 */
	struct UUI_SabotageComponent_C_ResetFillColorAndOpacity_Params
	{	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.SetFillColorAndOpacity
	 */
	struct UUI_SabotageComponent_C_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.SetAbilityFillColorAndOpacity
	 */
	struct UUI_SabotageComponent_C_SetAbilityFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.SetTextFillColorAndOpacity
	 */
	struct UUI_SabotageComponent_C_SetTextFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.DoRefillAbility
	 */
	struct UUI_SabotageComponent_C_DoRefillAbility_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.SetSabotageCooldown
	 */
	struct UUI_SabotageComponent_C_SetSabotageCooldown_Params
	{
	public:
		struct FSabotageDef                                        SabotageDef;                                             // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.DisableSabotageCooldown
	 */
	struct UUI_SabotageComponent_C_DisableSabotageCooldown_Params
	{	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.Tick
	 */
	struct UUI_SabotageComponent_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageComponent.UI_SabotageComponent_C.ExecuteUbergraph_UI_SabotageComponent
	 */
	struct UUI_SabotageComponent_C_ExecuteUbergraph_UI_SabotageComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5V4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
