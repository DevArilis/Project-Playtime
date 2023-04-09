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
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Update Oldest Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          PlayerTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WhackAWuggySpawnPoint_C::UpdateOldestPlayer(class AANetworkCharacter* PlayerTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Update Oldest Player");
		
		ABP_WhackAWuggySpawnPoint_C_UpdateOldestPlayer_Params params {};
		params.PlayerTarget = PlayerTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.UserConstructionScript");
		
		ABP_WhackAWuggySpawnPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.WuggyKillPlayer_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WhackAWuggySpawnPoint_C::WuggyKillPlayer_Event(class ABP_NetworkCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.WuggyKillPlayer_Event");
		
		ABP_WhackAWuggySpawnPoint_C_WuggyKillPlayer_Event_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WhackAWuggySpawnPoint_C::BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_WhackAWuggySpawnPoint_C_BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ReceiveBeginPlay");
		
		ABP_WhackAWuggySpawnPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_Server_WuggyKillPlayer
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::BP_Server_WuggyKillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_Server_WuggyKillPlayer");
		
		ABP_WhackAWuggySpawnPoint_C_BP_Server_WuggyKillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Kill Player
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::KillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Kill Player");
		
		ABP_WhackAWuggySpawnPoint_C_KillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_OnRep_WuggyIsSpawned
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::BP_OnRep_WuggyIsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_OnRep_WuggyIsSpawned");
		
		ABP_WhackAWuggySpawnPoint_C_BP_OnRep_WuggyIsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.SpawnWuggy
	 * 		Flags  -> ()
	 */
	void ABP_WhackAWuggySpawnPoint_C::SpawnWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.SpawnWuggy");
		
		ABP_WhackAWuggySpawnPoint_C_SpawnWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ExecuteUbergraph_BP_WhackAWuggySpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WhackAWuggySpawnPoint_C::ExecuteUbergraph_BP_WhackAWuggySpawnPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ExecuteUbergraph_BP_WhackAWuggySpawnPoint");
		
		ABP_WhackAWuggySpawnPoint_C_ExecuteUbergraph_BP_WhackAWuggySpawnPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WhackAWuggySpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WhackAWuggySpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C");
		return ptr;
	}

}


