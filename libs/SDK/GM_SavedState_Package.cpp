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
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.SavePlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerSave>                         OutPlayers                                                 (Parm, OutParm)
	 */
	void AGM_SavedState_C::SavePlayers(TArray<struct FPlayerSave>* OutPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.SavePlayers");
		
		AGM_SavedState_C_SavePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayers != nullptr)
			*OutPlayers = params.OutPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.ChooseNewHost
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::ChooseNewHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.ChooseNewHost");
		
		AGM_SavedState_C_ChooseNewHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.UpdateState
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::UpdateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.UpdateState");
		
		AGM_SavedState_C_UpdateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.LoadState
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::LoadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.LoadState");
		
		AGM_SavedState_C_LoadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.K2_PostLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_SavedState_C::K2_PostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.K2_PostLogin");
		
		AGM_SavedState_C_K2_PostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.ReceiveBeginPlay");
		
		AGM_SavedState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.K2_OnLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_SavedState_C::K2_OnLogout(class AController* ExitingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.K2_OnLogout");
		
		AGM_SavedState_C_K2_OnLogout_Params params {};
		params.ExitingController = ExitingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.StartStateUpdateLoop
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::StartStateUpdateLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.StartStateUpdateLoop");
		
		AGM_SavedState_C_StartStateUpdateLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.SendGameSaveInChunks
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::SendGameSaveInChunks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.SendGameSaveInChunks");
		
		AGM_SavedState_C_SendGameSaveInChunks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.SaveState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledOnUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_SavedState_C::SaveState(bool CalledOnUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.SaveState");
		
		AGM_SavedState_C_SaveState_Params params {};
		params.CalledOnUpdate = CalledOnUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.EventActorsSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FActorState>                         ActorStates                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AGM_SavedState_C::EventActorsSaved(TArray<struct FActorState> ActorStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.EventActorsSaved");
		
		AGM_SavedState_C_EventActorsSaved_Params params {};
		params.ActorStates = ActorStates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.SimulateHostMigration
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::SimulateHostMigration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.SimulateHostMigration");
		
		AGM_SavedState_C_SimulateHostMigration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.OnSaveComplete_Testing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledOnUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_SavedState_C::OnSaveComplete_Testing(bool CalledOnUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.OnSaveComplete_Testing");
		
		AGM_SavedState_C_OnSaveComplete_Testing_Params params {};
		params.CalledOnUpdate = CalledOnUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.ExecuteUbergraph_GM_SavedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_SavedState_C::ExecuteUbergraph_GM_SavedState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.ExecuteUbergraph_GM_SavedState");
		
		AGM_SavedState_C_ExecuteUbergraph_GM_SavedState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.OnSaveComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledOnUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_SavedState_C::OnSaveComplete__DelegateSignature(bool CalledOnUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.OnSaveComplete__DelegateSignature");
		
		AGM_SavedState_C_OnSaveComplete__DelegateSignature_Params params {};
		params.CalledOnUpdate = CalledOnUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_SavedState.GM_SavedState_C.OnPlayerEnter__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGM_SavedState_C::OnPlayerEnter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_SavedState.GM_SavedState_C.OnPlayerEnter__DelegateSignature");
		
		AGM_SavedState_C_OnPlayerEnter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_SavedState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_SavedState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_SavedState.GM_SavedState_C");
		return ptr;
	}

}


