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
	 * Class NinjaCharacter.NinjaCharacter
	 * Size -> 0x0068 (FullSize[0x0520] - InheritedSize[0x04B8])
	 */
	class ANinjaCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_0993[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_GJ20[0x20];                                  // 0x04C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCapsuleRotatesControlRotation : 1;                      // 0x04E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYHI[0x3F];                                  // 0x04E1(0x003F) MISSED OFFSET (PADDING)

	public:
		void SmoothComponentRotation(class USceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, const struct FRotator& RelativeRotation);
		void SmoothComponentLocationAndRotation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation);
		void SmoothComponentLocation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, const struct FVector& RelativeLocation);
		bool SetCharMovementAxis(const struct FVector& NewAxisZ, bool bForceFindFloor);
		void LaunchCharacterRotated(const struct FVector& LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);
		void K2_OnUnwalkableHit(const struct FHitResult& Hit);
		void K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);
		void K2_OnCharMovementAxisChanged(const struct FVector& OldAxisZ, const struct FVector& CurrentAxisZ);
		static UClass* StaticClass();
	};

	/**
	 * Class NinjaCharacter.NinjaCharacterMovementComponent
	 * Size -> 0x00D0 (FullSize[0x0BC0] - InheritedSize[0x0AF0])
	 */
	class UNinjaCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		bool                                                       RotateUp;                                                // 0x0AF0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GiveMommyBoost;                                          // 0x0AF1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KG4[0x6];                                   // 0x0AF2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RotateUpVolume;                                          // 0x0AF8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_IWIU : 1;                                    // 0x0B00(0x0001) BIT_FIELD (PADDING)
		bool                                                       bForceSimulateMovement : 1;                              // 0x0B00(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRevertToDefaultGravity : 1;                             // 0x0B00(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA60[0x3];                                   // 0x0B01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLandOnAnySurface;                                       // 0x0B04(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOXO[0x6B];                                  // 0x0B05(0x006B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTriggerUnwalkableHits : 1;                              // 0x0B70(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD6Y[0x7];                                   // 0x0B71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENinjaGravityDirectionMode                                 GravityDirectionMode;                                    // 0x0B78(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WQWL[0x3];                                   // 0x0B79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityVectorA;                                          // 0x0B7C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             GravityVectorB;                                          // 0x0B88(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J5ZX[0x4];                                   // 0x0B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GravityActor;                                            // 0x0B98(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UnknownData_75FN : 1;                                    // 0x0BA0(0x0001) BIT_FIELD (PADDING)
		bool                                                       bDisableGravityReplication : 1;                          // 0x0BA0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6ILN[0x7];                                   // 0x0BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAlignGravityToBase : 1;                                 // 0x0BA8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignComponentToFloor : 1;                              // 0x0BA8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignComponentToGravity : 1;                            // 0x0BA8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysRotateAroundCenter : 1;                           // 0x0BA8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateVelocityOnGround : 1;                             // 0x0BA8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MM6D[0x3];                                   // 0x0BA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThresholdParallelAngle;                                  // 0x0BAC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThresholdOrthogonalCosine;                               // 0x0BB0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThresholdParallelCosine;                                 // 0x0BB4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8KTO[0x8];                                   // 0x0BB8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSplineTangentGravityDirection(class AActor* NewGravityActor);
		void SetSplinePlaneGravityDirection(class AActor* NewGravityActor);
		void SetSplineGravityDirection(class AActor* NewGravityActor);
		void SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
		void SetPointGravityDirectionFromActor(class AActor* NewGravityActor);
		void SetPointGravityDirection(const struct FVector& NewGravityPoint);
		void SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
		void SetCollisionGravityDirection(class AActor* NewGravityActor);
		void SetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
		void SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
		void SetAlignGravityToBase(bool bNewAlignGravityToBase);
		void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
		void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
		void OnComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void MulticastSetSplineTangentGravityDirection(class AActor* NewGravityActor);
		void MulticastSetSplinePlaneGravityDirection(class AActor* NewGravityActor);
		void MulticastSetSplineGravityDirection(class AActor* NewGravityActor);
		void MulticastSetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
		void MulticastSetPointGravityDirectionFromActor(class AActor* NewGravityActor);
		void MulticastSetPointGravityDirection(const struct FVector& NewGravityPoint);
		void MulticastSetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
		void MulticastSetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
		void MulticastSetGravityScale(float NewGravityScale);
		void MulticastSetFixedGravityDirection(const struct FVector& NewFixedGravityDirection);
		void MulticastSetCollisionGravityDirection(class AActor* NewGravityActor);
		void MulticastSetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
		void MulticastSetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
		void MulticastEnableAlignGravityToBase();
		void MulticastEnableAlignComponentToGravity();
		void MulticastEnableAlignComponentToFloor();
		void MulticastDisableAlignGravityToBase();
		void MulticastDisableAlignComponentToGravity();
		void MulticastDisableAlignComponentToFloor();
		void K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
		void K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection);
		float GetGravityMagnitude();
		struct FVector GetGravityDirection(bool bAvoidZeroGravity);
		static UClass* StaticClass();
	};

	/**
	 * Class NinjaCharacter.NinjaPhysicsVolume
	 * Size -> 0x0058 (FullSize[0x02C0] - InheritedSize[0x0268])
	 */
	class ANinjaPhysicsVolume : public APhysicsVolume
	{
	public:
		TArray<class AActor*>                                      TrackedActors;                                           // 0x0268(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class ANinjaCharacter*>                             TrackedNinjas;                                           // 0x0278(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		ENinjaGravityDirectionMode                                 GravityDirectionMode;                                    // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MTA3[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityVectorA;                                          // 0x028C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             GravityVectorB;                                          // 0x0298(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WUKO[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GravityActor;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GravityScale;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             NinjaFallVelocity;                                       // 0x02B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetSplineTangentGravityDirection(class AActor* NewGravityActor);
		void SetSplinePlaneGravityDirection(class AActor* NewGravityActor);
		void SetSplineGravityDirection(class AActor* NewGravityActor);
		void SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
		void SetPointGravityDirectionFromActor(class AActor* NewGravityActor);
		void SetPointGravityDirection(const struct FVector& NewGravityPoint);
		void SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
		void SetGravityScale(float NewGravityScale);
		void SetCollisionGravityDirection(class AActor* NewGravityActor);
		void SetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
		void SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
		void K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
		void K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection);
		float GetGravityScale();
		float GetGravityMagnitude(const struct FVector& Point);
		struct FVector GetGravityDirection(const struct FVector& Point);
		struct FVector GetGravity(const struct FVector& Point);
		static UClass* StaticClass();
	};

	/**
	 * Class NinjaCharacter.NinjaPhysicsVolumeSpline
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class ANinjaPhysicsVolumeSpline : public ANinjaPhysicsVolume
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NinjaCharacter.NinjaPlayerCameraManager
	 * Size -> 0x0000 (FullSize[0x2810] - InheritedSize[0x2810])
	 */
	class ANinjaPlayerCameraManager : public APlayerCameraManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NinjaCharacter.NinjaProjectileMovementComponent
	 * Size -> 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])
	 */
	class UNinjaProjectileMovementComponent : public UProjectileMovementComponent
	{
	public:
		bool                                                       bFollowGravityDirection : 1;                             // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HNB[0xF];                                   // 0x01D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
