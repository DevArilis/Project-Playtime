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
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.GetFirstAttachedCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_HandMagnet_C::GetFirstAttachedCharacter(class ABP_NetworkCharacter_C** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.GetFirstAttachedCharacter");
		
		UBPC_HandMagnet_C_GetFirstAttachedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandStartPull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_HandMagnet_C::OnHandStartPull(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandStartPull");
		
		UBPC_HandMagnet_C_OnHandStartPull_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandDetach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_HandMagnet_C::OnHandDetach(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandDetach");
		
		UBPC_HandMagnet_C_OnHandDetach_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandAttach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_HandMagnet_C::OnHandAttach(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandAttach");
		
		UBPC_HandMagnet_C_OnHandAttach_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_HandMagnet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.ReceiveBeginPlay");
		
		UBPC_HandMagnet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_HandMagnet.BPC_HandMagnet_C.ExecuteUbergraph_BPC_HandMagnet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_HandMagnet_C::ExecuteUbergraph_BPC_HandMagnet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_HandMagnet.BPC_HandMagnet_C.ExecuteUbergraph_BPC_HandMagnet");
		
		UBPC_HandMagnet_C_ExecuteUbergraph_BPC_HandMagnet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_HandMagnet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_HandMagnet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_HandMagnet.BPC_HandMagnet_C");
		return ptr;
	}

}


