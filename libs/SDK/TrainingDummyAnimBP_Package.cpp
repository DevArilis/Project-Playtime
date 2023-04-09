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
	 * 		Name   -> Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UTrainingDummyAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.AnimGraph");
		
		UTrainingDummyAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C
	 * 		Flags  -> ()
	 */
	void UTrainingDummyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C");
		
		UTrainingDummyAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C
	 * 		Flags  -> ()
	 */
	void UTrainingDummyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C");
		
		UTrainingDummyAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrainingDummyAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.BlueprintUpdateAnimation");
		
		UTrainingDummyAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.ExecuteUbergraph_TrainingDummyAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrainingDummyAnimBP_C::ExecuteUbergraph_TrainingDummyAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingDummyAnimBP.TrainingDummyAnimBP_C.ExecuteUbergraph_TrainingDummyAnimBP");
		
		UTrainingDummyAnimBP_C_ExecuteUbergraph_TrainingDummyAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrainingDummyAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrainingDummyAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TrainingDummyAnimBP.TrainingDummyAnimBP_C");
		return ptr;
	}

}


