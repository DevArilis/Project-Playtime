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
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Determine If Two Locations are on Stairs
	 */
	struct ABP_AbstractJumpscareMaster_C_DetermineIfTwoLocationsareonStairs_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CheckLength;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StairsThreshold;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnStairs;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find New Location if Capsule Intersects
	 */
	struct ABP_AbstractJumpscareMaster_C_FindNewLocationifCapsuleIntersects_Params
	{
	public:
		struct FVector                                             TestPositionStart;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TestPositionEnd;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CapsuleRadius;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CapsuleHalfHeight;                                       // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseStartIfDidntHit;                                      // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5V3J[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EDrawDebugTrace                                            DrawDebugType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWGR[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hit;                                                     // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Ground Location For Pawn
	 */
	struct ABP_AbstractJumpscareMaster_C_GroundLocationForPawn_Params
	{
	public:
		struct FVector                                             OriginalLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AlternateLocationOnFail;                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BoundToLocation;                                         // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PawnHalfSize;                                            // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxAngle;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseFloorHitZ;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_08NO[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FoundLocation;                                           // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Floored Original Position For Pawn
	 */
	struct ABP_AbstractJumpscareMaster_C_CreateFlooredOriginalPositionForPawn_Params
	{
	public:
		struct FVector                                             OriginalLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monster Jumpscare Sound
	 */
	struct ABP_AbstractJumpscareMaster_C_GetMonsterJumpscareSound_Params
	{
	public:
		class USoundBase*                                          JumpscareSound;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Monsters Camera
	 */
	struct ABP_AbstractJumpscareMaster_C_GetMonstersCamera_Params
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Transfer B Transforms To A
	 */
	struct ABP_AbstractJumpscareMaster_C_TransferBTransformsToA_Params
	{
	public:
		class USceneComponent*                                     A;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     B;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Is Monster In Third Person
	 */
	struct ABP_AbstractJumpscareMaster_C_GetIsMonsterInThirdPerson_Params
	{
	public:
		bool                                                       InThirdPerson;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Get Target Monsters Player Controller
	 */
	struct ABP_AbstractJumpscareMaster_C_GetTargetMonstersPlayerController_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Camera Animations
	 */
	struct ABP_AbstractJumpscareMaster_C_PlayJumpscareCameraAnimations_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Jumpscare Character Animations
	 */
	struct ABP_AbstractJumpscareMaster_C_PlayJumpscareCharacterAnimations_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Huggy First Person Jumpscare Transforms
	 */
	struct ABP_AbstractJumpscareMaster_C_SetHuggyFirstPersonJumpscareTransforms_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ReceiveTick
	 */
	struct ABP_AbstractJumpscareMaster_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Player Third Person After Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_TogglePlayerThirdPersonAfterJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Monster Third Person After Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_ToggleMonsterThirdPersonAfterJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Toggled Third Person During Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_MonsterBindToggledThirdPersonDuringJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Mommy First Person Jumpscare Transforms
	 */
	struct ABP_AbstractJumpscareMaster_C_SetMommyFirstPersonJumpscareTransforms_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Kill Player
	 */
	struct ABP_AbstractJumpscareMaster_C_KillPlayer_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Boxy Boo First Person Jumpscare Transforms
	 */
	struct ABP_AbstractJumpscareMaster_C_SetBoxyBooFirstPersonJumpscareTransforms_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Finish Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_FinishJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Trigger Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_TriggerJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms for Player
	 */
	struct ABP_AbstractJumpscareMaster_C_CreateOriginalandTargetTransformsforPlayer_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Create Original and Target Transforms For Monster
	 */
	struct ABP_AbstractJumpscareMaster_C_CreateOriginalandTargetTransformsForMonster_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Play Monster Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_PlayMonsterJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Monster Character Skeleton
	 */
	struct ABP_AbstractJumpscareMaster_C_UnHideMonsterCharacterSkeleton_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.UnHide Player Character Skeleton
	 */
	struct ABP_AbstractJumpscareMaster_C_UnHidePlayerCharacterSkeleton_Params
	{
	public:
		bool                                                       HideCharacter;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.End Monster Jumpscares
	 */
	struct ABP_AbstractJumpscareMaster_C_EndMonsterJumpscares_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Toggle Third Person Views If Needed
	 */
	struct ABP_AbstractJumpscareMaster_C_ToggleThirdPersonViewsIfNeeded_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Find Monsters Pawn Size And Forward Direction And Floor Z
	 */
	struct ABP_AbstractJumpscareMaster_C_FindMonstersPawnSizeAndForwardDirectionAndFloorZ_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Monster Bind Crouch During Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_MonsterBindCrouchDuringJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn On Crouch After Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_TurnOnCrouchAfterJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Turn Off Crouch After Jumpscare
	 */
	struct ABP_AbstractJumpscareMaster_C_TurnOffCrouchAfterJumpscare_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.Set Monsters and Players Final Locations
	 */
	struct ABP_AbstractJumpscareMaster_C_SetMonstersandPlayersFinalLocations_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.ExecuteUbergraph_BP_AbstractJumpscareMaster
	 */
	struct ABP_AbstractJumpscareMaster_C_ExecuteUbergraph_BP_AbstractJumpscareMaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On Started Jumpscare Animation__DelegateSignature
	 */
	struct ABP_AbstractJumpscareMaster_C_OnStartedJumpscareAnimation__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C.On End Jumpscare__DelegateSignature
	 */
	struct ABP_AbstractJumpscareMaster_C_OnEndJumpscare__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
