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
	 * 		Name   -> Function ABP_OutfitLeprechaun.ABP_OutfitLeprechaun_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_OutfitLeprechaun_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitLeprechaun.ABP_OutfitLeprechaun_C.AnimGraph");
		
		UABP_OutfitLeprechaun_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_OutfitLeprechaun.ABP_OutfitLeprechaun_C.ExecuteUbergraph_ABP_OutfitLeprechaun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_OutfitLeprechaun_C::ExecuteUbergraph_ABP_OutfitLeprechaun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OutfitLeprechaun.ABP_OutfitLeprechaun_C.ExecuteUbergraph_ABP_OutfitLeprechaun");
		
		UABP_OutfitLeprechaun_C_ExecuteUbergraph_ABP_OutfitLeprechaun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_OutfitLeprechaun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OutfitLeprechaun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OutfitLeprechaun.ABP_OutfitLeprechaun_C");
		return ptr;
	}

}


