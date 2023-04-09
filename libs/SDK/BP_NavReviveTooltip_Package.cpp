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
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.StartRevive
	 * 		Flags  -> ()
	 */
	void ABP_NavReviveTooltip_C::StartRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.StartRevive");
		
		ABP_NavReviveTooltip_C_StartRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SetReviveProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavReviveTooltip_C::SetReviveProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SetReviveProgress");
		
		ABP_NavReviveTooltip_C_SetReviveProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SuccessRevive
	 * 		Flags  -> ()
	 */
	void ABP_NavReviveTooltip_C::SuccessRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.SuccessRevive");
		
		ABP_NavReviveTooltip_C_SuccessRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.CancelRevive
	 * 		Flags  -> ()
	 */
	void ABP_NavReviveTooltip_C::CancelRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.CancelRevive");
		
		ABP_NavReviveTooltip_C_CancelRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NavReviveTooltip_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ReceiveBeginPlay");
		
		ABP_NavReviveTooltip_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.OnAnimationFinished
	 * 		Flags  -> ()
	 */
	void ABP_NavReviveTooltip_C::OnAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.OnAnimationFinished");
		
		ABP_NavReviveTooltip_C_OnAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ExecuteUbergraph_BP_NavReviveTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NavReviveTooltip_C::ExecuteUbergraph_BP_NavReviveTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NavReviveTooltip.BP_NavReviveTooltip_C.ExecuteUbergraph_BP_NavReviveTooltip");
		
		ABP_NavReviveTooltip_C_ExecuteUbergraph_BP_NavReviveTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NavReviveTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NavReviveTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavReviveTooltip.BP_NavReviveTooltip_C");
		return ptr;
	}

}


