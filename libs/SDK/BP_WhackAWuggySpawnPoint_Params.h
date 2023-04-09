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
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Update Oldest Player
	 */
	struct ABP_WhackAWuggySpawnPoint_C_UpdateOldestPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  PlayerTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.UserConstructionScript
	 */
	struct ABP_WhackAWuggySpawnPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.WuggyKillPlayer_Event
	 */
	struct ABP_WhackAWuggySpawnPoint_C_WuggyKillPlayer_Event_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_WhackAWuggySpawnPoint_C_BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ReceiveBeginPlay
	 */
	struct ABP_WhackAWuggySpawnPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_Server_WuggyKillPlayer
	 */
	struct ABP_WhackAWuggySpawnPoint_C_BP_Server_WuggyKillPlayer_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.Kill Player
	 */
	struct ABP_WhackAWuggySpawnPoint_C_KillPlayer_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.BP_OnRep_WuggyIsSpawned
	 */
	struct ABP_WhackAWuggySpawnPoint_C_BP_OnRep_WuggyIsSpawned_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.SpawnWuggy
	 */
	struct ABP_WhackAWuggySpawnPoint_C_SpawnWuggy_Params
	{	};

	/**
	 * Function BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C.ExecuteUbergraph_BP_WhackAWuggySpawnPoint
	 */
	struct ABP_WhackAWuggySpawnPoint_C_ExecuteUbergraph_BP_WhackAWuggySpawnPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YG1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
