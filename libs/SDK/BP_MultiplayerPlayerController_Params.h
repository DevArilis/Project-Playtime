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
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InLobby?
	 */
	struct ABP_MultiplayerPlayerController_C_InLobby_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G22Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SpawnAndPossess
	 */
	struct ABP_MultiplayerPlayerController_C_SpawnAndPossess_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class FName                                                SpawnTag;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
	 */
	struct ABP_MultiplayerPlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_B_K2Node_InputKeyEvent_2
	 */
	struct ABP_MultiplayerPlayerController_C_InpActEvt_B_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct ABP_MultiplayerPlayerController_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1
	 */
	struct ABP_MultiplayerPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ReadyToStart
	 */
	struct ABP_MultiplayerPlayerController_C_Client_ReadyToStart_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_ReadyToStart
	 */
	struct ABP_MultiplayerPlayerController_C_Server_ReadyToStart_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ABP_MultiplayerPlayerController_C*                   Controller;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetSessionName
	 */
	struct ABP_MultiplayerPlayerController_C_SetSessionName_Params
	{
	public:
		class FName                                                SessionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetSpawnMonster
	 */
	struct ABP_MultiplayerPlayerController_C_NetSpawnMonster_Params
	{
	public:
		class UClass*                                              ClassToSpawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateMonsterWidget
	 */
	struct ABP_MultiplayerPlayerController_C_CreateMonsterWidget_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetAddVelocityToGrabbedActor
	 */
	struct ABP_MultiplayerPlayerController_C_NetAddVelocityToGrabbedActor_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveTick
	 */
	struct ABP_MultiplayerPlayerController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_DisplayMigrationScreen
	 */
	struct ABP_MultiplayerPlayerController_C_Client_DisplayMigrationScreen_Params
	{
	public:
		class FString                                              LoadingMessage;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_RemoveAllWidgets
	 */
	struct ABP_MultiplayerPlayerController_C_Client_RemoveAllWidgets_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_Widgets
	 */
	struct ABP_MultiplayerPlayerController_C_BeginPlay_Widgets_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.HideMigrationWidget
	 */
	struct ABP_MultiplayerPlayerController_C_HideMigrationWidget_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.StartGameAnim
	 */
	struct ABP_MultiplayerPlayerController_C_StartGameAnim_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetUIMode
	 */
	struct ABP_MultiplayerPlayerController_C_SetUIMode_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_MultiplayerPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetupLobby
	 */
	struct ABP_MultiplayerPlayerController_C_SetupLobby_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.RemoveLoadingScreen
	 */
	struct ABP_MultiplayerPlayerController_C_RemoveLoadingScreen_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateLoadingScreen
	 */
	struct ABP_MultiplayerPlayerController_C_CreateLoadingScreen_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ClearLobbyUI
	 */
	struct ABP_MultiplayerPlayerController_C_ClearLobbyUI_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DestroyLobbyUI
	 */
	struct ABP_MultiplayerPlayerController_C_DestroyLobbyUI_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceivePossess
	 */
	struct ABP_MultiplayerPlayerController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateCrosshairWidget
	 */
	struct ABP_MultiplayerPlayerController_C_CreateCrosshairWidget_Params
	{
	public:
		E_ToyType                                                  ToySelection;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ResetHostMigration
	 */
	struct ABP_MultiplayerPlayerController_C_Client_ResetHostMigration_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.OnUnpause
	 */
	struct ABP_MultiplayerPlayerController_C_OnUnpause_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateChatWidget
	 */
	struct ABP_MultiplayerPlayerController_C_CreateChatWidget_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DeliverMessage
	 */
	struct ABP_MultiplayerPlayerController_C_DeliverMessage_Params
	{
	public:
		class FString                                              SenderName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FBPUniqueNetId                                      SenderID;                                                // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveMessage
	 */
	struct ABP_MultiplayerPlayerController_C_ReceiveMessage_Params
	{
	public:
		class FString                                              SenderName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FBPUniqueNetId                                      SenderID;                                                // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendMessage
	 */
	struct ABP_MultiplayerPlayerController_C_SendMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_No
	 */
	struct ABP_MultiplayerPlayerController_C_Server_No_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_Yes
	 */
	struct ABP_MultiplayerPlayerController_C_Server_Yes_Params
	{
	public:
		class ABP_MultiplayerPlayerController_C*                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.No
	 */
	struct ABP_MultiplayerPlayerController_C_No_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Yes
	 */
	struct ABP_MultiplayerPlayerController_C_Yes_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Remove_AskToBeMonster
	 */
	struct ABP_MultiplayerPlayerController_C_Remove_AskToBeMonster_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Create_AskToBeMonster
	 */
	struct ABP_MultiplayerPlayerController_C_Create_AskToBeMonster_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Tick_VoiceChat
	 */
	struct ABP_MultiplayerPlayerController_C_Tick_VoiceChat_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendAudioData
	 */
	struct ABP_MultiplayerPlayerController_C_SendAudioData_Params
	{
	public:
		TArray<unsigned char>                                      CompressedBuffer;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_VoiceChat
	 */
	struct ABP_MultiplayerPlayerController_C_BeginPlay_VoiceChat_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_RecieveQueueData
	 */
	struct ABP_MultiplayerPlayerController_C_Server_RecieveQueueData_Params
	{
	public:
		int32_t                                                    PlayerID;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FQueueData                                          Data;                                                    // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Owner_RequestQueueData
	 */
	struct ABP_MultiplayerPlayerController_C_Owner_RequestQueueData_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ExecuteUbergraph_BP_MultiplayerPlayerController
	 */
	struct ABP_MultiplayerPlayerController_C_ExecuteUbergraph_BP_MultiplayerPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9KKS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
