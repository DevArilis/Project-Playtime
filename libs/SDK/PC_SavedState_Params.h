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
	 * Function PC_SavedState.PC_SavedState_C.OnFailure_9333D48E4D2307DA706098AF292C6DF1
	 */
	struct APC_SavedState_C_OnFailure_9333D48E4D2307DA706098AF292C6DF1_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.OnSuccess_9333D48E4D2307DA706098AF292C6DF1
	 */
	struct APC_SavedState_C_OnSuccess_9333D48E4D2307DA706098AF292C6DF1_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.OnFailure_5FD5EAD44EC8654AC4C0D291985C3F07
	 */
	struct APC_SavedState_C_OnFailure_5FD5EAD44EC8654AC4C0D291985C3F07_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.OnSuccess_5FD5EAD44EC8654AC4C0D291985C3F07
	 */
	struct APC_SavedState_C_OnSuccess_5FD5EAD44EC8654AC4C0D291985C3F07_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
	 */
	struct APC_SavedState_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
	 */
	struct APC_SavedState_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.MigrateGameClient
	 */
	struct APC_SavedState_C_MigrateGameClient_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.GI_SetState
	 */
	struct APC_SavedState_C_GI_SetState_Params
	{
	public:
		struct FGameSave                                           LastState;                                               // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.GI_SetNewHostIP
	 */
	struct APC_SavedState_C_GI_SetNewHostIP_Params
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.ServerSetID
	 */
	struct APC_SavedState_C_ServerSetID_Params
	{
	public:
		class FString                                              MySteamID;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.GetMyID
	 */
	struct APC_SavedState_C_GetMyID_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.GM_Enter
	 */
	struct APC_SavedState_C_GM_Enter_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.OnPlayerEnter
	 */
	struct APC_SavedState_C_OnPlayerEnter_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.ServerSetSpawned
	 */
	struct APC_SavedState_C_ServerSetSpawned_Params
	{
	public:
		bool                                                       Spawned;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.Migrate
	 */
	struct APC_SavedState_C_Migrate_Params
	{	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.RecieveGameState
	 */
	struct APC_SavedState_C_RecieveGameState_Params
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.RecieveGameStateChunk
	 */
	struct APC_SavedState_C_RecieveGameStateChunk_Params
	{
	public:
		TArray<unsigned char>                                      Chunk;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Final;                                                   // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CZAJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    totalSize;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PC_SavedState.PC_SavedState_C.ExecuteUbergraph_PC_SavedState
	 */
	struct APC_SavedState_C_ExecuteUbergraph_PC_SavedState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DNNN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
