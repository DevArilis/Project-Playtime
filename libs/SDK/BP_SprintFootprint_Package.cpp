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
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.SetMaterial
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::SetMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.SetMaterial");
		
		ABP_SprintFootprint_C_SetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.Fader__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::Fader__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.Fader__FinishedFunc");
		
		ABP_SprintFootprint_C_Fader__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.Fader__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::Fader__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.Fader__UpdateFunc");
		
		ABP_SprintFootprint_C_Fader__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.FadePrint
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::FadePrint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.FadePrint");
		
		ABP_SprintFootprint_C_FadePrint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.ReceiveBeginPlay");
		
		ABP_SprintFootprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.QuickFadePrint
	 * 		Flags  -> ()
	 */
	void ABP_SprintFootprint_C::QuickFadePrint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.QuickFadePrint");
		
		ABP_SprintFootprint_C_QuickFadePrint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SprintFootprint.BP_SprintFootprint_C.ExecuteUbergraph_BP_SprintFootprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SprintFootprint_C::ExecuteUbergraph_BP_SprintFootprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SprintFootprint.BP_SprintFootprint_C.ExecuteUbergraph_BP_SprintFootprint");
		
		ABP_SprintFootprint_C_ExecuteUbergraph_BP_SprintFootprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SprintFootprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SprintFootprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SprintFootprint.BP_SprintFootprint_C");
		return ptr;
	}

}


