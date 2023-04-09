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
	 * 		Name   -> Function BP_NavOpenDoor.BP_NavOpenDoor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavOpenDoor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavOpenDoor.BP_NavOpenDoor_C.ReceiveBeginPlay");
		
		ABP_NavOpenDoor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavOpenDoor.BP_NavOpenDoor_C.ExecuteUbergraph_BP_NavOpenDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavOpenDoor_C::ExecuteUbergraph_BP_NavOpenDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavOpenDoor.BP_NavOpenDoor_C.ExecuteUbergraph_BP_NavOpenDoor");
		
		ABP_NavOpenDoor_C_ExecuteUbergraph_BP_NavOpenDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavOpenDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavOpenDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavOpenDoor.BP_NavOpenDoor_C");
		return ptr;
	}

}


