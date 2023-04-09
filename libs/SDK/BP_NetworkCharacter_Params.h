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
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_SelectedSoundsPackage
	 */
	struct ABP_NetworkCharacter_C_OnRep_SelectedSoundsPackage_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPrompt
	 */
	struct ABP_NetworkCharacter_C_GetPrompt_Params
	{
	public:
		class FText                                                PromptPrefix;                                            // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                PromptSuffix;                                            // 0x0018(0x0018)  (Parm, OutParm)
		bool                                                       CanPrompt;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Update Cosmetics
	 */
	struct ABP_NetworkCharacter_C_UpdateCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Cosmetic;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerOnTrain
	 */
	struct ABP_NetworkCharacter_C_IsPlayerOnTrain_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Random Player Movement
	 */
	struct ABP_NetworkCharacter_C_RandomPlayerMovement_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ZSD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_CurrentPreset
	 */
	struct ABP_NetworkCharacter_C_OnRep_CurrentPreset_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C. Notify
	 */
	struct ABP_NetworkCharacter_C_Notify_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrossReferenceEquippedCosmeticsWithSteamInventory
	 */
	struct ABP_NetworkCharacter_C_CrossReferenceEquippedCosmeticsWithSteamInventory_Params
	{
	public:
		TArray<struct FSteamItemDetails>                           SteamItemDetails;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       EquippedCosmeticsAreOwned;                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.UpdateSecondaryObjective
	 */
	struct ABP_NetworkCharacter_C_UpdateSecondaryObjective_Params
	{
	public:
		ESecondaryObjectives                                       NewObjective;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ADN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get Monster Jumpscare Origin
	 */
	struct ABP_NetworkCharacter_C_GetMonsterJumpscareOrigin_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WS2Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGeneralVisibility
	 */
	struct ABP_NetworkCharacter_C_SetGeneralVisibility_Params
	{
	public:
		bool                                                       FirstPerson;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VisibleToOthers;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetFirstPersonVisibility
	 */
	struct ABP_NetworkCharacter_C_SetFirstPersonVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetThirdPersonVisibility
	 */
	struct ABP_NetworkCharacter_C_SetThirdPersonVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_LivingNightmare
	 */
	struct ABP_NetworkCharacter_C_Sabotage_LivingNightmare_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_NetInteractingState
	 */
	struct ABP_NetworkCharacter_C_OnRep_NetInteractingState_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsBeingInteractedWith
	 */
	struct ABP_NetworkCharacter_C_IsBeingInteractedWith_Params
	{
	public:
		bool                                                       InteractedWith;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_BeginInteraction
	 */
	struct ABP_NetworkCharacter_C_Owner_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3VTM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_BeginInteraction
	 */
	struct ABP_NetworkCharacter_C_Authority_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H48Z[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanBePickedUp
	 */
	struct ABP_NetworkCharacter_C_CanBePickedUp_Params
	{
	public:
		bool                                                       CanBe;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_965W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Strikes
	 */
	struct ABP_NetworkCharacter_C_OnRep_Strikes_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get All Character Meshes
	 */
	struct ABP_NetworkCharacter_C_GetAllCharacterMeshes_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetMultiplier
	 */
	struct ABP_NetworkCharacter_C_GetMultiplier_Params
	{
	public:
		struct FVector                                             MonsterLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      In_MaxMod;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      In_Volume;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      In_Distance;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZedIgnorance;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_StartedGame
	 */
	struct ABP_NetworkCharacter_C_OnRep_StartedGame_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayersInRegenZone
	 */
	struct ABP_NetworkCharacter_C_GetPlayersInRegenZone_Params
	{
	public:
		TArray<class ABP_NetworkCharacter_C*>                      Players;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthRegen
	 */
	struct ABP_NetworkCharacter_C_SetHealthRegen_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FOUB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetOwningPlayerController
	 */
	struct ABP_NetworkCharacter_C_GetOwningPlayerController_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIGM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NoPack
	 */
	struct ABP_NetworkCharacter_C_Sabotage_NoPack_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NavIndicators
	 */
	struct ABP_NetworkCharacter_C_Sabotage_NavIndicators_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_AutoCarry
	 */
	struct ABP_NetworkCharacter_C_Sabotage_AutoCarry_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetABP
	 */
	struct ABP_NetworkCharacter_C_GetABP_Params
	{
	public:
		class UABP_NetworkPlayer_C*                                ABP;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerMoving
	 */
	struct ABP_NetworkCharacter_C_IsPlayerMoving_Params
	{
	public:
		bool                                                       IsMoving;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AYQK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowThirdPersonViewmodels
	 */
	struct ABP_NetworkCharacter_C_ShowThirdPersonViewmodels_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggle Third Person
	 */
	struct ABP_NetworkCharacter_C_ToggleThirdPerson_Params
	{
	public:
		bool                                                       UseManualInput;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ManualInput;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Can Play Game
	 */
	struct ABP_NetworkCharacter_C_CanPlayGame_Params
	{
	public:
		bool                                                       Status;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetHeldToyPart
	 */
	struct ABP_NetworkCharacter_C_BP_GetHeldToyPart_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetCameraComponent
	 */
	struct ABP_NetworkCharacter_C_BP_GetCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetThirdPersonMesh
	 */
	struct ABP_NetworkCharacter_C_BP_GetThirdPersonMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageHands
	 */
	struct ABP_NetworkCharacter_C_ManageHands_Params
	{
	public:
		class UUHandRigPackageComponent*                           self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandStateChange                                           HSC;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.DoHandSounds
	 */
	struct ABP_NetworkCharacter_C_DoHandSounds_Params
	{
	public:
		ELimb                                                      Limb;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandStateChange                                           HSC;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_670B[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_SpawnDroppedToyPart
	 */
	struct ABP_NetworkCharacter_C_BP_SpawnDroppedToyPart_Params
	{
	public:
		int32_t                                                    ToyPartIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CustomLocation;                                          // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_HeldToyPartIndex
	 */
	struct ABP_NetworkCharacter_C_BP_OnRep_HeldToyPartIndex_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageThirdPersonHands
	 */
	struct ABP_NetworkCharacter_C_ManageThirdPersonHands_Params
	{
	public:
		ELimb                                                      Limb;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandStateChange                                           HandStateChange;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Webbed
	 */
	struct ABP_NetworkCharacter_C_OnRep_Webbed_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanStandUp
	 */
	struct ABP_NetworkCharacter_C_CanStandUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IW4U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Username
	 */
	struct ABP_NetworkCharacter_C_OnRep_Username_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_PlayerColor
	 */
	struct ABP_NetworkCharacter_C_OnRep_PlayerColor_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move Player
	 */
	struct ABP_NetworkCharacter_C_MovePlayer_Params
	{
	public:
		struct FVector                                             WorldDirection;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleValue;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleDownWidget
	 */
	struct ABP_NetworkCharacter_C_ToggleDownWidget_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4WE5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetDownWidgetName
	 */
	struct ABP_NetworkCharacter_C_SetDownWidgetName_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetPlayerColor
	 */
	struct ABP_NetworkCharacter_C_SetPlayerColor_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayerNumber
	 */
	struct ABP_NetworkCharacter_C_GetPlayerNumber_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Land
	 */
	struct ABP_NetworkCharacter_C_Land_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.LookAround
	 */
	struct ABP_NetworkCharacter_C_LookAround_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pitch;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleRun
	 */
	struct ABP_NetworkCharacter_C_ToggleRun_Params
	{
	public:
		bool                                                       Running;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_066F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerSprinting
	 */
	struct ABP_NetworkCharacter_C_IsPlayerSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F77F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerCrouching
	 */
	struct ABP_NetworkCharacter_C_IsPlayerCrouching_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShakeCamera
	 */
	struct ABP_NetworkCharacter_C_ShakeCamera_Params
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_49Y1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.MovementCameraShake
	 */
	struct ABP_NetworkCharacter_C_MovementCameraShake_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.UserConstructionScript
	 */
	struct ABP_NetworkCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_PlayerLookAtJumpscare__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_PlayerLookAtJumpscare__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_WebOpacityTime__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_WebOpacityTime__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_InteractingWithTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_InteractingWithTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_InteractedWithTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_InteractedWithTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_SelfReviveTimer__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_SelfReviveTimer__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_DownCameraTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_DownCameraTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_CameraHit__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_CameraHit__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_SetGlitchOpacity__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_SetGlitchOpacity__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__FinishedFunc
	 */
	struct ABP_NetworkCharacter_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__UpdateFunc
	 */
	struct ABP_NetworkCharacter_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Roll_K2Node_InputActionEvent_10
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Roll_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_9
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_8
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_7
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_6
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_5
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_4
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnFailure_0A1F0A8944BA901C903E9692824BA4FC
	 */
	struct ABP_NetworkCharacter_C_OnFailure_0A1F0A8944BA901C903E9692824BA4FC_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnSuccess_0A1F0A8944BA901C903E9692824BA4FC
	 */
	struct ABP_NetworkCharacter_C_OnSuccess_0A1F0A8944BA901C903E9692824BA4FC_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_3
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_K_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_3
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Emote_K2Node_InputActionEvent_1
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_Emote_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_2
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_1
	 */
	struct ABP_NetworkCharacter_C_InpActEvt_M_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnStartCrouch
	 */
	struct ABP_NetworkCharacter_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnEndCrouch
	 */
	struct ABP_NetworkCharacter_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.FootprintOnDestroyed
	 */
	struct ABP_NetworkCharacter_C_FootprintOnDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveFootprints
	 */
	struct ABP_NetworkCharacter_C_RemoveFootprints_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnFootprint
	 */
	struct ABP_NetworkCharacter_C_SpawnFootprint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryUncrouch
	 */
	struct ABP_NetworkCharacter_C_TryUncrouch_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.HitByWeb
	 */
	struct ABP_NetworkCharacter_C_HitByWeb_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnLanded
	 */
	struct ABP_NetworkCharacter_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4
	 */
	struct ABP_NetworkCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 */
	struct ABP_NetworkCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2
	 */
	struct ABP_NetworkCharacter_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1
	 */
	struct ABP_NetworkCharacter_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiOuttaBreath
	 */
	struct ABP_NetworkCharacter_C_MultiOuttaBreath_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiBreathing
	 */
	struct ABP_NetworkCharacter_C_MultiBreathing_Params
	{
	public:
		bool                                                       StartBreathing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathClient
	 */
	struct ABP_NetworkCharacter_C_HoldBreathClient_Params
	{
	public:
		bool                                                       Holding;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathServer
	 */
	struct ABP_NetworkCharacter_C_HoldBreathServer_Params
	{
	public:
		bool                                                       Holding;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CallHoldBreath
	 */
	struct ABP_NetworkCharacter_C_CallHoldBreath_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move TP_Camera
	 */
	struct ABP_NetworkCharacter_C_MoveTP_Camera_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRunning;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrouchCamera
	 */
	struct ABP_NetworkCharacter_C_CrouchCamera_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Web Sound
	 */
	struct ABP_NetworkCharacter_C_MulticastWebSound_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventShowWebs
	 */
	struct ABP_NetworkCharacter_C_EventShowWebs_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.KickPlayer
	 */
	struct ABP_NetworkCharacter_C_KickPlayer_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowIdleWarning
	 */
	struct ABP_NetworkCharacter_C_ShowIdleWarning_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.RestartIdleTimer
	 */
	struct ABP_NetworkCharacter_C_RestartIdleTimer_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Emote
	 */
	struct ABP_NetworkCharacter_C_MulticastEmote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Server Emote
	 */
	struct ABP_NetworkCharacter_C_ServerEmote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Emote
	 */
	struct ABP_NetworkCharacter_C_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Emote
	 */
	struct ABP_NetworkCharacter_C_Client_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToCancelled
	 */
	struct ABP_NetworkCharacter_C_Owner_InteractingToCancelled_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToFixing
	 */
	struct ABP_NetworkCharacter_C_Owner_InteractingToFixing_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToReviving
	 */
	struct ABP_NetworkCharacter_C_Owner_InteractingToReviving_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToIdle
	 */
	struct ABP_NetworkCharacter_C_Owner_InteractingToIdle_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingTransitionState
	 */
	struct ABP_NetworkCharacter_C_Owner_InteractingTransitionState_Params
	{
	public:
		EInteractedWithState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToCancelled
	 */
	struct ABP_NetworkCharacter_C_Authority_IWSToCancelled_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToFixing
	 */
	struct ABP_NetworkCharacter_C_Authority_IWSToFixing_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToReviving
	 */
	struct ABP_NetworkCharacter_C_Authority_IWSToReviving_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToIdle
	 */
	struct ABP_NetworkCharacter_C_Authority_IWSToIdle_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_TransitionInteractedWithState
	 */
	struct ABP_NetworkCharacter_C_Authority_TransitionInteractedWithState_Params
	{
	public:
		EInteractedWithState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_EndInteraction
	 */
	struct ABP_NetworkCharacter_C_Authority_EndInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OwnerFinishedInteractingWith
	 */
	struct ABP_NetworkCharacter_C_OwnerFinishedInteractingWith_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning_SetInteractInProgress
	 */
	struct ABP_NetworkCharacter_C_Owning_SetInteractInProgress_Params
	{
	public:
		bool                                                       InProgress;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartInteractFromClient
	 */
	struct ABP_NetworkCharacter_C_StartInteractFromClient_Params
	{
	public:
		bool                                                       ThirdPerson;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteractFromClient
	 */
	struct ABP_NetworkCharacter_C_CancelInteractFromClient_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetInteractUI
	 */
	struct ABP_NetworkCharacter_C_SetInteractUI_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteract
	 */
	struct ABP_NetworkCharacter_C_CancelInteract_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveEndPlay
	 */
	struct ABP_NetworkCharacter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchChase
	 */
	struct ABP_NetworkCharacter_C_SwitchChase_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchTense
	 */
	struct ABP_NetworkCharacter_C_SwitchTense_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Switch Ambience
	 */
	struct ABP_NetworkCharacter_C_SwitchAmbience_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Interrupted Locker
	 */
	struct ABP_NetworkCharacter_C_AnimSetInterruptedLocker_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceivePossessed
	 */
	struct ABP_NetworkCharacter_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.FoundSteamInventory
	 */
	struct ABP_NetworkCharacter_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Disable Player Mesh Shadows
	 */
	struct ABP_NetworkCharacter_C_DisablePlayerMeshShadows_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Exiting Locker
	 */
	struct ABP_NetworkCharacter_C_AnimSetExitingLocker_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Entering Locker
	 */
	struct ABP_NetworkCharacter_C_AnimSetEnteringLocker_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Raise Lower Hands
	 */
	struct ABP_NetworkCharacter_C_RaiseLowerHands_Params
	{
	public:
		bool                                                       Lowered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewNetSetCosmetics
	 */
	struct ABP_NetworkCharacter_C_NewNetSetCosmetics_Params
	{
	public:
		struct FPresetSlot                                         CurrentPreset;                                           // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewLoadCosmetics
	 */
	struct ABP_NetworkCharacter_C_NewLoadCosmetics_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.LockerTakeout
	 */
	struct ABP_NetworkCharacter_C_LockerTakeout_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveCosmeticsDueToError
	 */
	struct ABP_NetworkCharacter_C_RemoveCosmeticsDueToError_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.VerifyClientInventory
	 */
	struct ABP_NetworkCharacter_C_VerifyClientInventory_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetToyDepositIndicators
	 */
	struct ABP_NetworkCharacter_C_SetToyDepositIndicators_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SimBeginPlay
	 */
	struct ABP_NetworkCharacter_C_SimBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExitLockerFinish
	 */
	struct ABP_NetworkCharacter_C_ExitLockerFinish_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterLockerFinish
	 */
	struct ABP_NetworkCharacter_C_EnterLockerFinish_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerServer
	 */
	struct ABP_NetworkCharacter_C_EnterExitLockerServer_Params
	{
	public:
		class ABP_Locker_C*                                        LockerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multi_ShowHidePlayer
	 */
	struct ABP_NetworkCharacter_C_Multi_ShowHidePlayer_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerClient
	 */
	struct ABP_NetworkCharacter_C_EnterExitLockerClient_Params
	{
	public:
		class ABP_Locker_C*                                        LockerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NotDetected
	 */
	struct ABP_NetworkCharacter_C_NotDetected_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.DetectedByMonster
	 */
	struct ABP_NetworkCharacter_C_DetectedByMonster_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.StopCarryUI
	 */
	struct ABP_NetworkCharacter_C_StopCarryUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartHookUI
	 */
	struct ABP_NetworkCharacter_C_StartHookUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartCarryUI
	 */
	struct ABP_NetworkCharacter_C_StartCarryUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EndAutoReviveUI
	 */
	struct ABP_NetworkCharacter_C_EndAutoReviveUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelAutoReviveUI
	 */
	struct ABP_NetworkCharacter_C_CancelAutoReviveUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartAutoReviveUI
	 */
	struct ABP_NetworkCharacter_C_StartAutoReviveUI_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.AutoRevive
	 */
	struct ABP_NetworkCharacter_C_AutoRevive_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ServerOnly_EvaluateAutoReviveTimer
	 */
	struct ABP_NetworkCharacter_C_ServerOnly_EvaluateAutoReviveTimer_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHUD_ToyList
	 */
	struct ABP_NetworkCharacter_C_SetHUD_ToyList_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature
	 */
	struct ABP_NetworkCharacter_C_BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature_Params
	{
	public:
		class UUHandRigPackageComponent*                           Pkg;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandStateChange                                           HandStateChange;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature
	 */
	struct ABP_NetworkCharacter_C_BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature_Params
	{
	public:
		class UUHandRigPackageComponent*                           Pkg;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandStateChange                                           HandStateChange;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiShowWin
	 */
	struct ABP_NetworkCharacter_C_MultiShowWin_Params
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveTick
	 */
	struct ABP_NetworkCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetSounds
	 */
	struct ABP_NetworkCharacter_C_NetSetSounds_Params
	{
	public:
		struct FSelectedSoundsPackage                              SelectedSoundsPackage;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Roll Sound
	 */
	struct ABP_NetworkCharacter_C_MulticastRollSound_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.DashSound
	 */
	struct ABP_NetworkCharacter_C_DashSound_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Spawn Jumpscare Light
	 */
	struct ABP_NetworkCharacter_C_SpawnJumpscareLight_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PerkSaveGame
	 */
	struct ABP_NetworkCharacter_C_BP_OnRep_PerkSaveGame_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetCharacter
	 */
	struct ABP_NetworkCharacter_C_ResetCharacter_Params
	{
	public:
		bool                                                       JustDestroyUI;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetViewTarget
	 */
	struct ABP_NetworkCharacter_C_ResetViewTarget_Params
	{
	public:
		bool                                                       JustDestroyUI;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryReady
	 */
	struct ABP_NetworkCharacter_C_TryReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventFixNameTag
	 */
	struct ABP_NetworkCharacter_C_EventFixNameTag_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerName
	 */
	struct ABP_NetworkCharacter_C_NetSetPlayerName_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerColor
	 */
	struct ABP_NetworkCharacter_C_NetSetPlayerColor_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayFixingSound
	 */
	struct ABP_NetworkCharacter_C_PlayFixingSound_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayRevivingSound
	 */
	struct ABP_NetworkCharacter_C_PlayRevivingSound_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayBrokenHandAttemptThings
	 */
	struct ABP_NetworkCharacter_C_PlayBrokenHandAttemptThings_Params
	{
	public:
		bool                                                       LHand;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_ShowRollRecharge
	 */
	struct ABP_NetworkCharacter_C_Client_ShowRollRecharge_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BindEventOnRepCanDashEventHandler
	 */
	struct ABP_NetworkCharacter_C_BindEventOnRepCanDashEventHandler_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PlayerNeedsRevived
	 */
	struct ABP_NetworkCharacter_C_BP_OnRep_PlayerNeedsRevived_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleCosmetics
	 */
	struct ABP_NetworkCharacter_C_ToggleCosmetics_Params
	{
	public:
		bool                                                       Forceoff;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnToyLocker
	 */
	struct ABP_NetworkCharacter_C_SpawnToyLocker_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ChangeClientInput
	 */
	struct ABP_NetworkCharacter_C_ChangeClientInput_Params
	{
	public:
		bool                                                       ShouldDisable;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnableClientInput
	 */
	struct ABP_NetworkCharacter_C_EnableClientInput_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthVisibility
	 */
	struct ABP_NetworkCharacter_C_SetHealthVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.JumpscareInterruption
	 */
	struct ABP_NetworkCharacter_C_JumpscareInterruption_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayJumpSound
	 */
	struct ABP_NetworkCharacter_C_PlayJumpSound_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnJumped
	 */
	struct ABP_NetworkCharacter_C_OnJumped_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealingAuraVisibility
	 */
	struct ABP_NetworkCharacter_C_SetHealingAuraVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NT5J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AANetworkCharacter*                                  HealingChar;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_Health
	 */
	struct ABP_NetworkCharacter_C_BP_OnRep_Health_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowStrikes
	 */
	struct ABP_NetworkCharacter_C_ShowStrikes_Params
	{
	public:
		int32_t                                                    Strikes;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnHealthRegen
	 */
	struct ABP_NetworkCharacter_C_OnHealthRegen_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_PlayDamageFX
	 */
	struct ABP_NetworkCharacter_C_BP_PlayDamageFX_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_TakeAnyDamageWhileAlive
	 */
	struct ABP_NetworkCharacter_C_BP_TakeAnyDamageWhileAlive_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2Q9R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bKillingHit;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning Kill
	 */
	struct ABP_NetworkCharacter_C_OwningKill_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Kill
	 */
	struct ABP_NetworkCharacter_C_Kill_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventDropped
	 */
	struct ABP_NetworkCharacter_C_EventDropped_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventExtractedFromWuggyHole
	 */
	struct ABP_NetworkCharacter_C_EventExtractedFromWuggyHole_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventImprisonedInWuggyHole
	 */
	struct ABP_NetworkCharacter_C_EventImprisonedInWuggyHole_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventPickedUp
	 */
	struct ABP_NetworkCharacter_C_EventPickedUp_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventJumpscare
	 */
	struct ABP_NetworkCharacter_C_EventJumpscare_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistanceFromMonster;                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendOut;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnoughSpaceforJumpscare;                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMonster_Type                                              MonsterType;                                             // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_GetHealed
	 */
	struct ABP_NetworkCharacter_C_Authority_GetHealed_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientResetDeathScreen
	 */
	struct ABP_NetworkCharacter_C_ClientResetDeathScreen_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowDeathScreen
	 */
	struct ABP_NetworkCharacter_C_ShowDeathScreen_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Jumpscare Montage
	 */
	struct ABP_NetworkCharacter_C_EndJumpscareMontage_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare
	 */
	struct ABP_NetworkCharacter_C_OnStartedJumpscare_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Ended Jumpscare
	 */
	struct ABP_NetworkCharacter_C_EndedJumpscare_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Play Jumpscare Montage
	 */
	struct ABP_NetworkCharacter_C_PlayJumpscareMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.PickedUpThirdPerson
	 */
	struct ABP_NetworkCharacter_C_PickedUpThirdPerson_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientToggleThirdTrue
	 */
	struct ABP_NetworkCharacter_C_ClientToggleThirdTrue_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReviveThirdPerson
	 */
	struct ABP_NetworkCharacter_C_ReviveThirdPerson_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientSetCachedPersp
	 */
	struct ABP_NetworkCharacter_C_ClientSetCachedPersp_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_GrabpackBroken
	 */
	struct ABP_NetworkCharacter_C_OnRep_GrabpackBroken_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Living Nightmare
	 */
	struct ABP_NetworkCharacter_C_EndLivingNightmare_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Sabotage_LivingNightmare
	 */
	struct ABP_NetworkCharacter_C_Client_Sabotage_LivingNightmare_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_LivingNightmare
	 */
	struct ABP_NetworkCharacter_C_EventSabotage_LivingNightmare_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Fix Grabpack
	 */
	struct ABP_NetworkCharacter_C_EventFixGrabpack_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Try Send To Wuggy Hole
	 */
	struct ABP_NetworkCharacter_C_EventTrySendToWuggyHole_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_AutoCarry
	 */
	struct ABP_NetworkCharacter_C_EventSabotage_AutoCarry_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_NavIndicators
	 */
	struct ABP_NetworkCharacter_C_EventSabotage_NavIndicators_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExecuteUbergraph_BP_NetworkCharacter
	 */
	struct ABP_NetworkCharacter_C_ExecuteUbergraph_BP_NetworkCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.EmoteRequested__DelegateSignature
	 */
	struct ABP_NetworkCharacter_C_EmoteRequested__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare Animation__DelegateSignature
	 */
	struct ABP_NetworkCharacter_C_OnStartedJumpscareAnimation__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggled Third Person During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkCharacter_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
