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
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.ResetMaps
	 */
	struct UMultiplayerGameInstance_C_ResetMaps_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.RotateMaps
	 */
	struct UMultiplayerGameInstance_C_RotateMaps_Params
	{
	public:
		class FString                                              NextMap;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.SetupMapsArray
	 */
	struct UMultiplayerGameInstance_C_SetupMapsArray_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_62079A364D969584CEDCFD99FC59A3B5
	 */
	struct UMultiplayerGameInstance_C_OnCallback_62079A364D969584CEDCFD99FC59A3B5_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F
	 */
	struct UMultiplayerGameInstance_C_OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A
	 */
	struct UMultiplayerGameInstance_C_OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA
	 */
	struct UMultiplayerGameInstance_C_OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA
	 */
	struct UMultiplayerGameInstance_C_OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_AC5022514E5563A35427C0A3F2B2AAD7
	 */
	struct UMultiplayerGameInstance_C_OnCallback_AC5022514E5563A35427C0A3F2B2AAD7_Params
	{
	public:
		TArray<struct FSteamSessionResult>                         Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5
	 */
	struct UMultiplayerGameInstance_C_OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5
	 */
	struct UMultiplayerGameInstance_C_OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnCallback_559C155742B5D576C94A04A11F3E41DC
	 */
	struct UMultiplayerGameInstance_C_OnCallback_559C155742B5D576C94A04A11F3E41DC_Params
	{
	public:
		TArray<struct FSteamSessionResult>                         Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnFailure_9994764946AE5A8A9EAA0ABCF23AF456
	 */
	struct UMultiplayerGameInstance_C_OnFailure_9994764946AE5A8A9EAA0ABCF23AF456_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456
	 */
	struct UMultiplayerGameInstance_C_OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveInit
	 */
	struct UMultiplayerGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.ReceiveShutdown
	 */
	struct UMultiplayerGameInstance_C_ReceiveShutdown_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteAccepted
	 */
	struct UMultiplayerGameInstance_C_OnSessionInviteAccepted_Params
	{
	public:
		int32_t                                                    LocalPlayerNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73P6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PersonInvited;                                           // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FBlueprintSessionResult                             SessionToJoin;                                           // 0x0028(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.GetSteamHandle
	 */
	struct UMultiplayerGameInstance_C_GetSteamHandle_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateXP
	 */
	struct UMultiplayerGameInstance_C_UpdateXP_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnSessionInviteReceived
	 */
	struct UMultiplayerGameInstance_C_OnSessionInviteReceived_Params
	{
	public:
		int32_t                                                    LocalPlayerNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MGNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PersonInviting;                                          // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              AppID;                                                   // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FBlueprintSessionResult                             SessionToJoin;                                           // 0x0038(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.QuickplayStartSearch
	 */
	struct UMultiplayerGameInstance_C_QuickplayStartSearch_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.AttemptJoinCurrentGame
	 */
	struct UMultiplayerGameInstance_C_AttemptJoinCurrentGame_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.SuccessfullyJoinedGame
	 */
	struct UMultiplayerGameInstance_C_SuccessfullyJoinedGame_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.DisplayMigrationScreen
	 */
	struct UMultiplayerGameInstance_C_DisplayMigrationScreen_Params
	{
	public:
		class FString                                              LoadingMessage;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       DisplayTimer;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.HideMigrationScreen
	 */
	struct UMultiplayerGameInstance_C_HideMigrationScreen_Params
	{	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.FindServers
	 */
	struct UMultiplayerGameInstance_C_FindServers_Params
	{
	public:
		E_ServerCategory                                           Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleTravelError
	 */
	struct UMultiplayerGameInstance_C_HandleTravelError_Params
	{
	public:
		ETravelFailure                                             FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.HandleNetworkError
	 */
	struct UMultiplayerGameInstance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.CreateServer
	 */
	struct UMultiplayerGameInstance_C_CreateServer_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerController*                                   PlayerController;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PublicConnections;                                       // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PrivateConnections;                                      // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseLAN;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowInvites;                                           // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDedicatedServer;                                      // 0x0022(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsePresence;                                            // 0x0023(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseLobbiesIfAvailable;                                  // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowJoinViaPresence;                                   // 0x0025(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowJoinViaPresenceFriendsOnly;                        // 0x0026(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAntiCheatProtected;                                     // 0x0027(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsesStats;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldAdvertise;                                        // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseLobbiesVoiceChatIfAvailable;                         // 0x002A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MN60[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Level;                                                   // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSteamCoreSession
	 */
	struct UMultiplayerGameInstance_C_UpdateSteamCoreSession_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateSessionSettings
	 */
	struct UMultiplayerGameInstance_C_UpdateSessionSettings_Params
	{
	public:
		TMap<class FString, struct FSteamSessionSearchSetting>     NewSessionSettings;                                      // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.UpdateMatchStarted
	 */
	struct UMultiplayerGameInstance_C_UpdateMatchStarted_Params
	{
	public:
		bool                                                       MatchStarted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.ExecuteUbergraph_MultiplayerGameInstance
	 */
	struct UMultiplayerGameInstance_C_ExecuteUbergraph_MultiplayerGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.OnXPUpdate__DelegateSignature
	 */
	struct UMultiplayerGameInstance_C_OnXPUpdate__DelegateSignature_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerGameInstance.MultiplayerGameInstance_C.FoundSteamInventory__DelegateSignature
	 */
	struct UMultiplayerGameInstance_C_FoundSteamInventory__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
