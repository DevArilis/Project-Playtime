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
	 * 		Name   -> Function BP_NavHuggyScream.BP_NavHuggyScream_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavHuggyScream_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavHuggyScream.BP_NavHuggyScream_C.Sabotage");
		
		ABP_NavHuggyScream_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavHuggyScream.BP_NavHuggyScream_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavHuggyScream_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavHuggyScream.BP_NavHuggyScream_C.ReceiveBeginPlay");
		
		ABP_NavHuggyScream_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavHuggyScream.BP_NavHuggyScream_C.ExecuteUbergraph_BP_NavHuggyScream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavHuggyScream_C::ExecuteUbergraph_BP_NavHuggyScream(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavHuggyScream.BP_NavHuggyScream_C.ExecuteUbergraph_BP_NavHuggyScream");
		
		ABP_NavHuggyScream_C_ExecuteUbergraph_BP_NavHuggyScream_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavHuggyScream_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavHuggyScream_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavHuggyScream.BP_NavHuggyScream_C");
		return ptr;
	}

}


