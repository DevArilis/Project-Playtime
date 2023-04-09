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
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_MemorySoundReplicator
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::OnRep_MemorySoundReplicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_MemorySoundReplicator");
		
		ABP_Puzzle_Memory_C_OnRep_MemorySoundReplicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_IsGeneratingPattern
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::OnRep_IsGeneratingPattern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_IsGeneratingPattern");
		
		ABP_Puzzle_Memory_C_OnRep_IsGeneratingPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_I_PlayerPattern
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::OnRep_I_PlayerPattern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_I_PlayerPattern");
		
		ABP_Puzzle_Memory_C_OnRep_I_PlayerPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToSolved
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::ToSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToSolved");
		
		ABP_Puzzle_Memory_C_ToSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateRandomPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    GeneratedPattern                                           (Parm, OutParm)
	 */
	void ABP_Puzzle_Memory_C::GenerateRandomPattern(TArray<int32_t>* GeneratedPattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateRandomPattern");
		
		ABP_Puzzle_Memory_C_GenerateRandomPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneratedPattern != nullptr)
			*GeneratedPattern = params.GeneratedPattern;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.AllButtonHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterial*                                   Mat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Memory_C::AllButtonHighlight(class UMaterial* Mat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.AllButtonHighlight");
		
		ABP_Puzzle_Memory_C_AllButtonHighlight_Params params {};
		params.Mat = Mat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ButtonHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    ButtonsToHighlight                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMaterialInstance*                           Mat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Memory_C::ButtonHighlight(TArray<int32_t>* ButtonsToHighlight, class UMaterialInstance* Mat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ButtonHighlight");
		
		ABP_Puzzle_Memory_C_ButtonHighlight_Params params {};
		params.Mat = Mat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonsToHighlight != nullptr)
			*ButtonsToHighlight = params.ButtonsToHighlight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_State_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::OnRep_State_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.OnRep_State_Implementation");
		
		ABP_Puzzle_Memory_C_OnRep_State_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToIdle
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::ToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ToIdle");
		
		ABP_Puzzle_Memory_C_ToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IncrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::IncrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IncrementingToInProgress");
		
		ABP_Puzzle_Memory_C_IncrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DecrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::DecrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DecrementingToInProgress");
		
		ABP_Puzzle_Memory_C_DecrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IdleToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::IdleToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.IdleToInProgress");
		
		ABP_Puzzle_Memory_C_IdleToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DoIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Memory_C::DoIncrement(bool* ShouldComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.DoIncrement");
		
		ABP_Puzzle_Memory_C_DoIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldComplete != nullptr)
			*ShouldComplete = params.ShouldComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Memory_C::Select(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Select");
		
		ABP_Puzzle_Memory_C_Select_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.UserConstructionScript");
		
		ABP_Puzzle_Memory_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::NewPatternTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FinishedFunc");
		
		ABP_Puzzle_Memory_C_NewPatternTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::NewPatternTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__UpdateFunc");
		
		ABP_Puzzle_Memory_C_NewPatternTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__CyclePattern__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::NewPatternTimeline__CyclePattern__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__CyclePattern__EventFunc");
		
		ABP_Puzzle_Memory_C_NewPatternTimeline__CyclePattern__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOff__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::NewPatternTimeline__FlashOff__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOff__EventFunc");
		
		ABP_Puzzle_Memory_C_NewPatternTimeline__FlashOff__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOn__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::NewPatternTimeline__FlashOn__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.NewPatternTimeline__FlashOn__EventFunc");
		
		ABP_Puzzle_Memory_C_NewPatternTimeline__FlashOn__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::FailureTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__FinishedFunc");
		
		ABP_Puzzle_Memory_C_FailureTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::FailureTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__UpdateFunc");
		
		ABP_Puzzle_Memory_C_FailureTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__Off__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::FailureTimeline__Off__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__Off__EventFunc");
		
		ABP_Puzzle_Memory_C_FailureTimeline__Off__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__On__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::FailureTimeline__On__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.FailureTimeline__On__EventFunc");
		
		ABP_Puzzle_Memory_C_FailureTimeline__On__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::SuccessTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__FinishedFunc");
		
		ABP_Puzzle_Memory_C_SuccessTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::SuccessTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__UpdateFunc");
		
		ABP_Puzzle_Memory_C_SuccessTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__Off__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::SuccessTimeline__Off__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__Off__EventFunc");
		
		ABP_Puzzle_Memory_C_SuccessTimeline__Off__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__On__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::SuccessTimeline__On__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.SuccessTimeline__On__EventFunc");
		
		ABP_Puzzle_Memory_C_SuccessTimeline__On__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayRandomizingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Memory_C::PlayRandomizingSound(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayRandomizingSound");
		
		ABP_Puzzle_Memory_C_PlayRandomizingSound_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayButtonSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Correct                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Puzzle_Memory_C::PlayButtonSound(bool Correct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlayButtonSound");
		
		ABP_Puzzle_Memory_C_PlayButtonSound_Params params {};
		params.Correct = Correct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ShowPlayerPattern
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::ShowPlayerPattern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ShowPlayerPattern");
		
		ABP_Puzzle_Memory_C_ShowPlayerPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ReceiveBeginPlay");
		
		ABP_Puzzle_Memory_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_ClearButtons
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::Multicast_ClearButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_ClearButtons");
		
		ABP_Puzzle_Memory_C_Multicast_ClearButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateNewPatternAndShowIt
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::GenerateNewPatternAndShowIt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.GenerateNewPatternAndShowIt");
		
		ABP_Puzzle_Memory_C_GenerateNewPatternAndShowIt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StartNewPatternTimeline
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::Multicast_StartNewPatternTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StartNewPatternTimeline");
		
		ABP_Puzzle_Memory_C_Multicast_StartNewPatternTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StopNewPatternTimeline
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::Multicast_StopNewPatternTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Multicast_StopNewPatternTimeline");
		
		ABP_Puzzle_Memory_C_Multicast_StopNewPatternTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Solved_ButtonGlow
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::Solved_ButtonGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.Solved_ButtonGlow");
		
		ABP_Puzzle_Memory_C_Solved_ButtonGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlaySuccessAnimation
	 * 		Flags  -> ()
	 */
	void ABP_Puzzle_Memory_C::PlaySuccessAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.PlaySuccessAnimation");
		
		ABP_Puzzle_Memory_C_PlaySuccessAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ExecuteUbergraph_BP_Puzzle_Memory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Puzzle_Memory_C::ExecuteUbergraph_BP_Puzzle_Memory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Puzzle_Memory.BP_Puzzle_Memory_C.ExecuteUbergraph_BP_Puzzle_Memory");
		
		ABP_Puzzle_Memory_C_ExecuteUbergraph_BP_Puzzle_Memory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Puzzle_Memory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Puzzle_Memory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Puzzle_Memory.BP_Puzzle_Memory_C");
		return ptr;
	}

}


