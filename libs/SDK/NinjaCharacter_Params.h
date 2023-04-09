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
	 * Function NinjaCharacter.NinjaCharacter.SmoothComponentRotation
	 */
	struct ANinjaCharacter_SmoothComponentRotation_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationSpeed;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            RelativeRotation;                                        // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.SmoothComponentLocationAndRotation
	 */
	struct ANinjaCharacter_SmoothComponentLocationAndRotation_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LocationSpeed;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationSpeed;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RelativeLocation;                                        // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            RelativeRotation;                                        // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.SmoothComponentLocation
	 */
	struct ANinjaCharacter_SmoothComponentLocation_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LocationSpeed;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RelativeLocation;                                        // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.SetCharMovementAxis
	 */
	struct ANinjaCharacter_SetCharMovementAxis_Params
	{
	public:
		struct FVector                                             NewAxisZ;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceFindFloor;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.LaunchCharacterRotated
	 */
	struct ANinjaCharacter_LaunchCharacterRotated_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHorizontalOverride;                                     // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVerticalOverride;                                       // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.K2_OnUnwalkableHit
	 */
	struct ANinjaCharacter_K2_OnUnwalkableHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.K2_OnGravityDirectionChanged
	 */
	struct ANinjaCharacter_K2_OnGravityDirectionChanged_Params
	{
	public:
		ENinjaGravityDirectionMode                                 OldGravityDirectionMode;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENinjaGravityDirectionMode                                 CurrentGravityDirectionMode;                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacter.K2_OnCharMovementAxisChanged
	 */
	struct ANinjaCharacter_K2_OnCharMovementAxisChanged_Params
	{
	public:
		struct FVector                                             OldAxisZ;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CurrentAxisZ;                                            // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineTangentGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplinePlaneGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetSplineGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetSegmentGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravitySegmentStart;                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravitySegmentEnd;                                    // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirectionFromActor
	 */
	struct UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetPointGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPoint;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetLineGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetLineGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityLineStart;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityLineEnd;                                       // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetCollisionGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirectionFromActor
	 */
	struct UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_SetBoxGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityBoxOrigin;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityBoxExtent;                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignGravityToBase
	 */
	struct UNinjaCharacterMovementComponent_SetAlignGravityToBase_Params
	{
	public:
		bool                                                       bNewAlignGravityToBase;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToGravity
	 */
	struct UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Params
	{
	public:
		bool                                                       bNewAlignComponentToGravity;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToFloor
	 */
	struct UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Params
	{
	public:
		bool                                                       bNewAlignComponentToFloor;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.OnComponentHit
	 */
	struct UNinjaCharacterMovementComponent_OnComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineTangentGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplinePlaneGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSegmentGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravitySegmentStart;                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravitySegmentEnd;                                    // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirectionFromActor
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPoint;                                         // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPlaneGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPlaneBase;                                     // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityPlaneNormal;                                   // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetLineGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityLineStart;                                     // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityLineEnd;                                       // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetGravityScale
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetGravityScale_Params
	{
	public:
		float                                                      NewGravityScale;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetFixedGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Params
	{
	public:
		struct FVector                                             NewFixedGravityDirection;                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetCollisionGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirectionFromActor
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityBoxOrigin;                                     // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityBoxExtent;                                     // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignGravityToBase
	 */
	struct UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToGravity
	 */
	struct UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToFloor
	 */
	struct UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignGravityToBase
	 */
	struct UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToGravity
	 */
	struct UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToFloor
	 */
	struct UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Params
	{	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetPlaneGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPlaneBase;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityPlaneNormal;                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetFixedGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityDirection;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityMagnitude
	 */
	struct UNinjaCharacterMovementComponent_GetGravityMagnitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityDirection
	 */
	struct UNinjaCharacterMovementComponent_GetGravityDirection_Params
	{
	public:
		bool                                                       bAvoidZeroGravity;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AMYO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetSplineTangentGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetSplinePlaneGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetSplineGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetSplineGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetSegmentGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetSegmentGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravitySegmentStart;                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravitySegmentEnd;                                    // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirectionFromActor
	 */
	struct ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetPointGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPoint;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetLineGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetLineGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityLineStart;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityLineEnd;                                       // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetGravityScale
	 */
	struct ANinjaPhysicsVolume_SetGravityScale_Params
	{
	public:
		float                                                      NewGravityScale;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetCollisionGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetCollisionGravityDirection_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirectionFromActor
	 */
	struct ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Params
	{
	public:
		class AActor*                                              NewGravityActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirection
	 */
	struct ANinjaPhysicsVolume_SetBoxGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityBoxOrigin;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityBoxExtent;                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.K2_SetPlaneGravityDirection
	 */
	struct ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityPlaneBase;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewGravityPlaneNormal;                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.K2_SetFixedGravityDirection
	 */
	struct ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Params
	{
	public:
		struct FVector                                             NewGravityDirection;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.GetGravityScale
	 */
	struct ANinjaPhysicsVolume_GetGravityScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.GetGravityMagnitude
	 */
	struct ANinjaPhysicsVolume_GetGravityMagnitude_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.GetGravityDirection
	 */
	struct ANinjaPhysicsVolume_GetGravityDirection_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NinjaCharacter.NinjaPhysicsVolume.GetGravity
	 */
	struct ANinjaPhysicsVolume_GetGravity_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
