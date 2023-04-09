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
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Down?
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Down?");
		
		ABP_MultiplayerPlayerState_C_OnRep_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Won?
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Won()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Won?");
		
		ABP_MultiplayerPlayerState_C_OnRep_Won_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Ready?
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Ready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Ready?");
		
		ABP_MultiplayerPlayerState_C_OnRep_Ready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Clothes
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Clothes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Clothes");
		
		ABP_MultiplayerPlayerState_C_OnRep_Clothes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Emote
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Emote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Emote");
		
		ABP_MultiplayerPlayerState_C_OnRep_Emote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Skins
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Skins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Skins");
		
		ABP_MultiplayerPlayerState_C_OnRep_Skins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Gestures
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::OnRep_Gestures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Gestures");
		
		ABP_MultiplayerPlayerState_C_OnRep_Gestures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_OnRep_EarnedTickets
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::BP_OnRep_EarnedTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_OnRep_EarnedTickets");
		
		ABP_MultiplayerPlayerState_C_BP_OnRep_EarnedTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_DisplayTicketCollectionNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TicketRewardRowName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::BP_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_DisplayTicketCollectionNotification");
		
		ABP_MultiplayerPlayerState_C_BP_DisplayTicketCollectionNotification_Params params {};
		params.TicketRewardRowName = TicketRewardRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Server_ReadyToStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::Server_ReadyToStart(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Server_ReadyToStart");
		
		ABP_MultiplayerPlayerState_C_Server_ReadyToStart_Params params {};
		params.ID = ID;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.UpdateSavedProperties
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::UpdateSavedProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.UpdateSavedProperties");
		
		ABP_MultiplayerPlayerState_C_UpdateSavedProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Client_ReadyToStart
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::Client_ReadyToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Client_ReadyToStart");
		
		ABP_MultiplayerPlayerState_C_Client_ReadyToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveDestroyed");
		
		ABP_MultiplayerPlayerState_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveCopyProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::ReceiveCopyProperties(class APlayerState* NewPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveCopyProperties");
		
		ABP_MultiplayerPlayerState_C_ReceiveCopyProperties_Params params {};
		params.NewPlayerState = NewPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveOverrideWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                OldPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::ReceiveOverrideWith(class APlayerState* OldPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveOverrideWith");
		
		ABP_MultiplayerPlayerState_C_ReceiveOverrideWith_Params params {};
		params.OldPlayerState = OldPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveBeginPlay");
		
		ABP_MultiplayerPlayerState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReplicateAudioData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              CompressedBuffer                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            DesiredSampleRate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::ReplicateAudioData(TArray<unsigned char> CompressedBuffer, int32_t DesiredSampleRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReplicateAudioData");
		
		ABP_MultiplayerPlayerState_C_ReplicateAudioData_Params params {};
		params.CompressedBuffer = CompressedBuffer;
		params.DesiredSampleRate = DesiredSampleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.TryReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MultiplayerPlayerState_C::TryReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.TryReady");
		
		ABP_MultiplayerPlayerState_C_TryReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BeginPlay_VoiceChat
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerState_C::BeginPlay_VoiceChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BeginPlay_VoiceChat");
		
		ABP_MultiplayerPlayerState_C_BeginPlay_VoiceChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ExecuteUbergraph_BP_MultiplayerPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerState_C::ExecuteUbergraph_BP_MultiplayerPlayerState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ExecuteUbergraph_BP_MultiplayerPlayerState");
		
		ABP_MultiplayerPlayerState_C_ExecuteUbergraph_BP_MultiplayerPlayerState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MultiplayerPlayerState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MultiplayerPlayerState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C");
		return ptr;
	}

}


