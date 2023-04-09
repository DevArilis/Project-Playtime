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
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.RadialRecharge
	 */
	struct UUI_MonsterHUD_C_RadialRecharge_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.ResetRadialRecharge
	 */
	struct UUI_MonsterHUD_C_ResetRadialRecharge_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetCrosshairColor
	 */
	struct UUI_MonsterHUD_C_SetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetCrosshairToRed
	 */
	struct UUI_MonsterHUD_C_SetCrosshairToRed_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetCrosshairToWhite
	 */
	struct UUI_MonsterHUD_C_SetCrosshairToWhite_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.PlayHitmarker
	 */
	struct UUI_MonsterHUD_C_PlayHitmarker_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.PlayAttackAnimation
	 */
	struct UUI_MonsterHUD_C_PlayAttackAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetCrosshairProgress
	 */
	struct UUI_MonsterHUD_C_SetCrosshairProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.UpdateToyCount
	 */
	struct UUI_MonsterHUD_C_UpdateToyCount_Params
	{
	public:
		TArray<bool>                                               ToysFound;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.CheckDownPlayers
	 */
	struct UUI_MonsterHUD_C_CheckDownPlayers_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.PlayFirstAbilityRechargeAnim
	 */
	struct UUI_MonsterHUD_C_PlayFirstAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.PlaySecondAbilityRechargeAnim
	 */
	struct UUI_MonsterHUD_C_PlaySecondAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.PlaySabotageAbilityRechargeAnim
	 */
	struct UUI_MonsterHUD_C_PlaySabotageAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetSabotageIcon
	 */
	struct UUI_MonsterHUD_C_SetSabotageIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.SetNonEssentialHUDVisibility
	 */
	struct UUI_MonsterHUD_C_SetNonEssentialHUDVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.ShowEmotes
	 */
	struct UUI_MonsterHUD_C_ShowEmotes_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.BndEvt__UI_MonsterHUD_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature
	 */
	struct UUI_MonsterHUD_C_BndEvt__UI_MonsterHUD_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.Construct
	 */
	struct UUI_MonsterHUD_C_Construct_Params
	{	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.ExecuteUbergraph_UI_MonsterHUD
	 */
	struct UUI_MonsterHUD_C_ExecuteUbergraph_UI_MonsterHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MonsterHUD.UI_MonsterHUD_C.MonsterClickedEmote__DelegateSignature
	 */
	struct UUI_MonsterHUD_C_MonsterClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
