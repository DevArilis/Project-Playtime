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
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.Jump To Player__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_WuggyJumpscare_C::JumpToPlayer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.Jump To Player__FinishedFunc");
		
		ABP_WuggyJumpscare_C_JumpToPlayer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.Jump To Player__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_WuggyJumpscare_C::JumpToPlayer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.Jump To Player__UpdateFunc");
		
		ABP_WuggyJumpscare_C_JumpToPlayer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_WuggyJumpscare_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ReceiveDestroyed");
		
		ABP_WuggyJumpscare_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WuggyJumpscare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ReceiveBeginPlay");
		
		ABP_WuggyJumpscare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ExecuteUbergraph_BP_WuggyJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WuggyJumpscare_C::ExecuteUbergraph_BP_WuggyJumpscare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ExecuteUbergraph_BP_WuggyJumpscare");
		
		ABP_WuggyJumpscare_C_ExecuteUbergraph_BP_WuggyJumpscare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ShouldKillPlayer__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_WuggyJumpscare_C::ShouldKillPlayer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyJumpscare.BP_WuggyJumpscare_C.ShouldKillPlayer__DelegateSignature");
		
		ABP_WuggyJumpscare_C_ShouldKillPlayer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WuggyJumpscare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WuggyJumpscare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuggyJumpscare.BP_WuggyJumpscare_C");
		return ptr;
	}

}


