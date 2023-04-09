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
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySabotageAbilityRechargeAnim
	 */
	struct UUI_AbilitiesComponent_C_PlaySabotageAbilityRechargeAnim_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.Init
	 */
	struct UUI_AbilitiesComponent_C_Init_Params
	{	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlaySecondAbilityRechargeAnim
	 */
	struct UUI_AbilitiesComponent_C_PlaySecondAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PlayFirstAbilityRechargeAnim
	 */
	struct UUI_AbilitiesComponent_C_PlayFirstAbilityRechargeAnim_Params
	{
	public:
		float                                                      Cooldown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.SetAbilityImageIcon
	 */
	struct UUI_AbilitiesComponent_C_SetAbilityImageIcon_Params
	{
	public:
		class UImage*                                              Imag;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.PreConstruct
	 */
	struct UUI_AbilitiesComponent_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AbilitiesComponent.UI_AbilitiesComponent_C.ExecuteUbergraph_UI_AbilitiesComponent
	 */
	struct UUI_AbilitiesComponent_C_ExecuteUbergraph_UI_AbilitiesComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
