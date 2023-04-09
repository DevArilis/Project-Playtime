﻿/**
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
	 * 		Name   -> Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_NetworkHuggy_Instancer_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.AnimGraph");
		
		UABP_NetworkHuggy_Instancer_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_NetworkHuggy_Instancer_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.BlueprintUpdateAnimation");
		
		UABP_NetworkHuggy_Instancer_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.ExecuteUbergraph_ABP_NetworkHuggy_Instancer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_NetworkHuggy_Instancer_C::ExecuteUbergraph_ABP_NetworkHuggy_Instancer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C.ExecuteUbergraph_ABP_NetworkHuggy_Instancer");
		
		UABP_NetworkHuggy_Instancer_C_ExecuteUbergraph_ABP_NetworkHuggy_Instancer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_NetworkHuggy_Instancer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_NetworkHuggy_Instancer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_NetworkHuggy_Instancer.ABP_NetworkHuggy_Instancer_C");
		return ptr;
	}

}


