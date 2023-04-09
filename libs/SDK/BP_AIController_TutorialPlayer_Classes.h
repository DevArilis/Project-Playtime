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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C
	 * Size -> 0x00E8 (FullSize[0x0410] - InheritedSize[0x0328])
	 */
	class ABP_AIController_TutorialPlayer_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      TL_LookAtTarget_Alpha_D93E6FC644B5F35E6AB2B891A538C6DE;  // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_LookAtTarget__Direction_D93E6FC644B5F35E6AB2B891A538C6DE; // 0x0334(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1D83[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_LookAtTarget;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Alpha_725B3B7141941F934E3F9CA0EFD1D8F0;       // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_725B3B7141941F934E3F9CA0EFD1D8F0;  // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AEVG[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_LookATHandPanel_Alpha_A78F06F341EC2E580C7DCBAB595B4FFD; // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_LookATHandPanel__Direction_A78F06F341EC2E580C7DCBAB595B4FFD; // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R8ZK[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_LookATHandPanel;                                      // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_AimAtGrapple_Alpha_B24B8C4B4FE12B318D8AEF99B2463482;  // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_AimAtGrapple__Direction_B24B8C4B4FE12B318D8AEF99B2463482; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0SPQ[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_AimAtGrapple;                                         // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_LookAtHole_Alpha_0FCBC9754BAFE1ECBFBC89865408DB44;    // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_LookAtHole__Direction_0FCBC9754BAFE1ECBFBC89865408DB44; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QVOX[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_LookAtHole;                                           // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_LookTowards_Alpha_54D3281C4B0B0FB25F3DE2A49C75F7B5;   // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_LookTowards__Direction_54D3281C4B0B0FB25F3DE2A49C75F7B5; // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GE1S[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_LookTowards;                                          // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NetworkCharacter_C*                              AIPlayer;                                                // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InHuggyHole;                                             // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ONV[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastRotation;                                            // 0x039C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_WhackAWuggySpawnPoint_C*                         TargetWuggy;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UObject*>                                     WuggyAnims;                                              // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       RescuePlayer;                                            // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NA9U[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_WormholeEntrance_C*                              WormholeEntrance;                                        // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PullingPlayerFromHole;                                   // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_WhackAWuggySpawnPoint_C*                         FailedTarget;                                            // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      NavPoints;                                               // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_ToyPuzzle_C*                                     Puzzle;                                                  // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DefaultUsername;                                         // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void Retract();
		void GetRandomPuzzleMagnet(class UBPC_HandMagnet_C** HandMagnet);
		void GetNearestPuzzle(class ABP_ToyPuzzle_C** AsBPToyPuzzle);
		void GetRandomNavPoint(class AActor** Output);
		void IsWuggyTaken(class ABP_WhackAWuggySpawnPoint_C* Wuggy, bool* Taken);
		void IsTargetWuggyStillValid(bool* Value);
		void FaceActor(float Alpha, class ABP_WhackAWuggySpawnPoint_C* Wuggy, class AActor* Actor);
		void ScanWuggyHoles(class ABP_WhackAWuggySpawnPoint_C** Wuggy);
		void SetUsername();
		void TL_LookTowards__FinishedFunc();
		void TL_LookTowards__UpdateFunc();
		void TL_LookAtHole__FinishedFunc();
		void TL_LookAtHole__UpdateFunc();
		void TL_AimAtGrapple__FinishedFunc();
		void TL_AimAtGrapple__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void TL_LookAtTarget__FinishedFunc();
		void TL_LookAtTarget__UpdateFunc();
		void TL_LookATHandPanel__FinishedFunc();
		void TL_LookATHandPanel__UpdateFunc();
		void OnFail_DD1E782941BC088A4EEE048BA3BFF463(EPathFollowingResult MovementResult);
		void OnSuccess_DD1E782941BC088A4EEE048BA3BFF463(EPathFollowingResult MovementResult);
		void OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0(EPathFollowingResult MovementResult);
		void OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0(EPathFollowingResult MovementResult);
		void OnFail_9305B89D4398F382C3FFEC80866FD252(EPathFollowingResult MovementResult);
		void OnSuccess_9305B89D4398F382C3FFEC80866FD252(EPathFollowingResult MovementResult);
		void OnFail_6F31769947BEDFD6363706BA065091DD(EPathFollowingResult MovementResult);
		void OnSuccess_6F31769947BEDFD6363706BA065091DD(EPathFollowingResult MovementResult);
		void WhackWuggy(class ABP_WhackAWuggySpawnPoint_C* Wuggy);
		void LookForWuggy();
		void MoveToHole(class ABP_WormholeEntrance_C* WormHole);
		void PullPlayerOutOfHole();
		void Grapple();
		void Escape(const struct FVector& TrainCart);
		void MoveToGrapple();
		void ReceivePossess(class APawn* PossessedPawn);
		void ReceiveBeginPlay();
		void FindPuzzle();
		void PlayPuzzle();
		void ExtendAtTarget(class AActor* Target, const struct FVector& Location, bool Pull);
		void ExecuteUbergraph_BP_AIController_TutorialPlayer(int32_t EntryPoint);
		void PullingPlayerFromHole__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
