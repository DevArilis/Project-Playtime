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
	 * 		Name   -> Function BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C.Update Phase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MP_Puzzle_EndGoal_C::UpdatePhase(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C.Update Phase");
		
		ABP_MP_Puzzle_EndGoal_C_UpdatePhase_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C.CheckPuzzles__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_MP_Puzzle_EndGoal_C::CheckPuzzles__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C.CheckPuzzles__DelegateSignature");
		
		ABP_MP_Puzzle_EndGoal_C_CheckPuzzles__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MP_Puzzle_EndGoal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MP_Puzzle_EndGoal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C");
		return ptr;
	}

}


