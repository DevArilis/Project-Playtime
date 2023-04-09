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
	 * 		Name   -> Function BP_NavDoorRevive.BP_NavDoorRevive_C.FadeThenDestroy
	 * 		Flags  -> ()
	 */
	void ABP_NavDoorRevive_C::FadeThenDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavDoorRevive.BP_NavDoorRevive_C.FadeThenDestroy");
		
		ABP_NavDoorRevive_C_FadeThenDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavDoorRevive.BP_NavDoorRevive_C.ExecuteUbergraph_BP_NavDoorRevive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavDoorRevive_C::ExecuteUbergraph_BP_NavDoorRevive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavDoorRevive.BP_NavDoorRevive_C.ExecuteUbergraph_BP_NavDoorRevive");
		
		ABP_NavDoorRevive_C_ExecuteUbergraph_BP_NavDoorRevive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavDoorRevive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavDoorRevive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavDoorRevive.BP_NavDoorRevive_C");
		return ptr;
	}

}


