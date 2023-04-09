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
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Determine If Two Locations are on Stairs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CheckLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StairsThreshold                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnStairs                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AbstractJumpscareMaster_C::DetermineIfTwoLocationsareonStairs(const struct FVector& A, const struct FVector& B, float CheckLength, float StairsThreshold, bool* OnStairs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Determine If Two Locations are on Stairs");
		
		ABP_AbstractJumpscareMaster_C_DetermineIfTwoLocationsareonStairs_Params params {};
		params.A = A;
		params.B = B;
		params.CheckLength = CheckLength;
		params.StairsThreshold = StairsThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnStairs != nullptr)
			*OnStairs = params.OnStairs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find New Location if Capsule Intersects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TestPositionStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TestPositionEnd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CapsuleRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CapsuleHalfHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseStartIfDidntHit                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AbstractJumpscareMaster_C::FindNewLocationifCapsuleIntersects(const struct FVector& TestPositionStart, const struct FVector& TestPositionEnd, float CapsuleRadius, float CapsuleHalfHeight, bool UseStartIfDidntHit, TArray<class AActor*> ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FVector* NewLocation, bool* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find New Location if Capsule Intersects");
		
		ABP_AbstractJumpscareMaster_C_FindNewLocationifCapsuleIntersects_Params params {};
		params.TestPositionStart = TestPositionStart;
		params.TestPositionEnd = TestPositionEnd;
		params.CapsuleRadius = CapsuleRadius;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.UseStartIfDidntHit = UseStartIfDidntHit;
		params.ActorsToIgnore = ActorsToIgnore;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Ground Location For Pawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginalLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AlternateLocationOnFail                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BoundToLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PawnHalfSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxAngle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseFloorHitZ                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FoundLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::GroundLocationForPawn(const struct FVector& OriginalLocation, const struct FVector& AlternateLocationOnFail, const struct FVector& BoundToLocation, float PawnHalfSize, float MaxAngle, float Radius, bool UseFloorHitZ, struct FVector* FoundLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Ground Location For Pawn");
		
		ABP_AbstractJumpscareMaster_C_GroundLocationForPawn_Params params {};
		params.OriginalLocation = OriginalLocation;
		params.AlternateLocationOnFail = AlternateLocationOnFail;
		params.BoundToLocation = BoundToLocation;
		params.PawnHalfSize = PawnHalfSize;
		params.MaxAngle = MaxAngle;
		params.Radius = Radius;
		params.UseFloorHitZ = UseFloorHitZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundLocation != nullptr)
			*FoundLocation = params.FoundLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Floored Original Position For Pawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginalLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::CreateFlooredOriginalPositionForPawn(const struct FVector& OriginalLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Floored Original Position For Pawn");
		
		ABP_AbstractJumpscareMaster_C_CreateFlooredOriginalPositionForPawn_Params params {};
		params.OriginalLocation = OriginalLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monster Jumpscare Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  JumpscareSound                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::GetMonsterJumpscareSound(class USoundBase** JumpscareSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monster Jumpscare Sound");
		
		ABP_AbstractJumpscareMaster_C_GetMonsterJumpscareSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JumpscareSound != nullptr)
			*JumpscareSound = params.JumpscareSound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monsters Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            Camera                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::GetMonstersCamera(class UCameraComponent** Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monsters Camera");
		
		ABP_AbstractJumpscareMaster_C_GetMonstersCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Camera != nullptr)
			*Camera = params.Camera;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Transfer B Transforms To A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::TransferBTransformsToA(class USceneComponent* A, class USceneComponent* B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Transfer B Transforms To A");
		
		ABP_AbstractJumpscareMaster_C_TransferBTransformsToA_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Is Monster In Third Person
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InThirdPerson                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AbstractJumpscareMaster_C::GetIsMonsterInThirdPerson(bool* InThirdPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Is Monster In Third Person");
		
		ABP_AbstractJumpscareMaster_C_GetIsMonsterInThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InThirdPerson != nullptr)
			*InThirdPerson = params.InThirdPerson;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Target Monsters Player Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::GetTargetMonstersPlayerController(class APlayerController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Target Monsters Player Controller");
		
		ABP_AbstractJumpscareMaster_C_GetTargetMonstersPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Camera Animations
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::PlayJumpscareCameraAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Camera Animations");
		
		ABP_AbstractJumpscareMaster_C_PlayJumpscareCameraAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Character Animations
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::PlayJumpscareCharacterAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Character Animations");
		
		ABP_AbstractJumpscareMaster_C_PlayJumpscareCharacterAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Huggy First Person Jumpscare Transforms
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::SetHuggyFirstPersonJumpscareTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Huggy First Person Jumpscare Transforms");
		
		ABP_AbstractJumpscareMaster_C_SetHuggyFirstPersonJumpscareTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ReceiveTick");
		
		ABP_AbstractJumpscareMaster_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Player Third Person After Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::TogglePlayerThirdPersonAfterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Player Third Person After Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_TogglePlayerThirdPersonAfterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Monster Third Person After Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::ToggleMonsterThirdPersonAfterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Monster Third Person After Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_ToggleMonsterThirdPersonAfterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Toggled Third Person During Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::MonsterBindToggledThirdPersonDuringJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Toggled Third Person During Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_MonsterBindToggledThirdPersonDuringJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Mommy First Person Jumpscare Transforms
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::SetMommyFirstPersonJumpscareTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Mommy First Person Jumpscare Transforms");
		
		ABP_AbstractJumpscareMaster_C_SetMommyFirstPersonJumpscareTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Kill Player
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::KillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Kill Player");
		
		ABP_AbstractJumpscareMaster_C_KillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Boxy Boo First Person Jumpscare Transforms
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::SetBoxyBooFirstPersonJumpscareTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Boxy Boo First Person Jumpscare Transforms");
		
		ABP_AbstractJumpscareMaster_C_SetBoxyBooFirstPersonJumpscareTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Finish Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::FinishJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Finish Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_FinishJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Trigger Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::TriggerJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Trigger Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_TriggerJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms for Player
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::CreateOriginalandTargetTransformsforPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms for Player");
		
		ABP_AbstractJumpscareMaster_C_CreateOriginalandTargetTransformsforPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms For Monster
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::CreateOriginalandTargetTransformsForMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms For Monster");
		
		ABP_AbstractJumpscareMaster_C_CreateOriginalandTargetTransformsForMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Monster Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::PlayMonsterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Monster Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_PlayMonsterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Monster Character Skeleton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AbstractJumpscareMaster_C::UnHideMonsterCharacterSkeleton(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Monster Character Skeleton");
		
		ABP_AbstractJumpscareMaster_C_UnHideMonsterCharacterSkeleton_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Player Character Skeleton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AbstractJumpscareMaster_C::UnHidePlayerCharacterSkeleton(bool HideCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Player Character Skeleton");
		
		ABP_AbstractJumpscareMaster_C_UnHidePlayerCharacterSkeleton_Params params {};
		params.HideCharacter = HideCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.End Monster Jumpscares
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::EndMonsterJumpscares()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.End Monster Jumpscares");
		
		ABP_AbstractJumpscareMaster_C_EndMonsterJumpscares_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Third Person Views If Needed
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::ToggleThirdPersonViewsIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Third Person Views If Needed");
		
		ABP_AbstractJumpscareMaster_C_ToggleThirdPersonViewsIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find Monsters Pawn Size And Forward Direction And Floor Z
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::FindMonstersPawnSizeAndForwardDirectionAndFloorZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find Monsters Pawn Size And Forward Direction And Floor Z");
		
		ABP_AbstractJumpscareMaster_C_FindMonstersPawnSizeAndForwardDirectionAndFloorZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Crouch During Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::MonsterBindCrouchDuringJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Crouch During Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_MonsterBindCrouchDuringJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn On Crouch After Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::TurnOnCrouchAfterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn On Crouch After Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_TurnOnCrouchAfterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn Off Crouch After Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::TurnOffCrouchAfterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn Off Crouch After Jumpscare");
		
		ABP_AbstractJumpscareMaster_C_TurnOffCrouchAfterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Monsters and Players Final Locations
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::SetMonstersandPlayersFinalLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Monsters and Players Final Locations");
		
		ABP_AbstractJumpscareMaster_C_SetMonstersandPlayersFinalLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ExecuteUbergraph_BP_AbstractJumpscareMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbstractJumpscareMaster_C::ExecuteUbergraph_BP_AbstractJumpscareMaster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ExecuteUbergraph_BP_AbstractJumpscareMaster");
		
		ABP_AbstractJumpscareMaster_C_ExecuteUbergraph_BP_AbstractJumpscareMaster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On Started Jumpscare Animation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::OnStartedJumpscareAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On Started Jumpscare Animation__DelegateSignature");
		
		ABP_AbstractJumpscareMaster_C_OnStartedJumpscareAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On End Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_AbstractJumpscareMaster_C::OnEndJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On End Jumpscare__DelegateSignature");
		
		ABP_AbstractJumpscareMaster_C_OnEndJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AbstractJumpscareMaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AbstractJumpscareMaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C");
		return ptr;
	}

}


