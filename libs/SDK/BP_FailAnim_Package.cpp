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
	 * 		Name   -> Function BP_FailAnim.BP_FailAnim_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FailAnim_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FailAnim.BP_FailAnim_C.ReceiveBeginPlay");
		
		ABP_FailAnim_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FailAnim.BP_FailAnim_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FailAnim_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FailAnim.BP_FailAnim_C.ReceiveTick");
		
		ABP_FailAnim_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FailAnim.BP_FailAnim_C.BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FailAnim_C::BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FailAnim.BP_FailAnim_C.BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature");
		
		ABP_FailAnim_C_BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FailAnim.BP_FailAnim_C.ExecuteUbergraph_BP_FailAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FailAnim_C::ExecuteUbergraph_BP_FailAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FailAnim.BP_FailAnim_C.ExecuteUbergraph_BP_FailAnim");
		
		ABP_FailAnim_C_ExecuteUbergraph_BP_FailAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FailAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FailAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FailAnim.BP_FailAnim_C");
		return ptr;
	}

}


