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
	 * Function BP_WuggyHole.BP_WuggyHole_C.OnRep_Valid Oldest Player
	 */
	struct ABP_WuggyHole_C_OnRep_ValidOldestPlayer_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.HasPlayers
	 */
	struct ABP_WuggyHole_C_HasPlayers_Params
	{
	public:
		bool                                                       Has;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.GetRandomWormholeExit
	 */
	struct ABP_WuggyHole_C_GetRandomWormholeExit_Params
	{
	public:
		class ABP_WormholeExit_C*                                  WormholeExit;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.GrabNextCharacter
	 */
	struct ABP_WuggyHole_C_GrabNextCharacter_Params
	{
	public:
		class ABP_PseudoHand_C*                                    PseudoHand;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AANetworkCharacter*                                  GrabbedCharacter;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_WormholeExit_C*                                  WormHole;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NSGF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.ResolveDoors
	 */
	struct ABP_WuggyHole_C_ResolveDoors_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.GetWormholeToGrabFrom
	 */
	struct ABP_WuggyHole_C_GetWormholeToGrabFrom_Params
	{
	public:
		class AANetworkCharacter*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_II71[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class ABP_WormholeExit_C*                                  WormHole;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.UserConstructionScript
	 */
	struct ABP_WuggyHole_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.ReceiveBeginPlay
	 */
	struct ABP_WuggyHole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.AddPlayer
	 */
	struct ABP_WuggyHole_C_AddPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  NetworkCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldIncreaseStrikes;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnedToRevive;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityBeginMinigame
	 */
	struct ABP_WuggyHole_C_BP_AuthorityBeginMinigame_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityEndMinigame
	 */
	struct ABP_WuggyHole_C_BP_AuthorityEndMinigame_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.BP_OnRep_OldestPlayer
	 */
	struct ABP_WuggyHole_C_BP_OnRep_OldestPlayer_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyEvent
	 */
	struct ABP_WuggyHole_C_SpawnWuggyEvent_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyWave
	 */
	struct ABP_WuggyHole_C_SpawnWuggyWave_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.StartGame
	 */
	struct ABP_WuggyHole_C_StartGame_Params
	{	};

	/**
	 * Function BP_WuggyHole.BP_WuggyHole_C.ExecuteUbergraph_BP_WuggyHole
	 */
	struct ABP_WuggyHole_C_ExecuteUbergraph_BP_WuggyHole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
