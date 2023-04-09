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
	 * 		Name   -> Function BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C.BP_Rotate_Sound_Trigger
	 * 		Flags  -> ()
	 */
	void UBP_Maze_Puzzle_Component_C::BP_Rotate_Sound_Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C.BP_Rotate_Sound_Trigger");
		
		UBP_Maze_Puzzle_Component_C_BP_Rotate_Sound_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C.ExecuteUbergraph_BP_Maze_Puzzle_Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Maze_Puzzle_Component_C::ExecuteUbergraph_BP_Maze_Puzzle_Component(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C.ExecuteUbergraph_BP_Maze_Puzzle_Component");
		
		UBP_Maze_Puzzle_Component_C_ExecuteUbergraph_BP_Maze_Puzzle_Component_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Maze_Puzzle_Component_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Maze_Puzzle_Component_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C");
		return ptr;
	}

}


