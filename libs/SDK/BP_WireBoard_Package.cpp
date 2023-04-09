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
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.RandomizeEndPoints
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::RandomizeEndPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.RandomizeEndPoints");
		
		ABP_WireBoard_C_RandomizeEndPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.CheckWireConnections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Solved                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WireBoard_C::CheckWireConnections(bool* Solved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.CheckWireConnections");
		
		ABP_WireBoard_C_CheckWireConnections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Solved != nullptr)
			*Solved = params.Solved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.UserConstructionScript");
		
		ABP_WireBoard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.ReceiveBeginPlay");
		
		ABP_WireBoard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.OnConnected
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::OnConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.OnConnected");
		
		ABP_WireBoard_C_OnConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.Disconnect
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.Disconnect");
		
		ABP_WireBoard_C_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.ExecuteUbergraph_BP_WireBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WireBoard_C::ExecuteUbergraph_BP_WireBoard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.ExecuteUbergraph_BP_WireBoard");
		
		ABP_WireBoard_C_ExecuteUbergraph_BP_WireBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WireBoard.BP_WireBoard_C.OnSolved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_WireBoard_C::OnSolved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WireBoard.BP_WireBoard_C.OnSolved__DelegateSignature");
		
		ABP_WireBoard_C_OnSolved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WireBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WireBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WireBoard.BP_WireBoard_C");
		return ptr;
	}

}


