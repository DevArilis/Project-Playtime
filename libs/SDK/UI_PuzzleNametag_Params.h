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
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.Start Next Phase
	 */
	struct UUI_PuzzleNametag_C_StartNextPhase_Params
	{
	public:
		int32_t                                                    NewPhase;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.AnimFadeOut
	 */
	struct UUI_PuzzleNametag_C_AnimFadeOut_Params
	{	};

	/**
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.Set Distance
	 */
	struct UUI_PuzzleNametag_C_SetDistance_Params
	{
	public:
		float                                                      InFloat;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.Solve
	 */
	struct UUI_PuzzleNametag_C_Solve_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.Construct
	 */
	struct UUI_PuzzleNametag_C_Construct_Params
	{	};

	/**
	 * Function UI_PuzzleNametag.UI_PuzzleNametag_C.ExecuteUbergraph_UI_PuzzleNametag
	 */
	struct UUI_PuzzleNametag_C_ExecuteUbergraph_UI_PuzzleNametag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
