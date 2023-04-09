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
	 * 		Name   -> Function BP_NavBaseActor.BP_NavBaseActor_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavBaseActor_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBaseActor.BP_NavBaseActor_C.Sabotage");
		
		ABP_NavBaseActor_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavBaseActor.BP_NavBaseActor_C.DoSabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavBaseActor_C::DoSabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBaseActor.BP_NavBaseActor_C.DoSabotage");
		
		ABP_NavBaseActor_C_DoSabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavBaseActor.BP_NavBaseActor_C.ExecuteUbergraph_BP_NavBaseActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavBaseActor_C::ExecuteUbergraph_BP_NavBaseActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavBaseActor.BP_NavBaseActor_C.ExecuteUbergraph_BP_NavBaseActor");
		
		ABP_NavBaseActor_C_ExecuteUbergraph_BP_NavBaseActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavBaseActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavBaseActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavBaseActor.BP_NavBaseActor_C");
		return ptr;
	}

}


