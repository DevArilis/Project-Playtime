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
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.ResetMaps
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::ResetMaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.ResetMaps");
		
		UMultiplayerGameInstance_C_ResetMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.RotateMaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NextMap                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::RotateMaps(class FString* NextMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.RotateMaps");
		
		UMultiplayerGameInstance_C_RotateMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextMap != nullptr)
			*NextMap = params.NextMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.SetupMapsArray
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::SetupMapsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.SetupMapsArray");
		
		UMultiplayerGameInstance_C_SetupMapsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_62079A364D969584CEDCFD99FC59A3B5
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnCallback_62079A364D969584CEDCFD99FC59A3B5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_62079A364D969584CEDCFD99FC59A3B5");
		
		UMultiplayerGameInstance_C_OnCallback_62079A364D969584CEDCFD99FC59A3B5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F");
		
		UMultiplayerGameInstance_C_OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A");
		
		UMultiplayerGameInstance_C_OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA");
		
		UMultiplayerGameInstance_C_OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA");
		
		UMultiplayerGameInstance_C_OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_AC5022514E5563A35427C0A3F2B2AAD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamSessionResult>                 Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMultiplayerGameInstance_C::OnCallback_AC5022514E5563A35427C0A3F2B2AAD7(TArray<struct FSteamSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_AC5022514E5563A35427C0A3F2B2AAD7");
		
		UMultiplayerGameInstance_C_OnCallback_AC5022514E5563A35427C0A3F2B2AAD7_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5");
		
		UMultiplayerGameInstance_C_OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5");
		
		UMultiplayerGameInstance_C_OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_559C155742B5D576C94A04A11F3E41DC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamSessionResult>                 Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMultiplayerGameInstance_C::OnCallback_559C155742B5D576C94A04A11F3E41DC(TArray<struct FSteamSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_559C155742B5D576C94A04A11F3E41DC");
		
		UMultiplayerGameInstance_C_OnCallback_559C155742B5D576C94A04A11F3E41DC_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_9994764946AE5A8A9EAA0ABCF23AF456
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnFailure_9994764946AE5A8A9EAA0ABCF23AF456()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_9994764946AE5A8A9EAA0ABCF23AF456");
		
		UMultiplayerGameInstance_C_OnFailure_9994764946AE5A8A9EAA0ABCF23AF456_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456");
		
		UMultiplayerGameInstance_C_OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveInit");
		
		UMultiplayerGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveShutdown
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::ReceiveShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveShutdown");
		
		UMultiplayerGameInstance_C_ReceiveShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMultiplayerGameInstance_C::OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteAccepted");
		
		UMultiplayerGameInstance_C_OnSessionInviteAccepted_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInvited = PersonInvited;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.GetSteamHandle
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::GetSteamHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.GetSteamHandle");
		
		UMultiplayerGameInstance_C_GetSteamHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::UpdateXP(int32_t XP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateXP");
		
		UMultiplayerGameInstance_C_UpdateXP_Params params {};
		params.XP = XP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPUniqueNetId                              PersonInviting                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      AppID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMultiplayerGameInstance_C::OnSessionInviteReceived(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppID, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteReceived");
		
		UMultiplayerGameInstance_C_OnSessionInviteReceived_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInviting = PersonInviting;
		params.AppID = AppID;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.QuickplayStartSearch
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::QuickplayStartSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.QuickplayStartSearch");
		
		UMultiplayerGameInstance_C_QuickplayStartSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.AttemptJoinCurrentGame
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::AttemptJoinCurrentGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.AttemptJoinCurrentGame");
		
		UMultiplayerGameInstance_C_AttemptJoinCurrentGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.SuccessfullyJoinedGame
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::SuccessfullyJoinedGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.SuccessfullyJoinedGame");
		
		UMultiplayerGameInstance_C_SuccessfullyJoinedGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.DisplayMigrationScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LoadingMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               DisplayTimer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMultiplayerGameInstance_C::DisplayMigrationScreen(const class FString& LoadingMessage, bool DisplayTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.DisplayMigrationScreen");
		
		UMultiplayerGameInstance_C_DisplayMigrationScreen_Params params {};
		params.LoadingMessage = LoadingMessage;
		params.DisplayTimer = DisplayTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.HideMigrationScreen
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::HideMigrationScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.HideMigrationScreen");
		
		UMultiplayerGameInstance_C_HideMigrationScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.FindServers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ServerCategory                                   Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::FindServers(E_ServerCategory Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.FindServers");
		
		UMultiplayerGameInstance_C_FindServers_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleTravelError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETravelFailure                                     FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::HandleTravelError(ETravelFailure FailureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleTravelError");
		
		UMultiplayerGameInstance_C_HandleTravelError_Params params {};
		params.FailureType = FailureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleNetworkError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetworkFailure                                    FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMultiplayerGameInstance_C::HandleNetworkError(ENetworkFailure FailureType, bool bIsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleNetworkError");
		
		UMultiplayerGameInstance_C_HandleNetworkError_Params params {};
		params.FailureType = FailureType;
		params.bIsServer = bIsServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.CreateServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PublicConnections                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PrivateConnections                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseLAN                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowInvites                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDedicatedServer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsePresence                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseLobbiesIfAvailable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowJoinViaPresence                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowJoinViaPresenceFriendsOnly                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAntiCheatProtected                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsesStats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldAdvertise                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseLobbiesVoiceChatIfAvailable                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::CreateServer(TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, const class FString& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.CreateServer");
		
		UMultiplayerGameInstance_C_CreateServer_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.PlayerController = PlayerController;
		params.PublicConnections = PublicConnections;
		params.PrivateConnections = PrivateConnections;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bIsDedicatedServer = bIsDedicatedServer;
		params.bUsePresence = bUsePresence;
		params.bUseLobbiesIfAvailable = bUseLobbiesIfAvailable;
		params.bAllowJoinViaPresence = bAllowJoinViaPresence;
		params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
		params.bAntiCheatProtected = bAntiCheatProtected;
		params.bUsesStats = bUsesStats;
		params.bShouldAdvertise = bShouldAdvertise;
		params.bUseLobbiesVoiceChatIfAvailable = bUseLobbiesVoiceChatIfAvailable;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSteamCoreSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMultiplayerGameInstance_C::UpdateSteamCoreSession(const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSteamCoreSession");
		
		UMultiplayerGameInstance_C_UpdateSteamCoreSession_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSessionSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, struct FSteamSessionSearchSetting> NewSessionSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMultiplayerGameInstance_C::UpdateSessionSettings(TMap<class FString, struct FSteamSessionSearchSetting> NewSessionSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSessionSettings");
		
		UMultiplayerGameInstance_C_UpdateSessionSettings_Params params {};
		params.NewSessionSettings = NewSessionSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateMatchStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MatchStarted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMultiplayerGameInstance_C::UpdateMatchStarted(bool MatchStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateMatchStarted");
		
		UMultiplayerGameInstance_C_UpdateMatchStarted_Params params {};
		params.MatchStarted = MatchStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.ExecuteUbergraph_MultiplayerGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::ExecuteUbergraph_MultiplayerGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.ExecuteUbergraph_MultiplayerGameInstance");
		
		UMultiplayerGameInstance_C_ExecuteUbergraph_MultiplayerGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnXPUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultiplayerGameInstance_C::OnXPUpdate__DelegateSignature(int32_t XP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnXPUpdate__DelegateSignature");
		
		UMultiplayerGameInstance_C_OnXPUpdate__DelegateSignature_Params params {};
		params.XP = XP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiplayerGameInstance.MultiplayerGameInstance_C.FoundSteamInventory__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMultiplayerGameInstance_C::FoundSteamInventory__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerGameInstance.MultiplayerGameInstance_C.FoundSteamInventory__DelegateSignature");
		
		UMultiplayerGameInstance_C_FoundSteamInventory__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiplayerGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiplayerGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MultiplayerGameInstance.MultiplayerGameInstance_C");
		return ptr;
	}

}


