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
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Down?
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Down_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Won?
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Won_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Ready?
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Ready_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Clothes
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Clothes_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Emote
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Emote_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Skins
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Skins_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.OnRep_Gestures
	 */
	struct ABP_MultiplayerPlayerState_C_OnRep_Gestures_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_OnRep_EarnedTickets
	 */
	struct ABP_MultiplayerPlayerState_C_BP_OnRep_EarnedTickets_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BP_DisplayTicketCollectionNotification
	 */
	struct ABP_MultiplayerPlayerState_C_BP_DisplayTicketCollectionNotification_Params
	{
	public:
		class FName                                                TicketRewardRowName;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Server_ReadyToStart
	 */
	struct ABP_MultiplayerPlayerState_C_Server_ReadyToStart_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ABP_MultiplayerPlayerController_C*                   Controller;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.UpdateSavedProperties
	 */
	struct ABP_MultiplayerPlayerState_C_UpdateSavedProperties_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.Client_ReadyToStart
	 */
	struct ABP_MultiplayerPlayerState_C_Client_ReadyToStart_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveDestroyed
	 */
	struct ABP_MultiplayerPlayerState_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveCopyProperties
	 */
	struct ABP_MultiplayerPlayerState_C_ReceiveCopyProperties_Params
	{
	public:
		class APlayerState*                                        NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveOverrideWith
	 */
	struct ABP_MultiplayerPlayerState_C_ReceiveOverrideWith_Params
	{
	public:
		class APlayerState*                                        OldPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReceiveBeginPlay
	 */
	struct ABP_MultiplayerPlayerState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ReplicateAudioData
	 */
	struct ABP_MultiplayerPlayerState_C_ReplicateAudioData_Params
	{
	public:
		TArray<unsigned char>                                      CompressedBuffer;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    DesiredSampleRate;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.TryReady
	 */
	struct ABP_MultiplayerPlayerState_C_TryReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.BeginPlay_VoiceChat
	 */
	struct ABP_MultiplayerPlayerState_C_BeginPlay_VoiceChat_Params
	{	};

	/**
	 * Function BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C.ExecuteUbergraph_BP_MultiplayerPlayerState
	 */
	struct ABP_MultiplayerPlayerState_C_ExecuteUbergraph_BP_MultiplayerPlayerState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_30W9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
