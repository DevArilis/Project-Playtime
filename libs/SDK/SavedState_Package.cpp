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
	 * 		Name   -> Function SavedState.SavedState_C.Load Actor State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActorSave                                  State                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USavedState_C::LoadActorState(const struct FActorSave& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavedState.SavedState_C.Load Actor State");
		
		USavedState_C_LoadActorState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SavedState.SavedState_C.LoadActorState
	 * 		Flags  -> ()
	 */
	void USavedState_C::LoadActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavedState.SavedState_C.LoadActorState");
		
		USavedState_C_LoadActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SavedState.SavedState_C.PreSaveActorState
	 * 		Flags  -> ()
	 */
	void USavedState_C::PreSaveActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavedState.SavedState_C.PreSaveActorState");
		
		USavedState_C_PreSaveActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SavedState.SavedState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void USavedState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavedState.SavedState_C.ReceiveBeginPlay");
		
		USavedState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SavedState.SavedState_C.ExecuteUbergraph_SavedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USavedState_C::ExecuteUbergraph_SavedState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavedState.SavedState_C.ExecuteUbergraph_SavedState");
		
		USavedState_C_ExecuteUbergraph_SavedState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USavedState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USavedState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SavedState.SavedState_C");
		return ptr;
	}

}


