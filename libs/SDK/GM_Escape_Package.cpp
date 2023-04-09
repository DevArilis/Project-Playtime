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
	 * 		Name   -> Function GM_Escape.GM_Escape_C.CheckIfGameCanContinue
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::CheckIfGameCanContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.CheckIfGameCanContinue");
		
		AGM_Escape_C_CheckIfGameCanContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SetPlayerAsWorldMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMonster*                                    Monster                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::SetPlayerAsWorldMonster(class APlayerState* PlayerState, class ABP_MultiplayerPlayerController_C* PlayerController, const struct FTransform& Transform, bool* Success, class AMonster** Monster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SetPlayerAsWorldMonster");
		
		AGM_Escape_C_SetPlayerAsWorldMonster_Params params {};
		params.PlayerState = PlayerState;
		params.PlayerController = PlayerController;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Monster != nullptr)
			*Monster = params.Monster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SetupPlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::SetupPlayerPawn(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SetupPlayerPawn");
		
		AGM_Escape_C_SetupPlayerPawn_Params params {};
		params.ID = ID;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.GetLivingSurvivors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_MultiplayerPlayerState_C*>        LivingSurvivors                                            (Parm, OutParm)
	 */
	void AGM_Escape_C::GetLivingSurvivors(TArray<class ABP_MultiplayerPlayerState_C*>* LivingSurvivors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.GetLivingSurvivors");
		
		AGM_Escape_C_GetLivingSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LivingSurvivors != nullptr)
			*LivingSurvivors = params.LivingSurvivors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.DoAllPlayersHaveAPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Escape_C::DoAllPlayersHaveAPawn(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.DoAllPlayersHaveAPawn");
		
		AGM_Escape_C_DoAllPlayersHaveAPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.RotateMaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NextMapName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::RotateMaps(class FString* NextMapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.RotateMaps");
		
		AGM_Escape_C_RotateMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextMapName != nullptr)
			*NextMapName = params.NextMapName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SetupMapsArray
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::SetupMapsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SetupMapsArray");
		
		AGM_Escape_C_SetupMapsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.LoadState
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::LoadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.LoadState");
		
		AGM_Escape_C_LoadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.PlayersInPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::PlayersInPlay(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.PlayersInPlay");
		
		AGM_Escape_C_PlayersInPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.UpdatePlayers
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::UpdatePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.UpdatePlayers");
		
		AGM_Escape_C_UpdatePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.ReadyToStartMatch
	 * 		Flags  -> ()
	 */
	bool AGM_Escape_C::ReadyToStartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.ReadyToStartMatch");
		
		AGM_Escape_C_ReadyToStartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.GetEndConditionResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndGameCategory                                  EndGame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerWinCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ended                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Escape_C::GetEndConditionResults(E_EndGameCategory* EndGame, int32_t* PlayerWinCount, bool* Ended)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.GetEndConditionResults");
		
		AGM_Escape_C_GetEndConditionResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndGame != nullptr)
			*EndGame = params.EndGame;
		if (PlayerWinCount != nullptr)
			*PlayerWinCount = params.PlayerWinCount;
		if (Ended != nullptr)
			*Ended = params.Ended;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.UpdatePlayerStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::UpdatePlayerStates(bool Remove, class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.UpdatePlayerStates");
		
		AGM_Escape_C_UpdatePlayerStates_Params params {};
		params.Remove = Remove;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.CreateCrosshairWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::CreateCrosshairWidget(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.CreateCrosshairWidget");
		
		AGM_Escape_C_CreateCrosshairWidget_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SpawnToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ToyPart_C*                               SpawnedToyPart                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::SpawnToyPart(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class ABP_ToyPart_C** SpawnedToyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SpawnToyPart");
		
		AGM_Escape_C_SpawnToyPart_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedToyPart != nullptr)
			*SpawnedToyPart = params.SpawnedToyPart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.GetLobbyPreSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ABP_Lobby_PlayerSlot_C* AGM_Escape_C::GetLobbyPreSlot(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.GetLobbyPreSlot");
		
		AGM_Escape_C_GetLobbyPreSlot_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SpawnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::SpawnPlayer(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SpawnPlayer");
		
		AGM_Escape_C_SpawnPlayer_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SpawnMonsterWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::SpawnMonsterWidget(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SpawnMonsterWidget");
		
		AGM_Escape_C_SpawnMonsterWidget_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SelectPlayerToBeMonster
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::SelectPlayerToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SelectPlayerToBeMonster");
		
		AGM_Escape_C_SelectPlayerToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.ChoosePlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* AGM_Escape_C::ChoosePlayerStart(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.ChoosePlayerStart");
		
		AGM_Escape_C_ChoosePlayerStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.K2_OnLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::K2_OnLogout(class AController* ExitingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.K2_OnLogout");
		
		AGM_Escape_C_K2_OnLogout_Params params {};
		params.ExitingController = ExitingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.K2_OnRestartPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::K2_OnRestartPlayer(class AController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.K2_OnRestartPlayer");
		
		AGM_Escape_C_K2_OnRestartPlayer_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.ReceiveTick");
		
		AGM_Escape_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.ReceiveBeginPlay");
		
		AGM_Escape_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.SaveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledOnUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Escape_C::SaveCompleted(bool CalledOnUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.SaveCompleted");
		
		AGM_Escape_C_SaveCompleted_Params params {};
		params.CalledOnUpdate = CalledOnUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.MakePlayerMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MultiplayerPlayerController_C*           PlayerController                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::MakePlayerMonster(class ABP_MultiplayerPlayerController_C* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.MakePlayerMonster");
		
		AGM_Escape_C_MakePlayerMonster_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.DenyPlayerMonster
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::DenyPlayerMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.DenyPlayerMonster");
		
		AGM_Escape_C_DenyPlayerMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.AskToBeMonster
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::AskToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.AskToBeMonster");
		
		AGM_Escape_C_AskToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.Start_AskToBeMonster
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::Start_AskToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.Start_AskToBeMonster");
		
		AGM_Escape_C_Start_AskToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.HandleStartingNewPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::HandleStartingNewPlayer(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.HandleStartingNewPlayer");
		
		AGM_Escape_C_HandleStartingNewPlayer_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.CheckForSpectators
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::CheckForSpectators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.CheckForSpectators");
		
		AGM_Escape_C_CheckForSpectators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.StartEarlyDepartureTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartEarlyDepartureTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.StartEarlyDepartureTimer");
		
		AGM_Escape_C_StartEarlyDepartureTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.EarlyDeparture
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::EarlyDeparture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.EarlyDeparture");
		
		AGM_Escape_C_EarlyDeparture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.AddTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AddedTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::AddTime(float AddedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.AddTime");
		
		AGM_Escape_C_AddTime_Params params {};
		params.AddedTime = AddedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.StartNewGame
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.StartNewGame");
		
		AGM_Escape_C_StartNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.Start NewGameTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartNewGameTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.Start NewGameTimer");
		
		AGM_Escape_C_StartNewGameTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.K2_OnSetMatchState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::K2_OnSetMatchState(const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.K2_OnSetMatchState");
		
		AGM_Escape_C_K2_OnSetMatchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.StartEscapeTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartEscapeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.StartEscapeTimer");
		
		AGM_Escape_C_StartEscapeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.StartPullDownTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartPullDownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.StartPullDownTimer");
		
		AGM_Escape_C_StartPullDownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.Time Ran Out
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::TimeRanOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.Time Ran Out");
		
		AGM_Escape_C_TimeRanOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.StartToyCollectionTimer
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::StartToyCollectionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.StartToyCollectionTimer");
		
		AGM_Escape_C_StartToyCollectionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.MonsterSelect
	 * 		Flags  -> ()
	 */
	void AGM_Escape_C::MonsterSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.MonsterSelect");
		
		AGM_Escape_C_MonsterSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Escape.GM_Escape_C.ExecuteUbergraph_GM_Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Escape_C::ExecuteUbergraph_GM_Escape(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Escape.GM_Escape_C.ExecuteUbergraph_GM_Escape");
		
		AGM_Escape_C_ExecuteUbergraph_GM_Escape_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_Escape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Escape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Escape.GM_Escape_C");
		return ptr;
	}

}


