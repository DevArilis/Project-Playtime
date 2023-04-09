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
	 * BlueprintGeneratedClass MultiplayerGameInstance.MultiplayerGameInstance_C
	 * Size -> 0x0167 (FullSize[0x0478] - InheritedSize[0x0311])
	 */
	class UMultiplayerGameInstance_C : public UGI_SavedState_C
	{
	public:
		unsigned char                                              UnknownData_465Z[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_MP_ServerBrowser_C*                              ServerBrowser;                                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBlueprintSessionResult>                     FriendSessions;                                          // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Maps;                                                    // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       MapsSetup;                                               // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DNYP[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FSteamSessionSetting>           SteamSessionSettings;                                    // 0x0350(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SessionName;                                             // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UTooltipSaveGame*                                    SaveTooltips_Instance;                                   // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EOS_SessionName;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             EOSOnlineSearch;                                         // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSessionPropertyKeyPair>                     AdvancedSessionSettings;                                 // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_ShopItem_C*                                      ShopItem;                                                // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    XP;                                                      // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9F0F[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BattlepassResponse;                                      // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSteamInventoryResult                               SteamInventoryHandle;                                    // 0x03F8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasSteamInventoryHandle;                                 // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GD82[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FoundSteamInventory;                                     // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       FindingSteamInventoryHandle;                             // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S3V8[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSteamItemDetails>                           SteamItems;                                              // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnXPUpdate;                                              // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HostLeft;                                                // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasReceivedXPDataFromAPI;                                // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GT4T[0x6];                                   // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     Music;                                                   // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SearchingForGame;                                        // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6LE1[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSteamSessionResult>                         QuickplaySessions;                                       // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    QuickplaySearchIndex;                                    // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BJ4[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_LoadingScreen_C*                                 MigrationScreen;                                         // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_FindingGame_C*                                   FindingGameScreen;                                       // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ResetMaps();
		void RotateMaps(class FString* NextMap);
		void SetupMapsArray();
		void OnCallback_62079A364D969584CEDCFD99FC59A3B5();
		void OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F();
		void OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A();
		void OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA();
		void OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA();
		void OnCallback_AC5022514E5563A35427C0A3F2B2AAD7(TArray<struct FSteamSessionResult> Results);
		void OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5();
		void OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5();
		void OnCallback_559C155742B5D576C94A04A11F3E41DC(TArray<struct FSteamSessionResult> Results);
		void OnFailure_9994764946AE5A8A9EAA0ABCF23AF456();
		void OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456();
		void ReceiveInit();
		void ReceiveShutdown();
		void OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
		void GetSteamHandle();
		void UpdateXP(int32_t XP);
		void OnSessionInviteReceived(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppID, const struct FBlueprintSessionResult& SessionToJoin);
		void QuickplayStartSearch();
		void AttemptJoinCurrentGame();
		void SuccessfullyJoinedGame();
		void DisplayMigrationScreen(const class FString& LoadingMessage, bool DisplayTimer);
		void HideMigrationScreen();
		void FindServers(E_ServerCategory Selection);
		void HandleTravelError(ETravelFailure FailureType);
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void CreateServer(TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, const class FString& Level);
		void UpdateSteamCoreSession(const class FString& Key, bool Value);
		void UpdateSessionSettings(TMap<class FString, struct FSteamSessionSearchSetting> NewSessionSettings);
		void UpdateMatchStarted(bool MatchStarted);
		void ExecuteUbergraph_MultiplayerGameInstance(int32_t EntryPoint);
		void OnXPUpdate__DelegateSignature(int32_t XP);
		void FoundSteamInventory__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
