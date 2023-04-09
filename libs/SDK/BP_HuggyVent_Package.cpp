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
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.GetRightVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_HuggyVent_C*                             RightVent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HuggyVent_C::GetRightVent(class ABP_HuggyVent_C** RightVent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.GetRightVent");
		
		ABP_HuggyVent_C_GetRightVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RightVent != nullptr)
			*RightVent = params.RightVent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.GetLeftVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_HuggyVent_C*                             LeftVent                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HuggyVent_C::GetLeftVent(class ABP_HuggyVent_C** LeftVent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.GetLeftVent");
		
		ABP_HuggyVent_C_GetLeftVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftVent != nullptr)
			*LeftVent = params.LeftVent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.Is In Range?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InRange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HuggyVent_C::IsInRange(class AActor* Actor, bool* InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.Is In Range?");
		
		ABP_HuggyVent_C_IsInRange_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRange != nullptr)
			*InRange = params.InRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.LockVent
	 * 		Flags  -> ()
	 */
	void ABP_HuggyVent_C::LockVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.LockVent");
		
		ABP_HuggyVent_C_LockVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HuggyVent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.ReceiveBeginPlay");
		
		ABP_HuggyVent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.EnterVent
	 * 		Flags  -> ()
	 */
	void ABP_HuggyVent_C::EnterVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.EnterVent");
		
		ABP_HuggyVent_C_EnterVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.MoveToVent
	 * 		Flags  -> ()
	 */
	void ABP_HuggyVent_C::MoveToVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.MoveToVent");
		
		ABP_HuggyVent_C_MoveToVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.ExitVent
	 * 		Flags  -> ()
	 */
	void ABP_HuggyVent_C::ExitVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.ExitVent");
		
		ABP_HuggyVent_C_ExitVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HuggyVent_C::Alert(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.Alert");
		
		ABP_HuggyVent_C_Alert_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HuggyVent.BP_HuggyVent_C.ExecuteUbergraph_BP_HuggyVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HuggyVent_C::ExecuteUbergraph_BP_HuggyVent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HuggyVent.BP_HuggyVent_C.ExecuteUbergraph_BP_HuggyVent");
		
		ABP_HuggyVent_C_ExecuteUbergraph_BP_HuggyVent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HuggyVent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HuggyVent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HuggyVent.BP_HuggyVent_C");
		return ptr;
	}

}


