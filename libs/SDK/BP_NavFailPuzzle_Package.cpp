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
	 * 		Name   -> Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavFailPuzzle_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.Sabotage");
		
		ABP_NavFailPuzzle_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavFailPuzzle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.ReceiveBeginPlay");
		
		ABP_NavFailPuzzle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.ExecuteUbergraph_BP_NavFailPuzzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavFailPuzzle_C::ExecuteUbergraph_BP_NavFailPuzzle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavFailPuzzle.BP_NavFailPuzzle_C.ExecuteUbergraph_BP_NavFailPuzzle");
		
		ABP_NavFailPuzzle_C_ExecuteUbergraph_BP_NavFailPuzzle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavFailPuzzle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavFailPuzzle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavFailPuzzle.BP_NavFailPuzzle_C");
		return ptr;
	}

}


