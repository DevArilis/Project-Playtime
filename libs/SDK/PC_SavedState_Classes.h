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
	 * BlueprintGeneratedClass PC_SavedState.PC_SavedState_C
	 * Size -> 0x0039 (FullSize[0x05A9] - InheritedSize[0x0570])
	 */
	class APC_SavedState_C : public APlaytimePlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              PlayerID_HMS;                                            // 0x0578(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Spawned_HMS;                                             // 0x0588(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PBKU[0x3];                                   // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReconnectTimeout_HMS;                                    // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Migrated;                                                // 0x0590(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9Z0I[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      RecievedStateBuffer_HMS;                                 // 0x0598(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UsedEscapeInputOnNotif;                                  // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnFailure_9333D48E4D2307DA706098AF292C6DF1();
		void OnSuccess_9333D48E4D2307DA706098AF292C6DF1();
		void OnFailure_5FD5EAD44EC8654AC4C0D291985C3F07();
		void OnSuccess_5FD5EAD44EC8654AC4C0D291985C3F07();
		void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void MigrateGameClient(const class FName& LevelName);
		void GI_SetState(const struct FGameSave& LastState);
		void GI_SetNewHostIP(const class FString& IP);
		void ServerSetID(const class FString& MySteamID);
		void GetMyID();
		void GM_Enter();
		void OnPlayerEnter();
		void ServerSetSpawned(bool Spawned);
		void Migrate();
		void RecieveGameState(TArray<unsigned char> Bytes);
		void RecieveGameStateChunk(TArray<unsigned char> Chunk, bool Final, int32_t totalSize);
		void ExecuteUbergraph_PC_SavedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
