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
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FPHuggy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.AnimGraph");
		
		UABP_FPHuggy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_07AC921640A528DCB88A118692C1EC28
	 * 		Flags  -> ()
	 */
	void UABP_FPHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_07AC921640A528DCB88A118692C1EC28()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_07AC921640A528DCB88A118692C1EC28");
		
		UABP_FPHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_07AC921640A528DCB88A118692C1EC28_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_B4E10B944E9C08B185B9AFAA3D9E735D
	 * 		Flags  -> ()
	 */
	void UABP_FPHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_B4E10B944E9C08B185B9AFAA3D9E735D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_B4E10B944E9C08B185B9AFAA3D9E735D");
		
		UABP_FPHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_B4E10B944E9C08B185B9AFAA3D9E735D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_55C5F44F45242B08ED0504A8A4888C5C
	 * 		Flags  -> ()
	 */
	void UABP_FPHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_55C5F44F45242B08ED0504A8A4888C5C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_55C5F44F45242B08ED0504A8A4888C5C");
		
		UABP_FPHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPHuggy_AnimGraphNode_TransitionResult_55C5F44F45242B08ED0504A8A4888C5C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FPHuggy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.BlueprintUpdateAnimation");
		
		UABP_FPHuggy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.Play FP Attack Animation
	 * 		Flags  -> ()
	 */
	void UABP_FPHuggy_C::PlayFPAttackAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.Play FP Attack Animation");
		
		UABP_FPHuggy_C_PlayFPAttackAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FPHuggy.ABP_FPHuggy_C.ExecuteUbergraph_ABP_FPHuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FPHuggy_C::ExecuteUbergraph_ABP_FPHuggy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FPHuggy.ABP_FPHuggy_C.ExecuteUbergraph_ABP_FPHuggy");
		
		UABP_FPHuggy_C_ExecuteUbergraph_ABP_FPHuggy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FPHuggy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FPHuggy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FPHuggy.ABP_FPHuggy_C");
		return ptr;
	}

}


