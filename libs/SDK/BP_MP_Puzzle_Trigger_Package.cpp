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
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetSolve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MP_Puzzle_Trigger_C::SetWidgetSolve(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetSolve");
		
		ABP_MP_Puzzle_Trigger_C_SetWidgetSolve_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Get Puzzle Name Tag
	 * 		Flags  -> ()
	 */
	class UUI_PuzzleNametag_C* ABP_MP_Puzzle_Trigger_C::GetPuzzleNameTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Get Puzzle Name Tag");
		
		ABP_MP_Puzzle_Trigger_C_GetPuzzleNameTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFloat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP_Puzzle_Trigger_C::SetWidgetDistance(float InFloat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.SetWidgetDistance");
		
		ABP_MP_Puzzle_Trigger_C_SetWidgetDistance_Params params {};
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Check All Goals
	 * 		Flags  -> ()
	 */
	void ABP_MP_Puzzle_Trigger_C::CheckAllGoals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.Check All Goals");
		
		ABP_MP_Puzzle_Trigger_C_CheckAllGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.OnRep_Solved
	 * 		Flags  -> ()
	 */
	void ABP_MP_Puzzle_Trigger_C::OnRep_Solved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.OnRep_Solved");
		
		ABP_MP_Puzzle_Trigger_C_OnRep_Solved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP_Puzzle_Trigger_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveTick");
		
		ABP_MP_Puzzle_Trigger_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MP_Puzzle_Trigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ReceiveBeginPlay");
		
		ABP_MP_Puzzle_Trigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ExecuteUbergraph_BP_MP_Puzzle_Trigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP_Puzzle_Trigger_C::ExecuteUbergraph_BP_MP_Puzzle_Trigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C.ExecuteUbergraph_BP_MP_Puzzle_Trigger");
		
		ABP_MP_Puzzle_Trigger_C_ExecuteUbergraph_BP_MP_Puzzle_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MP_Puzzle_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MP_Puzzle_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MP_Puzzle_Trigger.BP_MP_Puzzle_Trigger_C");
		return ptr;
	}

}


