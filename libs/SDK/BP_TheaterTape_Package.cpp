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
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.RetrieveTapeInfo
	 * 		Flags  -> ()
	 */
	void ABP_TheaterTape_C::RetrieveTapeInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.RetrieveTapeInfo");
		
		ABP_TheaterTape_C_RetrieveTapeInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TheaterTape_C::SetSelected(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.SetSelected");
		
		ABP_TheaterTape_C_SetSelected_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorBeginCursorOver
	 * 		Flags  -> ()
	 */
	void ABP_TheaterTape_C::ReceiveActorBeginCursorOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorBeginCursorOver");
		
		ABP_TheaterTape_C_ReceiveActorBeginCursorOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorEndCursorOver
	 * 		Flags  -> ()
	 */
	void ABP_TheaterTape_C::ReceiveActorEndCursorOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorEndCursorOver");
		
		ABP_TheaterTape_C_ReceiveActorEndCursorOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.LoadDefault
	 * 		Flags  -> ()
	 */
	void ABP_TheaterTape_C::LoadDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.LoadDefault");
		
		ABP_TheaterTape_C_LoadDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TheaterTape.BP_TheaterTape_C.ExecuteUbergraph_BP_TheaterTape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TheaterTape_C::ExecuteUbergraph_BP_TheaterTape(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheaterTape.BP_TheaterTape_C.ExecuteUbergraph_BP_TheaterTape");
		
		ABP_TheaterTape_C_ExecuteUbergraph_BP_TheaterTape_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TheaterTape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TheaterTape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TheaterTape.BP_TheaterTape_C");
		return ptr;
	}

}


