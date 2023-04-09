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
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdateSlot
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_PlayerSlot_C::UpdateSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdateSlot");
		
		ABP_Lobby_PlayerSlot_C_UpdateSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.OnRep_Enabled
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_PlayerSlot_C::OnRep_Enabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.OnRep_Enabled");
		
		ABP_Lobby_PlayerSlot_C_OnRep_Enabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.IsMaterialReady
	 * 		Flags  -> ()
	 */
	bool ABP_Lobby_PlayerSlot_C::IsMaterialReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.IsMaterialReady");
		
		ABP_Lobby_PlayerSlot_C_IsMaterialReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lobby_PlayerSlot_C::SetReady(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetReady");
		
		ABP_Lobby_PlayerSlot_C_SetReady_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.GS_Escape_SetInterface
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_PlayerSlot_C::GS_Escape_SetInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.GS_Escape_SetInterface");
		
		ABP_Lobby_PlayerSlot_C_GS_Escape_SetInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdatePlayerAsMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lobby_PlayerSlot_C::UpdatePlayerAsMonster(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdatePlayerAsMonster");
		
		ABP_Lobby_PlayerSlot_C_UpdatePlayerAsMonster_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_PlayerSlot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ReceiveBeginPlay");
		
		ABP_Lobby_PlayerSlot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_PlayerSlot_C::SetInterface(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetInterface");
		
		ABP_Lobby_PlayerSlot_C_SetInterface_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ExecuteUbergraph_BP_Lobby_PlayerSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_PlayerSlot_C::ExecuteUbergraph_BP_Lobby_PlayerSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ExecuteUbergraph_BP_Lobby_PlayerSlot");
		
		ABP_Lobby_PlayerSlot_C_ExecuteUbergraph_BP_Lobby_PlayerSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lobby_PlayerSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lobby_PlayerSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C");
		return ptr;
	}

}


