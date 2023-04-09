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
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_Progress_Implementation
	 */
	struct ABP_Puzzle_Maze_C_OnRep_Progress_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_State_Implementation
	 */
	struct ABP_Puzzle_Maze_C_OnRep_State_Implementation_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToSolved
	 */
	struct ABP_Puzzle_Maze_C_ToSolved_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToIdle
	 */
	struct ABP_Puzzle_Maze_C_ToIdle_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.DoIncrement
	 */
	struct ABP_Puzzle_Maze_C_DoIncrement_Params
	{
	public:
		bool                                                       ShouldComplete;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.IdleToInProgress
	 */
	struct ABP_Puzzle_Maze_C_IdleToInProgress_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__FinishedFunc
	 */
	struct ABP_Puzzle_Maze_C_MoveThroughTransition__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__UpdateFunc
	 */
	struct ABP_Puzzle_Maze_C_MoveThroughTransition__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__FinishedFunc
	 */
	struct ABP_Puzzle_Maze_C_MoveToEnd__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__UpdateFunc
	 */
	struct ABP_Puzzle_Maze_C_MoveToEnd__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__FinishedFunc
	 */
	struct ABP_Puzzle_Maze_C_FlashLights__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__UpdateFunc
	 */
	struct ABP_Puzzle_Maze_C_FlashLights__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__Off__EventFunc
	 */
	struct ABP_Puzzle_Maze_C_FlashLights__Off__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__On__EventFunc
	 */
	struct ABP_Puzzle_Maze_C_FlashLights__On__EventFunc_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveBeginPlay
	 */
	struct ABP_Puzzle_Maze_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveTick
	 */
	struct ABP_Puzzle_Maze_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Event Increment Progress
	 */
	struct ABP_Puzzle_Maze_C_EventIncrementProgress_Params
	{
	public:
		float                                                      BallExitSpeed;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.SetBallPosition
	 */
	struct ABP_Puzzle_Maze_C_SetBallPosition_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature_Params
	{
	public:
		struct FVector                                             BallPosition;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature_Params
	{
	public:
		struct FVector                                             BallPosition;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature
	 */
	struct ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ExecuteUbergraph_BP_Puzzle_Maze
	 */
	struct ABP_Puzzle_Maze_C_ExecuteUbergraph_BP_Puzzle_Maze_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
