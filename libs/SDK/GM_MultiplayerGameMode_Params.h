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
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetSelectedToy
	 */
	struct AGM_MultiplayerGameMode_C_GetSelectedToy_Params
	{
	public:
		E_ToyType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetToyPartMeshFromIndex
	 */
	struct AGM_MultiplayerGameMode_C_GetToyPartMeshFromIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RJS0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SpawnToyPart
	 */
	struct AGM_MultiplayerGameMode_C_SpawnToyPart_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESpawnActorCollisionHandlingMethod                         CollisionHandlingOverride;                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LWTS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SelectToy
	 */
	struct AGM_MultiplayerGameMode_C_SelectToy_Params
	{
	public:
		E_ToyType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.StartGame
	 */
	struct AGM_MultiplayerGameMode_C_StartGame_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player if Game Started
	 */
	struct AGM_MultiplayerGameMode_C_SpawnPlayerifGameStarted_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugServerMonsters
	 */
	struct AGM_MultiplayerGameMode_C_DebugServerMonsters_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_17OQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugClientMonsters
	 */
	struct AGM_MultiplayerGameMode_C_DebugClientMonsters_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CWIF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster
	 */
	struct AGM_MultiplayerGameMode_C_SpawnMonster_Params
	{
	public:
		class UClass*                                              ClassToSpawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster Widget
	 */
	struct AGM_MultiplayerGameMode_C_SpawnMonsterWidget_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player
	 */
	struct AGM_MultiplayerGameMode_C_SpawnPlayer_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.RandomizePlayerMonster
	 */
	struct AGM_MultiplayerGameMode_C_RandomizePlayerMonster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_PostLogin
	 */
	struct AGM_MultiplayerGameMode_C_K2_PostLogin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_OnLogout
	 */
	struct AGM_MultiplayerGameMode_C_K2_OnLogout_Params
	{
	public:
		class AController*                                         ExitingController;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.ExecuteUbergraph_GM_MultiplayerGameMode
	 */
	struct AGM_MultiplayerGameMode_C_ExecuteUbergraph_GM_MultiplayerGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
