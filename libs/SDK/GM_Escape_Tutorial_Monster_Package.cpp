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
	 * 		Name   -> Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_Tutorial_Monster_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveTick");
		
		AGM_Escape_Tutorial_Monster_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_Escape_Tutorial_Monster_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ReceiveBeginPlay");
		
		AGM_Escape_Tutorial_Monster_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.StartEarlyDepartureTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_Tutorial_Monster_C::StartEarlyDepartureTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.StartEarlyDepartureTimer");
		
		AGM_Escape_Tutorial_Monster_C_StartEarlyDepartureTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.K2_OnSetMatchState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_Tutorial_Monster_C::K2_OnSetMatchState(const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.K2_OnSetMatchState");
		
		AGM_Escape_Tutorial_Monster_C_K2_OnSetMatchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ExecuteUbergraph_GM_Escape_Tutorial_Monster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_Tutorial_Monster_C::ExecuteUbergraph_GM_Escape_Tutorial_Monster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C.ExecuteUbergraph_GM_Escape_Tutorial_Monster");
		
		AGM_Escape_Tutorial_Monster_C_ExecuteUbergraph_GM_Escape_Tutorial_Monster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_Escape_Tutorial_Monster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Escape_Tutorial_Monster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C");
		return ptr;
	}

}


