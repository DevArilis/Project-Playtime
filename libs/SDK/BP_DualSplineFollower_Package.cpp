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
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.IsAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DualSplineFollower_C::IsAvailable(bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.IsAvailable");
		
		ABP_DualSplineFollower_C_IsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.Transition State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWormholeStates                                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DualSplineFollower_C::TransitionState(EWormholeStates State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.Transition State");
		
		ABP_DualSplineFollower_C_TransitionState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Entering
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::ToEntering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Entering");
		
		ABP_DualSplineFollower_C_ToEntering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Idle
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::ToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Idle");
		
		ABP_DualSplineFollower_C_ToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Exiting
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::ToExiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Exiting");
		
		ABP_DualSplineFollower_C_ToExiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.ReceiveBeginPlay");
		
		ABP_DualSplineFollower_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.Event_FinishedMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DualSplineFollower_C::Event_FinishedMoving(class AActor* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.Event_FinishedMoving");
		
		ABP_DualSplineFollower_C_Event_FinishedMoving_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.Multicast_PlaySuccessSound
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::Multicast_PlaySuccessSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.Multicast_PlaySuccessSound");
		
		ABP_DualSplineFollower_C_Multicast_PlaySuccessSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.ExecuteUbergraph_BP_DualSplineFollower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DualSplineFollower_C::ExecuteUbergraph_BP_DualSplineFollower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.ExecuteUbergraph_BP_DualSplineFollower");
		
		ABP_DualSplineFollower_C_ExecuteUbergraph_BP_DualSplineFollower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DualSplineFollower.BP_DualSplineFollower_C.FinishedMoving_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_DualSplineFollower_C::FinishedMoving_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DualSplineFollower.BP_DualSplineFollower_C.FinishedMoving_Dispatch__DelegateSignature");
		
		ABP_DualSplineFollower_C_FinishedMoving_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DualSplineFollower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DualSplineFollower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DualSplineFollower.BP_DualSplineFollower_C");
		return ptr;
	}

}


