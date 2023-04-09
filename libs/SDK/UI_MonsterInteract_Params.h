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
	 * Function UI_MonsterInteract.UI_MonsterInteract_C.Construct
	 */
	struct UUI_MonsterInteract_C_Construct_Params
	{	};

	/**
	 * Function UI_MonsterInteract.UI_MonsterInteract_C.Destroy
	 */
	struct UUI_MonsterInteract_C_Destroy_Params
	{	};

	/**
	 * Function UI_MonsterInteract.UI_MonsterInteract_C.ExecuteUbergraph_UI_MonsterInteract
	 */
	struct UUI_MonsterInteract_C_ExecuteUbergraph_UI_MonsterInteract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I7WO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
