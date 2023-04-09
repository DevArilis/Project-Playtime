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
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToRed
	 */
	struct UUI_BoxyHUD_C_SetCrosshairToRed_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairToWhite
	 */
	struct UUI_BoxyHUD_C_SetCrosshairToWhite_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PlayHitmarker
	 */
	struct UUI_BoxyHUD_C_PlayHitmarker_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PlayAttackAnimation
	 */
	struct UUI_BoxyHUD_C_PlayAttackAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairProgress
	 */
	struct UUI_BoxyHUD_C_SetCrosshairProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.UpdateToyCount
	 */
	struct UUI_BoxyHUD_C_UpdateToyCount_Params
	{
	public:
		TArray<bool>                                               ToysFound;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PlayFirstAbilityRechargeAnim
	 */
	struct UUI_BoxyHUD_C_PlayFirstAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySecondAbilityRechargeAnim
	 */
	struct UUI_BoxyHUD_C_PlaySecondAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.CheckDownPlayers
	 */
	struct UUI_BoxyHUD_C_CheckDownPlayers_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.RadialRecharge
	 */
	struct UUI_BoxyHUD_C_RadialRecharge_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.ResetRadialRecharge
	 */
	struct UUI_BoxyHUD_C_ResetRadialRecharge_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PlaySabotageAbilityRechargeAnim
	 */
	struct UUI_BoxyHUD_C_PlaySabotageAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetSabotageIcon
	 */
	struct UUI_BoxyHUD_C_SetSabotageIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.ShowEmotes
	 */
	struct UUI_BoxyHUD_C_ShowEmotes_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.PreConstruct
	 */
	struct UUI_BoxyHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.Construct
	 */
	struct UUI_BoxyHUD_C_Construct_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetCrosshairColor
	 */
	struct UUI_BoxyHUD_C_SetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeAmount
	 */
	struct UUI_BoxyHUD_C_SetChargeAmount_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.SetChargeColor
	 */
	struct UUI_BoxyHUD_C_SetChargeColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.ResetChargeColor
	 */
	struct UUI_BoxyHUD_C_ResetChargeColor_Params
	{	};

	/**
	 * Function UI_BoxyHUD.UI_BoxyHUD_C.ExecuteUbergraph_UI_BoxyHUD
	 */
	struct UUI_BoxyHUD_C_ExecuteUbergraph_UI_BoxyHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
