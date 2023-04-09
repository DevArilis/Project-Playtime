#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GM_Escape.GM_Escape_C
	 * Size -> 0x013C (FullSize[0x051C] - InheritedSize[0x03E0])
	 */
	class AGM_Escape_C : public AGM_SavedState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_MultiplayerPlayerController_C*                   MonsterSelection;                                        // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ClassToSpawn;                                            // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGS_Escape_C*                                        GS_Escape;                                               // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Won;                                                     // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJZS[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        GameTimer;                                               // 0x0408(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        NewGameTimer;                                            // 0x0410(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      ToyCollectionDuration;                                   // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PipePulldownDuration;                                    // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EscapeDuration;                                          // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_EndGameCategory                                          Cached_EndGame;                                          // 0x0424(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ended;                                                   // 0x0425(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVE9[0x2];                                   // 0x0426(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewGameDuration;                                         // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JS5J[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        AutoStartTimer;                                          // 0x0430(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      AutoStartDelay;                                          // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WKHP[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_NetworkCharacter_C*>                      NetworkCharacters;                                       // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_MultiplayerPlayerState_C*>                MP_PlayerStates;                                         // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_MultiplayerPlayerController_C*>           MP_PlayerControllers;                                    // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FActorReference>                             AllPawns;                                                // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Migrating;                                               // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MatchStarted;                                            // 0x0481(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q783[0x6];                                   // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_MultiplayerPlayerController_C*>           PlayersToBeMonster;                                      // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        Timer_AskPlayerToBeMonster;                              // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinNumberOfPlayersToStart;                               // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LZKW[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Maps[0x10];                                              // 0x04A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       SetupMaps;                                               // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMO5[0x3];                                   // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeRemaining;                                           // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APlayerController*>                           Cached_EagerPlayers;                                     // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        CheckForSpectators_Timer;                                // 0x04D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       EarlyDepartureActivated;                                 // 0x04D8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I5OK[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MonsterSpawn;                                            // 0x04E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        T_MonsterSelectTimer;                                    // 0x0510(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnedPlayers;                                          // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckIfGameCanContinue();
		void SetPlayerAsWorldMonster(class APlayerState* PlayerState, class ABP_MultiplayerPlayerController_C* PlayerController, const struct FTransform& Transform, bool* Success, class AMonster** Monster);
		void SetupPlayerPawn(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller);
		void GetLivingSurvivors(TArray<class ABP_MultiplayerPlayerState_C*>* LivingSurvivors);
		void DoAllPlayersHaveAPawn(bool* Value);
		void RotateMaps(class FString* NextMapName);
		void SetupMapsArray();
		void LoadState();
		void PlayersInPlay(int32_t* Count);
		void UpdatePlayers();
		bool ReadyToStartMatch();
		void GetEndConditionResults(E_EndGameCategory* EndGame, int32_t* PlayerWinCount, bool* Ended);
		void UpdatePlayerStates(bool Remove, class APlayerState* PlayerState);
		void CreateCrosshairWidget(class AController* Controller);
		void SpawnToyPart(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class ABP_ToyPart_C** SpawnedToyPart);
		class ABP_Lobby_PlayerSlot_C* GetLobbyPreSlot(class APawn* Pawn);
		void SpawnPlayer(class APlayerController* PlayerController);
		void SpawnMonsterWidget(class APlayerController* PlayerController);
		void SelectPlayerToBeMonster();
		class AActor* ChoosePlayerStart(class AController* Player);
		void K2_OnLogout(class AController* ExitingController);
		void K2_OnRestartPlayer(class AController* NewPlayer);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void SaveCompleted(bool CalledOnUpdate);
		void MakePlayerMonster(class ABP_MultiplayerPlayerController_C* PlayerController);
		void DenyPlayerMonster();
		void AskToBeMonster();
		void Start_AskToBeMonster();
		void HandleStartingNewPlayer(class APlayerController* NewPlayer);
		void CheckForSpectators();
		void StartEarlyDepartureTimer();
		void EarlyDeparture();
		void AddTime(float AddedTime);
		void StartNewGame();
		void StartNewGameTimer();
		void K2_OnSetMatchState(const class FName& NewState);
		void StartEscapeTimer();
		void StartPullDownTimer();
		void TimeRanOut();
		void StartToyCollectionTimer();
		void MonsterSelect();
		void ExecuteUbergraph_GM_Escape(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
