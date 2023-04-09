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
	 * Class Playtime_Multiplayer.CosmeticMeshContainer
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ACosmeticMeshContainer : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ActorConnection
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class AActorConnection : public AActor
	{
	public:
		unsigned char                                              UnknownData_3X2C[0x40];                                  // 0x0220(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnConnectionStopped__DelegateSignature();
		void OnConnectionBroken__DelegateSignature(class AActorConnection* Connection);
		bool IsComponentLastInConnection(class USceneComponent* Component);
		bool IsComponentInConnection(class USceneComponent* Component);
		void HandleComponentWantsToDisconnect(class USceneComponent* Component);
		void AddComponentToConnection(class USceneComponent* NewComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.AFirstCPPClass
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AAFirstCPPClass : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeCharacter
	 * Size -> 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
	 */
	class APlaytimeCharacter : public ACharacter
	{
	public:
		class UAISenseConfig_Sight*                                Sight;                                                   // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81DX[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowTooltipIfAllowed(class AActor* Actor, class UTooltipComponent* Tooltip);
		void Server_KnockBack(const struct FVector& KnockBackOrigin, float Horizontal, float Vertical);
		void OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ANetworkCharacter
	 * Size -> 0x0170 (FullSize[0x0640] - InheritedSize[0x04D0])
	 */
	class AANetworkCharacter : public APlaytimeCharacter
	{
	public:
		unsigned char                                              UnknownData_CXHN[0x10];                                  // 0x04D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       GrabpackSkeletalMesh;                                    // 0x04E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 CameraSpringArm;                                         // 0x04E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    CameraComponent;                                         // 0x04F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 ExtendoHands;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_HeldToyPart;                                          // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    SwingPath;                                               // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrabpackBroken;                                         // 0x0510(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20R9[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              FPGrabpackGuns;                                          // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 LeftSpringArm;                                           // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_LeftLauncherGun;                                      // 0x0528(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_LeftHand;                                             // 0x0530(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     LeftHandSpawn;                                           // 0x0538(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUHandRigPackageComponent*                           LeftHandPkg;                                             // 0x0540(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 RightSpringArm;                                          // 0x0548(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_RightLauncherGun;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_RightHand;                                            // 0x0558(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RightHandSpawn;                                          // 0x0560(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUHandRigPackageComponent*                           RightHandPkg;                                            // 0x0568(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 TP_PawnControlRotationArm;                               // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 TP_ShoulderArm;                                          // 0x0578(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 TP_DistanceArm;                                          // 0x0580(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    TP_Camera;                                               // 0x0588(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerkPackage                                        Perks;                                                   // 0x0590(0x0030) BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShotBrokenHand;                                        // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkSaveGameChanged;                                   // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bPlayerIsDown;                                           // 0x05E0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInsideLocker;                                         // 0x05E1(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnteringLocker;                                       // 0x05E2(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsThirdPerson;                                           // 0x05E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvailableWireLength;                                     // 0x05E4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharedLookPitch;                                         // 0x05E8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeldToyPartIndex;                                        // 0x05EC(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimb                                                      HeldToyPartLimb;                                         // 0x05F0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayerNeedsRevived;                                      // 0x05F1(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X296[0x2];                                   // 0x05F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHealth;                                               // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x05F8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWireLength;                                           // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NetworkHandClass;                                        // 0x0600(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandRetractedAnim;                                       // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        JokeTimerHandle;                                         // 0x0610(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAttachmentStateChange;                                 // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FName                                                TraceTag;                                                // 0x0628(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             InteractedInterface;                                     // 0x0630(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O2YL[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (PADDING)

	public:
		void TurnOnJokeTimer();
		void TurnOffJokeTimer();
		void TakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		bool ShouldLeaveFootprint();
		void SetPlayerNeedsRevivedWithNotify(bool Value);
		void SetLocalPerksThenReplicate();
		void SetInteractedInterface(class UObject* Interactable);
		void SetHealthWithNotifyClamped(float In_Health);
		void ServerOnly_DropToyPart(bool SpawnDrop, const struct FVector& CustomLocation);
		void Server_SetSharedLookPitch(float Pitch);
		void Server_SetPerks(const struct FPerkPackage& In_PerkSaveGame);
		void Server_DropToyPart(const struct FVector& Location);
		void PseudoConstruct();
		void OnRep_PlayerNeedsRevived();
		void OnRep_PerkSaveGame();
		void OnRep_HeldToyPartLimb();
		void OnRep_HeldToyPartIndex();
		void OnRep_Health();
		void OnRep_GrabpackBroken();
		class UObject* ObtainInteractedInterface(bool* OutIsValid);
		void JokeTimer();
		void InputAction_RightHandExtend_Released();
		void InputAction_RightHandExtend_Pressed();
		void InputAction_LeftHandExtend_Released();
		void InputAction_LeftHandExtend_Pressed();
		void IncrementPlayerStat(float Amount, EPlayerStatistics Stat);
		void HandStateChange(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange);
		class UPlaytimeMovementComponent* GetPlaytimeMovementComponent();
		void Client_PlayDamageFX();
		void BP_TakeAnyDamageWhileAlive(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bKillingHit);
		void BP_SpawnDroppedToyPart(int32_t ToyPartIndex, const struct FVector& CustomLocation);
		void BP_PlayDamageFX();
		void BP_OnRep_SavedPerksChanged();
		void BP_OnRep_PlayerNeedsRevived();
		void BP_OnRep_PerkSaveGame();
		void BP_OnRep_HeldToyPartIndex();
		void BP_OnRep_Health();
		class USkeletalMeshComponent* BP_GetThirdPersonMesh();
		class UStaticMeshComponent* BP_GetHeldToyPart();
		class UCameraComponent* BP_GetCameraComponent();
		void Authority_SetGrabpackBroken(bool In_Broken);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkDashHandle
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ANetworkDashHandle : public AActor
	{
	public:
		class USceneComponent*                                     RootScene;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     FirstEdge;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     SecondEdge;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     LowestLocation;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ANetworkFist
	 * Size -> 0x00D0 (FullSize[0x02F0] - InheritedSize[0x0220])
	 */
	class AANetworkFist : public AActor
	{
	public:
		bool                                                       IsActive;                                                // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZM2[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUFistRigPackageComponent*                           FromPkg;                                                 // 0x0228(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APhysicsConstraintActor*                             AttachConstraint;                                        // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AANetworkCharacter*                                  GrabbedCharacter;                                        // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RootScene;                                               // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                FistPivot;                                               // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RopeAttachmentScene;                                     // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachConstraintScene;                                   // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   RetractionCapsuleConstraint;                             // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          PlayerHandsCollisionChannel;                             // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B38K[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShootSpeed;                                              // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullSpeed;                                               // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWireLength;                                           // 0x0274(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentWireLength;                                       // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQNU[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OriginalFistPivotTransform;                              // 0x0280(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         OriginalCollisionResponses;                              // 0x02B0(0x0020) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShootingForward;                                        // 0x02D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRetractingBackward;                                     // 0x02D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2O0Q[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwningCharacter;                                         // 0x02D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     SpawnPoint;                                              // 0x02E0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6B6Z[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsRetractingBackward();
		class AActor* GetOwningCharacter();
		void DetachAndRetract();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ANetworkHand
	 * Size -> 0x01E0 (FullSize[0x0400] - InheritedSize[0x0220])
	 */
	class AANetworkHand : public AActor
	{
	public:
		bool                                                       IsActive;                                                // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPulling;                                               // 0x0221(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimb                                                      Limb;                                                    // 0x0222(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OC3[0x5];                                   // 0x0223(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUHandRigPackageComponent*                           FromPkg;                                                 // 0x0228(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APhysicsConstraintActor*                             AttachConstraint;                                        // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 GrabbedPrimitive;                                        // 0x0238(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AANetworkCharacter*                                  GrabbedPlayer;                                           // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUNetworkGrabComponent*                              GrabbedGrabComponent;                                    // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHandMagnetComponent*                                GrabbedMagnetComponent;                                  // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AANetworkSwingHandle*                                GrabbedSwingHandle;                                      // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RootScene;                                               // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     HandScene;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                HandPivot;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_Hand;                                                 // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RopeAttachmentScene;                                     // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachConstraintScene;                                   // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          HandMagnetTraceChannel;                                  // 0x0290(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          PlayerHandsCollisionChannel;                             // 0x0291(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZCP[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShootSpeed;                                              // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullSpeed;                                               // 0x0298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialShootSpeed;                                       // 0x029C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityStrength;                                         // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRBQ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         GravityOverDistance;                                     // 0x02A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MasterArcSpeed;                                          // 0x02B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LVX[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ArcSpeedOverDistance;                                    // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TM5S[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWireLength;                                           // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentWireLength;                                       // 0x02D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CancellationPause;                                       // 0x02D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentCancellationTimer;                                // 0x02DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenCancelled;                                        // 0x02E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShootingForward;                                        // 0x02E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRetractingBackward;                                     // 0x02E2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3896[0xD];                                   // 0x02E3(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OriginalHandPivotTransform;                              // 0x02F0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         OriginalCollisionResponses;                              // 0x0320(0x0020) NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPseudoDestroy;                                         // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPseudoSpawn;                                           // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWHJ[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabbedThickness;                                        // 0x0368(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFromPalm;                                        // 0x036C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTouching;                                             // 0x0370(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZVC[0x3F];                                  // 0x0371(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SK_HandInitialAnimation;                                 // 0x03B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginTouch;                                            // 0x03B8(0x0010) Net, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndTouch;                                              // 0x03C8(0x0010) Net, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bGrabbedPlayer;                                          // 0x03D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E431[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SpawnPoint;                                              // 0x03E0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ILZ5[0x18];                                  // 0x03E8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Multicast_GrabOntoPrimitive(class UPrimitiveComponent* Primitive, class UUNetworkGrabComponent* In_GrabComponent, class UHandMagnetComponent* In_MagnetComponent);
		class AANetworkCharacter* GetOwningCharacter();
		class UAnimInstance* GetAnimInstance();
		void DetermineVisuals();
		void DetachAndRetract();
		void CheckWire();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ANetworkSwingHandle
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AANetworkSwingHandle : public AActor
	{
	public:
		class USceneComponent*                                     RootScene;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     FirstEdge;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     SecondEdge;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     LowestLocation;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrappleSabotaged;                                       // 0x0248(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D7Y[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ConnectionsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConnectionsInterface : public UInterface
	{
	public:
		void EstablishConnection(class USceneComponent* ConnectedComponent);
		void BreakConnection();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ConnectionsManagerComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UConnectionsManagerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JO3H[0x30];                                  // 0x00C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopCurrentConnection();
		void OnStateChanged__DelegateSignature(EManagerConnectionState NewState);
		void HandleConnectionBroken(class AActorConnection* Connection);
		EManagerConnectionState GetState();
		void AddToConnection(class USceneComponent* NewComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ConnectorComponent
	 * Size -> 0x0058 (FullSize[0x0250] - InheritedSize[0x01F8])
	 */
	class UConnectorComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_YREJ[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SFO0[0x10];                                  // 0x0200(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnConnectionEstablished;                                 // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConnectionBroken;                                      // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               m_ConnectorTags;                                         // 0x0230(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.CosmeticFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SaveCosmetics(class UCustomizationSaveGame* In_SaveGame);
		class UCustomizationSaveGame* LoadCosmetics();
		struct FSoundPackEntry GetSoundPackData(int32_t ID);
		TArray<int32_t> GetShopItemsByEvent(const class FString& EventName);
		struct FShopItem GetShopItemData(int32_t Item);
		struct FLinearColor GetRarityColor(ECosmeticRarity Rarity);
		int32_t GetRandomItem();
		bool GetPlayerCosmeticAnimInstance(const struct FCosmetic& CosmeticItem, class UClass** AnimInstance);
		struct FMommySoundSet GetMommySounds(class UCustomizationSaveGame* Item);
		class USoundBase* GetMommySoundFor(const struct FMommySoundSet& Sounds, EMommySoundSet Set);
		class UTexture2D* GetItemThumbnail(int32_t Item);
		class FText GetItemName(int32_t Item);
		struct FItem GetItemData(int32_t Item);
		TArray<int32_t> GetIDsFromSpecifiedTable(const class FString& Table);
		struct FHuggySoundSet GetHuggySounds(class UCustomizationSaveGame* Item);
		class USoundBase* GetHuggySoundFor(const struct FHuggySoundSet& Sounds, EHuggySoundSet Set);
		int32_t GetEmoteSimple(const struct FPresetSlot& Slot, int32_t Index);
		TArray<int32_t> GetDefaultUnlockedItemsOfType(ECosmeticTypeEnum Type);
		class FName GetCosmeticTypeName(ECosmeticTypeEnum Type);
		ECosmeticTypeEnum GetCosmeticType(int32_t Item);
		TArray<int32_t> GetCosmeticsOfType(ECosmeticTypeEnum Type);
		TArray<int32_t> GetCosmeticOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, bool bShowPrivate);
		struct FCosmetic GetCosmeticDataByName(const class FName& Cosmetic);
		struct FCosmetic GetCosmeticData(int32_t Item);
		struct FBundle GetBundleData(int32_t ID);
		struct FBoxySoundSet GetBoxySounds(class UCustomizationSaveGame* Item);
		class USoundBase* GetBoxySoundFor(const struct FBoxySoundSet& Sounds, EBoxySoundSet Set);
		TArray<int32_t> GetAllItems();
		TArray<int32_t> GetAllActions();
		TArray<int32_t> GetActionsOfTypeFor(ECharacterType For);
		struct FAction GetActionData(int32_t Item);
		void ClearMaterialSlots(class USkeletalMesh* Mesh);
		void ClearCosmetics(struct FPresetSlot* Slot);
		TArray<int32_t> AsCleanIntArray(const struct FPresetSlot& Slot);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.CustomizationSaveGame
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UCustomizationSaveGame : public USaveGame
	{
	public:
		class FName                                                SelectedSurvivorPreset;                                  // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FPresetSlot>                      SurvivorPresets;                                         // 0x0030(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		class FName                                                SelectedBoxyPreset;                                      // 0x0080(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FPresetSlot>                      BoxyPresets;                                             // 0x0088(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		class FName                                                SelectedHuggyPreset;                                     // 0x00D8(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FPresetSlot>                      HuggyPresets;                                            // 0x00E0(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		class FName                                                SelectedMommyPreset;                                     // 0x0130(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FPresetSlot>                      MommyPresets;                                            // 0x0138(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic

	public:
		void UnequipCosmetic(ECharacterType Character, ECosmeticTypeEnum Type);
		void SetSelectedPreset(ECharacterType Character, const class FName& Index);
		void Print();
		bool IsEmoteEquipped(ECharacterType Character, int32_t ID);
		bool IsCosmeticEquipped(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ID);
		struct FPresetSlot GetSelectedPresetNotByRef(ECharacterType Character);
		int32_t GetEquippedEmote(ECharacterType Character, int32_t Slot);
		int32_t GetEquippedCosmetic(ECharacterType Character, ECosmeticTypeEnum Type);
		void EquipEmote(ECharacterType Character, int32_t Slot, int32_t ID);
		void EquipCosmeticColor(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ColorIndex);
		void EquipCosmetic(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ID);
		void DirectlySetSelectedPreset(ECharacterType Character, const struct FPresetSlot& Preset);
		void DeletePreset(ECharacterType Character, const class FName& Name);
		int32_t ClampPresetRange(int32_t Num);
		void AddNewPreset(ECharacterType Character, const class FName& Name, const struct FPresetSlot& PresetStruct);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.CustomNinjaCharacter
	 * Size -> 0x0030 (FullSize[0x0550] - InheritedSize[0x0520])
	 */
	class ACustomNinjaCharacter : public ANinjaCharacter
	{
	public:
		class UCameraComponent*                                    CameraComp;                                              // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ACustomPlayerController*                             CPC;                                                     // 0x0528(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AMommyCameraPawn*                                    MommyCamera;                                             // 0x0530(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MommyCameraPawnClass;                                    // 0x0538(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseActorRotation;                                       // 0x0540(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LRCK[0xF];                                   // 0x0541(0x000F) MISSED OFFSET (PADDING)

	public:
		void SpawnMommyCamera();
		void OnTouchingWallChanged();
		void OnRep_TouchingWall();
		void MoveRight(float Val);
		void MoveForward(float Val);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.CustomPlayerController
	 * Size -> 0x0008 (FullSize[0x0578] - InheritedSize[0x0570])
	 */
	class ACustomPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_5M5P[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetViewTargetToMommyCamera();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.DoorStateMachineComponet
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UDoorStateMachineComponet : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             InitStateDelegate;                                       // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EndStateDelegate;                                        // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TickStateDelegate;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             StateChangedDelegate;                                    // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTag                                        StateTag;                                                // 0x00F0(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        InitialStateTag;                                         // 0x00F8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UP1P[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                StateHistory;                                            // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    StateHistoryLength;                                      // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Openness;                                                // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1JS[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SwitchState(const struct FGameplayTag& _StateTag);
		void OpenDoor();
		void CloseDoor();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.DualSplineFollower
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class ADualSplineFollower : public AActor
	{
	public:
		class FScriptMulticastDelegate                             FinishedMoving;                                          // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USplineComponent*                                    FirstSpline;                                             // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineComponent*                                    SecondSpline;                                            // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     RootScene;                                               // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Progress;                                                // 0x0248(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsReversed;                                             // 0x024C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UBMT[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AANetworkCharacter*                                  CharacterToPull;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Speed;                                                   // 0x0258(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CrossoverThreshold;                                      // 0x025C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasPseudoSpawned;                                       // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R3KF[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetTimeToTake(float TimeToTake);
		void ReverseDirection();
		void Multicast_PseudoSpawn(class USplineComponent* SplineToBaseFirstSplineOn, class USplineComponent* In_SecondSpline, const struct FVector& CharacterLocation);
		void GetCharacterToPull(class AANetworkCharacter** Character);
		void Authority_PseudoSpawn(float TimeToTake, class USplineComponent* SplineToBaseFirstSplineOn, class USplineComponent* In_SecondSpline);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.DynamicMusicSubsystem
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UDynamicMusicSubsystem : public UGameInstanceSubsystem
	{
	public:
		bool                                                       bIsCrossfading;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCurrentAudio;                                           // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XAHA[0x1E];                                  // 0x0032(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAudioComponent*>                             Audios;                                                  // 0x0050(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class USoundWave*                                          CurrentAmbience;                                         // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        Timer;                                                   // 0x0068(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetInactiveAudio(class UAudioComponent* Inactive);
		void SetAmbientMusic(class USoundWave* AmbientMusic);
		void SetActiveAudio(class UAudioComponent* Active);
		void ReturnToAmbientMusic(float FadeTime, float NewVolume);
		class UAudioComponent* GetInactiveAudio();
		class UAudioComponent* GetActiveAudio();
		void FadeOut(float FadeTime);
		void ExecuteNextCrossfadeRequest();
		void CrossfadeTo(class USoundWave* NewMusic, float FadeTime, float NewVolume);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.GirlbossFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGirlbossFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class UObject*> LoadAssetsByClassFromPath(class UClass* Class, const class FString& Path);
		bool InEditor();
		void ForceResetBoundInputsOnActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.Grabbable
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UGrabbable : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAttachmentStateChange;                                 // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YQF[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.GrabpackInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGrabpackInterface : public UInterface
	{
	public:
		void OnHandStartPull(class UObject* Caller);
		void OnHandDetach(class UObject* Caller);
		void OnHandAttach(class UObject* Caller);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.HandMagnetComponent
	 * Size -> 0x0098 (FullSize[0x0290] - InheritedSize[0x01F8])
	 */
	class UHandMagnetComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_DC4G[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		bool                                                       bAutoDetach;                                             // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JH9[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoDetachDelay;                                         // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAttachedHands;                                        // 0x0208(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFA1[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GrabpackInterfaceTags;                                   // 0x0210(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UActorComponent*>                             GrabpackImplementors;                                    // 0x0220(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttachmentStateChange;                                 // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FHandTimer>                                  AttachedHands;                                           // 0x0240(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_GhostHand;                                            // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWHV[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          HandAttachmentTransform;                                 // 0x0260(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void TimerRemoveHand(const struct FHandTimer& HandTimer);
		void RemoveHand(const struct FHandTimer& HandTimer);
		void PseudoConstruct(TArray<class UActorComponent*> In_GrabpackInterfaceImplementers);
		bool IsBeingPulled();
		bool HasPullingHands();
		void HasAnyAttachedHands(bool* Valid);
		float GetPullAlignment();
		struct FTransform GetGhostHandTransform();
		void GetFirstAttachedPlayer(class AActor** Player, bool* Valid);
		class UAnimSequence* GetAnimationToPlay();
		void DetachAllHands();
		bool CanAcceptAnotherHand();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.HostMigrationData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UHostMigrationData : public UObject
	{
	public:
		class FString                                              MapName;                                                 // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerCount;                                             // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR2D[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatchData                                          MatchData;                                               // 0x0040(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FPlayerData>                                 PlayerData;                                              // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		int32_t GetExpectedPlayerCount();
		void ClearSaveData();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.HostMigrationData_Escape
	 * Size -> 0x0140 (FullSize[0x01B0] - InheritedSize[0x0070])
	 */
	class UHostMigrationData_Escape : public UHostMigrationData
	{
	public:
		struct FEscape_MatchData                                   Escape_MatchData;                                        // 0x0070(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FEscape_PlayerData>                          Escape_PlayerData;                                       // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPK2[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMonsterData                                        MonsterData;                                             // 0x00D0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FToyPartData>                                ToyPartData;                                             // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FToyMachineData                                     ToyMachineData;                                          // 0x0140(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FTrainData                                          TrainData;                                               // 0x0158(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MBN[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPuzzleData>                                 PuzzleData;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                      ClosedSlamDoors;                                         // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                      ClosedGrapples;                                          // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  MiniHuggys;                                              // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.HuggyMovementComponent
	 * Size -> 0x0280 (FullSize[0x0D70] - InheritedSize[0x0AF0])
	 */
	class UHuggyMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_CPWD[0x220];                                 // 0x0AF0(0x0220) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreShrinker;                                         // 0x0D10(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDN1[0x3];                                   // 0x0D11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChargeCooldown;                                          // 0x0D14(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackSlowTimer;                                         // 0x0D18(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanCharge;                                               // 0x0D1C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttackSlow;                                              // 0x0D1D(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43KZ[0x2];                                   // 0x0D1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             StartedCharging;                                         // 0x0D20(0x0010) Net, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EndedCharging;                                           // 0x0D30(0x0010) Net, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              HuggyShrinkerClass;                                      // 0x0D40(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunSpeed;                                                // 0x0D48(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostAttackSpeed;                                         // 0x0D4C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ChargeSpeed;                                             // 0x0D50(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunAcceleration;                                         // 0x0D54(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ChargeAcceleration;                                      // 0x0D58(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AOV8[0x14];                                  // 0x0D5C(0x0014) MISSED OFFSET (PADDING)

	public:
		void TimerForRecharge();
		void Server_BeginCharging(bool Is_Charging);
		void NetworkSafe_BeginCharging(bool Is_Charging);
		bool IsHuggyCharging();
		void EndCharging();
		void AfterAttackSlow(float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.Interactable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractable : public UInterface
	{
	public:
		void Owner_EndInteraction(class AANetworkCharacter* InteractingActor);
		void Owner_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress);
		void Owner_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration);
		void Authority_EndInteraction(class AANetworkCharacter* InteractingActor);
		void Authority_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress);
		void Authority_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.JSONFunctionLibrary
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UJSONFunctionLibrary : public UObject
	{
	public:
		class FString                                              PlaytimeAuthenticationHeader;                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.JSONSubsystem
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UJSONSubsystem : public UGameInstanceSubsystem
	{
	public:
		class FString                                              Dev_PlaytimeApiUrl;                                      // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Deployment_PlaytimeApiUrl;                               // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KZHC[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlaytimeAuthenticationHeader;                            // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Test_BattlepassJsonFunctions();
		void SetBattlepassJson(const class FString& BPResponse);
		struct FAPIWalletsResponse GetWalletsResponse(const class FString& ResponseString);
		struct FAPIShoppyResponse GetShoppyResponse(const class FString& ResponseString);
		struct FAPIRewardsResponse GetRewardsResponse(const class FString& ResponseString);
		class FString GetPlaytimeApiRoute(const class FString& Route);
		struct FAPIPerksResponse GetPerksResponse(const class FString& ResponseString);
		struct FAPILevelResponse GetLevelResponse(const class FString& ResponseString);
		struct FAPIInventoryResponse GetInventoryResponse(const class FString& ResponseString);
		struct FBattlepassJsonResponse GetBattlepassJson();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.KangarooMovementComponent
	 * Size -> 0x02D0 (FullSize[0x0DC0] - InheritedSize[0x0AF0])
	 */
	class UKangarooMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_VQWR[0x208];                                 // 0x0AF0(0x0208) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreShrinker;                                         // 0x0CF8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsChargingLaunch;                                       // 0x0CF9(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8US[0x6];                                   // 0x0CFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EndedBarraging;                                          // 0x0D00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ANetworkKangaroo*                                    Owner;                                                   // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MonsterShrinkerClass;                                    // 0x0D18(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunSpeed;                                                // 0x0D20(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostAttackSpeed;                                         // 0x0D24(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BarrageSpeed;                                            // 0x0D28(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunAcceleration;                                         // 0x0D2C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BarrageAcceleration;                                     // 0x0D30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFallSpeed;                                            // 0x0D34(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBarraging;                                              // 0x0D38(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VPJ[0x3];                                   // 0x0D39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BarrageTimeRemaining;                                    // 0x0D3C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostPunchBarrageDuration;                                // 0x0D40(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2GR[0x4];                                   // 0x0D44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_Punch;                                                // 0x0D48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      PunchTimer;                                              // 0x0D58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PunchCooldown;                                           // 0x0D5C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_125M[0x10];                                  // 0x0D60(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentJumpChargeAmount;                                 // 0x0D70(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16ID[0x4];                                   // 0x0D74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         LaunchPitchToJumpPowerCurve;                             // 0x0D78(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LookPitchToLaunchPitchCurve;                             // 0x0D80(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFOV;                                              // 0x0D88(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitFOV;                                                 // 0x0D8C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpChargeTime;                                          // 0x0D90(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpMaxLaunchPower;                                      // 0x0D94(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOD2[0x8];                                   // 0x0D98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             HasFullyCharged;                                         // 0x0DA0(0x0010) Net, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K67P[0x10];                                  // 0x0DB0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPunchPressed(bool In_PunchPressed);
		void Server_Punch();
		void Server_JumpReleaseCharge(float ChargeAmount);
		void Server_JumpBeginCharge();
		void PseudoConstruct(class ANetworkKangaroo* In_Owner);
		void NetworkSafe_Punch();
		bool NetworkSafe_JumpReleaseCharge(float ChargeAmount);
		bool NetworkSafe_JumpBeginCharge();
		void Multicast_Punch();
		bool IsLaunchVerified(float AmountToCheck);
		bool IsBoxyBarraging();
		void DrawProjectedPath();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.LeadershipRadius
	 * Size -> 0x0010 (FullSize[0x0480] - InheritedSize[0x0470])
	 */
	class ULeadershipRadius : public USphereComponent
	{
	public:
		TArray<class UClass*>                                      ActorTypeToHeal;                                         // 0x0470(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.LeaverFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaverFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SaveLeaverSaveGame(class ULeaverSaveGame* SaveGame);
		class ULeaverSaveGame* LoadLeaverSaveGame();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.LeaverSaveGame
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULeaverSaveGame : public USaveGame
	{
	public:
		struct FDateTime                                           LastPunishment;                                          // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WN84[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		bool Does12HourPunishmentExist();
		bool ComparePunishmentLevel(struct FTimespan* TimeLeft);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.LevelFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FLevelStruct GetLevelByID(int32_t Level);
		TArray<int32_t> GetAllPlayableLevels();
		TArray<struct FLevelStruct> GetAllLevels();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MasterDataAsset
	 * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
	 */
	class UMasterDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              SoundClasses[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              SoundMixes[0x50];                                        // 0x0080(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              DataTables[0x50];                                        // 0x00D0(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              Levels[0x50];                                            // 0x0120(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MasterFunctionLibrary
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMasterFunctionLibrary : public UObject
	{
	public:
		class UMasterDataAsset*                                    MasterDataAsset;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void WrapInt(int32_t Value, int32_t Min, int32_t Max, int32_t* Out);
		void SwitchLocallyControlledByPlayer(class APawn* Pawn, bool* Yes);
		void SwitchIsPlayerMonster(class UObject* WorldContextObject, bool* Yes);
		void StringContainsProfanity(const class FString& In, bool* Out);
		void StringArrayToNameArray(TArray<class FString> In, TArray<class FName>* Out);
		TArray<float> SortFloats(TArray<float> Floats);
		void SetUIMode(class APlayerController* PlayerController, bool bShowMouse, EUIMode UIMode);
		void SetSelectedSabotage(const class FName& Sabotage, TMap<class FName, struct FSabotageSaveData>* Sabotages);
		void SetSabotageLevel(const class FName& Sabotage, int32_t Level, TMap<class FName, struct FSabotageSaveData>* Sabotages);
		void SaveSettings(class USettingsSaveGame* Settings, bool* Success);
		void SaveSabotages(TMap<class FName, struct FSabotageSaveData> Sabotages, bool* Success);
		void SanitizeString(const class FString& In, class FString* Out);
		void RemoveWidgetIfValid(class UWidget* Target);
		ECharacterType PreviousMonsterType(ECharacterType Current);
		ECharacterType PreviousCharacterType(ECharacterType Current);
		class FString PointToResolution(const struct FIntPoint& In);
		void PointsToResolutions(TArray<struct FIntPoint> In, TArray<class FString>* Out);
		int32_t NtoI(const class FName& Name);
		ECharacterType NextMonsterType(ECharacterType Current);
		ECharacterType NextCharacterType(ECharacterType Current);
		bool NearlyEqual(const struct FVector& A, const struct FVector& B, float Epsilon);
		void NameArrayToStringArray(TArray<class FName> In, TArray<class FString>* Out);
		TArray<int32_t> NameArrayToIntArray(TArray<class FName> Names);
		float MultiplyByPiOverTwo(float In);
		class USettingsSaveGame* LoadSettings();
		void LoadSabotages(TMap<class FName, struct FSabotageSaveData>* Sabotages);
		void LoadAndApplySettings(class APlayerController* Controller, class USettingsSaveGame** Settings, class UObject* WorldContextObject);
		void LevelUpSabotage(const class FName& Sabotage, TMap<class FName, struct FSabotageSaveData>* Sabotages);
		class FName ItoN(int32_t Name);
		void IsValidCharacters(const class FString& String, bool* Valid);
		bool IsTooltipNeeded(class UObject* WorldContextObject, const class FString& TooltipKey);
		void IsPlayerMonster(class UObject* WorldContextObject, bool* IsMonster);
		bool IsOdd(int32_t I);
		void IsLocallyControlledByPlayer(class APawn* Pawn, bool* Yes);
		TArray<class FName> IntArrayToNameArray(TArray<int32_t> Ints);
		void IndexToGridCoords(int32_t In, int32_t GridWidth, int32_t* GridRow, int32_t* GridColumn);
		class UWorld* GetTransitionLevel();
		void GetTargetArmLength(float CurrentLength, float DeltaSeconds, bool IsRunning, float* Length, bool* ShouldUpdate);
		class UDataTable* GetSpecifiedDataTable(const class FString& Name);
		class USoundClass* GetSoundClass(const class FString& Name);
		void GetSelectedSabotageName(class FName* Sabotage);
		void GetSelectedSabotage(TMap<class FName, struct FSabotageSaveData> Sabotages, class FName* Sabotage);
		void GetSabotageDataFromName(TMap<class FName, struct FSabotageSaveData> Sabotages, const class FName& SabotageName, class FString* Name, int32_t* Level, bool* Selected, class FString* Description, bool* Yes, struct FSabotageDef* Def);
		struct FTransform GetRandomActorTransform(TArray<class AActor*> Actors);
		void GetPlaybackTime(class UAudioComponent* AudioComponent, float* Time);
		int32_t GetOctant(class UObject* WorldContextObject, const struct FVector2D& Point);
		void GetNearestMultiple(float In, float MultipleOf, float* Out);
		class UMasterDataAsset* GetMasterDataAsset();
		class FString GetGameVersion();
		class USoundMix* GetDefaultSoundMixModifier();
		void GetComponentForwardTrace(class USceneComponent* Target, float Distance, struct FVector* Start, struct FVector* End);
		class FText GetCharacterName(ECharacterType Type);
		class FString GetBuildDate();
		void FilterAndSortByType(TArray<class UActorComponent*> Elements, class AActor* Player);
		bool DoesMonsterExist(class UObject* WorldContextObject);
		void ClampClientLocation(class UObject* WorldContextObject, const struct FVector& ServerLocation, const struct FVector_NetQuantize& ClientLocation, struct FVector* ValidatedLocation, bool DoTrace, float MaxDistance);
		void ApplySettings(class USettingsSaveGame* Settings, class APlayerController* Controller, class UObject* WorldContextObject);
		float AddFloats(TArray<float> Floats);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MommyCamera
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AMommyCamera : public AActor
	{
	public:
		class UCameraComponent*                                    CameraComponent;                                         // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MommyCameraPawn
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AMommyCameraPawn : public APawn
	{
	public:
		class UCameraComponent*                                    CameraComponent;                                         // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MommyMovementComponent
	 * Size -> 0x0250 (FullSize[0x0D40] - InheritedSize[0x0AF0])
	 */
	class UMommyMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_517S[0x210];                                 // 0x0AF0(0x0210) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreShrinker;                                         // 0x0D00(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanPunch;                                               // 0x0D01(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54KW[0x2];                                   // 0x0D02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttackCooldown;                                          // 0x0D04(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackSlowTimer;                                         // 0x0D08(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackSlow;                                             // 0x0D0C(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZI8C[0x3];                                   // 0x0D0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANetworkMommy*                                       Owner;                                                   // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunSpeed;                                                // 0x0D18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToGrapple;                                         // 0x0D1C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7VQ[0x3];                                   // 0x0D1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MonsterShrinkerClass;                                    // 0x0D20(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostAttackSpeed;                                         // 0x0D28(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunAcceleration;                                         // 0x0D2C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFallSpeed;                                            // 0x0D30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QHJL[0xC];                                   // 0x0D34(0x000C) MISSED OFFSET (PADDING)

	public:
		void Server_SetWantsToGrapple(bool In_WantsToGrapple);
		void PseudoConstruct(class ANetworkMommy* In_Owner);
		void AfterAttackSlow(float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.Monster
	 * Size -> 0x0030 (FullSize[0x0500] - InheritedSize[0x04D0])
	 */
	class AMonster : public APlaytimeCharacter
	{
	public:
		bool                                                       bUseNewCombatSystem;                                     // 0x04D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYYO[0x7];                                   // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMonsterDataAsset*                                   MonsterDataAsset;                                        // 0x04D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCarryingPlayer;                                         // 0x04E0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZY7[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AANetworkCharacter*                                  CarriedPlayer;                                           // 0x04E8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttackData                                         AttackData;                                              // 0x04F0(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bChargingAttack;                                         // 0x04F8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5EF[0x3];                                   // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedChargeTime;                                       // 0x04FC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Server_EndChargeAttack();
		void Server_BeginChargeAttack();
		void Multicast_PickupPlayer(class AANetworkCharacter* Survivor);
		void Multicast_DropPlayer(class AANetworkCharacter* Survivor);
		void DetermineTraceResult(const struct FHitResult& Hit);
		void DamagePlayer(class AANetworkCharacter* Player, const struct FAttackData& In_AttackData);
		void ChargeAttack(float DeltaSeconds);
		bool AttackTripleTrace(const struct FVector& Start, const struct FVector& End, float CapsuleHalfHeight);
		struct FHitResult AttackTrace();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MonsterCharacter
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AMonsterCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_2Y3F[0x8];                                   // 0x04B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MonsterDataAsset
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMonsterDataAsset : public UDataAsset
	{
	public:
		struct FMonsterMovementData                                MonsterMovementData;                                     // 0x0030(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AttackRange;                                             // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMonsterAttackAData                                 AttackA;                                                 // 0x0040(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMonsterAttackBData                                 AttackB;                                                 // 0x004C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6NB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MonsterQueueData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMonsterQueueData : public UObject
	{
	public:
		void TestMonsterQueueDataSelection(int32_t NumberOfTests, bool* bSuccessful);
		int32_t SelectMonsterFromQueueDatas(TMap<int32_t, struct FQueueData> MonsterQueueDatas, bool* bSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NavigatorIndicatorSorter
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UNavigatorIndicatorSorter : public UActorComponent
	{
	public:
		TArray<class UActorComponent*> SortArray(TArray<class UActorComponent*> ElementArray);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkHuggy
	 * Size -> 0x0020 (FullSize[0x0520] - InheritedSize[0x0500])
	 */
	class ANetworkHuggy : public AMonster
	{
	public:
		unsigned char                                              UnknownData_M748[0x10];                                  // 0x0500(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumBabyHuggies;                                          // 0x0510(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FUF8[0xC];                                   // 0x0514(0x000C) MISSED OFFSET (PADDING)

	public:
		void IncrementHuggyStat(float Amount, EHuggyStatistics Stat);
		class UHuggyMovementComponent* GetHuggyMovementComponent();
		void AddBabyHuggy(class AActor* BabyHuggy);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkKangaroo
	 * Size -> 0x0060 (FullSize[0x0560] - InheritedSize[0x0500])
	 */
	class ANetworkKangaroo : public AMonster
	{
	public:
		class USpringArmComponent*                                 CameraSpringArm;                                         // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    CameraComponent;                                         // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 ExtendoFist;                                             // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 RightSpringArm;                                          // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_RightLauncherGun;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_RightFist;                                            // 0x0528(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RightFistSpawn;                                          // 0x0530(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUFistRigPackageComponent*                           FistPkg;                                                 // 0x0538(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWireLength;                                           // 0x0540(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EOV[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NetworkFistClass;                                        // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FistRetractedAnim;                                       // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvailableWireLength;                                     // 0x0558(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O6TF[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ResetFOV();
		bool ParseInputAction_HandExtend_Pressed();
		void IsFistRetracting(bool* Retracting);
		void IsFistExtended(bool* Extended);
		void IncrementBoxyStat(float Amount, EBoxyStatistics Stat);
		void GetSurvivorProximityMultiplier(class AANetworkCharacter* Character, float MaxDistance, float* Multiplier, int32_t* Index);
		void GetFistPosition(struct FVector* Position);
		class UKangarooMovementComponent* GetBoxyMovementComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkMommy
	 * Size -> 0x00C0 (FullSize[0x05C0] - InheritedSize[0x0500])
	 */
	class ANetworkMommy : public AMonster
	{
	public:
		class USpringArmComponent*                                 CameraSpringArm;                                         // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    GimbalCamera;                                            // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MommyGrappleShot;                                        // 0x0510(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MommyGrappleGrab;                                        // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MommyLaunched;                                           // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     FirstPersonArmsSpringRef;                                // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     FirstPersonArmsRef;                                      // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   CapsuleComponentRef;                                     // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HandLerpWorld;                                           // 0x0558(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            HandLerpRelative;                                        // 0x0564(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            LocalCameraRotation;                                     // 0x0570(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            NetCameraRotation;                                       // 0x057C(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WallAttachmentNormal;                                    // 0x0588(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGrappleDistance;                                      // 0x0594(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOnWall;                                               // 0x0598(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoOnce;                                                 // 0x0599(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93GC[0x2];                                   // 0x059A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GrappleLocation;                                         // 0x059C(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GrappleDirection;                                        // 0x05A8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrappleShootSpeed;                                       // 0x05B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMommyGrappleState                                         GrappleState;                                            // 0x05B8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXU4[0x7];                                   // 0x05B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void Server_SendGrapple(const struct FVector& In_Direction);
		void Server_LaunchFromWall(const struct FRotator& LaunchDirection);
		void Server_CancelGrapple();
		void Server_BeginPulling();
		void Server_AttachToWall(const struct FVector& Location, const struct FVector& Normal);
		void PseudoConstruct(class USceneComponent* In_FirstPersonArmsSpring, class USceneComponent* In_FirstPersonArms, class UCapsuleComponent* In_CapsuleComponent);
		void ParseInputAction_Jump();
		void Owning_BeginPulling();
		void OnRep_GrappleState();
		void Multicast_SendGrapple(const struct FVector& In_Direction);
		void Multicast_CancelGrapple();
		void Multicast_AttachToWall(const struct FVector& Location, const struct FVector& Normal);
		void LaunchFromWall(const struct FRotator& LaunchDirection);
		void IsMommyAttachedToWall(bool* AttachedToWall);
		void IsGrapplePulling(bool* Pulling);
		void IsGrappleActive(bool* Extended);
		void IncrementMommyStat(float Amount, EMommyStatistics Stat);
		class UMommyMovementComponent* GetMommyMovementComponent();
		void GetGrappleEndpointPosition(struct FVector* Position);
		void DoGrappleExtension(float DeltaSeconds);
		void CancelGrapple();
		void BP_OnRep_IsGrapplePulling(bool IsPulling);
		void BP_OnRep_GrappleState();
		void BeginPulling();
		void AttachToWall(const struct FVector& Location, const struct FVector& Normal);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkPhysicsActor
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class ANetworkPhysicsActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_OXGD[0x28];                                  // 0x0220(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Tolerance;                                               // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x024C(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0258(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRN4[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateRotation();
		void UpdatePosition();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkRope
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class ANetworkRope : public AActor
	{
	public:
		struct FFloatSpringState                                   SlackSpringState;                                        // 0x0220(0x0008) NoDestructor, NativeAccessSpecifierPublic
		float                                                      SlowLerpToIdle;                                          // 0x0228(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpToIdle;                                              // 0x022C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpToPull;                                              // 0x0230(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0234(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3G9[0x3];                                   // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Hand;                                                    // 0x0238(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0240(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBendPoint>                                  BendPoints;                                              // 0x0250(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     StartScene;                                              // 0x0260(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     EndScene;                                                // 0x0268(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProceduralMeshComponent*                            ProceduralMesh;                                          // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    Spline;                                                  // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USplineMeshComponent*>                        SplineMeshes;                                            // 0x0280(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMeshToUse;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialToUse;                                           // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistancePerSplineMeshComponent;                          // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RetractMode;                                             // 0x02A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DX65[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (PADDING)

	public:
		void MakeSimpleRope(class USceneComponent* StartComponent, class USceneComponent* EndComponent);
		void EnterRetractMode();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkToyPart
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ANetworkToyPart : public AActor
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUNetworkGrabComponent*                              GrabComponent;                                           // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ToyPartIndex;                                            // 0x0230(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttachedHands;                                           // 0x0234(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void PseudoConstruct(class UUNetworkGrabComponent* In_GrabComponent);
		bool IsPlayerHandAttached();
		class UUNetworkGrabComponent* GetNetworkGrab();
		void AttachmentStateChange(EAttachmentStateChange StateChange);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkTrain
	 * Size -> 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
	 */
	class ANetworkTrain : public AActor
	{
	public:
		bool                                                       bReadyToDepart;                                          // 0x0220(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D742[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartStation;                                            // 0x0224(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndStation;                                              // 0x0228(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrainDistance;                                           // 0x022C(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TrackCount;                                              // 0x0230(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrackLength;                                             // 0x0234(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TrainStationClass;                                       // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UChildActorComponent*>                        GeneratedStations;                                       // 0x0240(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      CartOffset;                                              // 0x0250(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GS6[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    StartSpline;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    LoopSpline;                                              // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    EndSpline;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurrentTrack                                              CurrentTrack;                                            // 0x0270(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAFB[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateCurrentTrack(int32_t Index, float Distance, ECurrentTrack* TrackTransition);
		void PseudoConstruct();
		void MoveTrain(float Alpha, class USceneComponent* Cart, int32_t CartIndex);
		void GetDistanceOnTrack(ECurrentTrack TrackTransition, float In_Distance, float* OutDistance, class USplineComponent** Track);
		float GetDestination(float SecondStation);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PerkFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPerkFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SavePerkSaveGame(class UPerkSaveGame* SaveGame);
		void LoadPerkSaveGame(class UPerkSaveGame** SaveGame);
		float LevelToValue(EPerkType PerkType, int32_t Level);
		class FString GetPerkSaveGameSlotName();
		void GetPerkSaveGame(class UPerkSaveGame** OutSaveGame);
		void GetPerkRowName(EPerkType PerkType, class FName* Name);
		void GetHighestPerkLevelFromPlayers(TArray<class AANetworkCharacter*> Players, EPerkType PerkType, int32_t* PerkLevel, class AANetworkCharacter** CharWithPerk);
		bool CharHasPerk(class AANetworkCharacter* Character, EPerkType Type, int32_t* Level);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PerkSaveGame
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UPerkSaveGame : public USaveGame
	{
	public:
		struct FPerkPackage                                        Perks;                                                   // 0x0028(0x0030) BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic

	public:
		void UnequipPerk(EPerkType Perk);
		void SetPerkLevel(EPerkType Perk, int32_t Level);
		void LevelUpPerk(EPerkType Perk);
		bool IsPerkTypeSelected(EPerkType Perk, int32_t* Level);
		TArray<EPerkType> GetSelectedPerkList();
		int32_t GetPerkLevel(EPerkType Perk);
		void EquipPerk(EPerkType Perk, int32_t PerkIndex, bool* IsEquipped);
		void Clean();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PhonyPhysicsComponent
	 * Size -> 0x0090 (FullSize[0x0288] - InheritedSize[0x01F8])
	 */
	class UPhonyPhysicsComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_GHRL[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		class USceneComponent*                                     Target;                                                  // 0x0200(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0208(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReturnsToStartOrEnd;                                    // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKUO[0x2];                                   // 0x020A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Threshold;                                               // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnAcceleration;                                      // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0214(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Deceleration;                                            // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalInfluence;                                    // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5V6[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EProgressMilestone>                                 ProgressMilestoneFlags;                                  // 0x0228(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             ServerOnly_OnProgressMilestone;                          // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       bSpeedWasSetThisFrame;                                   // 0x0248(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNetHasPassedThreshold;                                  // 0x0249(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLocalHasPassedThreshold;                                // 0x024A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayerInputLock;                                        // 0x024B(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LocalProgress;                                           // 0x024C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NetProgress;                                             // 0x0250(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LocalSpeed;                                              // 0x0254(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NetSpeed;                                                // 0x0258(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CorrectionAlpha;                                         // 0x025C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeTillFinalCorrection;                                 // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasDoneFinalCorrection;                                  // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RZJF[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHandMagnetComponent*>                        HandMagnets;                                             // 0x0268(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsBeingPulled;                                          // 0x0278(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZSHV[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSinceLastAcceleration;                               // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProgressTarget;                                          // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2XE9[0x4];                                   // 0x0284(0x0004) Fix size for supers

	public:
		void PseudoConstruct(class USceneComponent* In_Target, TArray<class UHandMagnetComponent*> In_HandMagnetComponents);
		void OnRep_NetSpeed();
		void OnRep_NetProgress();
		void OnRep_NetHasPassedThreshold();
		bool HasPullingHands();
		bool HasAttachedHands();
		float GetPullAmount();
		void DrawDebug();
		void Accelerate(float DeltaTime, float In_Acceleration);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PhonyPhysicsHinge
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UPhonyPhysicsHinge : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_PI40[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PhonyPhysicsHingeComponent
	 * Size -> 0x0028 (FullSize[0x02B0] - InheritedSize[0x0288])
	 */
	class UPhonyPhysicsHingeComponent : public UPhonyPhysicsComponent
	{
	public:
		unsigned char                                              UnknownData_SWEL[0x4];                                   // 0x0288(0x0004) Fix Super Size
		float                                                      TargetAngle;                                             // 0x028C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CurrentRotation;                                         // 0x0290(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            NetRotation;                                             // 0x029C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDVT[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PhonyPhysicsRailComponent
	 * Size -> 0x0028 (FullSize[0x02B0] - InheritedSize[0x0288])
	 */
	class UPhonyPhysicsRailComponent : public UPhonyPhysicsComponent
	{
	public:
		class FName                                                TargetTag;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotation;                                   // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTS0[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartingDistance;                                        // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    Spline;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoDistanceDebug;                                        // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PN4[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SplineLength;                                            // 0x02A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A7VR[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SnapTargetToSpline();
		void SetSpeed(float Speed);
		void SetDistance(float Distance);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeBezier
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPlaytimeBezier : public UObject
	{
	public:
		TArray<struct FVector>                                     LinearPoints;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ControlPoints;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeCameraManager
	 * Size -> 0x0000 (FullSize[0x2810] - InheritedSize[0x2810])
	 */
	class APlaytimeCameraManager : public APlayerCameraManager
	{
	public:
		void OnUpdatePOV(const struct FMinimalViewInfo& NewPOV);
		void BP_OnBlendComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeGameInstance
	 * Size -> 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
	 */
	class UPlaytimeGameInstance : public UAdvancedFriendsGameInstance
	{
	public:
		class UTooltipSaveGame*                                    SaveTooltipsInstance;                                    // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasVisitedSplashScreen;                                 // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransition                                                TransitionType;                                          // 0x0231(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFA8[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NewHostIP;                                               // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastLevel;                                               // 0x0248(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNewHost;                                              // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMigrating;                                            // 0x0259(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M40P[0x2];                                   // 0x025A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HostMigration_ReconnectTimeout;                          // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHostMigrationData*                                  HostMigrationData;                                       // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMigrateHost;                                           // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMigrateClient;                                         // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FQueueData                                          QueueData;                                               // 0x0288(0x0008) NoDestructor, NativeAccessSpecifierPrivate

	public:
		bool ToggleWantsToBeMonster();
		void StartMigration();
		void SetWantsToBeMonster(bool bWantsToBeMonster);
		void SetTransitionType(ETransition In_TransitionType);
		void RecieveMonsterChoice(bool bWasSelected);
		bool GetWantsToBeMonster();
		struct FQueueData GetQueueData();
		int32_t GetNumberOfGamesWithoutMonster();
		void GetBestIP(class FString* HostIP, class FString* HostName);
		void FlagHasVisitedSplashScreen();
		void DetermineTransition();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeGameSession
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class APlaytimeGameSession : public AGameSession
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeGameState
	 * Size -> 0x00A0 (FullSize[0x0330] - InheritedSize[0x0290])
	 */
	class APlaytimeGameState : public AGameState
	{
	public:
		EHostMigrationType                                         HostMigrationType;                                       // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDOW[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HostMigrationDataClass;                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HostUpdateRate;                                          // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitForMigratingClientsDuration;                         // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P7Q[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        UpdateHostTimer;                                         // 0x02B8(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlaytimeGameInstance*                               GameInstance;                                            // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConnectedPlayerCount;                                    // 0x02C8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_287A[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FQueueData>                           QueueDatas;                                              // 0x02D0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ProspectiveMonsters;                                     // 0x0320(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic

	public:
		void UpdateBestPotentialHost();
		void StartWaitForMigratingClientsTimer();
		void SaveMigrationData(class UHostMigrationData* Data);
		void PrepareLoadData();
		void OnRep_ProspectiveMonsters();
		void Multicast_UpdateMigrationData(const class FString& NewIP, const class FString& HostName, const class FString& LevelName);
		void Multicast_SendMonsterDecision(int32_t PlayerID);
		void LoadMigrationData(class UHostMigrationData* Data);
		class FString GetQueueDatasAsString();
		void CheckForMigratingPlayers();
		void BeginPlay();
		void Authority_StartUpdateHostMigrationTimer();
		void Authority_ReceiveQueueData(int32_t PlayerID, const struct FQueueData& Data);
		class APlayerController* Authority_ChooseMonster();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeGameViewportClient
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class UPlaytimeGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_0L3P[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimeMovementComponent
	 * Size -> 0x0350 (FullSize[0x0E40] - InheritedSize[0x0AF0])
	 */
	class UPlaytimeMovementComponent : public UCharacterMovementComponent
	{
	public:
		float                                                      WalkSpeed;                                               // 0x0AF0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunSpeed;                                                // 0x0AF4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RollSpeed;                                               // 0x0AF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DashSpeed;                                               // 0x0AFC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NeedsRevivedSpeed;                                       // 0x0B00(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WalkAcceleration;                                        // 0x0B04(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunAcceleration;                                         // 0x0B08(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RollAcceleration;                                        // 0x0B0C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinSwingSpeed;                                           // 0x0B10(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxSwingSpeed;                                           // 0x0B14(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingAcceleration;                                       // 0x0B18(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DashAcceleration;                                        // 0x0B1C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinDistance;                                             // 0x0B20(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LocalStrafe;                                             // 0x0B24(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W236[0x220];                                 // 0x0B28(0x0220) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Perk_MasterRollDurationModifier;                         // 0x0D48(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Perk_CrouchSpeedModifier;                                // 0x0D4C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerkPackage                                        PerksCopy;                                               // 0x0D50(0x0030) NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndSpline;                                             // 0x0D80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       HitWithWebs;                                             // 0x0D90(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYE0[0x13];                                  // 0x0D91(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedBoostAmount;                                        // 0x0DA4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2AD[0x4];                                   // 0x0DA8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StunSpeed;                                               // 0x0DAC(0x0004) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WantsToBeStunned;                                        // 0x0DB0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanRoll;                                                // 0x0DB1(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0L7D[0x6];                                   // 0x0DB2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRepCanRollEventHandler;                                // 0x0DB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBegunRoll;                                             // 0x0DC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginRollRecharge;                                     // 0x0DD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxRollTime;                                             // 0x0DE8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RollTimeLeft;                                            // 0x0DEC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRollRechargeTime;                                     // 0x0DF0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RollRechargeTimeLeft;                                    // 0x0DF4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RollDirection;                                           // 0x0DF8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSplineSpeed;                                          // 0x0E04(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSplineSpeed;                                          // 0x0E08(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineAcceleration;                                      // 0x0E0C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToDash;                                            // 0x0E10(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRJX[0xF];                                   // 0x0E11(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       WantsToRun : 1;                                          // 0x0E20(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WantsToDash : 1;                                         // 0x0E20(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HAN[0xB];                                   // 0x0E21(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       RunKeyDown;                                              // 0x0E2C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FW7F[0x3];                                   // 0x0E2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WebSpeedMultiplier;                                      // 0x0E30(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRechargeDoOnce;                                         // 0x0E34(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWantsToSwing;                                           // 0x0E35(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToSpline;                                          // 0x0E36(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCrouchingIsClientSimulated;                             // 0x0E37(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TargetCapsuleRadius;                                     // 0x0E38(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TargetCapsuleHeight;                                     // 0x0E3C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopSpeedBoost();
		void StartSpeedBoost();
		void SetRunning(bool In_Running);
		void SetDashDirection(const struct FVector& In_Target);
		void Server_SyncStrafe(float Strafe);
		void Server_Stun(float Duration);
		void Server_SetWantsToSwing(bool In_Swinging);
		void Server_SetWantsToDash(bool In_WantsToDash);
		void Server_ActivateRoll();
		void OnRep_CanRoll();
		void OnPerkSaveGameChanged(const struct FPerkPackage& In_PerkSaveGame);
		void NetworkSafe_SwitchSpline(class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
		void NetworkSafe_Stun(float Duration);
		void NetworkSafe_SetWantsToSpline(bool In_WantsToSpline, class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
		void NetworkSafe_SetWantsToDash(bool In_WantsToDash);
		void NetworkSafe_ActivateRoll();
		bool IsRolling();
		bool IsCustomMovementMode(unsigned char custom_movement_mode);
		float GetSplineProgress();
		float GetMaxRollTime();
		void Client_SyncSpline(TArray<struct FVector> SplinePoints);
		void Client_SwitchSpline(class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
		void Client_SetWantsToSpline(bool In_WantsToSpline, class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimePlayerController
	 * Size -> 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
	 */
	class APlaytimePlayerController : public APlayerController
	{
	public:
		void ServerNotifyLoadedWorldWorkaround(const class FName& WorldPackageName);
		void Server_SetQueueData(int32_t RoundsSinceLastMonster, bool bWantsToBeMonster);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PlaytimePlayerState
	 * Size -> 0x0030 (FullSize[0x0350] - InheritedSize[0x0320])
	 */
	class APlaytimePlayerState : public APlayerState
	{
	public:
		TArray<struct FTicketRewardableAction>                     TicketRewardableActions;                                 // 0x0320(0x0010) BlueprintVisible, Net, ZeroConstructor, SaveGame, RepNotify, NativeAccessSpecifierPublic
		int32_t                                                    PuzzlesSolved;                                           // 0x0330(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersRescued;                                          // 0x0334(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageDone;                                              // 0x0338(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x033C(0x0004) BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          TicketRewardsTable;                                      // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EarnedTickets;                                           // 0x0348(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRRP[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (PADDING)

	public:
		void TickPuzzlesSolved();
		void TickPlayersRescued();
		void TickKills();
		void SetEarnedTicketsWithNotify(int32_t AbsoluteValue);
		void Server_CollectTicketRewardWithNotify(const class FName& TicketRewardRowName, bool CallNotificationOnClient);
		void Server_ClearEarnedTickets();
		void OnRep_TicketRewardableActions();
		void OnRep_EarnedTickets();
		void Client_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName);
		void Client_DepositEarnedTicketsIntoStash();
		void BP_OnRep_EarnedTickets();
		void BP_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName);
		void AddToDamageDone(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PromptGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPromptGenerator : public UInterface
	{
	public:
		void GetPrompt(class FText* PromptPrefix, class FText* PromptSuffix, bool* CanPrompt);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PseudoHand
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class APseudoHand : public AActor
	{
	public:
		class USceneComponent*                                     MyRootComponent;                                         // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     PipeAttachmentScene;                                     // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANetworkRope*                                        NetworkRope;                                             // 0x0230(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     HandAttachmentScene;                                     // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NetworkRopeClass;                                        // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    ExitSpline;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AANetworkCharacter*                                  TargetCharacter;                                         // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentSplineProgress;                                   // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_085K[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              WormHole;                                                // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MazeData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMazeData : public UDataAsset
	{
	public:
		TArray<class FString>                                      Mazes;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.MazeMeshes
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UMazeMeshes : public UDataAsset
	{
	public:
		class UStaticMesh*                                         Center;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 FromUps;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Horizontals;                                             // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 ToDowns;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Verticals;                                               // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Turns;                                                   // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PuzzleMazeComponent
	 * Size -> 0x0154 (FullSize[0x06A0] - InheritedSize[0x054C])
	 */
	class UPuzzleMazeComponent : public USplineComponent
	{
	public:
		float                                                      BallPositionTarget;                                      // 0x054C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BallPosition;                                            // 0x0550(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BallSpeed;                                               // 0x0554(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0558(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BallMaxSpeed;                                            // 0x055C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Deceleration;                                            // 0x0560(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP2Z[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMaze                                               CurrentMaze;                                             // 0x0568(0x0010) NativeAccessSpecifierPublic
		class UMazeData*                                           MazeData;                                                // 0x0578(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMazeMeshes*                                         MazeMeshes;                                              // 0x0580(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMeshComponent*>                        Meshes;                                                  // 0x0588(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMazeComplete;                                          // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBallPositionChanged;                                   // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      RotationDuration;                                        // 0x05B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5LF[0x9C];                                  // 0x05BC(0x009C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveFloat;                                              // 0x0658(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Orientation;                                             // 0x0660(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTIE[0x10];                                  // 0x0664(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RingSize;                                                // 0x0674(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MazeChoice;                                              // 0x0678(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PreviewedMaze;                                           // 0x067C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              TangentLengths;                                          // 0x0680(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		bool                                                       bIsComplete;                                             // 0x0690(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NU60[0xF];                                   // 0x0691(0x000F) MISSED OFFSET (PADDING)

	public:
		void TimelineProgress(float Value);
		void TimelineEnded();
		void StartMaze(float InitialSpeed);
		void Rotate(bool Clockwise);
		void OnRep_Orientation();
		void OnRep_MazeChoice();
		void OnRep_IsComplete();
		void Multicast_ResetMaze();
		void MoveBallPhysics(float DeltaTime);
		bool IsInProgress();
		struct FSplinePoint GetSplinePointAt(int32_t Index);
		float GetScaledBallSpeed();
		bool GetMeshDataFor(int32_t Index, EMazeComponentType* Type, int32_t* Ring, float* Rotation, bool* Flipped, bool* ShouldMakeCurve, float* CurveRotation);
		struct FVector GetLocationOfIndex(int32_t Index);
		struct FIntPoint GetDesiredPosition();
		struct FVector GetBallPosition();
		void FindBallTarget();
		void BP_Rotate_Sound_Trigger();
		void Authority_ResetMaze();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PuzzleList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPuzzleList : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      Puzzles;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PuzzlePillar
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class APuzzlePillar : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SabotageComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class USabotageComponent : public UActorComponent
	{
	public:
		struct FTimerHandle                                        CooldownTimerHandle;                                     // 0x00B0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          SabotageDataTable;                                       // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanActivateAgain;                                       // 0x00C0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4NNR[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		void Server_DoSabotage(const class FName& SabotageName, int32_t Level);
		void Sabotage(const class FName& SabotageName, int32_t Level);
		void Multicast_SabotageFX(const class FName& SabotageName, int32_t Level);
		void Multicast_DoSabotage(const class FName& SabotageName, int32_t Level);
		void EndCooldown();
		bool DoSabotage(const class FName& SabotageName, int32_t Level);
		void BP_SabotageFX(const class FName& SabotageName, int32_t Level);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SabotageSaveGame
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USabotageSaveGame : public USaveGame
	{
	public:
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0028(0x0050) Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SettingsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USettingsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetVSyncEnabled(bool Value);
		void SetViewDistanceQuality(int32_t Value);
		void SetTextureQuality(int32_t Value);
		void SetShadowQuality(int32_t Value);
		void SetShaderQuality(int32_t Value);
		void SetResolutionScale(int32_t Value);
		void SetResolution(const struct FIntPoint& In_Resolution);
		void SetPostProcessQuality(int32_t Value);
		void SetFullscreenMode(EWindowMode InFullscreenMode);
		void SetFrameRateLimit(int32_t Value);
		void SetAntiAliasingQuality(int32_t Value);
		void SaveAndApplySettings();
		void RevertToDefaults();
		void PreloadResolutionSettings();
		TArray<struct FIntPoint> GetRecommendedResolutions();
		class FString GetPrimaryGPUBrand();
		bool AreSettingsDirty();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SettingsSaveGame
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USettingsSaveGame : public USaveGame
	{
	public:
		float                                                      MouseSensitivity;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MainVolume;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicVolume;                                             // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SFXVolume;                                               // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrabpackVolume;                                          // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextLanguage                                              Language;                                                // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubtitlesOn;                                            // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableHeadBobbing;                                      // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMinimalHUD;                                             // 0x0043(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipCinematic;                                          // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableChat;                                             // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePlayerStatusPerks;                                // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67NA[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FOV;                                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReflectionQuality;                                       // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScreenPercentage;                                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorblindMode;                                          // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorblindStrength;                                      // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisualEffectsQuality;                                    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetSFXVolume(int32_t In_SFXVolume, float* Out_SFXVolume);
		void SetMusicVolume(int32_t In_MusicVolume, float* Out_MusicVolume);
		void SetMainVolume(int32_t In_MainVolume, float* Out_MainVolume);
		void SetGrabpackVolume(int32_t In_GrabpackVolume, float* Out_GrabpackVolume);
		void SetColorblindStrength(float In_Strength, float* Out_Strength);
		void SetColorblindMode(int32_t In_Mode, int32_t* Out_Mode);
		void ApplyCustomScalabilitySettings(class UGameUserSettings* Settings);
		void ApplyColorblind();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SlidingDoor
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ASlidingDoor : public AActor
	{
	public:
		float                                                      Openness;                                                // 0x0220(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideDistence;                                           // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         OpenCurve;                                               // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CloseCurve;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenSpeed;                                               // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseSpeed;                                              // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOpenByDefault;                                        // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X33P[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenFloat;                                               // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDoorState                                                 CurrentState;                                            // 0x024C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWHZ[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurrentCurve;                                            // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SBFN[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void OpenDoor();
		float GetProgress();
		void CloseDoor();
		void ChangeState(EDoorState NewState);
		void BP_UpdateVisuals();
		void BP_ChangedState(EDoorState PreviousState, EDoorState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SoundPack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundPack : public UDataAsset
	{
	public:
		class USoundBase* ResolveSoundPackReference();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.AmbiencePack
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAmbiencePack : public USoundPack
	{
	public:
		unsigned char                                              Ambience[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TenseMusicPack
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UTenseMusicPack : public USoundPack
	{
	public:
		unsigned char                                              TenseMusic[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.ChaseMusicPack
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UChaseMusicPack : public USoundPack
	{
	public:
		unsigned char                                              ChaseMusic[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.LobbyMusicPack
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class ULobbyMusicPack : public USoundPack
	{
	public:
		unsigned char                                              LobbyMusic[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USoundBase*                                          LobbyMusicHardPointer;                                   // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.PuzzleSoundPack
	 * Size -> 0x02A8 (FullSize[0x02D8] - InheritedSize[0x0030])
	 */
	class UPuzzleSoundPack : public USoundPack
	{
	public:
		unsigned char                                              Complete[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReflexTicking[0x28];                                     // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReflexCorrect[0x28];                                     // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReflexIncorrect[0x28];                                   // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Randomizing[0x28];                                       // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CorrectMemoryButton[0x28];                               // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              IncorrectMemoryButton[0x28];                             // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CorrectMemoryPattern[0x28];                              // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PianoC[0x28];                                            // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PianoD[0x28];                                            // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PianoE[0x28];                                            // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PianoF[0x28];                                            // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PianoG[0x28];                                            // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BallRolling[0x28];                                       // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LedLightingUp[0x28];                                     // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TopMazeComplete[0x28];                                   // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BottomMazeComplete[0x28];                                // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SurvivorSoundPack
	 * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
	 */
	class USurvivorSoundPack : public USoundPack
	{
	public:
		unsigned char                                              DefaultFootsteps[0x28];                                  // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CarpetFootsteps[0x28];                                   // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MetalFootsteps[0x28];                                    // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Jump[0x28];                                              // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Landing[0x28];                                           // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Roll[0x28];                                              // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeavyBreathing[0x28];                                    // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BigExhale[0x28];                                         // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.SoundPackSaveGame
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USoundPackSaveGame : public USaveGame
	{
	public:
		struct FSelectedSoundsPackage                              SelectedSounds;                                          // 0x0028(0x0018) BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSelectedPack(ESoundPackType SoundPackType, int32_t ID);
		void SaveSounds(class USoundPackSaveGame* In_SaveGame);
		class USoundPackSaveGame* LoadSounds();
		struct FSoundPackEntry GetSelectedSoundPackData(ESoundPackType SoundPackType);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.StatsCoreFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatsCoreFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateCalculations();
		void IncrementRandomStat(float Amount, ERandomStatistics Stat);
		void IncrementPlayerStat(float Amount, EPlayerStatistics Stat);
		void IncrementMommyStat(float Amount, EMommyStatistics Stat);
		void IncrementHuggyStat(float Amount, EHuggyStatistics Stat);
		void IncrementBoxyStat(float Amount, EBoxyStatistics Stat);
		TMap<class FString, class FString> GetStatistics(EStatisticCategory Category);
		void GetStatisticNames(EStatisticCategory Category, TArray<class FString>* Names);
		float GetStat(const class FString& Category, const class FString& StatisticName);
		float GetRandomStatF(ERandomStatistics Stat);
		class FString GetRandomStat(ERandomStatistics Stat);
		float GetPlayerStatF(EPlayerStatistics Stat);
		class FString GetPlayerStat(EPlayerStatistics Stat);
		float GetMonsterStatF(EMonsterStatistics Stat);
		class FString GetMonsterStat(EMonsterStatistics Stat);
		float GetMommyStatF(EMommyStatistics Stat);
		class FString GetMommyStat(EMommyStatistics Stat);
		float GetHuggyStatF(EHuggyStatistics Stat);
		class FString GetHuggyStat(EHuggyStatistics Stat);
		float GetGeneralStatF(EGeneralStatistics Stat);
		class FString GetGeneralStat(EGeneralStatistics Stat);
		void GetCategories(TArray<class FString>* Names, TArray<EStatisticCategory>* Categories);
		float GetBoxyStatF(EBoxyStatistics Stat);
		class FString GetBoxyStat(EBoxyStatistics Stat);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.YellowConnectorComponent
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UYellowConnectorComponent : public UConnectorComponent
	{
	public:
		unsigned char                                              UnknownData_JN93[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TextConnectorComponent
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UTextConnectorComponent : public UYellowConnectorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TicketFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTicketFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void TryPurchaseItemWithTickets(int32_t PriceOfItem, bool* Success);
		bool SaveTicketSaveGame(class UTicketSaveGame* TicketSaveGame);
		class UTicketSaveGame* LoadTicketSaveGame();
		class FString GetTicketSaveGameSlotName();
		int32_t CalculateTicketRewardFromEntries(class UDataTable* TicketRewardsDataTable, const struct FTicketRewardableAction& TicketRewardableAction, struct FTicketReward* Out_Reward);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TicketSaveGame
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTicketSaveGame : public USaveGame
	{
	public:
		int32_t                                                    TicketCount;                                             // 0x0028(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OZ5N[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTicketCountClamped(int32_t AbsoluteValue);
		void RemoveFromTicketCount(int32_t Amount);
		int32_t GetTicketCount();
		void AddToTicketCount(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TooltipComponent
	 * Size -> 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
	 */
	class UTooltipComponent : public USceneComponent
	{
	public:
		class FString                                              Key;                                                     // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanShow;                                                // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX4K[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TargetClass;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHPL[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (PADDING)

	public:
		void StartUpdateTimer();
		void ShowTooltip(bool Value);
		void RetryTooltip();
		void ClearUpdateTimer();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TooltipSaveGame
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTooltipSaveGame : public USaveGame
	{
	public:
		TArray<class FString>                                      TooltipKeys;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.TrainStation
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ATrainStation : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     DebugTrain;                                              // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    TrackSpline;                                             // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYJQ[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      DisplayCarts;                                            // 0x0240(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDebugTrainAssemblyData                             DebugTrainAssemblyData;                                  // 0x0250(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDebugTrainSettings                                 DebugTrainSettings;                                      // 0x0268(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void PseudoConstruct();
		float GetStopLocation();
		int32_t GetFullCartCount();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.UFistRigPackageComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UUFistRigPackageComponent : public UActorComponent
	{
	public:
		class AANetworkFist*                                       NetworkFist;                                             // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANetworkRope*                                        NetworkRope;                                             // 0x00B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 SpringArm;                                               // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_LauncherGun;                                          // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_Fist;                                                 // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     FistSpawn;                                               // 0x00D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnScale;                                              // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtended;                                               // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GHZ[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NetworkFistClass;                                        // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NetworkRopeClass;                                        // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          PlayerTraceChannel;                                      // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB87[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FistStateChanged;                                        // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Server_TryExtendHand(const struct FVector& Direction);
		void Server_TryDetachAndRetractHand();
		void Server_StartRetractBackwards();
		void Server_BroadcastFistStateChange(EFistState State);
		void Multicast_TryExtendHand(const struct FVector& Direction);
		void Multicast_TryDetachAndRetractHand();
		void Multicast_StartRetractBackwards();
		void Multicast_ExtensionIsComplete();
		void Multicast_BroadcastFistStateChange(EFistState State);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.UHandRigPackageComponent
	 * Size -> 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
	 */
	class UUHandRigPackageComponent : public UActorComponent
	{
	public:
		ELimb                                                      Limb;                                                    // 0x00B0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PressedBeforeAttachment;                                 // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YQD[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AANetworkHand*                                       NetworkHand;                                             // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANetworkRope*                                        NetworkRope;                                             // 0x00C0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 SpringArm;                                               // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SM_LauncherGun;                                          // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SK_Hand;                                                 // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     HandSpawn;                                               // 0x00E0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     RopeComponent;                                           // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PseudoConstructHasBeenRun;                               // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTW4[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnScale;                                              // 0x00F4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtended;                                               // 0x0100(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CheckingWire;                                            // 0x0101(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NP4[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            OriginalLauncherGunRotation;                             // 0x0104(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            HoldingLauncherGunRotation;                              // 0x0110(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKLG[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AANetworkCharacter*                                  OwningCharacter;                                         // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NetworkHandClass;                                        // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NetworkRopeClass;                                        // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      PlayersToIgnore;                                         // 0x0138(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		ECollisionChannel                                          HandMagnetTraceChannel;                                  // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          HandMagnetWhilePlayerDownedTraceChannel;                 // 0x0149(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          PlayerObjectType;                                        // 0x014A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4P7[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationAsset*                                     HandRetractedAnim;                                       // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Queued_FromLocation;                                     // 0x0158(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Queued_ToLocation;                                       // 0x0164(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Queued_ShotCount;                                        // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQueuedTryExtendHand;                                    // 0x0174(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHandStateChange                                           OwningClientDesiredHandState;                            // 0x0175(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DY9R[0x2];                                   // 0x0176(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHandStateChange;                                       // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetRopeComponent(class USceneComponent* TP_Rope);
		void Server_TryExtendHand(const struct FVector_NetQuantize& FromLocation, const struct FVector_NetQuantize& ToLocation);
		void Server_TryDetachAndRetractHand(ENetRole CallerLocalRole);
		void Server_StartRetractBackwards(bool NeedsGrabbedPrimitiveToRetract, bool SetHasBeenCancelled, bool CanTriggerStartedPulling);
		void Server_SetOwningClientDesiredHandState(EHandStateChange State);
		void Server_BroadcastHandStateChange(EHandStateChange State);
		void Multicast_TryExtendHand(const struct FVector_NetQuantize& FromLocation, const struct FVector_NetQuantize& ToLocation);
		void Multicast_TryDetachAndRetractHand(ENetRole CallerLocalRole);
		void Multicast_StartRetractBackwards(bool NeedsGrabbedPrimitiveToRetract, bool SetHasBeenCancelled, bool CanTriggerStartedPulling);
		void Multicast_ExtensionIsComplete();
		class USceneComponent* GetRopeStart();
		void CheckWire();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.UNetworkGrabComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UUNetworkGrabComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAttachmentStateChange;                                 // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      Padding;                                                 // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAttachedHands;                                        // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentAttachedHands;                                    // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQQF[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.NetworkPhysicsGrabComponent
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UNetworkPhysicsGrabComponent : public UUNetworkGrabComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.OutfitSkinAnimInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UOutfitSkinAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NJRP[0x8];                                   // 0x02B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.WallMobilityComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UWallMobilityComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.WhackAWuggySpawnPoint
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class AWhackAWuggySpawnPoint : public AActor
	{
	public:
		class USkeletalMeshComponent*                              Wuggy;                                                   // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHandMagnetComponent*                                WuggyHandMagnet;                                         // 0x0228(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWuggyLivingTime;                                      // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9TB[0x1];                                   // 0x0234(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bWuggyIsSpawned;                                         // 0x0235(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDWT[0xA];                                   // 0x0236(0x000A) MISSED OFFSET (PADDING)

	public:
		void UpdateOldestPlayer(class AANetworkCharacter* Character);
		bool PseudoSpawnWuggy();
		void PseudoDestroyWuggy();
		void PseudoConstruct(class UHandMagnetComponent* In_WuggyHandMagnet, class USkeletalMeshComponent* In_Wuggy);
		void PrePseudoDestroyWuggy();
		void OnRep_WuggyIsSpawned();
		void BP_WuggySpawned();
		void BP_Server_WuggyKillPlayer();
		void BP_OnRep_WuggyIsSpawned();
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.WuggyHole
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class AWuggyHole : public AActor
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0220(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21ZL[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWhackAWuggySpawnPoint*>                      SpawnPoints;                                             // 0x0228(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AANetworkCharacter*>                          PlayingCharacters;                                       // 0x0238(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ECZG[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AANetworkCharacter*                                  OldestPlayer;                                            // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class AANetworkCharacter* ReturnOldestPlayer();
		class AANetworkCharacter* RemoveAndReturnOldestPlayer();
		void OnRep_OldestPlayer();
		void Multicast_EndMiniGame();
		void EndMiniGame();
		void CleanPlayingCharacters();
		void BP_OnRep_OldestPlayer();
		void BP_AuthorityEndMinigame();
		void BP_AuthorityBeginMinigame();
		void Authority_SpawnWuggy();
		void Authority_EndMiniGame();
		void AddNewPlayer(class AANetworkCharacter* Player, bool AddAtFront);
		static UClass* StaticClass();
	};

	/**
	 * Class Playtime_Multiplayer.YellowHandMagnetComponent
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UYellowHandMagnetComponent : public UHandMagnetComponent
	{
	public:
		class UClass*                                              m_ConnectorClass;                                        // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRelativeTransform;                                   // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNX8[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          m_RelativeTransform;                                     // 0x02A0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE6L[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
