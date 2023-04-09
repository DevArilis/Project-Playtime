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
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ShowEmotes
	 */
	struct UUI_MonsterHUDInterface_C_ShowEmotes_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetSabotageIcon
	 */
	struct UUI_MonsterHUDInterface_C_SetSabotageIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySabotageAbilityRechargeAnim
	 */
	struct UUI_MonsterHUDInterface_C_PlaySabotageAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.ResetRadialRecharge
	 */
	struct UUI_MonsterHUDInterface_C_ResetRadialRecharge_Params
	{	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.RadialRecharge
	 */
	struct UUI_MonsterHUDInterface_C_RadialRecharge_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.CheckDownPlayers
	 */
	struct UUI_MonsterHUDInterface_C_CheckDownPlayers_Params
	{	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlaySecondAbilityRechargeAnim
	 */
	struct UUI_MonsterHUDInterface_C_PlaySecondAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayFirstAbilityRechargeAnim
	 */
	struct UUI_MonsterHUDInterface_C_PlayFirstAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.UpdateToyCount
	 */
	struct UUI_MonsterHUDInterface_C_UpdateToyCount_Params
	{
	public:
		TArray<bool>                                               ToysFound;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairProgress
	 */
	struct UUI_MonsterHUDInterface_C_SetCrosshairProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayAttackAnimation
	 */
	struct UUI_MonsterHUDInterface_C_PlayAttackAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.PlayHitmarker
	 */
	struct UUI_MonsterHUDInterface_C_PlayHitmarker_Params
	{	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToWhite
	 */
	struct UUI_MonsterHUDInterface_C_SetCrosshairToWhite_Params
	{	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairToRed
	 */
	struct UUI_MonsterHUDInterface_C_SetCrosshairToRed_Params
	{	};

	/**
	 * Function UI_MonsterHUDInterface.UI_MonsterHUDInterface_C.SetCrosshairColor
	 */
	struct UUI_MonsterHUDInterface_C_SetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
