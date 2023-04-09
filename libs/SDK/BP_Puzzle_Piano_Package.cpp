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
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_PianoSoundReplicator
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::OnRep_PianoSoundReplicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_PianoSoundReplicator");
		
		ABP_Puzzle_Piano_C_OnRep_PianoSoundReplicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ToSolved
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::ToSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ToSolved");
		
		ABP_Puzzle_Piano_C_ToSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.FailedPuzzle
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::FailedPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.FailedPuzzle");
		
		ABP_Puzzle_Piano_C_FailedPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DecrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::DecrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DecrementingToInProgress");
		
		ABP_Puzzle_Piano_C_DecrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_State_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::OnRep_State_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.OnRep_State_Implementation");
		
		ABP_Puzzle_Piano_C_OnRep_State_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.IdleToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::IdleToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.IdleToInProgress");
		
		ABP_Puzzle_Piano_C_IdleToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::DoIncrement(bool* ShouldComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoIncrement");
		
		ABP_Puzzle_Piano_C_DoIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldComplete != nullptr)
			*ShouldComplete = params.ShouldComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.CheckForMasterPianist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StreakMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentStreak                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::CheckForMasterPianist(int32_t StreakMax, int32_t CurrentStreak, bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.CheckForMasterPianist");
		
		ABP_Puzzle_Piano_C_CheckForMasterPianist_Params params {};
		params.StreakMax = StreakMax;
		params.CurrentStreak = CurrentStreak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            KeyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCorrect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::Sound(int32_t KeyIndex, bool IsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Sound");
		
		ABP_Puzzle_Piano_C_Sound_Params params {};
		params.KeyIndex = KeyIndex;
		params.IsCorrect = IsCorrect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoesKeyCount?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::DoesKeyCount(int32_t Key, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.DoesKeyCount?");
		
		ABP_Puzzle_Piano_C_DoesKeyCount_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ClearKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ClearCurrentKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::ClearKeys(bool ClearCurrentKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ClearKeys");
		
		ABP_Puzzle_Piano_C_ClearKeys_Params params {};
		params.ClearCurrentKey = ClearCurrentKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::TL_Piano__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__FinishedFunc");
		
		ABP_Puzzle_Piano_C_TL_Piano__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::TL_Piano__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__UpdateFunc");
		
		ABP_Puzzle_Piano_C_TL_Piano__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Clear__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::TL_Piano__Clear__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Clear__EventFunc");
		
		ABP_Puzzle_Piano_C_TL_Piano__Clear__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Display__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::TL_Piano__Display__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.TL_Piano__Display__EventFunc");
		
		ABP_Puzzle_Piano_C_TL_Piano__Display__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_Puzzle_Piano_C_BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ReceiveBeginPlay");
		
		ABP_Puzzle_Piano_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Sequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::R_Sequence(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Sequence");
		
		ABP_Puzzle_Piano_C_R_Sequence_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            KeyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::R_Select(int32_t KeyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.R_Select");
		
		ABP_Puzzle_Piano_C_R_Select_Params params {};
		params.KeyIndex = KeyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.PlayKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            KeyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Cancel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCorrect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::PlayKey(int32_t KeyIndex, bool Cancel, bool IsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.PlayKey");
		
		ABP_Puzzle_Piano_C_PlayKey_Params params {};
		params.KeyIndex = KeyIndex;
		params.Cancel = Cancel;
		params.IsCorrect = IsCorrect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_DisplaySequence
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::Multicast_DisplaySequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_DisplaySequence");
		
		ABP_Puzzle_Piano_C_Multicast_DisplaySequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_PlayKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            KeyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCorrect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Piano_C::Multicast_PlayKey(int32_t KeyIndex, bool IsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Multicast_PlayKey");
		
		ABP_Puzzle_Piano_C_Multicast_PlayKey_Params params {};
		params.KeyIndex = KeyIndex;
		params.IsCorrect = IsCorrect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Solved_ButtonGlow
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Piano_C::Solved_ButtonGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.Solved_ButtonGlow");
		
		ABP_Puzzle_Piano_C_Solved_ButtonGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ExecuteUbergraph_BP_Puzzle_Piano
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Piano_C::ExecuteUbergraph_BP_Puzzle_Piano(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Piano.BP_Puzzle_Piano_C.ExecuteUbergraph_BP_Puzzle_Piano");
		
		ABP_Puzzle_Piano_C_ExecuteUbergraph_BP_Puzzle_Piano_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Puzzle_Piano_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Puzzle_Piano_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Puzzle_Piano.BP_Puzzle_Piano_C");
		return ptr;
	}

}


