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
	 * BlueprintGeneratedClass BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C
	 * Size -> 0x0158 (FullSize[0x0378] - InheritedSize[0x0220])
	 */
	class ABP_AbstractJumpscareMaster_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow;                                                   // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      HuggyJumpscareScale;                                     // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceFromMonster;                                     // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BlendInTime;                                             // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime;                                            // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_M89A[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              TargetPlayer;                                            // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ACharacter*                                          TargetMonster;                                           // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_AbstractJumpscare_Camera_C*                      PlayerCamera;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_AbstractJumpscare_Camera_C*                      MonsterCamera;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerOriginalLocation;                                  // 0x0278(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerTargetLocation;                                    // 0x0284(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerTargetLocationBasedonMonsterPawn;                  // 0x0290(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PlayerOriginalRotation;                                  // 0x029C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PlayerTargetRotation;                                    // 0x02A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlendAlpha;                                              // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEndJumpscare;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             MonsterOriginalLocation;                                 // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MonsterTargetLocation;                                   // 0x02D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            MonsterOriginalRotation;                                 // 0x02E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            MonsterTargetRotation;                                   // 0x02EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            MonsterTargetControlRotation;                            // 0x02F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeltaSeconds;                                            // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PlayersOriginalOwner;                                    // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MonstersOriginalOwner;                                   // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TogglePlayersThirdPersonAfter;                           // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ToggleMonstersThirdPersonAfter;                          // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EUZU[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartedJumpscareAnimation;                             // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       EnoughSpaceforJumpscare;                                 // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EMonster_Type                                              MonsterType;                                             // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_EOAM[0x2];                                   // 0x0332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MommyJumpscareScale;                                     // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BoxyJumpscareScale;                                      // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MonsterPawnScale;                                        // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MonsterForwardIgnoringZ;                                 // 0x0340(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpscareScale;                                          // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpscareFloorZ;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MonsterIsCrouching;                                      // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6BWM[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MonsterEndLocation;                                      // 0x0358(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MonsterCrouchAfterJumpscare;                             // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MonsterToggledCrouchOnce;                                // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4UFW[0x2];                                   // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACharacter*>                                  ActorsToIgnore;                                          // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void DetermineIfTwoLocationsareonStairs(const struct FVector& A, const struct FVector& B, float CheckLength, float StairsThreshold, bool* OnStairs);
		void FindNewLocationifCapsuleIntersects(const struct FVector& TestPositionStart, const struct FVector& TestPositionEnd, float CapsuleRadius, float CapsuleHalfHeight, bool UseStartIfDidntHit, TArray<class AActor*> ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FVector* NewLocation, bool* Hit);
		void GroundLocationForPawn(const struct FVector& OriginalLocation, const struct FVector& AlternateLocationOnFail, const struct FVector& BoundToLocation, float PawnHalfSize, float MaxAngle, float Radius, bool UseFloorHitZ, struct FVector* FoundLocation);
		void CreateFlooredOriginalPositionForPawn(const struct FVector& OriginalLocation);
		void GetMonsterJumpscareSound(class USoundBase** JumpscareSound);
		void GetMonstersCamera(class UCameraComponent** Camera);
		void TransferBTransformsToA(class USceneComponent* A, class USceneComponent* B);
		void GetIsMonsterInThirdPerson(bool* InThirdPerson);
		void GetTargetMonstersPlayerController(class APlayerController** Controller);
		void PlayJumpscareCameraAnimations();
		void PlayJumpscareCharacterAnimations();
		void SetHuggyFirstPersonJumpscareTransforms();
		void ReceiveTick(float DeltaSeconds);
		void TogglePlayerThirdPersonAfterJumpscare();
		void ToggleMonsterThirdPersonAfterJumpscare();
		void MonsterBindToggledThirdPersonDuringJumpscare();
		void SetMommyFirstPersonJumpscareTransforms();
		void KillPlayer();
		void SetBoxyBooFirstPersonJumpscareTransforms();
		void FinishJumpscare();
		void TriggerJumpscare();
		void CreateOriginalandTargetTransformsforPlayer();
		void CreateOriginalandTargetTransformsForMonster();
		void PlayMonsterJumpscare();
		void UnHideMonsterCharacterSkeleton(bool Hide);
		void UnHidePlayerCharacterSkeleton(bool HideCharacter);
		void EndMonsterJumpscares();
		void ToggleThirdPersonViewsIfNeeded();
		void FindMonstersPawnSizeAndForwardDirectionAndFloorZ();
		void MonsterBindCrouchDuringJumpscare();
		void TurnOnCrouchAfterJumpscare();
		void TurnOffCrouchAfterJumpscare();
		void SetMonstersandPlayersFinalLocations();
		void ExecuteUbergraph_BP_AbstractJumpscareMaster(int32_t EntryPoint);
		void OnStartedJumpscareAnimation__DelegateSignature();
		void OnEndJumpscare__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
