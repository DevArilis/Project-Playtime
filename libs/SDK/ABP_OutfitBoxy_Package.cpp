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
	 * 		Name   -> Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_OutfitBoxy_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.AnimGraph");
		
		UABP_OutfitBoxy_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98
	 * 		Flags  -> ()
	 */
	void UABP_OutfitBoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98");
		
		UABP_OutfitBoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_OutfitBoxy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.BlueprintUpdateAnimation");
		
		UABP_OutfitBoxy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.ExecuteUbergraph_ABP_OutfitBoxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_OutfitBoxy_C::ExecuteUbergraph_ABP_OutfitBoxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.ExecuteUbergraph_ABP_OutfitBoxy");
		
		UABP_OutfitBoxy_C_ExecuteUbergraph_ABP_OutfitBoxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_OutfitBoxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OutfitBoxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OutfitBoxy.ABP_OutfitBoxy_C");
		return ptr;
	}

}


