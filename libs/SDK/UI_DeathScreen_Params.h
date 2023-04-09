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
	 * Function UI_DeathScreen.UI_DeathScreen_C.SetScaryText
	 */
	struct UUI_DeathScreen_C_SetScaryText_Params
	{
	public:
		class FString                                              SuffixText;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Direct;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.StartSelfReviveTimer
	 */
	struct UUI_DeathScreen_C_StartSelfReviveTimer_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.EndSelfReviveTimer
	 */
	struct UUI_DeathScreen_C_EndSelfReviveTimer_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.CancelSelfReviveTimer
	 */
	struct UUI_DeathScreen_C_CancelSelfReviveTimer_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.SetSelfReviveProgress
	 */
	struct UUI_DeathScreen_C_SetSelfReviveProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeLeft;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.StartCarried
	 */
	struct UUI_DeathScreen_C_StartCarried_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.StartHooked
	 */
	struct UUI_DeathScreen_C_StartHooked_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.Construct
	 */
	struct UUI_DeathScreen_C_Construct_Params
	{	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.KilledEvent
	 */
	struct UUI_DeathScreen_C_KilledEvent_Params
	{
	public:
		class FString                                              SpectatedPlayer;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.ChangeSpectatedPlayerEvent
	 */
	struct UUI_DeathScreen_C_ChangeSpectatedPlayerEvent_Params
	{
	public:
		class FString                                              SpectatedPlayer;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen
	 */
	struct UUI_DeathScreen_C_ExecuteUbergraph_UI_DeathScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCKT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
