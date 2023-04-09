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
	 * 		Name   -> Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.Sabotage
	 * 		Flags  -> ()
	 */
	void ABP_NavPillarIndicator_C::Sabotage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.Sabotage");
		
		ABP_NavPillarIndicator_C_Sabotage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.SetNumActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutOf                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavPillarIndicator_C::SetNumActive(int32_t NumActive, int32_t OutOf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.SetNumActive");
		
		ABP_NavPillarIndicator_C_SetNumActive_Params params {};
		params.NumActive = NumActive;
		params.OutOf = OutOf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavPillarIndicator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ReceiveBeginPlay");
		
		ABP_NavPillarIndicator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ExecuteUbergraph_BP_NavPillarIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavPillarIndicator_C::ExecuteUbergraph_BP_NavPillarIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ExecuteUbergraph_BP_NavPillarIndicator");
		
		ABP_NavPillarIndicator_C_ExecuteUbergraph_BP_NavPillarIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavPillarIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavPillarIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavPillarIndicator.BP_NavPillarIndicator_C");
		return ptr;
	}

}


