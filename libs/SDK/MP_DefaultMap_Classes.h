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
	 * BlueprintGeneratedClass MP_DefaultMap.MP_DefaultMap_C
	 * Size -> 0x0134 (FullSize[0x035C] - InheritedSize[0x0228])
	 */
	class AMP_DefaultMap_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MigrationTimeout;                                        // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_70FD[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_Timout;                                            // 0x0238(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FSteamSessionResult                                 Session;                                                 // 0x0240(0x0118) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MigrationAttempts;                                       // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShouldPlayIntro(bool* Should);
		class FString GetReconnectConsoleCommand(const class FString& NewHostIP);
		void OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8();
		void OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8();
		void OnCallback_A6336C8F4158FC455E22909FE6D5133B(TArray<struct FSteamSessionResult> Results);
		void OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E();
		void OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E();
		void OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7();
		void OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7();
		void OnTimeout();
		void AttempMigrateClient();
		void MigrateClient();
		void MigrateHost();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_MP_DefaultMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
