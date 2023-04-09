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
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_ReflexSoundReplicator
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::OnRep_ReflexSoundReplicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_ReflexSoundReplicator");
		
		ABP_Puzzle_Reflex_C_OnRep_ReflexSoundReplicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Check for Think Fast Finish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Reflex_C::CheckforThinkFastFinish(bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Check for Think Fast Finish");
		
		ABP_Puzzle_Reflex_C_CheckforThinkFastFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToSolved
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::ToSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToSolved");
		
		ABP_Puzzle_Reflex_C_ToSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_Progress_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::OnRep_Progress_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_Progress_Implementation");
		
		ABP_Puzzle_Reflex_C_OnRep_Progress_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DecrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::DecrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DecrementingToInProgress");
		
		ABP_Puzzle_Reflex_C_DecrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IncrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::IncrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IncrementingToInProgress");
		
		ABP_Puzzle_Reflex_C_IncrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.FailedPuzzle
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::FailedPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.FailedPuzzle");
		
		ABP_Puzzle_Reflex_C_FailedPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Reflex_C::DoIncrement(bool* ShouldComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoIncrement");
		
		ABP_Puzzle_Reflex_C_DoIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldComplete != nullptr)
			*ShouldComplete = params.ShouldComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_State_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::OnRep_State_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.OnRep_State_Implementation");
		
		ABP_Puzzle_Reflex_C_OnRep_State_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToIdle
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::ToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToIdle");
		
		ABP_Puzzle_Reflex_C_ToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IdleToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::IdleToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.IdleToInProgress");
		
		ABP_Puzzle_Reflex_C_IdleToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToggleTileHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TileIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::ToggleTileHighlight(bool Highlight, int32_t TileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ToggleTileHighlight");
		
		ABP_Puzzle_Reflex_C_ToggleTileHighlight_Params params {};
		params.Highlight = Highlight;
		params.TileIndex = TileIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoesSelectionCount?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ReturnIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::DoesSelectionCount(int32_t Index, bool* Value, int32_t* ReturnIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DoesSelectionCount?");
		
		ABP_Puzzle_Reflex_C_DoesSelectionCount_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (ReturnIndex != nullptr)
			*ReturnIndex = params.ReturnIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Reflex_C_BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ReceiveBeginPlay");
		
		ABP_Puzzle_Reflex_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.TimedOut
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::TimedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.TimedOut");
		
		ABP_Puzzle_Reflex_C_TimedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::Select(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Select");
		
		ABP_Puzzle_Reflex_C_Select_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DisplaySelection
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::DisplaySelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.DisplaySelection");
		
		ABP_Puzzle_Reflex_C_DisplaySelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ShowTileToBeSmacked
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::ShowTileToBeSmacked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ShowTileToBeSmacked");
		
		ABP_Puzzle_Reflex_C_ShowTileToBeSmacked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.GenerateRandomTile
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::GenerateRandomTile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.GenerateRandomTile");
		
		ABP_Puzzle_Reflex_C_GenerateRandomTile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.SetRandomTile
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::SetRandomTile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.SetRandomTile");
		
		ABP_Puzzle_Reflex_C_SetRandomTile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Timeout
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::Timeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Timeout");
		
		ABP_Puzzle_Reflex_C_Timeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ClearTiles
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::ClearTiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ClearTiles");
		
		ABP_Puzzle_Reflex_C_ClearTiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Event UpdateSelection
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::EventUpdateSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Event UpdateSelection");
		
		ABP_Puzzle_Reflex_C_EventUpdateSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Correct                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Reflex_C::PlaySound(bool Correct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlaySound");
		
		ABP_Puzzle_Reflex_C_PlaySound_Params params {};
		params.Correct = Correct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlayTickingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Reflex_C::PlayTickingSound(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.PlayTickingSound");
		
		ABP_Puzzle_Reflex_C_PlayTickingSound_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Solved_ButtonGlow
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Reflex_C::Solved_ButtonGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.Solved_ButtonGlow");
		
		ABP_Puzzle_Reflex_C_Solved_ButtonGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ExecuteUbergraph_BP_Puzzle_Reflex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Reflex_C::ExecuteUbergraph_BP_Puzzle_Reflex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Reflex.BP_Puzzle_Reflex_C.ExecuteUbergraph_BP_Puzzle_Reflex");
		
		ABP_Puzzle_Reflex_C_ExecuteUbergraph_BP_Puzzle_Reflex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Puzzle_Reflex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Puzzle_Reflex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Puzzle_Reflex.BP_Puzzle_Reflex_C");
		return ptr;
	}

}


