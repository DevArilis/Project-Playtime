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
	 * Function HostMigrationSystem.FL_HostMigration.SwitchMakeReference
	 */
	struct UFL_HostMigration_SwitchMakeReference_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorReference                                     Reference;                                               // 0x0008(0x0018)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       Yes;                                                     // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.StringToClass
	 */
	struct UFL_HostMigration_StringToClass_Params
	{
	public:
		class FString                                              ClassName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.StartSaveGameActors
	 */
	struct UFL_HostMigration_StartSaveGameActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGM_SavedState_Base*                                 GameMode;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreHostPawn;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.ShouldLoadActor
	 */
	struct UFL_HostMigration_ShouldLoadActor_Params
	{
	public:
		TArray<struct FActorState>                                 Actors;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              ToCheck;                                                 // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.SerializeObject
	 */
	struct UFL_HostMigration_SerializeObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SaveGameTagOnly;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SaveDefaults;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EGWR[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.SerializeActor
	 */
	struct UFL_HostMigration_SerializeActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ComponentNames;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      CustomPropertyNames;                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TVSI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActorSave                                          ReturnValue;                                             // 0x0030(0x00F0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.MakeReference
	 */
	struct UFL_HostMigration_MakeReference_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorReference                                     Reference;                                               // 0x0008(0x0018)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.IsPlayerControllerInSession
	 */
	struct UFL_HostMigration_IsPlayerControllerInSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InSession;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GetReference
	 */
	struct UFL_HostMigration_GetReference_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorReference                                     Reference;                                               // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GetPublicIp
	 */
	struct UFL_HostMigration_GetPublicIp_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GetPlayerUniqueNetID
	 */
	struct UFL_HostMigration_GetPlayerUniqueNetID_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ID;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GetComponentByName
	 */
	struct UFL_HostMigration_GetComponentByName_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GetByteChunk
	 */
	struct UFL_HostMigration_GetByteChunk_Params
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    StartIndex;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ChunkSize;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Chunk;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.GameSaveToBytes
	 */
	struct UFL_HostMigration_GameSaveToBytes_Params
	{
	public:
		struct FGameSave                                           GameSave;                                                // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.DeserializeObject
	 */
	struct UFL_HostMigration_DeserializeObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Bytes;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       SaveGameTagOnly;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SaveDefaults;                                            // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.DeserializeActor
	 */
	struct UFL_HostMigration_DeserializeActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H4YK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActorSave                                          State;                                                   // 0x0010(0x00F0)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ComponentNames;                                          // 0x0100(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      CustomPropertyNames;                                     // 0x0110(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.ClassToString
	 */
	struct UFL_HostMigration_ClassToString_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.FL_HostMigration.BytesToGameSave
	 */
	struct UFL_HostMigration_BytesToGameSave_Params
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameSave                                           ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HostMigrationSystem.BPI_SavedState.PreSaveActorState
	 */
	struct UBPI_SavedState_PreSaveActorState_Params
	{	};

	/**
	 * Function HostMigrationSystem.BPI_SavedState.LoadActorState
	 */
	struct UBPI_SavedState_LoadActorState_Params
	{	};

	/**
	 * Function HostMigrationSystem.SavedState_Base.ResetOwner
	 */
	struct USavedState_Base_ResetOwner_Params
	{	};

	/**
	 * Function HostMigrationSystem.SavedState_Base.OwnerBeginPlayCall
	 */
	struct USavedState_Base_OwnerBeginPlayCall_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
