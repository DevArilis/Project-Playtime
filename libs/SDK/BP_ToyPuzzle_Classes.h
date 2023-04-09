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
	 * BlueprintGeneratedClass BP_ToyPuzzle.BP_ToyPuzzle_C
	 * Size -> 0x017C (FullSize[0x039C] - InheritedSize[0x0220])
	 */
	class ABP_ToyPuzzle_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Cube;                                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              DHand;                                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   HandMagnet;                                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PanelMesh;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Base;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                DEBUG_StateDisplay;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BoobytrapSparkArea;                                      // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       SparkArea;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                Label;                                                   // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       FailAnimSpawnArea;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                GroupDisplay;                                            // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ToySpawnPoint;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Parent;                                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                SpawnDisplay;                                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DoSparks__Direction_7D7A4CD2475AB9F159AF85BA3942EA3D;    // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZC7B[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoSparks;                                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NetworkCharacter_C*                              Player;                                                  // 0x02C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   HandPanelMag_Ref;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_MP_HandPanel_C*                                  HandPanel_Ref;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FailAnim_C*                                      FailedAnimActor;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnInitialized;                                           // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSolvedPuzzle;                                          // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPuzzleDisplayed;                                       // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPuzzleBeginPlay;                                       // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        SparksTimer;                                             // 0x0320(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAttach;                                                // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TutorialLocked;                                          // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YX6V[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SolvedSound;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NetworkCharacter_C*                              MostRecentPlayer;                                        // 0x0348(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_PuzzleState                                              State;                                                   // 0x0350(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H3GI[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Progress;                                                // 0x0354(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       StillBoobytrapped;                                       // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMIX[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BoobytrapTriggered;                                      // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EPuzzleType                                                PuzzleType;                                              // 0x0370(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y8LA[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPuzzleProgress;                                        // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PillarIndex;                                             // 0x0388(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PAQP[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPuzzleSoundPack*                                    PuzzleSounds;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PuzzleSoundReplicator;                                   // 0x0398(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_PuzzleSoundReplicator();
		void OnRep_PuzzleType();
		void GetPuzzleType(EPuzzleType* PuzzleType);
		void DoesTouchCount(class UHandMagnetComponent* Magnet, bool* Counts, class ABP_NetworkCharacter_C** Character);
		void GetSavableState(E_PuzzleState* NewParam);
		void OnRep_Progress_Implementation();
		void OnRep_Progress();
		void OnRep_State_Implementation();
		void OnRep_State();
		void IsBoobyTrapped(bool* Active);
		void ToSolved();
		void ToShutdown();
		void ToBoobyTrapped();
		void IsShutDown(bool* Active);
		void IsSolved(bool* Active);
		void DecrementingToInProgress();
		void IncrementingToInProgress();
		void IdleToInProgress();
		void GetState(E_PuzzleState* State);
		void ToIdle();
		void FailedPuzzle();
		void IsInProgress(bool* InProgress);
		void DoIncrement(bool* ShouldComplete);
		void IsPlayerPlayingPuzzle(class UObject* PlayerRef, bool* Value);
		void SpawnFailedIndicator();
		void OnRep_IsBoobyTrapped();
		void DEPREC_IsActive(bool* Active);
		void AttenuateSound(float Initial, float* Result);
		void PlayerHasPerk(EPerkType PerkType, bool* Value, int32_t* PerkLevel);
		void CheckForPerkFinish(int32_t StreakMax, int32_t CurrentStreak, bool* Finished);
		void OnRep_Shutoff_Implementation();
		void OnRep_Parent_Shutoff();
		void GetPuzzlePlayerPingInMS(float* PingInMS);
		void OnShutdown();
		void SetSolved(bool Value);
		void OnRep_Parent_Initialized();
		void OnRep_Initialized_Implementation();
		void DoSparks__FinishedFunc();
		void DoSparks__UpdateFunc();
		void DoSparks__SpawnSpark__EventFunc();
		void PlaySolvedSound();
		void OnAttached(EAttachmentStateChange AttachmentStateChange);
		void ReceiveBeginPlay();
		void SpawnFailAnim();
		void Sabotage(float FixDuration);
		void ReActivate();
		void SetTextRenderColor(const struct FLinearColor& InLinearColor);
		void SpawnSparks(class UBoxComponent* Box);
		void TriggerTrap();
		void SpawnSparksBroken();
		void TransitionState(E_PuzzleState State);
		void StartSpawningSparks();
		void StopSpawningSparks();
		void ForceState(E_PuzzleState State);
		void NotifySabotageEnded();
		void BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void SpawnBoobyIndicator();
		void ChangeSecondaryObj(bool HandOn, class ABP_NetworkCharacter_C* PlayerRef);
		void ExecuteUbergraph_BP_ToyPuzzle(int32_t EntryPoint);
		void OnPuzzleProgress__DelegateSignature();
		void BoobytrapTriggered__DelegateSignature();
		void OnAttach__DelegateSignature(class ABP_ToyPuzzle_C* Puzzle);
		void OnPuzzleBeginPlay__DelegateSignature();
		void OnPuzzleDisplayed__DelegateSignature();
		void OnSolvedPuzzle__DelegateSignature(int32_t PillarIndex);
		void OnInitialized__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
