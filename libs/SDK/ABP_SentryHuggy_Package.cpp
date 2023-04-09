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
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_SentryHuggy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.AnimGraph");
		
		UABP_SentryHuggy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC
	 * 		Flags  -> ()
	 */
	void UABP_SentryHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC");
		
		UABP_SentryHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC
	 * 		Flags  -> ()
	 */
	void UABP_SentryHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC");
		
		UABP_SentryHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832
	 * 		Flags  -> ()
	 */
	void UABP_SentryHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832");
		
		UABP_SentryHuggy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SentryHuggy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.BlueprintUpdateAnimation");
		
		UABP_SentryHuggy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SentryHuggy.ABP_SentryHuggy_C.ExecuteUbergraph_ABP_SentryHuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SentryHuggy_C::ExecuteUbergraph_ABP_SentryHuggy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SentryHuggy.ABP_SentryHuggy_C.ExecuteUbergraph_ABP_SentryHuggy");
		
		UABP_SentryHuggy_C_ExecuteUbergraph_ABP_SentryHuggy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_SentryHuggy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_SentryHuggy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_SentryHuggy.ABP_SentryHuggy_C");
		return ptr;
	}

}


