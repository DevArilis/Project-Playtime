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
	 * 		Name   -> Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavRepairGrabpack_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.Sabotage");
		
		ABP_NavRepairGrabpack_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavRepairGrabpack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.ReceiveBeginPlay");
		
		ABP_NavRepairGrabpack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.ExecuteUbergraph_BP_NavRepairGrabpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavRepairGrabpack_C::ExecuteUbergraph_BP_NavRepairGrabpack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavRepairGrabpack.BP_NavRepairGrabpack_C.ExecuteUbergraph_BP_NavRepairGrabpack");
		
		ABP_NavRepairGrabpack_C_ExecuteUbergraph_BP_NavRepairGrabpack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavRepairGrabpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavRepairGrabpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavRepairGrabpack.BP_NavRepairGrabpack_C");
		return ptr;
	}

}


