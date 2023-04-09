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
	 * Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.EndGame
	 */
	struct AGS_Escape_Tutorial_C_EndGame_Params
	{	};

	/**
	 * Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.OnEndGame
	 */
	struct AGS_Escape_Tutorial_C_OnEndGame_Params
	{
	public:
		class FText                                                HeadingText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                SubheadingText;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       GivePoints;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_PlayerType                                               PlayerType;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.CheckEndConditions
	 */
	struct AGS_Escape_Tutorial_C_CheckEndConditions_Params
	{	};

	/**
	 * Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.ExecuteUbergraph_GS_Escape_Tutorial
	 */
	struct AGS_Escape_Tutorial_C_ExecuteUbergraph_GS_Escape_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMHA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
