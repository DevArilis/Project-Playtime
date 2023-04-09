/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_Progress_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::OnRep_Progress_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_Progress_Implementation");
		
		ABP_Puzzle_Maze_C_OnRep_Progress_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_State_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::OnRep_State_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.OnRep_State_Implementation");
		
		ABP_Puzzle_Maze_C_OnRep_State_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToSolved
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::ToSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToSolved");
		
		ABP_Puzzle_Maze_C_ToSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToIdle
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::ToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ToIdle");
		
		ABP_Puzzle_Maze_C_ToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.DoIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Maze_C::DoIncrement(bool* ShouldComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.DoIncrement");
		
		ABP_Puzzle_Maze_C_DoIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldComplete != nullptr)
			*ShouldComplete = params.ShouldComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.IdleToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::IdleToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.IdleToInProgress");
		
		ABP_Puzzle_Maze_C_IdleToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::MoveThroughTransition__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__FinishedFunc");
		
		ABP_Puzzle_Maze_C_MoveThroughTransition__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::MoveThroughTransition__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveThroughTransition__UpdateFunc");
		
		ABP_Puzzle_Maze_C_MoveThroughTransition__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::MoveToEnd__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__FinishedFunc");
		
		ABP_Puzzle_Maze_C_MoveToEnd__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::MoveToEnd__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.MoveToEnd__UpdateFunc");
		
		ABP_Puzzle_Maze_C_MoveToEnd__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::FlashLights__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__FinishedFunc");
		
		ABP_Puzzle_Maze_C_FlashLights__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::FlashLights__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__UpdateFunc");
		
		ABP_Puzzle_Maze_C_FlashLights__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__Off__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::FlashLights__Off__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__Off__EventFunc");
		
		ABP_Puzzle_Maze_C_FlashLights__Off__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__On__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::FlashLights__On__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Flash Lights__On__EventFunc");
		
		ABP_Puzzle_Maze_C_FlashLights__On__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Maze_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveBeginPlay");
		
		ABP_Puzzle_Maze_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ReceiveTick");
		
		ABP_Puzzle_Maze_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Event Increment Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BallExitSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::EventIncrementProgress(float BallExitSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.Event Increment Progress");
		
		ABP_Puzzle_Maze_C_EventIncrementProgress_Params params {};
		params.BallExitSpeed = BallExitSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.SetBallPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::SetBallPosition(const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.SetBallPosition");
		
		ABP_Puzzle_Maze_C_SetBallPosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BallPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature(const struct FVector& BallPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature_Params params {};
		params.BallPosition = BallPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BallPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature(const struct FVector& BallPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature_Params params {};
		params.BallPosition = BallPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature(float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature_Params params {};
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature(float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature");
		
		ABP_Puzzle_Maze_C_BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature_Params params {};
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ExecuteUbergraph_BP_Puzzle_Maze
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Maze_C::ExecuteUbergraph_BP_Puzzle_Maze(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Maze.BP_Puzzle_Maze_C.ExecuteUbergraph_BP_Puzzle_Maze");
		
		ABP_Puzzle_Maze_C_ExecuteUbergraph_BP_Puzzle_Maze_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Puzzle_Maze_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Puzzle_Maze_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Puzzle_Maze.BP_Puzzle_Maze_C");
		return ptr;
	}

}


