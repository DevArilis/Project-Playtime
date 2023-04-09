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
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Retract
	 */
	struct ABP_AIController_TutorialPlayer_C_Retract_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomPuzzleMagnet
	 */
	struct ABP_AIController_TutorialPlayer_C_GetRandomPuzzleMagnet_Params
	{
	public:
		class UBPC_HandMagnet_C*                                   HandMagnet;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetNearestPuzzle
	 */
	struct ABP_AIController_TutorialPlayer_C_GetNearestPuzzle_Params
	{
	public:
		class ABP_ToyPuzzle_C*                                     AsBPToyPuzzle;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomNavPoint
	 */
	struct ABP_AIController_TutorialPlayer_C_GetRandomNavPoint_Params
	{
	public:
		class AActor*                                              Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsWuggyTaken?
	 */
	struct ABP_AIController_TutorialPlayer_C_IsWuggyTaken_Params
	{
	public:
		class ABP_WhackAWuggySpawnPoint_C*                         Wuggy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Taken;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsTargetWuggyStillValid?
	 */
	struct ABP_AIController_TutorialPlayer_C_IsTargetWuggyStillValid_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FaceActor
	 */
	struct ABP_AIController_TutorialPlayer_C_FaceActor_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ND5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_WhackAWuggySpawnPoint_C*                         Wuggy;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ScanWuggyHoles
	 */
	struct ABP_AIController_TutorialPlayer_C_ScanWuggyHoles_Params
	{
	public:
		class ABP_WhackAWuggySpawnPoint_C*                         Wuggy;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.SetUsername
	 */
	struct ABP_AIController_TutorialPlayer_C_SetUsername_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookTowards__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookTowards__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookAtHole__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookAtHole__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_AimAtGrapple__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_AimAtGrapple__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookAtTarget__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookAtTarget__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__FinishedFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookATHandPanel__FinishedFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__UpdateFunc
	 */
	struct ABP_AIController_TutorialPlayer_C_TL_LookATHandPanel__UpdateFunc_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_DD1E782941BC088A4EEE048BA3BFF463
	 */
	struct ABP_AIController_TutorialPlayer_C_OnFail_DD1E782941BC088A4EEE048BA3BFF463_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_DD1E782941BC088A4EEE048BA3BFF463
	 */
	struct ABP_AIController_TutorialPlayer_C_OnSuccess_DD1E782941BC088A4EEE048BA3BFF463_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0
	 */
	struct ABP_AIController_TutorialPlayer_C_OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0
	 */
	struct ABP_AIController_TutorialPlayer_C_OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_9305B89D4398F382C3FFEC80866FD252
	 */
	struct ABP_AIController_TutorialPlayer_C_OnFail_9305B89D4398F382C3FFEC80866FD252_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_9305B89D4398F382C3FFEC80866FD252
	 */
	struct ABP_AIController_TutorialPlayer_C_OnSuccess_9305B89D4398F382C3FFEC80866FD252_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_6F31769947BEDFD6363706BA065091DD
	 */
	struct ABP_AIController_TutorialPlayer_C_OnFail_6F31769947BEDFD6363706BA065091DD_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_6F31769947BEDFD6363706BA065091DD
	 */
	struct ABP_AIController_TutorialPlayer_C_OnSuccess_6F31769947BEDFD6363706BA065091DD_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.WhackWuggy
	 */
	struct ABP_AIController_TutorialPlayer_C_WhackWuggy_Params
	{
	public:
		class ABP_WhackAWuggySpawnPoint_C*                         Wuggy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.LookForWuggy
	 */
	struct ABP_AIController_TutorialPlayer_C_LookForWuggy_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToHole
	 */
	struct ABP_AIController_TutorialPlayer_C_MoveToHole_Params
	{
	public:
		class ABP_WormholeEntrance_C*                              WormHole;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullPlayerOutOfHole
	 */
	struct ABP_AIController_TutorialPlayer_C_PullPlayerOutOfHole_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Grapple
	 */
	struct ABP_AIController_TutorialPlayer_C_Grapple_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Escape
	 */
	struct ABP_AIController_TutorialPlayer_C_Escape_Params
	{
	public:
		struct FVector                                             TrainCart;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToGrapple
	 */
	struct ABP_AIController_TutorialPlayer_C_MoveToGrapple_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceivePossess
	 */
	struct ABP_AIController_TutorialPlayer_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceiveBeginPlay
	 */
	struct ABP_AIController_TutorialPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FindPuzzle
	 */
	struct ABP_AIController_TutorialPlayer_C_FindPuzzle_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PlayPuzzle
	 */
	struct ABP_AIController_TutorialPlayer_C_PlayPuzzle_Params
	{	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExtendAtTarget
	 */
	struct ABP_AIController_TutorialPlayer_C_ExtendAtTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pull;                                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExecuteUbergraph_BP_AIController_TutorialPlayer
	 */
	struct ABP_AIController_TutorialPlayer_C_ExecuteUbergraph_BP_AIController_TutorialPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullingPlayerFromHole__DelegateSignature
	 */
	struct ABP_AIController_TutorialPlayer_C_PullingPlayerFromHole__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
