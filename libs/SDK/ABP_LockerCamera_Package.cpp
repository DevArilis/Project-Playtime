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
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_LockerCamera_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.AnimGraph");
		
		UABP_LockerCamera_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F
	 * 		Flags  -> ()
	 */
	void UABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F");
		
		UABP_LockerCamera_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32
	 * 		Flags  -> ()
	 */
	void UABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32");
		
		UABP_LockerCamera_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F
	 * 		Flags  -> ()
	 */
	void UABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F");
		
		UABP_LockerCamera_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_LockerCamera_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.BlueprintUpdateAnimation");
		
		UABP_LockerCamera_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Locker_C*                                LockerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_LockerCamera_C::CustomEvent_1(class ABP_Locker_C* LockerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.CustomEvent_1");
		
		UABP_LockerCamera_C_CustomEvent_1_Params params {};
		params.LockerRef = LockerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_LockerCamera.ABP_LockerCamera_C.ExecuteUbergraph_ABP_LockerCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_LockerCamera_C::ExecuteUbergraph_ABP_LockerCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_LockerCamera.ABP_LockerCamera_C.ExecuteUbergraph_ABP_LockerCamera");
		
		UABP_LockerCamera_C_ExecuteUbergraph_ABP_LockerCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_LockerCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_LockerCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LockerCamera.ABP_LockerCamera_C");
		return ptr;
	}

}


