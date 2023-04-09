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
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPuzzleTypes
	 */
	struct ABP_PuzzlePillar_C_GetPuzzleTypes_Params
	{
	public:
		TArray<EPuzzleType>                                        Puzzles;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_Puzzles
	 */
	struct ABP_PuzzlePillar_C_OnRep_Puzzles_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.RandomizePuzzles
	 */
	struct ABP_PuzzlePillar_C_RandomizePuzzles_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_DoorMatSetter
	 */
	struct ABP_PuzzlePillar_C_OnRep_DoorMatSetter_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePuzzleData
	 */
	struct ABP_PuzzlePillar_C_UpdatePuzzleData_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_FinalPuzzleSolved
	 */
	struct ABP_PuzzlePillar_C_OnRep_FinalPuzzleSolved_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.LoadPillarFromSaveStruct
	 */
	struct ABP_PuzzlePillar_C_LoadPillarFromSaveStruct_Params
	{
	public:
		struct FFPillarSaveStruct                                  Save;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPillarSaveStruct
	 */
	struct ABP_PuzzlePillar_C_GetPillarSaveStruct_Params
	{
	public:
		struct FFPillarSaveStruct                                  State;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.Sabotage_Boobytrap
	 */
	struct ABP_PuzzlePillar_C_Sabotage_Boobytrap_Params
	{
	public:
		float                                                      unused;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesActive?
	 */
	struct ABP_PuzzlePillar_C_AllPuzzlesActive_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.AnyPuzzlesActive?
	 */
	struct ABP_PuzzlePillar_C_AnyPuzzlesActive_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.Num Puzzles Active
	 */
	struct ABP_PuzzlePillar_C_NumPuzzlesActive_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.NumPuzzlesSolved
	 */
	struct ABP_PuzzlePillar_C_NumPuzzlesSolved_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesSolved?
	 */
	struct ABP_PuzzlePillar_C_AllPuzzlesSolved_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.UserConstructionScript
	 */
	struct ABP_PuzzlePillar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__FinishedFunc
	 */
	struct ABP_PuzzlePillar_C_TL_PuzzleDoor__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__UpdateFunc
	 */
	struct ABP_PuzzlePillar_C_TL_PuzzleDoor__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__FinishedFunc
	 */
	struct ABP_PuzzlePillar_C_TL_ToyPart__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__UpdateFunc
	 */
	struct ABP_PuzzlePillar_C_TL_ToyPart__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckSolved
	 */
	struct ABP_PuzzlePillar_C_CheckSolved_Params
	{
	public:
		int32_t                                                    PuzzleIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.ReceiveBeginPlay
	 */
	struct ABP_PuzzlePillar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.SetHighlight
	 */
	struct ABP_PuzzlePillar_C_SetHighlight_Params
	{
	public:
		bool                                                       Highlight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePlayersIndicator
	 */
	struct ABP_PuzzlePillar_C_UpdatePlayersIndicator_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckForSabotaged
	 */
	struct ABP_PuzzlePillar_C_CheckForSabotaged_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnOpenDoor
	 */
	struct ABP_PuzzlePillar_C_OnOpenDoor_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.BindPuzzleEvents
	 */
	struct ABP_PuzzlePillar_C_BindPuzzleEvents_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.MulticastUpdateLights
	 */
	struct ABP_PuzzlePillar_C_MulticastUpdateLights_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.DestroyPuzzles
	 */
	struct ABP_PuzzlePillar_C_DestroyPuzzles_Params
	{	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.Multicast Set Final Puzzle
	 */
	struct ABP_PuzzlePillar_C_MulticastSetFinalPuzzle_Params
	{
	public:
		int32_t                                                    PuzzleIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PuzzlePillar.BP_PuzzlePillar_C.ExecuteUbergraph_BP_PuzzlePillar
	 */
	struct ABP_PuzzlePillar_C_ExecuteUbergraph_BP_PuzzlePillar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
