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
	 * Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.PreConstruct
	 */
	struct UUI_SabotageLevelDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.UpdateVisuals
	 */
	struct UUI_SabotageLevelDisplay_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetLevel
	 */
	struct UUI_SabotageLevelDisplay_C_SetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.SetSabotage
	 */
	struct UUI_SabotageLevelDisplay_C_SetSabotage_Params
	{
	public:
		class FName                                                Sabotage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageLevelDisplay.UI_SabotageLevelDisplay_C.ExecuteUbergraph_UI_SabotageLevelDisplay
	 */
	struct UUI_SabotageLevelDisplay_C_ExecuteUbergraph_UI_SabotageLevelDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
