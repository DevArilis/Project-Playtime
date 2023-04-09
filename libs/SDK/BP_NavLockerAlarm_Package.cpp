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
	 * 		Name   -> Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavLockerAlarm_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.Sabotage");
		
		ABP_NavLockerAlarm_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavLockerAlarm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.ReceiveBeginPlay");
		
		ABP_NavLockerAlarm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.ExecuteUbergraph_BP_NavLockerAlarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavLockerAlarm_C::ExecuteUbergraph_BP_NavLockerAlarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavLockerAlarm.BP_NavLockerAlarm_C.ExecuteUbergraph_BP_NavLockerAlarm");
		
		ABP_NavLockerAlarm_C_ExecuteUbergraph_BP_NavLockerAlarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavLockerAlarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavLockerAlarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavLockerAlarm.BP_NavLockerAlarm_C");
		return ptr;
	}

}


