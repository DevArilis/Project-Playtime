/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.SmoothComponentRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    RelativeRotation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::SmoothComponentRotation(class USceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, const struct FRotator& RelativeRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.SmoothComponentRotation");
		
		ANinjaCharacter_SmoothComponentRotation_Params params {};
		params.SceneComponent = SceneComponent;
		params.DeltaTime = DeltaTime;
		params.RotationSpeed = RotationSpeed;
		params.RelativeRotation = RelativeRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.SmoothComponentLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RelativeLocation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    RelativeRotation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::SmoothComponentLocationAndRotation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.SmoothComponentLocationAndRotation");
		
		ANinjaCharacter_SmoothComponentLocationAndRotation_Params params {};
		params.SceneComponent = SceneComponent;
		params.DeltaTime = DeltaTime;
		params.LocationSpeed = LocationSpeed;
		params.RotationSpeed = RotationSpeed;
		params.RelativeLocation = RelativeLocation;
		params.RelativeRotation = RelativeRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.SmoothComponentLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RelativeLocation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::SmoothComponentLocation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, const struct FVector& RelativeLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.SmoothComponentLocation");
		
		ANinjaCharacter_SmoothComponentLocation_Params params {};
		params.SceneComponent = SceneComponent;
		params.DeltaTime = DeltaTime;
		params.LocationSpeed = LocationSpeed;
		params.RelativeLocation = RelativeLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.SetCharMovementAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewAxisZ                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceFindFloor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ANinjaCharacter::SetCharMovementAxis(const struct FVector& NewAxisZ, bool bForceFindFloor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.SetCharMovementAxis");
		
		ANinjaCharacter_SetCharMovementAxis_Params params {};
		params.NewAxisZ = NewAxisZ;
		params.bForceFindFloor = bForceFindFloor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.LaunchCharacterRotated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LaunchVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHorizontalOverride                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVerticalOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::LaunchCharacterRotated(const struct FVector& LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.LaunchCharacterRotated");
		
		ANinjaCharacter_LaunchCharacterRotated_Params params {};
		params.LaunchVelocity = LaunchVelocity;
		params.bHorizontalOverride = bHorizontalOverride;
		params.bVerticalOverride = bVerticalOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.K2_OnUnwalkableHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::K2_OnUnwalkableHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.K2_OnUnwalkableHit");
		
		ANinjaCharacter_K2_OnUnwalkableHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.K2_OnGravityDirectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENinjaGravityDirectionMode                         OldGravityDirectionMode                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENinjaGravityDirectionMode                         CurrentGravityDirectionMode                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.K2_OnGravityDirectionChanged");
		
		ANinjaCharacter_K2_OnGravityDirectionChanged_Params params {};
		params.OldGravityDirectionMode = OldGravityDirectionMode;
		params.CurrentGravityDirectionMode = CurrentGravityDirectionMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacter.K2_OnCharMovementAxisChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OldAxisZ                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurrentAxisZ                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaCharacter::K2_OnCharMovementAxisChanged(const struct FVector& OldAxisZ, const struct FVector& CurrentAxisZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacter.K2_OnCharMovementAxisChanged");
		
		ANinjaCharacter_K2_OnCharMovementAxisChanged_Params params {};
		params.OldAxisZ = OldAxisZ;
		params.CurrentAxisZ = CurrentAxisZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineTangentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetSplineTangentGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineTangentGravityDirection");
		
		UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplinePlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetSplinePlaneGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplinePlaneGravityDirection");
		
		UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetSplineGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetSplineGravityDirection");
		
		UNinjaCharacterMovementComponent_SetSplineGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetSegmentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravitySegmentStart                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravitySegmentEnd                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetSegmentGravityDirection");
		
		UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Params params {};
		params.NewGravitySegmentStart = NewGravitySegmentStart;
		params.NewGravitySegmentEnd = NewGravitySegmentEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetPointGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirectionFromActor");
		
		UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPoint                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetPointGravityDirection(const struct FVector& NewGravityPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetPointGravityDirection");
		
		UNinjaCharacterMovementComponent_SetPointGravityDirection_Params params {};
		params.NewGravityPoint = NewGravityPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetLineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityLineStart                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityLineEnd                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetLineGravityDirection");
		
		UNinjaCharacterMovementComponent_SetLineGravityDirection_Params params {};
		params.NewGravityLineStart = NewGravityLineStart;
		params.NewGravityLineEnd = NewGravityLineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetCollisionGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetCollisionGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetCollisionGravityDirection");
		
		UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetBoxGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirectionFromActor");
		
		UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityBoxOrigin                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityBoxExtent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetBoxGravityDirection");
		
		UNinjaCharacterMovementComponent_SetBoxGravityDirection_Params params {};
		params.NewGravityBoxOrigin = NewGravityBoxOrigin;
		params.NewGravityBoxExtent = NewGravityBoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignGravityToBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewAlignGravityToBase                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetAlignGravityToBase(bool bNewAlignGravityToBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignGravityToBase");
		
		UNinjaCharacterMovementComponent_SetAlignGravityToBase_Params params {};
		params.bNewAlignGravityToBase = bNewAlignGravityToBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToGravity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewAlignComponentToGravity                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetAlignComponentToGravity(bool bNewAlignComponentToGravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToGravity");
		
		UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Params params {};
		params.bNewAlignComponentToGravity = bNewAlignComponentToGravity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToFloor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewAlignComponentToFloor                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::SetAlignComponentToFloor(bool bNewAlignComponentToFloor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.SetAlignComponentToFloor");
		
		UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Params params {};
		params.bNewAlignComponentToFloor = bNewAlignComponentToFloor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.OnComponentHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::OnComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.OnComponentHit");
		
		UNinjaCharacterMovementComponent_OnComponentHit_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineTangentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetSplineTangentGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineTangentGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplinePlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetSplinePlaneGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplinePlaneGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetSplineGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSplineGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSegmentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravitySegmentStart                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravitySegmentEnd                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetSegmentGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Params params {};
		params.NewGravitySegmentStart = NewGravitySegmentStart;
		params.NewGravitySegmentEnd = NewGravitySegmentEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirectionFromActor");
		
		UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPoint                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirection(const struct FVector& NewGravityPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPointGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Params params {};
		params.NewGravityPoint = NewGravityPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPlaneBase                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityPlaneNormal                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetPlaneGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Params params {};
		params.NewGravityPlaneBase = NewGravityPlaneBase;
		params.NewGravityPlaneNormal = NewGravityPlaneNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetLineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityLineStart                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityLineEnd                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetLineGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Params params {};
		params.NewGravityLineStart = NewGravityLineStart;
		params.NewGravityLineEnd = NewGravityLineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetGravityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewGravityScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetGravityScale(float NewGravityScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetGravityScale");
		
		UNinjaCharacterMovementComponent_MulticastSetGravityScale_Params params {};
		params.NewGravityScale = NewGravityScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetFixedGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewFixedGravityDirection                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetFixedGravityDirection(const struct FVector& NewFixedGravityDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetFixedGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Params params {};
		params.NewFixedGravityDirection = NewFixedGravityDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetCollisionGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetCollisionGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetCollisionGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirectionFromActor");
		
		UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityBoxOrigin                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityBoxExtent                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastSetBoxGravityDirection");
		
		UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Params params {};
		params.NewGravityBoxOrigin = NewGravityBoxOrigin;
		params.NewGravityBoxExtent = NewGravityBoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignGravityToBase
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastEnableAlignGravityToBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignGravityToBase");
		
		UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToGravity
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToGravity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToGravity");
		
		UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToFloor
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastEnableAlignComponentToFloor");
		
		UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignGravityToBase
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastDisableAlignGravityToBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignGravityToBase");
		
		UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToGravity
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToGravity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToGravity");
		
		UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToFloor
	 * 		Flags  -> ()
	 */
	void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.MulticastDisableAlignComponentToFloor");
		
		UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetPlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPlaneBase                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityPlaneNormal                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetPlaneGravityDirection");
		
		UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Params params {};
		params.NewGravityPlaneBase = NewGravityPlaneBase;
		params.NewGravityPlaneNormal = NewGravityPlaneNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetFixedGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityDirection                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNinjaCharacterMovementComponent::K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.K2_SetFixedGravityDirection");
		
		UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Params params {};
		params.NewGravityDirection = NewGravityDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityMagnitude
	 * 		Flags  -> ()
	 */
	float UNinjaCharacterMovementComponent::GetGravityMagnitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityMagnitude");
		
		UNinjaCharacterMovementComponent_GetGravityMagnitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAvoidZeroGravity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNinjaCharacterMovementComponent::GetGravityDirection(bool bAvoidZeroGravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaCharacterMovementComponent.GetGravityDirection");
		
		UNinjaCharacterMovementComponent_GetGravityDirection_Params params {};
		params.bAvoidZeroGravity = bAvoidZeroGravity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetSplineTangentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetSplineTangentGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetSplineTangentGravityDirection");
		
		ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetSplinePlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetSplinePlaneGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetSplinePlaneGravityDirection");
		
		ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetSplineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetSplineGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetSplineGravityDirection");
		
		ANinjaPhysicsVolume_SetSplineGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetSegmentGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravitySegmentStart                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravitySegmentEnd                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetSegmentGravityDirection");
		
		ANinjaPhysicsVolume_SetSegmentGravityDirection_Params params {};
		params.NewGravitySegmentStart = NewGravitySegmentStart;
		params.NewGravitySegmentEnd = NewGravitySegmentEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetPointGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirectionFromActor");
		
		ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPoint                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetPointGravityDirection(const struct FVector& NewGravityPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetPointGravityDirection");
		
		ANinjaPhysicsVolume_SetPointGravityDirection_Params params {};
		params.NewGravityPoint = NewGravityPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetLineGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityLineStart                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityLineEnd                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetLineGravityDirection");
		
		ANinjaPhysicsVolume_SetLineGravityDirection_Params params {};
		params.NewGravityLineStart = NewGravityLineStart;
		params.NewGravityLineEnd = NewGravityLineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetGravityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewGravityScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetGravityScale(float NewGravityScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetGravityScale");
		
		ANinjaPhysicsVolume_SetGravityScale_Params params {};
		params.NewGravityScale = NewGravityScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetCollisionGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetCollisionGravityDirection(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetCollisionGravityDirection");
		
		ANinjaPhysicsVolume_SetCollisionGravityDirection_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirectionFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewGravityActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetBoxGravityDirectionFromActor(class AActor* NewGravityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirectionFromActor");
		
		ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Params params {};
		params.NewGravityActor = NewGravityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityBoxOrigin                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityBoxExtent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.SetBoxGravityDirection");
		
		ANinjaPhysicsVolume_SetBoxGravityDirection_Params params {};
		params.NewGravityBoxOrigin = NewGravityBoxOrigin;
		params.NewGravityBoxExtent = NewGravityBoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.K2_SetPlaneGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityPlaneBase                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravityPlaneNormal                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.K2_SetPlaneGravityDirection");
		
		ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Params params {};
		params.NewGravityPlaneBase = NewGravityPlaneBase;
		params.NewGravityPlaneNormal = NewGravityPlaneNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.K2_SetFixedGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewGravityDirection                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANinjaPhysicsVolume::K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.K2_SetFixedGravityDirection");
		
		ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Params params {};
		params.NewGravityDirection = NewGravityDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.GetGravityScale
	 * 		Flags  -> ()
	 */
	float ANinjaPhysicsVolume::GetGravityScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.GetGravityScale");
		
		ANinjaPhysicsVolume_GetGravityScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.GetGravityMagnitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ANinjaPhysicsVolume::GetGravityMagnitude(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.GetGravityMagnitude");
		
		ANinjaPhysicsVolume_GetGravityMagnitude_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.GetGravityDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ANinjaPhysicsVolume::GetGravityDirection(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.GetGravityDirection");
		
		ANinjaPhysicsVolume_GetGravityDirection_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NinjaCharacter.NinjaPhysicsVolume.GetGravity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ANinjaPhysicsVolume::GetGravity(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaCharacter.NinjaPhysicsVolume.GetGravity");
		
		ANinjaPhysicsVolume_GetGravity_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaPhysicsVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaPhysicsVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaPhysicsVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaPhysicsVolumeSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaPhysicsVolumeSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaPhysicsVolumeSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NinjaCharacter.NinjaProjectileMovementComponent");
		return ptr;
	}

}


