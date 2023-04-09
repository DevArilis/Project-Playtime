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
	 * Function GS_Escape.GS_Escape_C.GetLeadershipLocations
	 */
	struct AGS_Escape_C_GetLeadershipLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.GetLeadershipCount
	 */
	struct AGS_Escape_C_GetLeadershipCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.UpdateLeadershipPerkPlayers
	 */
	struct AGS_Escape_C_UpdateLeadershipPerkPlayers_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.IsPlayerInSession
	 */
	struct AGS_Escape_C_IsPlayerInSession_Params
	{
	public:
		class FString                                              PlayerID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NHZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MultiplayerPlayerController_C*                   PlayerController;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_MultiplayerPlayerState_C*                        PlayerState;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.GetMonsterType
	 */
	struct AGS_Escape_C_GetMonsterType_Params
	{
	public:
		ECharacterType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.GetDepositedToyParts
	 */
	struct AGS_Escape_C_GetDepositedToyParts_Params
	{
	public:
		int32_t                                                    DepositedParts;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.IsXP_EnoughToReward
	 */
	struct AGS_Escape_C_IsXP_EnoughToReward_Params
	{
	public:
		int32_t                                                    GainedXP;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OW1F[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GS_Escape.GS_Escape_C.IsHostStillHere
	 */
	struct AGS_Escape_C_IsHostStillHere_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.CreateMissionResultScreenWidget
	 */
	struct AGS_Escape_C_CreateMissionResultScreenWidget_Params
	{
	public:
		class UUI_MissionResultScreen_C*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_ClearWidgets
	 */
	struct AGS_Escape_C_OnRep_ClearWidgets_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.CanDisplayEndScreen?
	 */
	struct AGS_Escape_C_CanDisplayEndScreen_Params
	{
	public:
		bool                                                       CanEnd;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_EndGameCategory
	 */
	struct AGS_Escape_C_OnRep_EndGameCategory_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.TryToStartGame
	 */
	struct AGS_Escape_C_TryToStartGame_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.Update Living Players
	 */
	struct AGS_Escape_C_UpdateLivingPlayers_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_EndedGame
	 */
	struct AGS_Escape_C_OnRep_EndedGame_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.TryLoadReady
	 */
	struct AGS_Escape_C_TryLoadReady_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_StartedGame
	 */
	struct AGS_Escape_C_OnRep_StartedGame_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.Open Monster Doors
	 */
	struct AGS_Escape_C_OpenMonsterDoors_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_PlayerAsMonster
	 */
	struct AGS_Escape_C_OnRep_PlayerAsMonster_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.GetToyPartMeshFromIndex
	 */
	struct AGS_Escape_C_GetToyPartMeshFromIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EToyStatus                                                 Status;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseOverride;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_ToyType                                                  Override;                                                // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Held;                                                    // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnRep_PlayerCount
	 */
	struct AGS_Escape_C_OnRep_PlayerCount_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.Tl_ExitTrain__FinishedFunc
	 */
	struct AGS_Escape_C_Tl_ExitTrain__FinishedFunc_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.Tl_ExitTrain__UpdateFunc
	 */
	struct AGS_Escape_C_Tl_ExitTrain__UpdateFunc_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnFailure_BB6987834192489F0F61C3999AFB2DB6
	 */
	struct AGS_Escape_C_OnFailure_BB6987834192489F0F61C3999AFB2DB6_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnSuccess_BB6987834192489F0F61C3999AFB2DB6
	 */
	struct AGS_Escape_C_OnSuccess_BB6987834192489F0F61C3999AFB2DB6_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnLoadMigrationData
	 */
	struct AGS_Escape_C_OnLoadMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnSaveMigrationData
	 */
	struct AGS_Escape_C_OnSaveMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.LoadMigrationData
	 */
	struct AGS_Escape_C_LoadMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.SaveMigrationData
	 */
	struct AGS_Escape_C_SaveMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.SetTrain
	 */
	struct AGS_Escape_C_SetTrain_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.Client_SetTrain
	 */
	struct AGS_Escape_C_Client_SetTrain_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USplineComponent*                                    Track;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.SetIndividualPuzzleData
	 */
	struct AGS_Escape_C_SetIndividualPuzzleData_Params
	{
	public:
		class ABP_PuzzlePillar_C*                                  PuzzlePillar;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<bool>                                               Solved;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Progress;                                                // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<EPuzzleType>                                        PuzzleTypes;                                             // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    FinalPuzzleSolved;                                       // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.SetupMonsterPlayer
	 */
	struct AGS_Escape_C_SetupMonsterPlayer_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.ServerSetup
	 */
	struct AGS_Escape_C_ServerSetup_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.StartGame
	 */
	struct AGS_Escape_C_StartGame_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnEndGame
	 */
	struct AGS_Escape_C_OnEndGame_Params
	{
	public:
		class FText                                                HeadingText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                SubheadingText;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       GivePoints;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_PlayerType                                               PlayerType;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.ReceiveBeginPlay
	 */
	struct AGS_Escape_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.PostXP_Success
	 */
	struct AGS_Escape_C_PostXP_Success_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.PostXP_Fail
	 */
	struct AGS_Escape_C_PostXP_Fail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.ReceiveTick
	 */
	struct AGS_Escape_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.CheckEndConditions
	 */
	struct AGS_Escape_C_CheckEndConditions_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.EndGame
	 */
	struct AGS_Escape_C_EndGame_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.UpdateLobby
	 */
	struct AGS_Escape_C_UpdateLobby_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.ReturnToMainMenu
	 */
	struct AGS_Escape_C_ReturnToMainMenu_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.PreSaveActorState
	 */
	struct AGS_Escape_C_PreSaveActorState_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.LoadActorState
	 */
	struct AGS_Escape_C_LoadActorState_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.UpdatedPlayers
	 */
	struct AGS_Escape_C_UpdatedPlayers_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.InvalidJSONError
	 */
	struct AGS_Escape_C_InvalidJSONError_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.RewardsSuccess
	 */
	struct AGS_Escape_C_RewardsSuccess_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.RewardsFailure
	 */
	struct AGS_Escape_C_RewardsFailure_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.UpdateBestPotentialHostt
	 */
	struct AGS_Escape_C_UpdateBestPotentialHostt_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.UpdateMigrationDataa
	 */
	struct AGS_Escape_C_UpdateMigrationDataa_Params
	{
	public:
		class FString                                              NewIP;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              HostName;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_Escape.GS_Escape_C.ExitTrain
	 */
	struct AGS_Escape_C_ExitTrain_Params
	{	};

	/**
	 * Function GS_Escape.GS_Escape_C.ExecuteUbergraph_GS_Escape
	 */
	struct AGS_Escape_C_ExecuteUbergraph_GS_Escape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TOG1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GS_Escape.GS_Escape_C.OnUpdatedPlayers__DelegateSignature
	 */
	struct AGS_Escape_C_OnUpdatedPlayers__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
