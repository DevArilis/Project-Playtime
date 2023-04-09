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
	 * 		Name   -> Function BP_NavHookIndicator.BP_NavHookIndicator_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavHookIndicator_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavHookIndicator.BP_NavHookIndicator_C.Sabotage");
		
		ABP_NavHookIndicator_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavHookIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavHookIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavHookIndicator.BP_NavHookIndicator_C");
		return ptr;
	}

}


