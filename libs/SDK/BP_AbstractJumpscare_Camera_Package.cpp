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
	 * 		Name   -> Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.OnCreated
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscare_Camera_C::OnCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.OnCreated");
		
		ABP_AbstractJumpscare_Camera_C_OnCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.Play Animation
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscare_Camera_C::PlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.Play Animation");
		
		ABP_AbstractJumpscare_Camera_C_PlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.ExecuteUbergraph_BP_AbstractJumpscare_Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscare_Camera_C::ExecuteUbergraph_BP_AbstractJumpscare_Camera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.ExecuteUbergraph_BP_AbstractJumpscare_Camera");
		
		ABP_AbstractJumpscare_Camera_C_ExecuteUbergraph_BP_AbstractJumpscare_Camera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.Played Animation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscare_Camera_C::PlayedAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C.Played Animation__DelegateSignature");
		
		ABP_AbstractJumpscare_Camera_C_PlayedAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AbstractJumpscare_Camera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AbstractJumpscare_Camera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C");
		return ptr;
	}

}


