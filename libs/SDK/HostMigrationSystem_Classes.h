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
	 * Class HostMigrationSystem.FL_HostMigration
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_HostMigration : public UBlueprintFunctionLibrary
	{
	public:
		void SwitchMakeReference(class AActor* Actor, struct FActorReference* Reference, bool* Yes);
		class UClass* StringToClass(const class FString& ClassName);
		void StartSaveGameActors(class UObject* WorldContextObject, class AGM_SavedState_Base* GameMode, bool IgnoreHostPawn);
		bool ShouldLoadActor(TArray<struct FActorState> Actors, class AActor* ToCheck);
		TArray<unsigned char> SerializeObject(class UObject* Object, bool SaveGameTagOnly, bool SaveDefaults);
		struct FActorSave SerializeActor(class AActor* Actor, TArray<class FString> ComponentNames, TArray<class FString> CustomPropertyNames);
		bool MakeReference(class AActor* Actor, struct FActorReference* Reference);
		void IsPlayerControllerInSession(class UObject* WorldContextObject, class APlayerController* PlayerController, bool* InSession);
		class AActor* GetReference(class UObject* WorldContextObject, const struct FActorReference& Reference);
		class FString GetPublicIp(class APlayerController* PC);
		void GetPlayerUniqueNetID(class APlayerController* PlayerController, class FString* ID, bool* IsValid);
		class UActorComponent* GetComponentByName(class AActor* Parent, const class FString& Name);
		void GetByteChunk(TArray<unsigned char> Bytes, int32_t StartIndex, int32_t ChunkSize, TArray<unsigned char>* Chunk);
		TArray<unsigned char> GameSaveToBytes(const struct FGameSave& GameSave);
		void DeserializeObject(class UObject* Object, TArray<unsigned char> Bytes, bool SaveGameTagOnly, bool SaveDefaults);
		void DeserializeActor(class AActor* Actor, const struct FActorSave& State, TArray<class FString> ComponentNames, TArray<class FString> CustomPropertyNames);
		class FString ClassToString(class UClass* InClass);
		struct FGameSave BytesToGameSave(TArray<unsigned char> Bytes);
		static UClass* StaticClass();
	};

	/**
	 * Class HostMigrationSystem.BPI_SavedState
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_SavedState : public UInterface
	{
	public:
		void PreSaveActorState();
		void LoadActorState();
		static UClass* StaticClass();
	};

	/**
	 * Class HostMigrationSystem.GM_SavedState_Base
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class AGM_SavedState_Base : public AGameMode
	{
	public:
		class FScriptMulticastDelegate                             OnActorsSaved;                                           // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HostMigrationSystem.SavedState_Base
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class USavedState_Base : public UActorComponent
	{
	public:
		TArray<class FString>                                      ComponentsToSerialize;                                   // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FString>                                      CustomStructuresToSerialize;                             // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int64_t                                                    Tag;                                                     // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSFQ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void ResetOwner();
		void OwnerBeginPlayCall();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
