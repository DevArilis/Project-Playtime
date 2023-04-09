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
	 * BlueprintGeneratedClass GM_MultiplayerGameMode.GM_MultiplayerGameMode_C
	 * Size -> 0x005C (FullSize[0x031C] - InheritedSize[0x02C0])
	 */
	class AGM_MultiplayerGameMode_C : public AGameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ClassToSpawn;                                            // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SMComp;                                                  // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          SpawnTransformToUse;                                     // 0x02E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerCount;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameStarted;                                             // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_ToyType                                                  ToySelection;                                            // 0x0315(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ToySelected;                                             // 0x0316(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O8X7[0x1];                                   // 0x0317(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentToyIndex;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		E_ToyType GetSelectedToy();
		void GetToyPartMeshFromIndex(int32_t Index, class UStaticMesh** StaticMesh);
		void SpawnToyPart(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
		E_ToyType SelectToy();
		void StartGame(class APlayerController* Player);
		void SpawnPlayerifGameStarted(class APlayerController* Player);
		bool DebugServerMonsters(class APlayerController* Player);
		bool DebugClientMonsters(class APlayerController* Player);
		void SpawnMonster(class UClass* ClassToSpawn, class APlayerController* Player);
		void SpawnMonsterWidget(class APlayerController* Player);
		void SpawnPlayer(class APlayerController* Player);
		bool RandomizePlayerMonster();
		void K2_PostLogin(class APlayerController* NewPlayer);
		void K2_OnLogout(class AController* ExitingController);
		void ExecuteUbergraph_GM_MultiplayerGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
