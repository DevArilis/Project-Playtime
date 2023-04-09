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
	 * 		Name   -> Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_CustomizationMenuPlayer_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.AnimGraph");
		
		UABP_CustomizationMenuPlayer_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.PlaySelectMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CustomizationMenuPlayer_C::PlaySelectMontage(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.PlaySelectMontage");
		
		UABP_CustomizationMenuPlayer_C_PlaySelectMontage_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.ExecuteUbergraph_ABP_CustomizationMenuPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CustomizationMenuPlayer_C::ExecuteUbergraph_ABP_CustomizationMenuPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C.ExecuteUbergraph_ABP_CustomizationMenuPlayer");
		
		UABP_CustomizationMenuPlayer_C_ExecuteUbergraph_ABP_CustomizationMenuPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_CustomizationMenuPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_CustomizationMenuPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C");
		return ptr;
	}

}


