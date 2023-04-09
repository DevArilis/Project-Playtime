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
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityCooldown
	 */
	struct UUI_PlayerAbility_C_AbilityCooldown_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.SetMappedPercent
	 */
	struct UUI_PlayerAbility_C_SetMappedPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.ResetFillColorAndOpacity
	 */
	struct UUI_PlayerAbility_C_ResetFillColorAndOpacity_Params
	{	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.SetFillColorAndOpacity
	 */
	struct UUI_PlayerAbility_C_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.SetAbilityFillColorAndOpacity
	 */
	struct UUI_PlayerAbility_C_SetAbilityFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.SetTextFillColorAndOpacity
	 */
	struct UUI_PlayerAbility_C_SetTextFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.AbilityRecharged
	 */
	struct UUI_PlayerAbility_C_AbilityRecharged_Params
	{	};

	/**
	 * Function UI_PlayerAbility.UI_PlayerAbility_C.ExecuteUbergraph_UI_PlayerAbility
	 */
	struct UUI_PlayerAbility_C_ExecuteUbergraph_UI_PlayerAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3YRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
