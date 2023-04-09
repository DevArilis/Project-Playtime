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
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPuzzleTypes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EPuzzleType>                                Puzzles                                                    (Parm, OutParm)
	 */
	void ABP_PuzzlePillar_C::GetPuzzleTypes(TArray<EPuzzleType>* Puzzles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPuzzleTypes");
		
		ABP_PuzzlePillar_C_GetPuzzleTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Puzzles != nullptr)
			*Puzzles = params.Puzzles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_Puzzles
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::OnRep_Puzzles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_Puzzles");
		
		ABP_PuzzlePillar_C_OnRep_Puzzles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.RandomizePuzzles
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::RandomizePuzzles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.RandomizePuzzles");
		
		ABP_PuzzlePillar_C_RandomizePuzzles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_DoorMatSetter
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::OnRep_DoorMatSetter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_DoorMatSetter");
		
		ABP_PuzzlePillar_C_OnRep_DoorMatSetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePuzzleData
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::UpdatePuzzleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePuzzleData");
		
		ABP_PuzzlePillar_C_UpdatePuzzleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_FinalPuzzleSolved
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::OnRep_FinalPuzzleSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnRep_FinalPuzzleSolved");
		
		ABP_PuzzlePillar_C_OnRep_FinalPuzzleSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.LoadPillarFromSaveStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFPillarSaveStruct                          Save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::LoadPillarFromSaveStruct(const struct FFPillarSaveStruct& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.LoadPillarFromSaveStruct");
		
		ABP_PuzzlePillar_C_LoadPillarFromSaveStruct_Params params {};
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPillarSaveStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFPillarSaveStruct                          State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::GetPillarSaveStruct(struct FFPillarSaveStruct* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.GetPillarSaveStruct");
		
		ABP_PuzzlePillar_C_GetPillarSaveStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.Sabotage_Boobytrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              unused                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::Sabotage_Boobytrap(float unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.Sabotage_Boobytrap");
		
		ABP_PuzzlePillar_C_Sabotage_Boobytrap_Params params {};
		params.unused = unused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesActive?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PuzzlePillar_C::AllPuzzlesActive(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesActive?");
		
		ABP_PuzzlePillar_C_AllPuzzlesActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.AnyPuzzlesActive?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PuzzlePillar_C::AnyPuzzlesActive(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.AnyPuzzlesActive?");
		
		ABP_PuzzlePillar_C_AnyPuzzlesActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.Num Puzzles Active
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::NumPuzzlesActive(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.Num Puzzles Active");
		
		ABP_PuzzlePillar_C_NumPuzzlesActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.NumPuzzlesSolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::NumPuzzlesSolved(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.NumPuzzlesSolved");
		
		ABP_PuzzlePillar_C_NumPuzzlesSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesSolved?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PuzzlePillar_C::AllPuzzlesSolved(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.AllPuzzlesSolved?");
		
		ABP_PuzzlePillar_C_AllPuzzlesSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.UserConstructionScript");
		
		ABP_PuzzlePillar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::TL_PuzzleDoor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__FinishedFunc");
		
		ABP_PuzzlePillar_C_TL_PuzzleDoor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::TL_PuzzleDoor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_PuzzleDoor__UpdateFunc");
		
		ABP_PuzzlePillar_C_TL_PuzzleDoor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::TL_ToyPart__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__FinishedFunc");
		
		ABP_PuzzlePillar_C_TL_ToyPart__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::TL_ToyPart__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.TL_ToyPart__UpdateFunc");
		
		ABP_PuzzlePillar_C_TL_ToyPart__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckSolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PuzzleIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::CheckSolved(int32_t PuzzleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckSolved");
		
		ABP_PuzzlePillar_C_CheckSolved_Params params {};
		params.PuzzleIndex = PuzzleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.ReceiveBeginPlay");
		
		ABP_PuzzlePillar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PuzzlePillar_C::SetHighlight(bool Highlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.SetHighlight");
		
		ABP_PuzzlePillar_C_SetHighlight_Params params {};
		params.Highlight = Highlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePlayersIndicator
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::UpdatePlayersIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.UpdatePlayersIndicator");
		
		ABP_PuzzlePillar_C_UpdatePlayersIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckForSabotaged
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::CheckForSabotaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.CheckForSabotaged");
		
		ABP_PuzzlePillar_C_CheckForSabotaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnOpenDoor
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::OnOpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.OnOpenDoor");
		
		ABP_PuzzlePillar_C_OnOpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.BindPuzzleEvents
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::BindPuzzleEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.BindPuzzleEvents");
		
		ABP_PuzzlePillar_C_BindPuzzleEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.MulticastUpdateLights
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::MulticastUpdateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.MulticastUpdateLights");
		
		ABP_PuzzlePillar_C_MulticastUpdateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.DestroyPuzzles
	 * 		Flags  -> ()
	 */
	void ABP_PuzzlePillar_C::DestroyPuzzles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.DestroyPuzzles");
		
		ABP_PuzzlePillar_C_DestroyPuzzles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.Multicast Set Final Puzzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PuzzleIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::MulticastSetFinalPuzzle(int32_t PuzzleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.Multicast Set Final Puzzle");
		
		ABP_PuzzlePillar_C_MulticastSetFinalPuzzle_Params params {};
		params.PuzzleIndex = PuzzleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PuzzlePillar.BP_PuzzlePillar_C.ExecuteUbergraph_BP_PuzzlePillar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PuzzlePillar_C::ExecuteUbergraph_BP_PuzzlePillar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PuzzlePillar.BP_PuzzlePillar_C.ExecuteUbergraph_BP_PuzzlePillar");
		
		ABP_PuzzlePillar_C_ExecuteUbergraph_BP_PuzzlePillar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PuzzlePillar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PuzzlePillar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PuzzlePillar.BP_PuzzlePillar_C");
		return ptr;
	}

}


