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
	 * 		Name   -> Function BP_SecurityCamera.BP_SecurityCamera_C.MoveCamera__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SecurityCamera_C::MoveCamera__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SecurityCamera.BP_SecurityCamera_C.MoveCamera__FinishedFunc");
		
		ABP_SecurityCamera_C_MoveCamera__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SecurityCamera.BP_SecurityCamera_C.MoveCamera__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SecurityCamera_C::MoveCamera__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SecurityCamera.BP_SecurityCamera_C.MoveCamera__UpdateFunc");
		
		ABP_SecurityCamera_C_MoveCamera__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SecurityCamera.BP_SecurityCamera_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SecurityCamera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SecurityCamera.BP_SecurityCamera_C.ReceiveBeginPlay");
		
		ABP_SecurityCamera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SecurityCamera.BP_SecurityCamera_C.ExecuteUbergraph_BP_SecurityCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SecurityCamera_C::ExecuteUbergraph_BP_SecurityCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SecurityCamera.BP_SecurityCamera_C.ExecuteUbergraph_BP_SecurityCamera");
		
		ABP_SecurityCamera_C_ExecuteUbergraph_BP_SecurityCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SecurityCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SecurityCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SecurityCamera.BP_SecurityCamera_C");
		return ptr;
	}

}


