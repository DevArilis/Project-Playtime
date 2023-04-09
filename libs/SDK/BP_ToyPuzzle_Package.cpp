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
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleSoundReplicator
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_PuzzleSoundReplicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleSoundReplicator");
		
		ABP_ToyPuzzle_C_OnRep_PuzzleSoundReplicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleType
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_PuzzleType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_PuzzleType");
		
		ABP_ToyPuzzle_C_OnRep_PuzzleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPuzzleType                                        PuzzleType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::GetPuzzleType(EPuzzleType* PuzzleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzleType");
		
		ABP_ToyPuzzle_C_GetPuzzleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PuzzleType != nullptr)
			*PuzzleType = params.PuzzleType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoesTouchCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHandMagnetComponent*                        Magnet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Counts                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::DoesTouchCount(class UHandMagnetComponent* Magnet, bool* Counts, class ABP_NetworkCharacter_C** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoesTouchCount");
		
		ABP_ToyPuzzle_C_DoesTouchCount_Params params {};
		params.Magnet = Magnet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Counts != nullptr)
			*Counts = params.Counts;
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetSavableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PuzzleState                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::GetSavableState(E_PuzzleState* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetSavableState");
		
		ABP_ToyPuzzle_C_GetSavableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Progress_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress_Implementation");
		
		ABP_ToyPuzzle_C_OnRep_Progress_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Progress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Progress");
		
		ABP_ToyPuzzle_C_OnRep_Progress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_State_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State_Implementation");
		
		ABP_ToyPuzzle_C_OnRep_State_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_State");
		
		ABP_ToyPuzzle_C_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsBoobyTrapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::IsBoobyTrapped(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsBoobyTrapped");
		
		ABP_ToyPuzzle_C_IsBoobyTrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToSolved
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ToSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToSolved");
		
		ABP_ToyPuzzle_C_ToSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToShutdown
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ToShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToShutdown");
		
		ABP_ToyPuzzle_C_ToShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToBoobyTrapped
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ToBoobyTrapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToBoobyTrapped");
		
		ABP_ToyPuzzle_C_ToBoobyTrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsShutDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::IsShutDown(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsShutDown");
		
		ABP_ToyPuzzle_C_IsShutDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsSolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::IsSolved(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsSolved");
		
		ABP_ToyPuzzle_C_IsSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DecrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::DecrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DecrementingToInProgress");
		
		ABP_ToyPuzzle_C_DecrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IncrementingToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::IncrementingToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IncrementingToInProgress");
		
		ABP_ToyPuzzle_C_IncrementingToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IdleToInProgress
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::IdleToInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IdleToInProgress");
		
		ABP_ToyPuzzle_C_IdleToInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PuzzleState                                      State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::GetState(E_PuzzleState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetState");
		
		ABP_ToyPuzzle_C_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToIdle
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ToIdle");
		
		ABP_ToyPuzzle_C_ToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.FailedPuzzle
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::FailedPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.FailedPuzzle");
		
		ABP_ToyPuzzle_C_FailedPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProgress                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::IsInProgress(bool* InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsInProgress");
		
		ABP_ToyPuzzle_C_IsInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InProgress != nullptr)
			*InProgress = params.InProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::DoIncrement(bool* ShouldComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoIncrement");
		
		ABP_ToyPuzzle_C_DoIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldComplete != nullptr)
			*ShouldComplete = params.ShouldComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsPlayerPlayingPuzzle?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::IsPlayerPlayingPuzzle(class UObject* PlayerRef, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.IsPlayerPlayingPuzzle?");
		
		ABP_ToyPuzzle_C_IsPlayerPlayingPuzzle_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.Spawn Failed Indicator
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::SpawnFailedIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.Spawn Failed Indicator");
		
		ABP_ToyPuzzle_C_SpawnFailedIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_IsBoobyTrapped
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_IsBoobyTrapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_IsBoobyTrapped");
		
		ABP_ToyPuzzle_C_OnRep_IsBoobyTrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DEPREC_IsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::DEPREC_IsActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DEPREC_IsActive");
		
		ABP_ToyPuzzle_C_DEPREC_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.AttenuateSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Initial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::AttenuateSound(float Initial, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.AttenuateSound");
		
		ABP_ToyPuzzle_C_AttenuateSound_Params params {};
		params.Initial = Initial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlayerHasPerk?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          PerkType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PerkLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::PlayerHasPerk(EPerkType PerkType, bool* Value, int32_t* PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlayerHasPerk?");
		
		ABP_ToyPuzzle_C_PlayerHasPerk_Params params {};
		params.PerkType = PerkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (PerkLevel != nullptr)
			*PerkLevel = params.PerkLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.CheckForPerkFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StreakMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentStreak                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::CheckForPerkFinish(int32_t StreakMax, int32_t CurrentStreak, bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.CheckForPerkFinish");
		
		ABP_ToyPuzzle_C_CheckForPerkFinish_Params params {};
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
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Shutoff_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Shutoff_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Shutoff_Implementation");
		
		ABP_ToyPuzzle_C_OnRep_Shutoff_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Shutoff
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Parent_Shutoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Shutoff");
		
		ABP_ToyPuzzle_C_OnRep_Parent_Shutoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzlePlayerPingInMS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PingInMS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::GetPuzzlePlayerPingInMS(float* PingInMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.GetPuzzlePlayerPingInMS");
		
		ABP_ToyPuzzle_C_GetPuzzlePlayerPingInMS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PingInMS != nullptr)
			*PingInMS = params.PingInMS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnShutdown
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnShutdown");
		
		ABP_ToyPuzzle_C_OnShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetSolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyPuzzle_C::SetSolved(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetSolved");
		
		ABP_ToyPuzzle_C_SetSolved_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Initialized
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Parent_Initialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Parent_Initialized");
		
		ABP_ToyPuzzle_C_OnRep_Parent_Initialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Initialized_Implementation
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnRep_Initialized_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnRep_Initialized_Implementation");
		
		ABP_ToyPuzzle_C_OnRep_Initialized_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::DoSparks__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__FinishedFunc");
		
		ABP_ToyPuzzle_C_DoSparks__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::DoSparks__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__UpdateFunc");
		
		ABP_ToyPuzzle_C_DoSparks__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__SpawnSpark__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::DoSparks__SpawnSpark__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.DoSparks__SpawnSpark__EventFunc");
		
		ABP_ToyPuzzle_C_DoSparks__SpawnSpark__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlaySolvedSound
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::PlaySolvedSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.PlaySolvedSound");
		
		ABP_ToyPuzzle_C_PlaySolvedSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::OnAttached(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttached");
		
		ABP_ToyPuzzle_C_OnAttached_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReceiveBeginPlay");
		
		ABP_ToyPuzzle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnFailAnim
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::SpawnFailAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnFailAnim");
		
		ABP_ToyPuzzle_C_SpawnFailAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.Sabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FixDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::Sabotage(float FixDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.Sabotage");
		
		ABP_ToyPuzzle_C_Sabotage_Params params {};
		params.FixDuration = FixDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReActivate
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::ReActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ReActivate");
		
		ABP_ToyPuzzle_C_ReActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetTextRenderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InLinearColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::SetTextRenderColor(const struct FLinearColor& InLinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SetTextRenderColor");
		
		ABP_ToyPuzzle_C_SetTextRenderColor_Params params {};
		params.InLinearColor = InLinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBoxComponent*                               Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::SpawnSparks(class UBoxComponent* Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparks");
		
		ABP_ToyPuzzle_C_SpawnSparks_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.TriggerTrap
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::TriggerTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.TriggerTrap");
		
		ABP_ToyPuzzle_C_TriggerTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparksBroken
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::SpawnSparksBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnSparksBroken");
		
		ABP_ToyPuzzle_C_SpawnSparksBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.TransitionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PuzzleState                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::TransitionState(E_PuzzleState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.TransitionState");
		
		ABP_ToyPuzzle_C_TransitionState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.StartSpawningSparks
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::StartSpawningSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.StartSpawningSparks");
		
		ABP_ToyPuzzle_C_StartSpawningSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.StopSpawningSparks
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::StopSpawningSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.StopSpawningSparks");
		
		ABP_ToyPuzzle_C_StopSpawningSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ForceState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PuzzleState                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::ForceState(E_PuzzleState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ForceState");
		
		ABP_ToyPuzzle_C_ForceState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.NotifySabotageEnded
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::NotifySabotageEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.NotifySabotageEnded");
		
		ABP_ToyPuzzle_C_NotifySabotageEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_ToyPuzzle_C_BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnBoobyIndicator
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::SpawnBoobyIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.SpawnBoobyIndicator");
		
		ABP_ToyPuzzle_C_SpawnBoobyIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ChangeSecondaryObj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HandOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_NetworkCharacter_C*                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::ChangeSecondaryObj(bool HandOn, class ABP_NetworkCharacter_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ChangeSecondaryObj");
		
		ABP_ToyPuzzle_C_ChangeSecondaryObj_Params params {};
		params.HandOn = HandOn;
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.ExecuteUbergraph_BP_ToyPuzzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::ExecuteUbergraph_BP_ToyPuzzle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.ExecuteUbergraph_BP_ToyPuzzle");
		
		ABP_ToyPuzzle_C_ExecuteUbergraph_BP_ToyPuzzle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleProgress__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnPuzzleProgress__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleProgress__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnPuzzleProgress__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.BoobytrapTriggered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::BoobytrapTriggered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.BoobytrapTriggered__DelegateSignature");
		
		ABP_ToyPuzzle_C_BoobytrapTriggered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttach__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ToyPuzzle_C*                             Puzzle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::OnAttach__DelegateSignature(class ABP_ToyPuzzle_C* Puzzle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnAttach__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnAttach__DelegateSignature_Params params {};
		params.Puzzle = Puzzle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleBeginPlay__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnPuzzleBeginPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleBeginPlay__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnPuzzleBeginPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleDisplayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnPuzzleDisplayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnPuzzleDisplayed__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnPuzzleDisplayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnSolvedPuzzle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PillarIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyPuzzle_C::OnSolvedPuzzle__DelegateSignature(int32_t PillarIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnSolvedPuzzle__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnSolvedPuzzle__DelegateSignature_Params params {};
		params.PillarIndex = PillarIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnInitialized__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyPuzzle_C::OnInitialized__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyPuzzle.BP_ToyPuzzle_C.OnInitialized__DelegateSignature");
		
		ABP_ToyPuzzle_C_OnInitialized__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ToyPuzzle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ToyPuzzle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToyPuzzle.BP_ToyPuzzle_C");
		return ptr;
	}

}


