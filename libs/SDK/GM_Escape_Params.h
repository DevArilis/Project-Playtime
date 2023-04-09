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
	 * Function GM_Escape.GM_Escape_C.CheckIfGameCanContinue
	 */
	struct AGM_Escape_C_CheckIfGameCanContinue_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.SetPlayerAsWorldMonster
	 */
	struct AGM_Escape_C_SetPlayerAsWorldMonster_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_MultiplayerPlayerController_C*                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WSE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMonster*                                            Monster;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SetupPlayerPawn
	 */
	struct AGM_Escape_C_SetupPlayerPawn_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ABP_MultiplayerPlayerController_C*                   Controller;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.GetLivingSurvivors
	 */
	struct AGM_Escape_C_GetLivingSurvivors_Params
	{
	public:
		TArray<class ABP_MultiplayerPlayerState_C*>                LivingSurvivors;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.DoAllPlayersHaveAPawn
	 */
	struct AGM_Escape_C_DoAllPlayersHaveAPawn_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.RotateMaps
	 */
	struct AGM_Escape_C_RotateMaps_Params
	{
	public:
		unsigned char                                              UnknownData_Z4NQ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              NextMapName;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SetupMapsArray
	 */
	struct AGM_Escape_C_SetupMapsArray_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.LoadState
	 */
	struct AGM_Escape_C_LoadState_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.PlayersInPlay
	 */
	struct AGM_Escape_C_PlayersInPlay_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.UpdatePlayers
	 */
	struct AGM_Escape_C_UpdatePlayers_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.ReadyToStartMatch
	 */
	struct AGM_Escape_C_ReadyToStartMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.GetEndConditionResults
	 */
	struct AGM_Escape_C_GetEndConditionResults_Params
	{
	public:
		E_EndGameCategory                                          EndGame;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IK3G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerWinCount;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ended;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8XK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GM_Escape.GM_Escape_C.UpdatePlayerStates
	 */
	struct AGM_Escape_C_UpdatePlayerStates_Params
	{
	public:
		bool                                                       Remove;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IUKV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PlayerState;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.CreateCrosshairWidget
	 */
	struct AGM_Escape_C_CreateCrosshairWidget_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SpawnToyPart
	 */
	struct AGM_Escape_C_SpawnToyPart_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESpawnActorCollisionHandlingMethod                         CollisionHandlingOverride;                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OP7A[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_ToyPart_C*                                       SpawnedToyPart;                                          // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJ7Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GM_Escape.GM_Escape_C.GetLobbyPreSlot
	 */
	struct AGM_Escape_C_GetLobbyPreSlot_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Lobby_PlayerSlot_C*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SpawnPlayer
	 */
	struct AGM_Escape_C_SpawnPlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SpawnMonsterWidget
	 */
	struct AGM_Escape_C_SpawnMonsterWidget_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.SelectPlayerToBeMonster
	 */
	struct AGM_Escape_C_SelectPlayerToBeMonster_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.ChoosePlayerStart
	 */
	struct AGM_Escape_C_ChoosePlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.K2_OnLogout
	 */
	struct AGM_Escape_C_K2_OnLogout_Params
	{
	public:
		class AController*                                         ExitingController;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.K2_OnRestartPlayer
	 */
	struct AGM_Escape_C_K2_OnRestartPlayer_Params
	{
	public:
		class AController*                                         NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.ReceiveTick
	 */
	struct AGM_Escape_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.ReceiveBeginPlay
	 */
	struct AGM_Escape_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.SaveCompleted
	 */
	struct AGM_Escape_C_SaveCompleted_Params
	{
	public:
		bool                                                       CalledOnUpdate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.MakePlayerMonster
	 */
	struct AGM_Escape_C_MakePlayerMonster_Params
	{
	public:
		class ABP_MultiplayerPlayerController_C*                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.DenyPlayerMonster
	 */
	struct AGM_Escape_C_DenyPlayerMonster_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.AskToBeMonster
	 */
	struct AGM_Escape_C_AskToBeMonster_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.Start_AskToBeMonster
	 */
	struct AGM_Escape_C_Start_AskToBeMonster_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.HandleStartingNewPlayer
	 */
	struct AGM_Escape_C_HandleStartingNewPlayer_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.CheckForSpectators
	 */
	struct AGM_Escape_C_CheckForSpectators_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.StartEarlyDepartureTimer
	 */
	struct AGM_Escape_C_StartEarlyDepartureTimer_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.EarlyDeparture
	 */
	struct AGM_Escape_C_EarlyDeparture_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.AddTime
	 */
	struct AGM_Escape_C_AddTime_Params
	{
	public:
		float                                                      AddedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.StartNewGame
	 */
	struct AGM_Escape_C_StartNewGame_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.Start NewGameTimer
	 */
	struct AGM_Escape_C_StartNewGameTimer_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.K2_OnSetMatchState
	 */
	struct AGM_Escape_C_K2_OnSetMatchState_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_Escape.GM_Escape_C.StartEscapeTimer
	 */
	struct AGM_Escape_C_StartEscapeTimer_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.StartPullDownTimer
	 */
	struct AGM_Escape_C_StartPullDownTimer_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.Time Ran Out
	 */
	struct AGM_Escape_C_TimeRanOut_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.StartToyCollectionTimer
	 */
	struct AGM_Escape_C_StartToyCollectionTimer_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.MonsterSelect
	 */
	struct AGM_Escape_C_MonsterSelect_Params
	{	};

	/**
	 * Function GM_Escape.GM_Escape_C.ExecuteUbergraph_GM_Escape
	 */
	struct AGM_Escape_C_ExecuteUbergraph_GM_Escape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
