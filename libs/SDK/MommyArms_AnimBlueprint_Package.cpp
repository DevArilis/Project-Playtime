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
	 * 		Name   -> Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UMommyArms_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.AnimGraph");
		
		UMommyArms_AnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMommyArms_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UMommyArms_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.ExecuteUbergraph_MommyArms_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMommyArms_AnimBlueprint_C::ExecuteUbergraph_MommyArms_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C.ExecuteUbergraph_MommyArms_AnimBlueprint");
		
		UMommyArms_AnimBlueprint_C_ExecuteUbergraph_MommyArms_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMommyArms_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMommyArms_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass MommyArms_AnimBlueprint.MommyArms_AnimBlueprint_C");
		return ptr;
	}

}


