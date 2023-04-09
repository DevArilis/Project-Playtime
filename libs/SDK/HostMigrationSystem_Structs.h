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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HostMigrationSystem.ComponentSave
	 * Size -> 0x0010
	 */
	struct FComponentSave
	{
	public:
		TArray<unsigned char>                                      ComponentData;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.PropertySave
	 * Size -> 0x0010
	 */
	struct FPropertySave
	{
	public:
		TArray<unsigned char>                                      PropertyData;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.ActorSave
	 * Size -> 0x00F0
	 */
	struct FActorSave
	{
	public:
		struct FTransform                                          ActorTransformation;                                     // 0x0000(0x0030) BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    ActorID;                                                 // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ActorData;                                               // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TMap<class FString, struct FComponentSave>                 ComponentData;                                           // 0x0048(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		TMap<class FString, struct FPropertySave>                  CustomPropertyData;                                      // 0x0098(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NI23[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HostMigrationSystem.ActorState
	 * Size -> 0x0110
	 */
	struct FActorState
	{
	public:
		class FString                                              ControllerId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorClass;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActorSave                                          ActorSave;                                               // 0x0020(0x00F0) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.PlayerSave
	 * Size -> 0x0030
	 */
	struct FPlayerSave
	{
	public:
		class FString                                              PlayerID;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PlayerStateData;                                         // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PlayerControllerData;                                    // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.GameSave
	 * Size -> 0x0050
	 */
	struct FGameSave
	{
	public:
		TArray<struct FPlayerSave>                                 Players;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FActorState>                                 Actors;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      GameModeSave;                                            // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      GameStateSave;                                           // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FString                                              LevelName;                                               // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.ActorReference
	 * Size -> 0x0018
	 */
	struct FActorReference
	{
	public:
		class AActor*                                              ActorRef;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ActorID;                                                 // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HostMigrationSystem.AttachedMesh
	 * Size -> 0x0010
	 */
	struct FAttachedMesh
	{
	public:
		class FName                                                Socket;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UStaticMesh>                          Mesh;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
