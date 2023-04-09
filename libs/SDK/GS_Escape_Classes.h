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
	 * BlueprintGeneratedClass GS_Escape.GS_Escape_C
	 * Size -> 0x0130 (FullSize[0x0460] - InheritedSize[0x0330])
	 */
	class AGS_Escape_C : public APlaytimeGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Tl_ExitTrain_Alpha_5653E4A54861FCD8E8FE7EBFCE7927A4;     // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Tl_ExitTrain__Direction_5653E4A54861FCD8E8FE7EBFCE7927A4; // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RF7Z[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Tl_ExitTrain;                                            // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartedGame;                                             // 0x0350(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       EndedGame;                                               // 0x0351(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_ARZ2[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerCount;                                             // 0x0354(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPlayers;                                              // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentToyPartIndex;                                     // 0x035C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_ToyType                                                  ToySelection;                                            // 0x0360(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_24XY[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerAsMonster;                                         // 0x0364(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TArray<class APlayerState*>                                Players;                                                 // 0x0368(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       MonsterWin;                                              // 0x0378(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z6WD[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerWinCount;                                          // 0x037C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_NetworkCharacter_C*>                      LivingPlayers;                                           // 0x0380(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       NormalGame;                                              // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SL1B[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeRemaining;                                           // 0x0394(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipLobby;                                               // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P8LR[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_MultiplayerPlayerState_C*                        Monster;                                                 // 0x03A0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_EndGameCategory                                          EndGameCategory;                                         // 0x03A8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KVCE[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Cached_PlayerWinCount;                                   // 0x03AC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewGameTimeRemaining;                                    // 0x03B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B2IC[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_WinScreen_C*                                     W_EndScreen;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_EndGameCategory                                          Cached_EndGame;                                          // 0x03C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ended;                                                   // 0x03C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LoadingScreenWidget;                                     // 0x03C2(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_X6X0[0x1];                                   // 0x03C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoStartTimeRemaing;                                    // 0x03C4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AskToBeMonsterTimeRemaining;                             // 0x03C8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W8G6[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdatedPlayers;                                        // 0x03D0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ABP_NetworkCharacter_C*>                      Survivors;                                               // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      StartGameTimeInSeconds;                                  // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalMatchTimeInSeconds;                                 // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_MissionResultScreen_C*                           MissionResultScreenWidget;                               // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OldXP;                                                   // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MHQ3[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ToyMachine_C*                                    ToyMachine;                                              // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NetworkTrain_C*                                  Train;                                                   // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             WorldMonster;                                            // 0x0418(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EarlyDeparture;                                          // 0x0419(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0GK6[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NextLevel;                                               // 0x0420(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      MonsterSelectTime;                                       // 0x0430(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CachedXP;                                                // 0x0434(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_NetworkCharacter_C*>                      LeadershipPerkPlayers;                                   // 0x0438(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_ToyPuzzle_C*>                             LocalPuzzles;                                            // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_ToyPuzzle_C*                                     LocalPuzzle;                                             // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLeadershipLocations(TArray<struct FVector>* Locations);
		void GetLeadershipCount(int32_t* Count);
		void UpdateLeadershipPerkPlayers();
		bool IsPlayerInSession(const class FString& PlayerID, class ABP_MultiplayerPlayerController_C** PlayerController, class ABP_MultiplayerPlayerState_C** PlayerState);
		ECharacterType GetMonsterType();
		void GetDepositedToyParts(int32_t* DepositedParts);
		bool IsXP_EnoughToReward(int32_t GainedXP);
		void IsHostStillHere(bool* Value);
		class UUI_MissionResultScreen_C* CreateMissionResultScreenWidget();
		void OnRep_ClearWidgets();
		void CanDisplayEndScreen(bool* CanEnd);
		void OnRep_EndGameCategory();
		void TryToStartGame();
		void UpdateLivingPlayers();
		void OnRep_EndedGame();
		void TryLoadReady();
		void OnRep_StartedGame();
		void OpenMonsterDoors();
		void OnRep_PlayerAsMonster();
		void GetToyPartMeshFromIndex(int32_t Index, EToyStatus Status, bool UseOverride, E_ToyType Override, bool Held, class UStaticMesh** Output);
		void OnRep_PlayerCount();
		void Tl_ExitTrain__FinishedFunc();
		void Tl_ExitTrain__UpdateFunc();
		void OnFailure_BB6987834192489F0F61C3999AFB2DB6();
		void OnSuccess_BB6987834192489F0F61C3999AFB2DB6();
		void OnLoadMigrationData(class UHostMigrationData* Data);
		void OnSaveMigrationData(class UHostMigrationData* Data);
		void LoadMigrationData(class UHostMigrationData* Data);
		void SaveMigrationData(class UHostMigrationData* Data);
		void SetTrain();
		void Client_SetTrain(float Distance, int32_t Index, class USplineComponent* Track);
		void SetIndividualPuzzleData(class ABP_PuzzlePillar_C* PuzzlePillar, TArray<bool> Solved, TArray<int32_t> Progress, TArray<EPuzzleType> PuzzleTypes, int32_t FinalPuzzleSolved);
		void SetupMonsterPlayer();
		void ServerSetup();
		void StartGame();
		void OnEndGame(const class FText& HeadingText, const class FText& SubheadingText, bool GivePoints, E_PlayerType PlayerType);
		void ReceiveBeginPlay();
		void PostXP_Success(class UVaRestRequestJSON* Request);
		void PostXP_Fail(class UVaRestRequestJSON* Request);
		void ReceiveTick(float DeltaSeconds);
		void CheckEndConditions();
		void EndGame();
		void UpdateLobby();
		void ReturnToMainMenu();
		void PreSaveActorState();
		void LoadActorState();
		void UpdatedPlayers();
		void InvalidJSONError();
		void RewardsSuccess(class UVaRestRequestJSON* Request);
		void RewardsFailure(class UVaRestRequestJSON* Request);
		void UpdateBestPotentialHostt();
		void UpdateMigrationDataa(const class FString& NewIP, const class FString& HostName);
		void ExitTrain();
		void ExecuteUbergraph_GS_Escape(int32_t EntryPoint);
		void OnUpdatedPlayers__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
