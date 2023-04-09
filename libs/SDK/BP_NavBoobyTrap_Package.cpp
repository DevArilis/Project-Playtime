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
	 * 		Name   -> Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavBoobyTrap_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.Sabotage");
		
		ABP_NavBoobyTrap_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavBoobyTrap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.ReceiveBeginPlay");
		
		ABP_NavBoobyTrap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.ExecuteUbergraph_BP_NavBoobyTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavBoobyTrap_C::ExecuteUbergraph_BP_NavBoobyTrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBoobyTrap.BP_NavBoobyTrap_C.ExecuteUbergraph_BP_NavBoobyTrap");
		
		ABP_NavBoobyTrap_C_ExecuteUbergraph_BP_NavBoobyTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavBoobyTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavBoobyTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavBoobyTrap.BP_NavBoobyTrap_C");
		return ptr;
	}

}


