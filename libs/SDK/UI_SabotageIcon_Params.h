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
	 * Function UI_SabotageIcon.UI_SabotageIcon_C.SetSabotageIcon
	 */
	struct UUI_SabotageIcon_C_SetSabotageIcon_Params
	{
	public:
		struct FSabotageDef                                        SabotageDef;                                             // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SabotageIcon.UI_SabotageIcon_C.ExecuteUbergraph_UI_SabotageIcon
	 */
	struct UUI_SabotageIcon_C_ExecuteUbergraph_UI_SabotageIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ZXN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
