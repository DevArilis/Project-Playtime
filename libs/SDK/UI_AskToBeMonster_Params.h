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
	 * Function UI_AskToBeMonster.UI_AskToBeMonster_C.GetTimeRemaing
	 */
	struct UUI_AskToBeMonster_C_GetTimeRemaing_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_AskToBeMonster.UI_AskToBeMonster_C.Construct
	 */
	struct UUI_AskToBeMonster_C_Construct_Params
	{	};

	/**
	 * Function UI_AskToBeMonster.UI_AskToBeMonster_C.PreConstruct
	 */
	struct UUI_AskToBeMonster_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AskToBeMonster.UI_AskToBeMonster_C.Destruct
	 */
	struct UUI_AskToBeMonster_C_Destruct_Params
	{	};

	/**
	 * Function UI_AskToBeMonster.UI_AskToBeMonster_C.ExecuteUbergraph_UI_AskToBeMonster
	 */
	struct UUI_AskToBeMonster_C_ExecuteUbergraph_UI_AskToBeMonster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KIBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
