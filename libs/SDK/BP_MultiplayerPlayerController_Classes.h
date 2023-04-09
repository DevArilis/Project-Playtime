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
	 * BlueprintGeneratedClass BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C
	 * Size -> 0x005D (FullSize[0x0606] - InheritedSize[0x05A9])
	 */
	class ABP_MultiplayerPlayerController_C : public APC_SavedState_C
	{
	public:
		unsigned char                                              UnknownData_NWFJ[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioCaptureComponent*                              AudioCapture;                                            // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUI_SurvivorHUD_C*                                   Crosshair;                                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_WalkableLobby_C*                                 LobbyUI;                                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldStillLookForLobby;                                 // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8619[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Chat_C*                                          Chat;                                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_PauseMenu_C*                                     W_PauseMenu;                                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_LoadingScreen_C*                                 LoadingScreen;                                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_AskToBeMonster_C*                                W_AskToBeMonster;                                        // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_MonsterHUD_C*                                    MonsterHUD;                                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SampleRate;                                              // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScoreboardOpen;                                        // 0x0604(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MakingPreset;                                            // 0x0605(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InLobby(bool* Value);
		void SpawnAndPossess(class UClass* Class, class APlayerController* Player, const class FName& SpawnTag);
		void InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_B_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Enter_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void Client_ReadyToStart();
		void Server_ReadyToStart(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller);
		void SetSessionName(const class FName& SessionName);
		void NetSpawnMonster(class UClass* ClassToSpawn, class APlayerController* Player);
		void CreateMonsterWidget();
		void NetAddVelocityToGrabbedActor(class UStaticMeshComponent* StaticMesh, const struct FVector& Velocity);
		void ReceiveTick(float DeltaSeconds);
		void Client_DisplayMigrationScreen(const class FString& LoadingMessage);
		void Client_RemoveAllWidgets();
		void BeginPlay_Widgets();
		void HideMigrationWidget();
		void StartGameAnim();
		void SetUIMode();
		void ReceiveBeginPlay();
		void SetupLobby();
		void RemoveLoadingScreen();
		void CreateLoadingScreen();
		void ClearLobbyUI();
		void DestroyLobbyUI();
		void ReceivePossess(class APawn* PossessedPawn);
		void CreateCrosshairWidget(E_ToyType ToySelection);
		void Client_ResetHostMigration();
		void OnUnpause();
		void CreateChatWidget();
		void DeliverMessage(const class FString& SenderName, const class FString& Message, const struct FBPUniqueNetId& SenderID);
		void ReceiveMessage(const class FString& SenderName, const class FString& Message, const struct FBPUniqueNetId& SenderID);
		void SendMessage(const class FText& Message);
		void Server_No();
		void Server_Yes(class ABP_MultiplayerPlayerController_C* PlayerController);
		void No();
		void Yes();
		void Remove_AskToBeMonster();
		void Create_AskToBeMonster();
		void Tick_VoiceChat();
		void SendAudioData(TArray<unsigned char> CompressedBuffer);
		void BeginPlay_VoiceChat();
		void Server_RecieveQueueData(int32_t PlayerID, const struct FQueueData& Data);
		void Owner_RequestQueueData();
		void ExecuteUbergraph_BP_MultiplayerPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
