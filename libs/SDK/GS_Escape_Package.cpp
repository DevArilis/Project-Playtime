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
	 * 		Name   -> Function GS_Escape.GS_Escape_C.GetLeadershipLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm)
	 */
	void AGS_Escape_C::GetLeadershipLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.GetLeadershipLocations");
		
		AGS_Escape_C_GetLeadershipLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.GetLeadershipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::GetLeadershipCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.GetLeadershipCount");
		
		AGS_Escape_C_GetLeadershipCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.UpdateLeadershipPerkPlayers
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::UpdateLeadershipPerkPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.UpdateLeadershipPerkPlayers");
		
		AGS_Escape_C_UpdateLeadershipPerkPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.IsPlayerInSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           PlayerController                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerState_C*                PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGS_Escape_C::IsPlayerInSession(const class FString& PlayerID, class ABP_MultiplayerPlayerController_C** PlayerController, class ABP_MultiplayerPlayerState_C** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.IsPlayerInSession");
		
		AGS_Escape_C_IsPlayerInSession_Params params {};
		params.PlayerID = PlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.GetMonsterType
	 * 		Flags  -> ()
	 */
	ECharacterType AGS_Escape_C::GetMonsterType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.GetMonsterType");
		
		AGS_Escape_C_GetMonsterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.GetDepositedToyParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DepositedParts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::GetDepositedToyParts(int32_t* DepositedParts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.GetDepositedToyParts");
		
		AGS_Escape_C_GetDepositedToyParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DepositedParts != nullptr)
			*DepositedParts = params.DepositedParts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.IsXP_EnoughToReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GainedXP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGS_Escape_C::IsXP_EnoughToReward(int32_t GainedXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.IsXP_EnoughToReward");
		
		AGS_Escape_C_IsXP_EnoughToReward_Params params {};
		params.GainedXP = GainedXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.IsHostStillHere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGS_Escape_C::IsHostStillHere(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.IsHostStillHere");
		
		AGS_Escape_C_IsHostStillHere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.CreateMissionResultScreenWidget
	 * 		Flags  -> ()
	 */
	class UUI_MissionResultScreen_C* AGS_Escape_C::CreateMissionResultScreenWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.CreateMissionResultScreenWidget");
		
		AGS_Escape_C_CreateMissionResultScreenWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_ClearWidgets
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_ClearWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_ClearWidgets");
		
		AGS_Escape_C_OnRep_ClearWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.CanDisplayEndScreen?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGS_Escape_C::CanDisplayEndScreen(bool* CanEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.CanDisplayEndScreen?");
		
		AGS_Escape_C_CanDisplayEndScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEnd != nullptr)
			*CanEnd = params.CanEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_EndGameCategory
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_EndGameCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_EndGameCategory");
		
		AGS_Escape_C_OnRep_EndGameCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.TryToStartGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::TryToStartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.TryToStartGame");
		
		AGS_Escape_C_TryToStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.Update Living Players
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::UpdateLivingPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.Update Living Players");
		
		AGS_Escape_C_UpdateLivingPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_EndedGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_EndedGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_EndedGame");
		
		AGS_Escape_C_OnRep_EndedGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.TryLoadReady
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::TryLoadReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.TryLoadReady");
		
		AGS_Escape_C_TryLoadReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_StartedGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_StartedGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_StartedGame");
		
		AGS_Escape_C_OnRep_StartedGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.Open Monster Doors
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OpenMonsterDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.Open Monster Doors");
		
		AGS_Escape_C_OpenMonsterDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_PlayerAsMonster
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_PlayerAsMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_PlayerAsMonster");
		
		AGS_Escape_C_OnRep_PlayerAsMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.GetToyPartMeshFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EToyStatus                                         Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_ToyType                                          Override                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Held                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::GetToyPartMeshFromIndex(int32_t Index, EToyStatus Status, bool UseOverride, E_ToyType Override, bool Held, class UStaticMesh** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.GetToyPartMeshFromIndex");
		
		AGS_Escape_C_GetToyPartMeshFromIndex_Params params {};
		params.Index = Index;
		params.Status = Status;
		params.UseOverride = UseOverride;
		params.Override = Override;
		params.Held = Held;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnRep_PlayerCount
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnRep_PlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnRep_PlayerCount");
		
		AGS_Escape_C_OnRep_PlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.Tl_ExitTrain__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::Tl_ExitTrain__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.Tl_ExitTrain__FinishedFunc");
		
		AGS_Escape_C_Tl_ExitTrain__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.Tl_ExitTrain__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::Tl_ExitTrain__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.Tl_ExitTrain__UpdateFunc");
		
		AGS_Escape_C_Tl_ExitTrain__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnFailure_BB6987834192489F0F61C3999AFB2DB6
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnFailure_BB6987834192489F0F61C3999AFB2DB6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnFailure_BB6987834192489F0F61C3999AFB2DB6");
		
		AGS_Escape_C_OnFailure_BB6987834192489F0F61C3999AFB2DB6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnSuccess_BB6987834192489F0F61C3999AFB2DB6
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnSuccess_BB6987834192489F0F61C3999AFB2DB6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnSuccess_BB6987834192489F0F61C3999AFB2DB6");
		
		AGS_Escape_C_OnSuccess_BB6987834192489F0F61C3999AFB2DB6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnLoadMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::OnLoadMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnLoadMigrationData");
		
		AGS_Escape_C_OnLoadMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnSaveMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::OnSaveMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnSaveMigrationData");
		
		AGS_Escape_C_OnSaveMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.LoadMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::LoadMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.LoadMigrationData");
		
		AGS_Escape_C_LoadMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.SaveMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::SaveMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.SaveMigrationData");
		
		AGS_Escape_C_SaveMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.SetTrain
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::SetTrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.SetTrain");
		
		AGS_Escape_C_SetTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.Client_SetTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineComponent*                            Track                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::Client_SetTrain(float Distance, int32_t Index, class USplineComponent* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.Client_SetTrain");
		
		AGS_Escape_C_Client_SetTrain_Params params {};
		params.Distance = Distance;
		params.Index = Index;
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.SetIndividualPuzzleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PuzzlePillar_C*                          PuzzlePillar                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       Solved                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Progress                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<EPuzzleType>                                PuzzleTypes                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            FinalPuzzleSolved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::SetIndividualPuzzleData(class ABP_PuzzlePillar_C* PuzzlePillar, TArray<bool> Solved, TArray<int32_t> Progress, TArray<EPuzzleType> PuzzleTypes, int32_t FinalPuzzleSolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.SetIndividualPuzzleData");
		
		AGS_Escape_C_SetIndividualPuzzleData_Params params {};
		params.PuzzlePillar = PuzzlePillar;
		params.Solved = Solved;
		params.Progress = Progress;
		params.PuzzleTypes = PuzzleTypes;
		params.FinalPuzzleSolved = FinalPuzzleSolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.SetupMonsterPlayer
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::SetupMonsterPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.SetupMonsterPlayer");
		
		AGS_Escape_C_SetupMonsterPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ServerSetup
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::ServerSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ServerSetup");
		
		AGS_Escape_C_ServerSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.StartGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.StartGame");
		
		AGS_Escape_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnEndGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeadingText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        SubheadingText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               GivePoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_PlayerType                                       PlayerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::OnEndGame(const class FText& HeadingText, const class FText& SubheadingText, bool GivePoints, E_PlayerType PlayerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnEndGame");
		
		AGS_Escape_C_OnEndGame_Params params {};
		params.HeadingText = HeadingText;
		params.SubheadingText = SubheadingText;
		params.GivePoints = GivePoints;
		params.PlayerType = PlayerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ReceiveBeginPlay");
		
		AGS_Escape_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.PostXP_Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::PostXP_Success(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.PostXP_Success");
		
		AGS_Escape_C_PostXP_Success_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.PostXP_Fail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::PostXP_Fail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.PostXP_Fail");
		
		AGS_Escape_C_PostXP_Fail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ReceiveTick");
		
		AGS_Escape_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.CheckEndConditions
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::CheckEndConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.CheckEndConditions");
		
		AGS_Escape_C_CheckEndConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.EndGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.EndGame");
		
		AGS_Escape_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.UpdateLobby
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::UpdateLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.UpdateLobby");
		
		AGS_Escape_C_UpdateLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ReturnToMainMenu
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::ReturnToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ReturnToMainMenu");
		
		AGS_Escape_C_ReturnToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.PreSaveActorState
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::PreSaveActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.PreSaveActorState");
		
		AGS_Escape_C_PreSaveActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.LoadActorState
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::LoadActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.LoadActorState");
		
		AGS_Escape_C_LoadActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.UpdatedPlayers
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::UpdatedPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.UpdatedPlayers");
		
		AGS_Escape_C_UpdatedPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.InvalidJSONError
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::InvalidJSONError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.InvalidJSONError");
		
		AGS_Escape_C_InvalidJSONError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.RewardsSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::RewardsSuccess(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.RewardsSuccess");
		
		AGS_Escape_C_RewardsSuccess_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.RewardsFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::RewardsFailure(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.RewardsFailure");
		
		AGS_Escape_C_RewardsFailure_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.UpdateBestPotentialHostt
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::UpdateBestPotentialHostt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.UpdateBestPotentialHostt");
		
		AGS_Escape_C_UpdateBestPotentialHostt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.UpdateMigrationDataa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewIP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      HostName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::UpdateMigrationDataa(const class FString& NewIP, const class FString& HostName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.UpdateMigrationDataa");
		
		AGS_Escape_C_UpdateMigrationDataa_Params params {};
		params.NewIP = NewIP;
		params.HostName = HostName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ExitTrain
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::ExitTrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ExitTrain");
		
		AGS_Escape_C_ExitTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.ExecuteUbergraph_GS_Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_C::ExecuteUbergraph_GS_Escape(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.ExecuteUbergraph_GS_Escape");
		
		AGS_Escape_C_ExecuteUbergraph_GS_Escape_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape.GS_Escape_C.OnUpdatedPlayers__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGS_Escape_C::OnUpdatedPlayers__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape.GS_Escape_C.OnUpdatedPlayers__DelegateSignature");
		
		AGS_Escape_C_OnUpdatedPlayers__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGS_Escape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGS_Escape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GS_Escape.GS_Escape_C");
		return ptr;
	}

}


