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
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.IsLocal
	 */
	struct UAC_PuzzleHighlight_C_IsLocal_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JGQ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.SetForceHighlightOff
	 */
	struct UAC_PuzzleHighlight_C_SetForceHighlightOff_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ReceiveBeginPlay
	 */
	struct UAC_PuzzleHighlight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.TogglePuzzleHighlight
	 */
	struct UAC_PuzzleHighlight_C_TogglePuzzleHighlight_Params
	{	};

	/**
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ExecuteUbergraph_AC_PuzzleHighlight
	 */
	struct UAC_PuzzleHighlight_C_ExecuteUbergraph_AC_PuzzleHighlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.OnPuzzleHighlightsOff__DelegateSignature
	 */
	struct UAC_PuzzleHighlight_C_OnPuzzleHighlightsOff__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
