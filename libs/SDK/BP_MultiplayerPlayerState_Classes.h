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
	 * BlueprintGeneratedClass BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C
	 * Size -> 0x00A0 (FullSize[0x03F0] - InheritedSize[0x0350])
	 */
	class ABP_MultiplayerPlayerState_C : public APlaytimePlayerState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Gestures;                                                // 0x0360(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		class FName                                                Clothes;                                                 // 0x0370(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class FName                                                Emote;                                                   // 0x0378(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Skins;                                                   // 0x0380(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		bool                                                       Ready;                                                   // 0x0390(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Won;                                                     // 0x0391(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Down;                                                    // 0x0392(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       HasSavedProperties;                                      // 0x0393(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9SR3[0xC];                                   // 0x0394(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastTransform;                                           // 0x03A0(0x0030) Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InWuggyHole;                                             // 0x03D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81R2[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentTrainCart;                                        // 0x03D4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_PlayerStatus                                             PlayerStatus;                                            // 0x03D8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMonster;                                               // 0x03D9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_115K[0x2];                                   // 0x03DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamInventoryResult                               UnsafeSteamInventoryResultStructure;                     // 0x03DC(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UUI_InGameNotificationList_C*                        UIinGameNotificationList;                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USteamCoreVoice*                                     SoundObj;                                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Down();
		void OnRep_Won();
		void OnRep_Ready();
		void OnRep_Clothes();
		void OnRep_Emote();
		void OnRep_Skins();
		void OnRep_Gestures();
		void BP_OnRep_EarnedTickets();
		void BP_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName);
		void Server_ReadyToStart(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller);
		void UpdateSavedProperties();
		void Client_ReadyToStart();
		void ReceiveDestroyed();
		void ReceiveCopyProperties(class APlayerState* NewPlayerState);
		void ReceiveOverrideWith(class APlayerState* OldPlayerState);
		void ReceiveBeginPlay();
		void ReplicateAudioData(TArray<unsigned char> CompressedBuffer, int32_t DesiredSampleRate);
		void TryReady(bool Ready);
		void BeginPlay_VoiceChat();
		void ExecuteUbergraph_BP_MultiplayerPlayerState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
