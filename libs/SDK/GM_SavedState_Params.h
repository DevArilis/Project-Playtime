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
	 * Function GM_SavedState.GM_SavedState_C.SavePlayers
	 */
	struct AGM_SavedState_C_SavePlayers_Params
	{
	public:
		TArray<struct FPlayerSave>                                 OutPlayers;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.ChooseNewHost
	 */
	struct AGM_SavedState_C_ChooseNewHost_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.UpdateState
	 */
	struct AGM_SavedState_C_UpdateState_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.LoadState
	 */
	struct AGM_SavedState_C_LoadState_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.K2_PostLogin
	 */
	struct AGM_SavedState_C_K2_PostLogin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.ReceiveBeginPlay
	 */
	struct AGM_SavedState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.K2_OnLogout
	 */
	struct AGM_SavedState_C_K2_OnLogout_Params
	{
	public:
		class AController*                                         ExitingController;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.StartStateUpdateLoop
	 */
	struct AGM_SavedState_C_StartStateUpdateLoop_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.SendGameSaveInChunks
	 */
	struct AGM_SavedState_C_SendGameSaveInChunks_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.SaveState
	 */
	struct AGM_SavedState_C_SaveState_Params
	{
	public:
		bool                                                       CalledOnUpdate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.EventActorsSaved
	 */
	struct AGM_SavedState_C_EventActorsSaved_Params
	{
	public:
		TArray<struct FActorState>                                 ActorStates;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.SimulateHostMigration
	 */
	struct AGM_SavedState_C_SimulateHostMigration_Params
	{	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.OnSaveComplete_Testing
	 */
	struct AGM_SavedState_C_OnSaveComplete_Testing_Params
	{
	public:
		bool                                                       CalledOnUpdate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.ExecuteUbergraph_GM_SavedState
	 */
	struct AGM_SavedState_C_ExecuteUbergraph_GM_SavedState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.OnSaveComplete__DelegateSignature
	 */
	struct AGM_SavedState_C_OnSaveComplete__DelegateSignature_Params
	{
	public:
		bool                                                       CalledOnUpdate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GM_SavedState.GM_SavedState_C.OnPlayerEnter__DelegateSignature
	 */
	struct AGM_SavedState_C_OnPlayerEnter__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
