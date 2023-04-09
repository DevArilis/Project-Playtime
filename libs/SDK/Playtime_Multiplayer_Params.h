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
	 * DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionStopped__DelegateSignature
	 */
	struct AActorConnection_OnConnectionStopped__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionBroken__DelegateSignature
	 */
	struct AActorConnection_OnConnectionBroken__DelegateSignature_Params
	{
	public:
		class AActorConnection*                                    Connection;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ActorConnection.IsComponentLastInConnection
	 */
	struct AActorConnection_IsComponentLastInConnection_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ActorConnection.IsComponentInConnection
	 */
	struct AActorConnection_IsComponentInConnection_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ActorConnection.HandleComponentWantsToDisconnect
	 */
	struct AActorConnection_HandleComponentWantsToDisconnect_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ActorConnection.AddComponentToConnection
	 */
	struct AActorConnection_AddComponentToConnection_Params
	{
	public:
		class USceneComponent*                                     NewComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeCharacter.ShowTooltipIfAllowed
	 */
	struct APlaytimeCharacter_ShowTooltipIfAllowed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTooltipComponent*                                   Tooltip;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeCharacter.Server_KnockBack
	 */
	struct APlaytimeCharacter_Server_KnockBack_Params
	{
	public:
		struct FVector                                             KnockBackOrigin;                                         // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Horizontal;                                              // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Vertical;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeCharacter.OnTargetPerceptionUpdated
	 */
	struct APlaytimeCharacter_OnTargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.TurnOnJokeTimer
	 */
	struct AANetworkCharacter_TurnOnJokeTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.TurnOffJokeTimer
	 */
	struct AANetworkCharacter_TurnOffJokeTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.TakeAnyDamage
	 */
	struct AANetworkCharacter_TakeAnyDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0ISK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.ShouldLeaveFootprint
	 */
	struct AANetworkCharacter_ShouldLeaveFootprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.SetPlayerNeedsRevivedWithNotify
	 */
	struct AANetworkCharacter_SetPlayerNeedsRevivedWithNotify_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.SetLocalPerksThenReplicate
	 */
	struct AANetworkCharacter_SetLocalPerksThenReplicate_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.SetInteractedInterface
	 */
	struct AANetworkCharacter_SetInteractedInterface_Params
	{
	public:
		class UObject*                                             Interactable;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.SetHealthWithNotifyClamped
	 */
	struct AANetworkCharacter_SetHealthWithNotifyClamped_Params
	{
	public:
		float                                                      In_Health;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.ServerOnly_DropToyPart
	 */
	struct AANetworkCharacter_ServerOnly_DropToyPart_Params
	{
	public:
		bool                                                       SpawnDrop;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G7HZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CustomLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.Server_SetSharedLookPitch
	 */
	struct AANetworkCharacter_Server_SetSharedLookPitch_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.Server_SetPerks
	 */
	struct AANetworkCharacter_Server_SetPerks_Params
	{
	public:
		struct FPerkPackage                                        In_PerkSaveGame;                                         // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.Server_DropToyPart
	 */
	struct AANetworkCharacter_Server_DropToyPart_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.PseudoConstruct
	 */
	struct AANetworkCharacter_PseudoConstruct_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PlayerNeedsRevived
	 */
	struct AANetworkCharacter_OnRep_PlayerNeedsRevived_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PerkSaveGame
	 */
	struct AANetworkCharacter_OnRep_PerkSaveGame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartLimb
	 */
	struct AANetworkCharacter_OnRep_HeldToyPartLimb_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartIndex
	 */
	struct AANetworkCharacter_OnRep_HeldToyPartIndex_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_Health
	 */
	struct AANetworkCharacter_OnRep_Health_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.OnRep_GrabpackBroken
	 */
	struct AANetworkCharacter_OnRep_GrabpackBroken_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.ObtainInteractedInterface
	 */
	struct AANetworkCharacter_ObtainInteractedInterface_Params
	{
	public:
		bool                                                       OutIsValid;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y1KF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.JokeTimer
	 */
	struct AANetworkCharacter_JokeTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Released
	 */
	struct AANetworkCharacter_InputAction_RightHandExtend_Released_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Pressed
	 */
	struct AANetworkCharacter_InputAction_RightHandExtend_Pressed_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Released
	 */
	struct AANetworkCharacter_InputAction_LeftHandExtend_Released_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Pressed
	 */
	struct AANetworkCharacter_InputAction_LeftHandExtend_Pressed_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.IncrementPlayerStat
	 */
	struct AANetworkCharacter_IncrementPlayerStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerStatistics                                          Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.HandStateChange
	 */
	struct AANetworkCharacter_HandStateChange_Params
	{
	public:
		class UUHandRigPackageComponent*                           Pkg;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHandStateChange                                           HandStateChange;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.GetPlaytimeMovementComponent
	 */
	struct AANetworkCharacter_GetPlaytimeMovementComponent_Params
	{
	public:
		class UPlaytimeMovementComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.Client_PlayDamageFX
	 */
	struct AANetworkCharacter_Client_PlayDamageFX_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_TakeAnyDamageWhileAlive
	 */
	struct AANetworkCharacter_BP_TakeAnyDamageWhileAlive_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VFEU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKillingHit;                                             // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_SpawnDroppedToyPart
	 */
	struct AANetworkCharacter_BP_SpawnDroppedToyPart_Params
	{
	public:
		int32_t                                                    ToyPartIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CustomLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_PlayDamageFX
	 */
	struct AANetworkCharacter_BP_PlayDamageFX_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_SavedPerksChanged
	 */
	struct AANetworkCharacter_BP_OnRep_SavedPerksChanged_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PlayerNeedsRevived
	 */
	struct AANetworkCharacter_BP_OnRep_PlayerNeedsRevived_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PerkSaveGame
	 */
	struct AANetworkCharacter_BP_OnRep_PerkSaveGame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_HeldToyPartIndex
	 */
	struct AANetworkCharacter_BP_OnRep_HeldToyPartIndex_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_Health
	 */
	struct AANetworkCharacter_BP_OnRep_Health_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_GetThirdPersonMesh
	 */
	struct AANetworkCharacter_BP_GetThirdPersonMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_GetHeldToyPart
	 */
	struct AANetworkCharacter_BP_GetHeldToyPart_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.BP_GetCameraComponent
	 */
	struct AANetworkCharacter_BP_GetCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkCharacter.Authority_SetGrabpackBroken
	 */
	struct AANetworkCharacter_Authority_SetGrabpackBroken_Params
	{
	public:
		bool                                                       In_Broken;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkFist.IsRetractingBackward
	 */
	struct AANetworkFist_IsRetractingBackward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkFist.GetOwningCharacter
	 */
	struct AANetworkFist_GetOwningCharacter_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkFist.DetachAndRetract
	 */
	struct AANetworkFist_DetachAndRetract_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.Multicast_GrabOntoPrimitive
	 */
	struct AANetworkHand_Multicast_GrabOntoPrimitive_Params
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUNetworkGrabComponent*                              In_GrabComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHandMagnetComponent*                                In_MagnetComponent;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.GetOwningCharacter
	 */
	struct AANetworkHand_GetOwningCharacter_Params
	{
	public:
		class AANetworkCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.GetAnimInstance
	 */
	struct AANetworkHand_GetAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.DetermineVisuals
	 */
	struct AANetworkHand_DetermineVisuals_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.DetachAndRetract
	 */
	struct AANetworkHand_DetachAndRetract_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ANetworkHand.CheckWire
	 */
	struct AANetworkHand_CheckWire_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsInterface.EstablishConnection
	 */
	struct UConnectionsInterface_EstablishConnection_Params
	{
	public:
		class USceneComponent*                                     ConnectedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsInterface.BreakConnection
	 */
	struct UConnectionsInterface_BreakConnection_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsManagerComponent.StopCurrentConnection
	 */
	struct UConnectionsManagerComponent_StopCurrentConnection_Params
	{	};

	/**
	 * DelegateFunction Playtime_Multiplayer.ConnectionsManagerComponent.OnStateChanged__DelegateSignature
	 */
	struct UConnectionsManagerComponent_OnStateChanged__DelegateSignature_Params
	{
	public:
		EManagerConnectionState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsManagerComponent.HandleConnectionBroken
	 */
	struct UConnectionsManagerComponent_HandleConnectionBroken_Params
	{
	public:
		class AActorConnection*                                    Connection;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsManagerComponent.GetState
	 */
	struct UConnectionsManagerComponent_GetState_Params
	{
	public:
		EManagerConnectionState                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.ConnectionsManagerComponent.AddToConnection
	 */
	struct UConnectionsManagerComponent_AddToConnection_Params
	{
	public:
		class USceneComponent*                                     NewComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.SaveCosmetics
	 */
	struct UCosmeticFunctionLibrary_SaveCosmetics_Params
	{
	public:
		class UCustomizationSaveGame*                              In_SaveGame;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.LoadCosmetics
	 */
	struct UCosmeticFunctionLibrary_LoadCosmetics_Params
	{
	public:
		class UCustomizationSaveGame*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetSoundPackData
	 */
	struct UCosmeticFunctionLibrary_GetSoundPackData_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DWMY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSoundPackEntry                                     ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemsByEvent
	 */
	struct UCosmeticFunctionLibrary_GetShopItemsByEvent_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemData
	 */
	struct UCosmeticFunctionLibrary_GetShopItemData_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MWXZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FShopItem                                           ReturnValue;                                             // 0x0008(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRarityColor
	 */
	struct UCosmeticFunctionLibrary_GetRarityColor_Params
	{
	public:
		ECosmeticRarity                                            Rarity;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I60M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRandomItem
	 */
	struct UCosmeticFunctionLibrary_GetRandomItem_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetPlayerCosmeticAnimInstance
	 */
	struct UCosmeticFunctionLibrary_GetPlayerCosmeticAnimInstance_Params
	{
	public:
		struct FCosmetic                                           CosmeticItem;                                            // 0x0000(0x0248)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              AnimInstance;                                            // 0x0248(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySounds
	 */
	struct UCosmeticFunctionLibrary_GetMommySounds_Params
	{
	public:
		class UCustomizationSaveGame*                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMommySoundSet                                      ReturnValue;                                             // 0x0008(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySoundFor
	 */
	struct UCosmeticFunctionLibrary_GetMommySoundFor_Params
	{
	public:
		struct FMommySoundSet                                      Sounds;                                                  // 0x0000(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EMommySoundSet                                             Set;                                                     // 0x0070(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2AG[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemThumbnail
	 */
	struct UCosmeticFunctionLibrary_GetItemThumbnail_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NSTM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemName
	 */
	struct UCosmeticFunctionLibrary_GetItemName_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9UJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemData
	 */
	struct UCosmeticFunctionLibrary_GetItemData_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_924I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItem                                               ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetIDsFromSpecifiedTable
	 */
	struct UCosmeticFunctionLibrary_GetIDsFromSpecifiedTable_Params
	{
	public:
		class FString                                              Table;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySounds
	 */
	struct UCosmeticFunctionLibrary_GetHuggySounds_Params
	{
	public:
		class UCustomizationSaveGame*                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHuggySoundSet                                      ReturnValue;                                             // 0x0008(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySoundFor
	 */
	struct UCosmeticFunctionLibrary_GetHuggySoundFor_Params
	{
	public:
		struct FHuggySoundSet                                      Sounds;                                                  // 0x0000(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EHuggySoundSet                                             Set;                                                     // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R1UN[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetEmoteSimple
	 */
	struct UCosmeticFunctionLibrary_GetEmoteSimple_Params
	{
	public:
		struct FPresetSlot                                         Slot;                                                    // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetDefaultUnlockedItemsOfType
	 */
	struct UCosmeticFunctionLibrary_GetDefaultUnlockedItemsOfType_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O9DA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticTypeName
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticTypeName_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1A45[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticType
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticType_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticsOfType
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticsOfType_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J7YI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticOfTypeFor
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticOfTypeFor_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterType                                             For;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowPrivate;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NJ3O[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticDataByName
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticDataByName_Params
	{
	public:
		class FName                                                Cosmetic;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmetic                                           ReturnValue;                                             // 0x0008(0x0248)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticData
	 */
	struct UCosmeticFunctionLibrary_GetCosmeticData_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3GK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCosmetic                                           ReturnValue;                                             // 0x0008(0x0248)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBundleData
	 */
	struct UCosmeticFunctionLibrary_GetBundleData_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_83FU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBundle                                             ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySounds
	 */
	struct UCosmeticFunctionLibrary_GetBoxySounds_Params
	{
	public:
		class UCustomizationSaveGame*                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBoxySoundSet                                       ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySoundFor
	 */
	struct UCosmeticFunctionLibrary_GetBoxySoundFor_Params
	{
	public:
		struct FBoxySoundSet                                       Sounds;                                                  // 0x0000(0x0078)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EBoxySoundSet                                              Set;                                                     // 0x0078(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9HZB[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllItems
	 */
	struct UCosmeticFunctionLibrary_GetAllItems_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllActions
	 */
	struct UCosmeticFunctionLibrary_GetAllActions_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionsOfTypeFor
	 */
	struct UCosmeticFunctionLibrary_GetActionsOfTypeFor_Params
	{
	public:
		ECharacterType                                             For;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q8VW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionData
	 */
	struct UCosmeticFunctionLibrary_GetActionData_Params
	{
	public:
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IMFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAction                                             ReturnValue;                                             // 0x0008(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearMaterialSlots
	 */
	struct UCosmeticFunctionLibrary_ClearMaterialSlots_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearCosmetics
	 */
	struct UCosmeticFunctionLibrary_ClearCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Slot;                                                    // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CosmeticFunctionLibrary.AsCleanIntArray
	 */
	struct UCosmeticFunctionLibrary_AsCleanIntArray_Params
	{
	public:
		struct FPresetSlot                                         Slot;                                                    // 0x0000(0x0058)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.UnequipCosmetic
	 */
	struct UCustomizationSaveGame_UnequipCosmetic_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.SetSelectedPreset
	 */
	struct UCustomizationSaveGame_SetSelectedPreset_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OOEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Index;                                                   // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.Print
	 */
	struct UCustomizationSaveGame_Print_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.IsEmoteEquipped
	 */
	struct UCustomizationSaveGame_IsEmoteEquipped_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0UAZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.IsCosmeticEquipped
	 */
	struct UCustomizationSaveGame_IsCosmeticEquipped_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DCO7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.GetSelectedPresetNotByRef
	 */
	struct UCustomizationSaveGame_GetSelectedPresetNotByRef_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7RUK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPresetSlot                                         ReturnValue;                                             // 0x0008(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedEmote
	 */
	struct UCustomizationSaveGame_GetEquippedEmote_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KDCO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Slot;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedCosmetic
	 */
	struct UCustomizationSaveGame_GetEquippedCosmetic_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XNWU[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.EquipEmote
	 */
	struct UCustomizationSaveGame_EquipEmote_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G537[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Slot;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmeticColor
	 */
	struct UCustomizationSaveGame_EquipCosmeticColor_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4NGQ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ColorIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmetic
	 */
	struct UCustomizationSaveGame_EquipCosmetic_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1G9Z[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.DirectlySetSelectedPreset
	 */
	struct UCustomizationSaveGame_DirectlySetSelectedPreset_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IPJM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPresetSlot                                         Preset;                                                  // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.DeletePreset
	 */
	struct UCustomizationSaveGame_DeletePreset_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B3SK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Name;                                                    // 0x0004(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.ClampPresetRange
	 */
	struct UCustomizationSaveGame_ClampPresetRange_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomizationSaveGame.AddNewPreset
	 */
	struct UCustomizationSaveGame_AddNewPreset_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LQQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Name;                                                    // 0x0004(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2P45[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPresetSlot                                         PresetStruct;                                            // 0x0010(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomNinjaCharacter.SpawnMommyCamera
	 */
	struct ACustomNinjaCharacter_SpawnMommyCamera_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.CustomNinjaCharacter.OnTouchingWallChanged
	 */
	struct ACustomNinjaCharacter_OnTouchingWallChanged_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.CustomNinjaCharacter.OnRep_TouchingWall
	 */
	struct ACustomNinjaCharacter_OnRep_TouchingWall_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.CustomNinjaCharacter.MoveRight
	 */
	struct ACustomNinjaCharacter_MoveRight_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomNinjaCharacter.MoveForward
	 */
	struct ACustomNinjaCharacter_MoveForward_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.CustomPlayerController.SetViewTargetToMommyCamera
	 */
	struct ACustomPlayerController_SetViewTargetToMommyCamera_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.DoorStateMachineComponet.SwitchState
	 */
	struct UDoorStateMachineComponet_SwitchState_Params
	{
	public:
		struct FGameplayTag                                        _StateTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DoorStateMachineComponet.OpenDoor
	 */
	struct UDoorStateMachineComponet_OpenDoor_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.DoorStateMachineComponet.CloseDoor
	 */
	struct UDoorStateMachineComponet_CloseDoor_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.DualSplineFollower.SetTimeToTake
	 */
	struct ADualSplineFollower_SetTimeToTake_Params
	{
	public:
		float                                                      TimeToTake;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DualSplineFollower.ReverseDirection
	 */
	struct ADualSplineFollower_ReverseDirection_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.DualSplineFollower.Multicast_PseudoSpawn
	 */
	struct ADualSplineFollower_Multicast_PseudoSpawn_Params
	{
	public:
		class USplineComponent*                                    SplineToBaseFirstSplineOn;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USplineComponent*                                    In_SecondSpline;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CharacterLocation;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DualSplineFollower.GetCharacterToPull
	 */
	struct ADualSplineFollower_GetCharacterToPull_Params
	{
	public:
		class AANetworkCharacter*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DualSplineFollower.Authority_PseudoSpawn
	 */
	struct ADualSplineFollower_Authority_PseudoSpawn_Params
	{
	public:
		float                                                      TimeToTake;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N3EK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    SplineToBaseFirstSplineOn;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USplineComponent*                                    In_SecondSpline;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.SetInactiveAudio
	 */
	struct UDynamicMusicSubsystem_SetInactiveAudio_Params
	{
	public:
		class UAudioComponent*                                     Inactive;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.SetAmbientMusic
	 */
	struct UDynamicMusicSubsystem_SetAmbientMusic_Params
	{
	public:
		class USoundWave*                                          AmbientMusic;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.SetActiveAudio
	 */
	struct UDynamicMusicSubsystem_SetActiveAudio_Params
	{
	public:
		class UAudioComponent*                                     Active;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.ReturnToAmbientMusic
	 */
	struct UDynamicMusicSubsystem_ReturnToAmbientMusic_Params
	{
	public:
		float                                                      FadeTime;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewVolume;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.GetInactiveAudio
	 */
	struct UDynamicMusicSubsystem_GetInactiveAudio_Params
	{
	public:
		class UAudioComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.GetActiveAudio
	 */
	struct UDynamicMusicSubsystem_GetActiveAudio_Params
	{
	public:
		class UAudioComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.FadeOut
	 */
	struct UDynamicMusicSubsystem_FadeOut_Params
	{
	public:
		float                                                      FadeTime;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.ExecuteNextCrossfadeRequest
	 */
	struct UDynamicMusicSubsystem_ExecuteNextCrossfadeRequest_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.DynamicMusicSubsystem.CrossfadeTo
	 */
	struct UDynamicMusicSubsystem_CrossfadeTo_Params
	{
	public:
		class USoundWave*                                          NewMusic;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewVolume;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GirlbossFunctionLibrary.LoadAssetsByClassFromPath
	 */
	struct UGirlbossFunctionLibrary_LoadAssetsByClassFromPath_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GirlbossFunctionLibrary.InEditor
	 */
	struct UGirlbossFunctionLibrary_InEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GirlbossFunctionLibrary.ForceResetBoundInputsOnActor
	 */
	struct UGirlbossFunctionLibrary_ForceResetBoundInputsOnActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GrabpackInterface.OnHandStartPull
	 */
	struct UGrabpackInterface_OnHandStartPull_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GrabpackInterface.OnHandDetach
	 */
	struct UGrabpackInterface_OnHandDetach_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.GrabpackInterface.OnHandAttach
	 */
	struct UGrabpackInterface_OnHandAttach_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.TimerRemoveHand
	 */
	struct UHandMagnetComponent_TimerRemoveHand_Params
	{
	public:
		struct FHandTimer                                          HandTimer;                                               // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.RemoveHand
	 */
	struct UHandMagnetComponent_RemoveHand_Params
	{
	public:
		struct FHandTimer                                          HandTimer;                                               // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.PseudoConstruct
	 */
	struct UHandMagnetComponent_PseudoConstruct_Params
	{
	public:
		TArray<class UActorComponent*>                             In_GrabpackInterfaceImplementers;                        // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.IsBeingPulled
	 */
	struct UHandMagnetComponent_IsBeingPulled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.HasPullingHands
	 */
	struct UHandMagnetComponent_HasPullingHands_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.HasAnyAttachedHands
	 */
	struct UHandMagnetComponent_HasAnyAttachedHands_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.GetPullAlignment
	 */
	struct UHandMagnetComponent_GetPullAlignment_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.GetGhostHandTransform
	 */
	struct UHandMagnetComponent_GetGhostHandTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.GetFirstAttachedPlayer
	 */
	struct UHandMagnetComponent_GetFirstAttachedPlayer_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.GetAnimationToPlay
	 */
	struct UHandMagnetComponent_GetAnimationToPlay_Params
	{
	public:
		class UAnimSequence*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.DetachAllHands
	 */
	struct UHandMagnetComponent_DetachAllHands_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.HandMagnetComponent.CanAcceptAnotherHand
	 */
	struct UHandMagnetComponent_CanAcceptAnotherHand_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HostMigrationData.GetExpectedPlayerCount
	 */
	struct UHostMigrationData_GetExpectedPlayerCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HostMigrationData.ClearSaveData
	 */
	struct UHostMigrationData_ClearSaveData_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.TimerForRecharge
	 */
	struct UHuggyMovementComponent_TimerForRecharge_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.Server_BeginCharging
	 */
	struct UHuggyMovementComponent_Server_BeginCharging_Params
	{
	public:
		bool                                                       Is_Charging;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.NetworkSafe_BeginCharging
	 */
	struct UHuggyMovementComponent_NetworkSafe_BeginCharging_Params
	{
	public:
		bool                                                       Is_Charging;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.IsHuggyCharging
	 */
	struct UHuggyMovementComponent_IsHuggyCharging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.EndCharging
	 */
	struct UHuggyMovementComponent_EndCharging_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.HuggyMovementComponent.AfterAttackSlow
	 */
	struct UHuggyMovementComponent_AfterAttackSlow_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Owner_EndInteraction
	 */
	struct UInteractable_Owner_EndInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Owner_ContinueInteraction
	 */
	struct UInteractable_Owner_ContinueInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Owner_BeginInteraction
	 */
	struct UInteractable_Owner_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KKO8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Authority_EndInteraction
	 */
	struct UInteractable_Authority_EndInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Authority_ContinueInteraction
	 */
	struct UInteractable_Authority_ContinueInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Interactable.Authority_BeginInteraction
	 */
	struct UInteractable_Authority_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0OTT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.Test_BattlepassJsonFunctions
	 */
	struct UJSONSubsystem_Test_BattlepassJsonFunctions_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.SetBattlepassJson
	 */
	struct UJSONSubsystem_SetBattlepassJson_Params
	{
	public:
		class FString                                              BPResponse;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetWalletsResponse
	 */
	struct UJSONSubsystem_GetWalletsResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPIWalletsResponse                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetShoppyResponse
	 */
	struct UJSONSubsystem_GetShoppyResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPIShoppyResponse                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetRewardsResponse
	 */
	struct UJSONSubsystem_GetRewardsResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPIRewardsResponse                                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetPlaytimeApiRoute
	 */
	struct UJSONSubsystem_GetPlaytimeApiRoute_Params
	{
	public:
		class FString                                              Route;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetPerksResponse
	 */
	struct UJSONSubsystem_GetPerksResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPIPerksResponse                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetLevelResponse
	 */
	struct UJSONSubsystem_GetLevelResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPILevelResponse                                   ReturnValue;                                             // 0x0010(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetInventoryResponse
	 */
	struct UJSONSubsystem_GetInventoryResponse_Params
	{
	public:
		class FString                                              ResponseString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAPIInventoryResponse                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.JSONSubsystem.GetBattlepassJson
	 */
	struct UJSONSubsystem_GetBattlepassJson_Params
	{
	public:
		struct FBattlepassJsonResponse                             ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.SetPunchPressed
	 */
	struct UKangarooMovementComponent_SetPunchPressed_Params
	{
	public:
		bool                                                       In_PunchPressed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.Server_Punch
	 */
	struct UKangarooMovementComponent_Server_Punch_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpReleaseCharge
	 */
	struct UKangarooMovementComponent_Server_JumpReleaseCharge_Params
	{
	public:
		float                                                      ChargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpBeginCharge
	 */
	struct UKangarooMovementComponent_Server_JumpBeginCharge_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.PseudoConstruct
	 */
	struct UKangarooMovementComponent_PseudoConstruct_Params
	{
	public:
		class ANetworkKangaroo*                                    In_Owner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_Punch
	 */
	struct UKangarooMovementComponent_NetworkSafe_Punch_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpReleaseCharge
	 */
	struct UKangarooMovementComponent_NetworkSafe_JumpReleaseCharge_Params
	{
	public:
		float                                                      ChargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpBeginCharge
	 */
	struct UKangarooMovementComponent_NetworkSafe_JumpBeginCharge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.Multicast_Punch
	 */
	struct UKangarooMovementComponent_Multicast_Punch_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.IsLaunchVerified
	 */
	struct UKangarooMovementComponent_IsLaunchVerified_Params
	{
	public:
		float                                                      AmountToCheck;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.IsBoxyBarraging
	 */
	struct UKangarooMovementComponent_IsBoxyBarraging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.KangarooMovementComponent.DrawProjectedPath
	 */
	struct UKangarooMovementComponent_DrawProjectedPath_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.LeaverFunctionLibrary.SaveLeaverSaveGame
	 */
	struct ULeaverFunctionLibrary_SaveLeaverSaveGame_Params
	{
	public:
		class ULeaverSaveGame*                                     SaveGame;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LeaverFunctionLibrary.LoadLeaverSaveGame
	 */
	struct ULeaverFunctionLibrary_LoadLeaverSaveGame_Params
	{
	public:
		class ULeaverSaveGame*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LeaverSaveGame.Does12HourPunishmentExist
	 */
	struct ULeaverSaveGame_Does12HourPunishmentExist_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LeaverSaveGame.ComparePunishmentLevel
	 */
	struct ULeaverSaveGame_ComparePunishmentLevel_Params
	{
	public:
		struct FTimespan                                           TimeLeft;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LevelFunctions.GetLevelByID
	 */
	struct ULevelFunctions_GetLevelByID_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HTBA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLevelStruct                                        ReturnValue;                                             // 0x0008(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LevelFunctions.GetAllPlayableLevels
	 */
	struct ULevelFunctions_GetAllPlayableLevels_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.LevelFunctions.GetAllLevels
	 */
	struct ULevelFunctions_GetAllLevels_Params
	{
	public:
		TArray<struct FLevelStruct>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.WrapInt
	 */
	struct UMasterFunctionLibrary_WrapInt_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Min;                                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Max;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Out;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchLocallyControlledByPlayer
	 */
	struct UMasterFunctionLibrary_SwitchLocallyControlledByPlayer_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Yes;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchIsPlayerMonster
	 */
	struct UMasterFunctionLibrary_SwitchIsPlayerMonster_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Yes;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.StringContainsProfanity
	 */
	struct UMasterFunctionLibrary_StringContainsProfanity_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Out;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.StringArrayToNameArray
	 */
	struct UMasterFunctionLibrary_StringArrayToNameArray_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SortFloats
	 */
	struct UMasterFunctionLibrary_SortFloats_Params
	{
	public:
		TArray<float>                                              Floats;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SetUIMode
	 */
	struct UMasterFunctionLibrary_SetUIMode_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowMouse;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUIMode                                                    UIMode;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SetSelectedSabotage
	 */
	struct UMasterFunctionLibrary_SetSelectedSabotage_Params
	{
	public:
		class FName                                                Sabotage;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0008(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SetSabotageLevel
	 */
	struct UMasterFunctionLibrary_SetSabotageLevel_Params
	{
	public:
		class FName                                                Sabotage;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5PH9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0010(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSettings
	 */
	struct UMasterFunctionLibrary_SaveSettings_Params
	{
	public:
		class USettingsSaveGame*                                   Settings;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSabotages
	 */
	struct UMasterFunctionLibrary_SaveSabotages_Params
	{
	public:
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.SanitizeString
	 */
	struct UMasterFunctionLibrary_SanitizeString_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.RemoveWidgetIfValid
	 */
	struct UMasterFunctionLibrary_RemoveWidgetIfValid_Params
	{
	public:
		class UWidget*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousMonsterType
	 */
	struct UMasterFunctionLibrary_PreviousMonsterType_Params
	{
	public:
		ECharacterType                                             Current;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterType                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousCharacterType
	 */
	struct UMasterFunctionLibrary_PreviousCharacterType_Params
	{
	public:
		ECharacterType                                             Current;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterType                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.PointToResolution
	 */
	struct UMasterFunctionLibrary_PointToResolution_Params
	{
	public:
		struct FIntPoint                                           In;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.PointsToResolutions
	 */
	struct UMasterFunctionLibrary_PointsToResolutions_Params
	{
	public:
		TArray<struct FIntPoint>                                   In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NtoI
	 */
	struct UMasterFunctionLibrary_NtoI_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NextMonsterType
	 */
	struct UMasterFunctionLibrary_NextMonsterType_Params
	{
	public:
		ECharacterType                                             Current;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterType                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NextCharacterType
	 */
	struct UMasterFunctionLibrary_NextCharacterType_Params
	{
	public:
		ECharacterType                                             Current;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterType                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NearlyEqual
	 */
	struct UMasterFunctionLibrary_NearlyEqual_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Epsilon;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToStringArray
	 */
	struct UMasterFunctionLibrary_NameArrayToStringArray_Params
	{
	public:
		TArray<class FName>                                        In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToIntArray
	 */
	struct UMasterFunctionLibrary_NameArrayToIntArray_Params
	{
	public:
		TArray<class FName>                                        Names;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.MultiplyByPiOverTwo
	 */
	struct UMasterFunctionLibrary_MultiplyByPiOverTwo_Params
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSettings
	 */
	struct UMasterFunctionLibrary_LoadSettings_Params
	{
	public:
		class USettingsSaveGame*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSabotages
	 */
	struct UMasterFunctionLibrary_LoadSabotages_Params
	{
	public:
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.LoadAndApplySettings
	 */
	struct UMasterFunctionLibrary_LoadAndApplySettings_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USettingsSaveGame*                                   Settings;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.LevelUpSabotage
	 */
	struct UMasterFunctionLibrary_LevelUpSabotage_Params
	{
	public:
		class FName                                                Sabotage;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0008(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.ItoN
	 */
	struct UMasterFunctionLibrary_ItoN_Params
	{
	public:
		int32_t                                                    Name;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IsValidCharacters
	 */
	struct UMasterFunctionLibrary_IsValidCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Valid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IsTooltipNeeded
	 */
	struct UMasterFunctionLibrary_IsTooltipNeeded_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TooltipKey;                                              // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IsPlayerMonster
	 */
	struct UMasterFunctionLibrary_IsPlayerMonster_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsMonster;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IsOdd
	 */
	struct UMasterFunctionLibrary_IsOdd_Params
	{
	public:
		int32_t                                                    I;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IsLocallyControlledByPlayer
	 */
	struct UMasterFunctionLibrary_IsLocallyControlledByPlayer_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Yes;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IntArrayToNameArray
	 */
	struct UMasterFunctionLibrary_IntArrayToNameArray_Params
	{
	public:
		TArray<int32_t>                                            Ints;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.IndexToGridCoords
	 */
	struct UMasterFunctionLibrary_IndexToGridCoords_Params
	{
	public:
		int32_t                                                    In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GridWidth;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GridRow;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GridColumn;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetTransitionLevel
	 */
	struct UMasterFunctionLibrary_GetTransitionLevel_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetTargetArmLength
	 */
	struct UMasterFunctionLibrary_GetTargetArmLength_Params
	{
	public:
		float                                                      CurrentLength;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaSeconds;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRunning;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L2G7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Length;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShouldUpdate;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetSpecifiedDataTable
	 */
	struct UMasterFunctionLibrary_GetSpecifiedDataTable_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetSoundClass
	 */
	struct UMasterFunctionLibrary_GetSoundClass_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundClass*                                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotageName
	 */
	struct UMasterFunctionLibrary_GetSelectedSabotageName_Params
	{
	public:
		class FName                                                Sabotage;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotage
	 */
	struct UMasterFunctionLibrary_GetSelectedSabotage_Params
	{
	public:
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0000(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FName                                                Sabotage;                                                // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetSabotageDataFromName
	 */
	struct UMasterFunctionLibrary_GetSabotageDataFromName_Params
	{
	public:
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                SabotageName;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Selected;                                                // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E683[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Yes;                                                     // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NNXD[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSabotageDef                                        Def;                                                     // 0x0088(0x00C0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetRandomActorTransform
	 */
	struct UMasterFunctionLibrary_GetRandomActorTransform_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetPlaybackTime
	 */
	struct UMasterFunctionLibrary_GetPlaybackTime_Params
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetOctant
	 */
	struct UMasterFunctionLibrary_GetOctant_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Point;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetNearestMultiple
	 */
	struct UMasterFunctionLibrary_GetNearestMultiple_Params
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MultipleOf;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetMasterDataAsset
	 */
	struct UMasterFunctionLibrary_GetMasterDataAsset_Params
	{
	public:
		class UMasterDataAsset*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetGameVersion
	 */
	struct UMasterFunctionLibrary_GetGameVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetDefaultSoundMixModifier
	 */
	struct UMasterFunctionLibrary_GetDefaultSoundMixModifier_Params
	{
	public:
		class USoundMix*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetComponentForwardTrace
	 */
	struct UMasterFunctionLibrary_GetComponentForwardTrace_Params
	{
	public:
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetCharacterName
	 */
	struct UMasterFunctionLibrary_GetCharacterName_Params
	{
	public:
		ECharacterType                                             Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CVEL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.GetBuildDate
	 */
	struct UMasterFunctionLibrary_GetBuildDate_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.FilterAndSortByType
	 */
	struct UMasterFunctionLibrary_FilterAndSortByType_Params
	{
	public:
		TArray<class UActorComponent*>                             Elements;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Player;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.DoesMonsterExist
	 */
	struct UMasterFunctionLibrary_DoesMonsterExist_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.ClampClientLocation
	 */
	struct UMasterFunctionLibrary_ClampClientLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ServerLocation;                                          // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ClientLocation;                                          // 0x0014(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ValidatedLocation;                                       // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DoTrace;                                                 // 0x002C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LGPI[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxDistance;                                             // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.ApplySettings
	 */
	struct UMasterFunctionLibrary_ApplySettings_Params
	{
	public:
		class USettingsSaveGame*                                   Settings;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MasterFunctionLibrary.AddFloats
	 */
	struct UMasterFunctionLibrary_AddFloats_Params
	{
	public:
		TArray<float>                                              Floats;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MommyMovementComponent.Server_SetWantsToGrapple
	 */
	struct UMommyMovementComponent_Server_SetWantsToGrapple_Params
	{
	public:
		bool                                                       In_WantsToGrapple;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MommyMovementComponent.PseudoConstruct
	 */
	struct UMommyMovementComponent_PseudoConstruct_Params
	{
	public:
		class ANetworkMommy*                                       In_Owner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MommyMovementComponent.AfterAttackSlow
	 */
	struct UMommyMovementComponent_AfterAttackSlow_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.Server_EndChargeAttack
	 */
	struct AMonster_Server_EndChargeAttack_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.Monster.Server_BeginChargeAttack
	 */
	struct AMonster_Server_BeginChargeAttack_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.Monster.Multicast_PickupPlayer
	 */
	struct AMonster_Multicast_PickupPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.Multicast_DropPlayer
	 */
	struct AMonster_Multicast_DropPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.DetermineTraceResult
	 */
	struct AMonster_DetermineTraceResult_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.DamagePlayer
	 */
	struct AMonster_DamagePlayer_Params
	{
	public:
		class AANetworkCharacter*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackData                                         In_AttackData;                                           // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.ChargeAttack
	 */
	struct AMonster_ChargeAttack_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.AttackTripleTrace
	 */
	struct AMonster_AttackTripleTrace_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleHalfHeight;                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.Monster.AttackTrace
	 */
	struct AMonster_AttackTrace_Params
	{
	public:
		struct FHitResult                                          ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MonsterQueueData.TestMonsterQueueDataSelection
	 */
	struct UMonsterQueueData_TestMonsterQueueDataSelection_Params
	{
	public:
		int32_t                                                    NumberOfTests;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.MonsterQueueData.SelectMonsterFromQueueDatas
	 */
	struct UMonsterQueueData_SelectMonsterFromQueueDatas_Params
	{
	public:
		TMap<int32_t, struct FQueueData>                           MonsterQueueDatas;                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C2HP[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0054(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NavigatorIndicatorSorter.SortArray
	 */
	struct UNavigatorIndicatorSorter_SortArray_Params
	{
	public:
		TArray<class UActorComponent*>                             ElementArray;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class UActorComponent*>                             ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkHuggy.IncrementHuggyStat
	 */
	struct ANetworkHuggy_IncrementHuggyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHuggyStatistics                                           Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkHuggy.GetHuggyMovementComponent
	 */
	struct ANetworkHuggy_GetHuggyMovementComponent_Params
	{
	public:
		class UHuggyMovementComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkHuggy.AddBabyHuggy
	 */
	struct ANetworkHuggy_AddBabyHuggy_Params
	{
	public:
		class AActor*                                              BabyHuggy;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.ResetFOV
	 */
	struct ANetworkKangaroo_ResetFOV_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.ParseInputAction_HandExtend_Pressed
	 */
	struct ANetworkKangaroo_ParseInputAction_HandExtend_Pressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.IsFistRetracting
	 */
	struct ANetworkKangaroo_IsFistRetracting_Params
	{
	public:
		bool                                                       Retracting;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.IsFistExtended
	 */
	struct ANetworkKangaroo_IsFistExtended_Params
	{
	public:
		bool                                                       Extended;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.IncrementBoxyStat
	 */
	struct ANetworkKangaroo_IncrementBoxyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoxyStatistics                                            Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.GetSurvivorProximityMultiplier
	 */
	struct ANetworkKangaroo_GetSurvivorProximityMultiplier_Params
	{
	public:
		class AANetworkCharacter*                                  Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.GetFistPosition
	 */
	struct ANetworkKangaroo_GetFistPosition_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkKangaroo.GetBoxyMovementComponent
	 */
	struct ANetworkKangaroo_GetBoxyMovementComponent_Params
	{
	public:
		class UKangarooMovementComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Server_SendGrapple
	 */
	struct ANetworkMommy_Server_SendGrapple_Params
	{
	public:
		struct FVector                                             In_Direction;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Server_LaunchFromWall
	 */
	struct ANetworkMommy_Server_LaunchFromWall_Params
	{
	public:
		struct FRotator                                            LaunchDirection;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Server_CancelGrapple
	 */
	struct ANetworkMommy_Server_CancelGrapple_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Server_BeginPulling
	 */
	struct ANetworkMommy_Server_BeginPulling_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Server_AttachToWall
	 */
	struct ANetworkMommy_Server_AttachToWall_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.PseudoConstruct
	 */
	struct ANetworkMommy_PseudoConstruct_Params
	{
	public:
		class USceneComponent*                                     In_FirstPersonArmsSpring;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     In_FirstPersonArms;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCapsuleComponent*                                   In_CapsuleComponent;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.ParseInputAction_Jump
	 */
	struct ANetworkMommy_ParseInputAction_Jump_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Owning_BeginPulling
	 */
	struct ANetworkMommy_Owning_BeginPulling_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.OnRep_GrappleState
	 */
	struct ANetworkMommy_OnRep_GrappleState_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Multicast_SendGrapple
	 */
	struct ANetworkMommy_Multicast_SendGrapple_Params
	{
	public:
		struct FVector                                             In_Direction;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Multicast_CancelGrapple
	 */
	struct ANetworkMommy_Multicast_CancelGrapple_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.Multicast_AttachToWall
	 */
	struct ANetworkMommy_Multicast_AttachToWall_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.LaunchFromWall
	 */
	struct ANetworkMommy_LaunchFromWall_Params
	{
	public:
		struct FRotator                                            LaunchDirection;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.IsMommyAttachedToWall
	 */
	struct ANetworkMommy_IsMommyAttachedToWall_Params
	{
	public:
		bool                                                       AttachedToWall;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.IsGrapplePulling
	 */
	struct ANetworkMommy_IsGrapplePulling_Params
	{
	public:
		bool                                                       Pulling;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.IsGrappleActive
	 */
	struct ANetworkMommy_IsGrappleActive_Params
	{
	public:
		bool                                                       Extended;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.IncrementMommyStat
	 */
	struct ANetworkMommy_IncrementMommyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMommyStatistics                                           Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.GetMommyMovementComponent
	 */
	struct ANetworkMommy_GetMommyMovementComponent_Params
	{
	public:
		class UMommyMovementComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.GetGrappleEndpointPosition
	 */
	struct ANetworkMommy_GetGrappleEndpointPosition_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.DoGrappleExtension
	 */
	struct ANetworkMommy_DoGrappleExtension_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.CancelGrapple
	 */
	struct ANetworkMommy_CancelGrapple_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_IsGrapplePulling
	 */
	struct ANetworkMommy_BP_OnRep_IsGrapplePulling_Params
	{
	public:
		bool                                                       IsPulling;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_GrappleState
	 */
	struct ANetworkMommy_BP_OnRep_GrappleState_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.BeginPulling
	 */
	struct ANetworkMommy_BeginPulling_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkMommy.AttachToWall
	 */
	struct ANetworkMommy_AttachToWall_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkPhysicsActor.UpdateRotation
	 */
	struct ANetworkPhysicsActor_UpdateRotation_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkPhysicsActor.UpdatePosition
	 */
	struct ANetworkPhysicsActor_UpdatePosition_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkRope.MakeSimpleRope
	 */
	struct ANetworkRope_MakeSimpleRope_Params
	{
	public:
		class USceneComponent*                                     StartComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     EndComponent;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkRope.EnterRetractMode
	 */
	struct ANetworkRope_EnterRetractMode_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkToyPart.PseudoConstruct
	 */
	struct ANetworkToyPart_PseudoConstruct_Params
	{
	public:
		class UUNetworkGrabComponent*                              In_GrabComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkToyPart.IsPlayerHandAttached
	 */
	struct ANetworkToyPart_IsPlayerHandAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkToyPart.GetNetworkGrab
	 */
	struct ANetworkToyPart_GetNetworkGrab_Params
	{
	public:
		class UUNetworkGrabComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkToyPart.AttachmentStateChange
	 */
	struct ANetworkToyPart_AttachmentStateChange_Params
	{
	public:
		EAttachmentStateChange                                     StateChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkTrain.UpdateCurrentTrack
	 */
	struct ANetworkTrain_UpdateCurrentTrack_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECurrentTrack                                              TrackTransition;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkTrain.PseudoConstruct
	 */
	struct ANetworkTrain_PseudoConstruct_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.NetworkTrain.MoveTrain
	 */
	struct ANetworkTrain_MoveTrain_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TD0K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Cart;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CartIndex;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkTrain.GetDistanceOnTrack
	 */
	struct ANetworkTrain_GetDistanceOnTrack_Params
	{
	public:
		ECurrentTrack                                              TrackTransition;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QGYD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      In_Distance;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutDistance;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OVML[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    Track;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.NetworkTrain.GetDestination
	 */
	struct ANetworkTrain_GetDestination_Params
	{
	public:
		float                                                      SecondStation;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.SavePerkSaveGame
	 */
	struct UPerkFunctionLibrary_SavePerkSaveGame_Params
	{
	public:
		class UPerkSaveGame*                                       SaveGame;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.LoadPerkSaveGame
	 */
	struct UPerkFunctionLibrary_LoadPerkSaveGame_Params
	{
	public:
		class UPerkSaveGame*                                       SaveGame;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.LevelToValue
	 */
	struct UPerkFunctionLibrary_LevelToValue_Params
	{
	public:
		EPerkType                                                  PerkType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1DYI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGameSlotName
	 */
	struct UPerkFunctionLibrary_GetPerkSaveGameSlotName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGame
	 */
	struct UPerkFunctionLibrary_GetPerkSaveGame_Params
	{
	public:
		class UPerkSaveGame*                                       OutSaveGame;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkRowName
	 */
	struct UPerkFunctionLibrary_GetPerkRowName_Params
	{
	public:
		EPerkType                                                  PerkType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5AFF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Name;                                                    // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.GetHighestPerkLevelFromPlayers
	 */
	struct UPerkFunctionLibrary_GetHighestPerkLevelFromPlayers_Params
	{
	public:
		TArray<class AANetworkCharacter*>                          Players;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EPerkType                                                  PerkType;                                                // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PCPT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PerkLevel;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AANetworkCharacter*                                  CharWithPerk;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkFunctionLibrary.CharHasPerk
	 */
	struct UPerkFunctionLibrary_CharHasPerk_Params
	{
	public:
		class AANetworkCharacter*                                  Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPerkType                                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U45R[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.UnequipPerk
	 */
	struct UPerkSaveGame_UnequipPerk_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.SetPerkLevel
	 */
	struct UPerkSaveGame_SetPerkLevel_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YP61[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.LevelUpPerk
	 */
	struct UPerkSaveGame_LevelUpPerk_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.IsPerkTypeSelected
	 */
	struct UPerkSaveGame_IsPerkTypeSelected_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3627[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.GetSelectedPerkList
	 */
	struct UPerkSaveGame_GetSelectedPerkList_Params
	{
	public:
		TArray<EPerkType>                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.GetPerkLevel
	 */
	struct UPerkSaveGame_GetPerkLevel_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4758[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.EquipPerk
	 */
	struct UPerkSaveGame_EquipPerk_Params
	{
	public:
		EPerkType                                                  Perk;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8BV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PerkIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsEquipped;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PerkSaveGame.Clean
	 */
	struct UPerkSaveGame_Clean_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.PseudoConstruct
	 */
	struct UPhonyPhysicsComponent_PseudoConstruct_Params
	{
	public:
		class USceneComponent*                                     In_Target;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UHandMagnetComponent*>                        In_HandMagnetComponents;                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetSpeed
	 */
	struct UPhonyPhysicsComponent_OnRep_NetSpeed_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetProgress
	 */
	struct UPhonyPhysicsComponent_OnRep_NetProgress_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetHasPassedThreshold
	 */
	struct UPhonyPhysicsComponent_OnRep_NetHasPassedThreshold_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.HasPullingHands
	 */
	struct UPhonyPhysicsComponent_HasPullingHands_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.HasAttachedHands
	 */
	struct UPhonyPhysicsComponent_HasAttachedHands_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.GetPullAmount
	 */
	struct UPhonyPhysicsComponent_GetPullAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.DrawDebug
	 */
	struct UPhonyPhysicsComponent_DrawDebug_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsComponent.Accelerate
	 */
	struct UPhonyPhysicsComponent_Accelerate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_Acceleration;                                         // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SnapTargetToSpline
	 */
	struct UPhonyPhysicsRailComponent_SnapTargetToSpline_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetSpeed
	 */
	struct UPhonyPhysicsRailComponent_SetSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetDistance
	 */
	struct UPhonyPhysicsRailComponent_SetDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeCameraManager.OnUpdatePOV
	 */
	struct APlaytimeCameraManager_OnUpdatePOV_Params
	{
	public:
		struct FMinimalViewInfo                                    NewPOV;                                                  // 0x0000(0x05F0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeCameraManager.BP_OnBlendComplete
	 */
	struct APlaytimeCameraManager_BP_OnBlendComplete_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.ToggleWantsToBeMonster
	 */
	struct UPlaytimeGameInstance_ToggleWantsToBeMonster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.StartMigration
	 */
	struct UPlaytimeGameInstance_StartMigration_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.SetWantsToBeMonster
	 */
	struct UPlaytimeGameInstance_SetWantsToBeMonster_Params
	{
	public:
		bool                                                       bWantsToBeMonster;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.SetTransitionType
	 */
	struct UPlaytimeGameInstance_SetTransitionType_Params
	{
	public:
		ETransition                                                In_TransitionType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.RecieveMonsterChoice
	 */
	struct UPlaytimeGameInstance_RecieveMonsterChoice_Params
	{
	public:
		bool                                                       bWasSelected;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.GetWantsToBeMonster
	 */
	struct UPlaytimeGameInstance_GetWantsToBeMonster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.GetQueueData
	 */
	struct UPlaytimeGameInstance_GetQueueData_Params
	{
	public:
		struct FQueueData                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.GetNumberOfGamesWithoutMonster
	 */
	struct UPlaytimeGameInstance_GetNumberOfGamesWithoutMonster_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.GetBestIP
	 */
	struct UPlaytimeGameInstance_GetBestIP_Params
	{
	public:
		class FString                                              HostIP;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HostName;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.FlagHasVisitedSplashScreen
	 */
	struct UPlaytimeGameInstance_FlagHasVisitedSplashScreen_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameInstance.DetermineTransition
	 */
	struct UPlaytimeGameInstance_DetermineTransition_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.UpdateBestPotentialHost
	 */
	struct APlaytimeGameState_UpdateBestPotentialHost_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.StartWaitForMigratingClientsTimer
	 */
	struct APlaytimeGameState_StartWaitForMigratingClientsTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.SaveMigrationData
	 */
	struct APlaytimeGameState_SaveMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.PrepareLoadData
	 */
	struct APlaytimeGameState_PrepareLoadData_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.OnRep_ProspectiveMonsters
	 */
	struct APlaytimeGameState_OnRep_ProspectiveMonsters_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.Multicast_UpdateMigrationData
	 */
	struct APlaytimeGameState_Multicast_UpdateMigrationData_Params
	{
	public:
		class FString                                              NewIP;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HostName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LevelName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.Multicast_SendMonsterDecision
	 */
	struct APlaytimeGameState_Multicast_SendMonsterDecision_Params
	{
	public:
		int32_t                                                    PlayerID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.LoadMigrationData
	 */
	struct APlaytimeGameState_LoadMigrationData_Params
	{
	public:
		class UHostMigrationData*                                  Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.GetQueueDatasAsString
	 */
	struct APlaytimeGameState_GetQueueDatasAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.CheckForMigratingPlayers
	 */
	struct APlaytimeGameState_CheckForMigratingPlayers_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.BeginPlay
	 */
	struct APlaytimeGameState_BeginPlay_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.Authority_StartUpdateHostMigrationTimer
	 */
	struct APlaytimeGameState_Authority_StartUpdateHostMigrationTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.Authority_ReceiveQueueData
	 */
	struct APlaytimeGameState_Authority_ReceiveQueueData_Params
	{
	public:
		int32_t                                                    PlayerID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQueueData                                          Data;                                                    // 0x0004(0x0008)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeGameState.Authority_ChooseMonster
	 */
	struct APlaytimeGameState_Authority_ChooseMonster_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.StopSpeedBoost
	 */
	struct UPlaytimeMovementComponent_StopSpeedBoost_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.StartSpeedBoost
	 */
	struct UPlaytimeMovementComponent_StartSpeedBoost_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.SetRunning
	 */
	struct UPlaytimeMovementComponent_SetRunning_Params
	{
	public:
		bool                                                       In_Running;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.SetDashDirection
	 */
	struct UPlaytimeMovementComponent_SetDashDirection_Params
	{
	public:
		struct FVector                                             In_Target;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SyncStrafe
	 */
	struct UPlaytimeMovementComponent_Server_SyncStrafe_Params
	{
	public:
		float                                                      Strafe;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_Stun
	 */
	struct UPlaytimeMovementComponent_Server_Stun_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToSwing
	 */
	struct UPlaytimeMovementComponent_Server_SetWantsToSwing_Params
	{
	public:
		bool                                                       In_Swinging;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToDash
	 */
	struct UPlaytimeMovementComponent_Server_SetWantsToDash_Params
	{
	public:
		bool                                                       In_WantsToDash;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_ActivateRoll
	 */
	struct UPlaytimeMovementComponent_Server_ActivateRoll_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.OnRep_CanRoll
	 */
	struct UPlaytimeMovementComponent_OnRep_CanRoll_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.OnPerkSaveGameChanged
	 */
	struct UPlaytimeMovementComponent_OnPerkSaveGameChanged_Params
	{
	public:
		struct FPerkPackage                                        In_PerkSaveGame;                                         // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SwitchSpline
	 */
	struct UPlaytimeMovementComponent_NetworkSafe_SwitchSpline_Params
	{
	public:
		class USplineComponent*                                    SplineToUse;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MinSplineSpeed;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MaxSpline;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_SplineAcceleration;                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_Stun
	 */
	struct UPlaytimeMovementComponent_NetworkSafe_Stun_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToSpline
	 */
	struct UPlaytimeMovementComponent_NetworkSafe_SetWantsToSpline_Params
	{
	public:
		bool                                                       In_WantsToSpline;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IK2Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    SplineToUse;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MinSplineSpeed;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MaxSpline;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_SplineAcceleration;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToDash
	 */
	struct UPlaytimeMovementComponent_NetworkSafe_SetWantsToDash_Params
	{
	public:
		bool                                                       In_WantsToDash;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_ActivateRoll
	 */
	struct UPlaytimeMovementComponent_NetworkSafe_ActivateRoll_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.IsRolling
	 */
	struct UPlaytimeMovementComponent_IsRolling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.IsCustomMovementMode
	 */
	struct UPlaytimeMovementComponent_IsCustomMovementMode_Params
	{
	public:
		unsigned char                                              custom_movement_mode;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.GetSplineProgress
	 */
	struct UPlaytimeMovementComponent_GetSplineProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.GetMaxRollTime
	 */
	struct UPlaytimeMovementComponent_GetMaxRollTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SyncSpline
	 */
	struct UPlaytimeMovementComponent_Client_SyncSpline_Params
	{
	public:
		TArray<struct FVector>                                     SplinePoints;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SwitchSpline
	 */
	struct UPlaytimeMovementComponent_Client_SwitchSpline_Params
	{
	public:
		class USplineComponent*                                    SplineToUse;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MinSplineSpeed;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MaxSpline;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_SplineAcceleration;                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SetWantsToSpline
	 */
	struct UPlaytimeMovementComponent_Client_SetWantsToSpline_Params
	{
	public:
		bool                                                       In_WantsToSpline;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1AI6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    SplineToUse;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MinSplineSpeed;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_MaxSpline;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      In_SplineAcceleration;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerController.ServerNotifyLoadedWorldWorkaround
	 */
	struct APlaytimePlayerController_ServerNotifyLoadedWorldWorkaround_Params
	{
	public:
		class FName                                                WorldPackageName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerController.Server_SetQueueData
	 */
	struct APlaytimePlayerController_Server_SetQueueData_Params
	{
	public:
		int32_t                                                    RoundsSinceLastMonster;                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWantsToBeMonster;                                       // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.TickPuzzlesSolved
	 */
	struct APlaytimePlayerState_TickPuzzlesSolved_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.TickPlayersRescued
	 */
	struct APlaytimePlayerState_TickPlayersRescued_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.TickKills
	 */
	struct APlaytimePlayerState_TickKills_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.SetEarnedTicketsWithNotify
	 */
	struct APlaytimePlayerState_SetEarnedTicketsWithNotify_Params
	{
	public:
		int32_t                                                    AbsoluteValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.Server_CollectTicketRewardWithNotify
	 */
	struct APlaytimePlayerState_Server_CollectTicketRewardWithNotify_Params
	{
	public:
		class FName                                                TicketRewardRowName;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CallNotificationOnClient;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.Server_ClearEarnedTickets
	 */
	struct APlaytimePlayerState_Server_ClearEarnedTickets_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_TicketRewardableActions
	 */
	struct APlaytimePlayerState_OnRep_TicketRewardableActions_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_EarnedTickets
	 */
	struct APlaytimePlayerState_OnRep_EarnedTickets_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.Client_DisplayTicketCollectionNotification
	 */
	struct APlaytimePlayerState_Client_DisplayTicketCollectionNotification_Params
	{
	public:
		class FName                                                TicketRewardRowName;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.Client_DepositEarnedTicketsIntoStash
	 */
	struct APlaytimePlayerState_Client_DepositEarnedTicketsIntoStash_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.BP_OnRep_EarnedTickets
	 */
	struct APlaytimePlayerState_BP_OnRep_EarnedTickets_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.BP_DisplayTicketCollectionNotification
	 */
	struct APlaytimePlayerState_BP_DisplayTicketCollectionNotification_Params
	{
	public:
		class FName                                                TicketRewardRowName;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PlaytimePlayerState.AddToDamageDone
	 */
	struct APlaytimePlayerState_AddToDamageDone_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PromptGenerator.GetPrompt
	 */
	struct UPromptGenerator_GetPrompt_Params
	{
	public:
		class FText                                                PromptPrefix;                                            // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                PromptSuffix;                                            // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       CanPrompt;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineProgress
	 */
	struct UPuzzleMazeComponent_TimelineProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineEnded
	 */
	struct UPuzzleMazeComponent_TimelineEnded_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.StartMaze
	 */
	struct UPuzzleMazeComponent_StartMaze_Params
	{
	public:
		float                                                      InitialSpeed;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.Rotate
	 */
	struct UPuzzleMazeComponent_Rotate_Params
	{
	public:
		bool                                                       Clockwise;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_Orientation
	 */
	struct UPuzzleMazeComponent_OnRep_Orientation_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_MazeChoice
	 */
	struct UPuzzleMazeComponent_OnRep_MazeChoice_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_IsComplete
	 */
	struct UPuzzleMazeComponent_OnRep_IsComplete_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.Multicast_ResetMaze
	 */
	struct UPuzzleMazeComponent_Multicast_ResetMaze_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.MoveBallPhysics
	 */
	struct UPuzzleMazeComponent_MoveBallPhysics_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.IsInProgress
	 */
	struct UPuzzleMazeComponent_IsInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetSplinePointAt
	 */
	struct UPuzzleMazeComponent_GetSplinePointAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSplinePoint                                        ReturnValue;                                             // 0x0004(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetScaledBallSpeed
	 */
	struct UPuzzleMazeComponent_GetScaledBallSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetMeshDataFor
	 */
	struct UPuzzleMazeComponent_GetMeshDataFor_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMazeComponentType                                         Type;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y3MH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Ring;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rotation;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Flipped;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShouldMakeCurve;                                         // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SONI[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurveRotation;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetLocationOfIndex
	 */
	struct UPuzzleMazeComponent_GetLocationOfIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetDesiredPosition
	 */
	struct UPuzzleMazeComponent_GetDesiredPosition_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.GetBallPosition
	 */
	struct UPuzzleMazeComponent_GetBallPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.FindBallTarget
	 */
	struct UPuzzleMazeComponent_FindBallTarget_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.BP_Rotate_Sound_Trigger
	 */
	struct UPuzzleMazeComponent_BP_Rotate_Sound_Trigger_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.PuzzleMazeComponent.Authority_ResetMaze
	 */
	struct UPuzzleMazeComponent_Authority_ResetMaze_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.Server_DoSabotage
	 */
	struct USabotageComponent_Server_DoSabotage_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.Sabotage
	 */
	struct USabotageComponent_Sabotage_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.Multicast_SabotageFX
	 */
	struct USabotageComponent_Multicast_SabotageFX_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.Multicast_DoSabotage
	 */
	struct USabotageComponent_Multicast_DoSabotage_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.EndCooldown
	 */
	struct USabotageComponent_EndCooldown_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.DoSabotage
	 */
	struct USabotageComponent_DoSabotage_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SabotageComponent.BP_SabotageFX
	 */
	struct USabotageComponent_BP_SabotageFX_Params
	{
	public:
		class FName                                                SabotageName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetVSyncEnabled
	 */
	struct USettingsFunctionLibrary_SetVSyncEnabled_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetViewDistanceQuality
	 */
	struct USettingsFunctionLibrary_SetViewDistanceQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetTextureQuality
	 */
	struct USettingsFunctionLibrary_SetTextureQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShadowQuality
	 */
	struct USettingsFunctionLibrary_SetShadowQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShaderQuality
	 */
	struct USettingsFunctionLibrary_SetShaderQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolutionScale
	 */
	struct USettingsFunctionLibrary_SetResolutionScale_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolution
	 */
	struct USettingsFunctionLibrary_SetResolution_Params
	{
	public:
		struct FIntPoint                                           In_Resolution;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetPostProcessQuality
	 */
	struct USettingsFunctionLibrary_SetPostProcessQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFullscreenMode
	 */
	struct USettingsFunctionLibrary_SetFullscreenMode_Params
	{
	public:
		EWindowMode                                                InFullscreenMode;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFrameRateLimit
	 */
	struct USettingsFunctionLibrary_SetFrameRateLimit_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SetAntiAliasingQuality
	 */
	struct USettingsFunctionLibrary_SetAntiAliasingQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.SaveAndApplySettings
	 */
	struct USettingsFunctionLibrary_SaveAndApplySettings_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.RevertToDefaults
	 */
	struct USettingsFunctionLibrary_RevertToDefaults_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.PreloadResolutionSettings
	 */
	struct USettingsFunctionLibrary_PreloadResolutionSettings_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.GetRecommendedResolutions
	 */
	struct USettingsFunctionLibrary_GetRecommendedResolutions_Params
	{
	public:
		TArray<struct FIntPoint>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.GetPrimaryGPUBrand
	 */
	struct USettingsFunctionLibrary_GetPrimaryGPUBrand_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsFunctionLibrary.AreSettingsDirty
	 */
	struct USettingsFunctionLibrary_AreSettingsDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetSFXVolume
	 */
	struct USettingsSaveGame_SetSFXVolume_Params
	{
	public:
		int32_t                                                    In_SFXVolume;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_SFXVolume;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetMusicVolume
	 */
	struct USettingsSaveGame_SetMusicVolume_Params
	{
	public:
		int32_t                                                    In_MusicVolume;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_MusicVolume;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetMainVolume
	 */
	struct USettingsSaveGame_SetMainVolume_Params
	{
	public:
		int32_t                                                    In_MainVolume;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_MainVolume;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetGrabpackVolume
	 */
	struct USettingsSaveGame_SetGrabpackVolume_Params
	{
	public:
		int32_t                                                    In_GrabpackVolume;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_GrabpackVolume;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindStrength
	 */
	struct USettingsSaveGame_SetColorblindStrength_Params
	{
	public:
		float                                                      In_Strength;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_Strength;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindMode
	 */
	struct USettingsSaveGame_SetColorblindMode_Params
	{
	public:
		int32_t                                                    In_Mode;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Out_Mode;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.ApplyCustomScalabilitySettings
	 */
	struct USettingsSaveGame_ApplyCustomScalabilitySettings_Params
	{
	public:
		class UGameUserSettings*                                   Settings;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SettingsSaveGame.ApplyColorblind
	 */
	struct USettingsSaveGame_ApplyColorblind_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.OpenDoor
	 */
	struct ASlidingDoor_OpenDoor_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.GetProgress
	 */
	struct ASlidingDoor_GetProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.CloseDoor
	 */
	struct ASlidingDoor_CloseDoor_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.ChangeState
	 */
	struct ASlidingDoor_ChangeState_Params
	{
	public:
		EDoorState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.BP_UpdateVisuals
	 */
	struct ASlidingDoor_BP_UpdateVisuals_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.SlidingDoor.BP_ChangedState
	 */
	struct ASlidingDoor_BP_ChangedState_Params
	{
	public:
		EDoorState                                                 PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDoorState                                                 NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SoundPack.ResolveSoundPackReference
	 */
	struct USoundPack_ResolveSoundPackReference_Params
	{
	public:
		unsigned char                                              UnknownData_IHFC[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SoundPackSaveGame.SetSelectedPack
	 */
	struct USoundPackSaveGame_SetSelectedPack_Params
	{
	public:
		ESoundPackType                                             SoundPackType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZVUN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SoundPackSaveGame.SaveSounds
	 */
	struct USoundPackSaveGame_SaveSounds_Params
	{
	public:
		class USoundPackSaveGame*                                  In_SaveGame;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SoundPackSaveGame.LoadSounds
	 */
	struct USoundPackSaveGame_LoadSounds_Params
	{
	public:
		class USoundPackSaveGame*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.SoundPackSaveGame.GetSelectedSoundPackData
	 */
	struct USoundPackSaveGame_GetSelectedSoundPackData_Params
	{
	public:
		ESoundPackType                                             SoundPackType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y48U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSoundPackEntry                                     ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.UpdateCalculations
	 */
	struct UStatsCoreFunctionLibrary_UpdateCalculations_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementRandomStat
	 */
	struct UStatsCoreFunctionLibrary_IncrementRandomStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERandomStatistics                                          Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementPlayerStat
	 */
	struct UStatsCoreFunctionLibrary_IncrementPlayerStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerStatistics                                          Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementMommyStat
	 */
	struct UStatsCoreFunctionLibrary_IncrementMommyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMommyStatistics                                           Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementHuggyStat
	 */
	struct UStatsCoreFunctionLibrary_IncrementHuggyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHuggyStatistics                                           Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementBoxyStat
	 */
	struct UStatsCoreFunctionLibrary_IncrementBoxyStat_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoxyStatistics                                            Stat;                                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatistics
	 */
	struct UStatsCoreFunctionLibrary_GetStatistics_Params
	{
	public:
		EStatisticCategory                                         Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CHAT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatisticNames
	 */
	struct UStatsCoreFunctionLibrary_GetStatisticNames_Params
	{
	public:
		EStatisticCategory                                         Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TFLS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      Names;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStat
	 */
	struct UStatsCoreFunctionLibrary_GetStat_Params
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatisticName;                                           // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStatF
	 */
	struct UStatsCoreFunctionLibrary_GetRandomStatF_Params
	{
	public:
		ERandomStatistics                                          Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2XQU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStat
	 */
	struct UStatsCoreFunctionLibrary_GetRandomStat_Params
	{
	public:
		ERandomStatistics                                          Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_71HS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStatF
	 */
	struct UStatsCoreFunctionLibrary_GetPlayerStatF_Params
	{
	public:
		EPlayerStatistics                                          Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OHBR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStat
	 */
	struct UStatsCoreFunctionLibrary_GetPlayerStat_Params
	{
	public:
		EPlayerStatistics                                          Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1VGP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStatF
	 */
	struct UStatsCoreFunctionLibrary_GetMonsterStatF_Params
	{
	public:
		EMonsterStatistics                                         Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D14S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStat
	 */
	struct UStatsCoreFunctionLibrary_GetMonsterStat_Params
	{
	public:
		EMonsterStatistics                                         Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K56Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStatF
	 */
	struct UStatsCoreFunctionLibrary_GetMommyStatF_Params
	{
	public:
		EMommyStatistics                                           Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B9LK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStat
	 */
	struct UStatsCoreFunctionLibrary_GetMommyStat_Params
	{
	public:
		EMommyStatistics                                           Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9XIX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStatF
	 */
	struct UStatsCoreFunctionLibrary_GetHuggyStatF_Params
	{
	public:
		EHuggyStatistics                                           Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XHZO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStat
	 */
	struct UStatsCoreFunctionLibrary_GetHuggyStat_Params
	{
	public:
		EHuggyStatistics                                           Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GEXY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStatF
	 */
	struct UStatsCoreFunctionLibrary_GetGeneralStatF_Params
	{
	public:
		EGeneralStatistics                                         Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G5JO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStat
	 */
	struct UStatsCoreFunctionLibrary_GetGeneralStat_Params
	{
	public:
		EGeneralStatistics                                         Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BWTY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetCategories
	 */
	struct UStatsCoreFunctionLibrary_GetCategories_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EStatisticCategory>                                 Categories;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStatF
	 */
	struct UStatsCoreFunctionLibrary_GetBoxyStatF_Params
	{
	public:
		EBoxyStatistics                                            Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1AK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStat
	 */
	struct UStatsCoreFunctionLibrary_GetBoxyStat_Params
	{
	public:
		EBoxyStatistics                                            Stat;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T6BP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketFunctionLibrary.TryPurchaseItemWithTickets
	 */
	struct UTicketFunctionLibrary_TryPurchaseItemWithTickets_Params
	{
	public:
		int32_t                                                    PriceOfItem;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketFunctionLibrary.SaveTicketSaveGame
	 */
	struct UTicketFunctionLibrary_SaveTicketSaveGame_Params
	{
	public:
		class UTicketSaveGame*                                     TicketSaveGame;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketFunctionLibrary.LoadTicketSaveGame
	 */
	struct UTicketFunctionLibrary_LoadTicketSaveGame_Params
	{
	public:
		class UTicketSaveGame*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketFunctionLibrary.GetTicketSaveGameSlotName
	 */
	struct UTicketFunctionLibrary_GetTicketSaveGameSlotName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketFunctionLibrary.CalculateTicketRewardFromEntries
	 */
	struct UTicketFunctionLibrary_CalculateTicketRewardFromEntries_Params
	{
	public:
		class UDataTable*                                          TicketRewardsDataTable;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTicketRewardableAction                             TicketRewardableAction;                                  // 0x0008(0x000C)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PH62[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTicketReward                                       Out_Reward;                                              // 0x0018(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketSaveGame.SetTicketCountClamped
	 */
	struct UTicketSaveGame_SetTicketCountClamped_Params
	{
	public:
		int32_t                                                    AbsoluteValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketSaveGame.RemoveFromTicketCount
	 */
	struct UTicketSaveGame_RemoveFromTicketCount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketSaveGame.GetTicketCount
	 */
	struct UTicketSaveGame_GetTicketCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TicketSaveGame.AddToTicketCount
	 */
	struct UTicketSaveGame_AddToTicketCount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TooltipComponent.StartUpdateTimer
	 */
	struct UTooltipComponent_StartUpdateTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.TooltipComponent.ShowTooltip
	 */
	struct UTooltipComponent_ShowTooltip_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TooltipComponent.RetryTooltip
	 */
	struct UTooltipComponent_RetryTooltip_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.TooltipComponent.ClearUpdateTimer
	 */
	struct UTooltipComponent_ClearUpdateTimer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.TrainStation.PseudoConstruct
	 */
	struct ATrainStation_PseudoConstruct_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.TrainStation.GetStopLocation
	 */
	struct ATrainStation_GetStopLocation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.TrainStation.GetFullCartCount
	 */
	struct ATrainStation_GetFullCartCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryExtendHand
	 */
	struct UUFistRigPackageComponent_Server_TryExtendHand_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryDetachAndRetractHand
	 */
	struct UUFistRigPackageComponent_Server_TryDetachAndRetractHand_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Server_StartRetractBackwards
	 */
	struct UUFistRigPackageComponent_Server_StartRetractBackwards_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Server_BroadcastFistStateChange
	 */
	struct UUFistRigPackageComponent_Server_BroadcastFistStateChange_Params
	{
	public:
		EFistState                                                 State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryExtendHand
	 */
	struct UUFistRigPackageComponent_Multicast_TryExtendHand_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryDetachAndRetractHand
	 */
	struct UUFistRigPackageComponent_Multicast_TryDetachAndRetractHand_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_StartRetractBackwards
	 */
	struct UUFistRigPackageComponent_Multicast_StartRetractBackwards_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_ExtensionIsComplete
	 */
	struct UUFistRigPackageComponent_Multicast_ExtensionIsComplete_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_BroadcastFistStateChange
	 */
	struct UUFistRigPackageComponent_Multicast_BroadcastFistStateChange_Params
	{
	public:
		EFistState                                                 State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.SetRopeComponent
	 */
	struct UUHandRigPackageComponent_SetRopeComponent_Params
	{
	public:
		class USceneComponent*                                     TP_Rope;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryExtendHand
	 */
	struct UUHandRigPackageComponent_Server_TryExtendHand_Params
	{
	public:
		struct FVector_NetQuantize                                 FromLocation;                                            // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ToLocation;                                              // 0x000C(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryDetachAndRetractHand
	 */
	struct UUHandRigPackageComponent_Server_TryDetachAndRetractHand_Params
	{
	public:
		ENetRole                                                   CallerLocalRole;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Server_StartRetractBackwards
	 */
	struct UUHandRigPackageComponent_Server_StartRetractBackwards_Params
	{
	public:
		bool                                                       NeedsGrabbedPrimitiveToRetract;                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SetHasBeenCancelled;                                     // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CanTriggerStartedPulling;                                // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Server_SetOwningClientDesiredHandState
	 */
	struct UUHandRigPackageComponent_Server_SetOwningClientDesiredHandState_Params
	{
	public:
		EHandStateChange                                           State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Server_BroadcastHandStateChange
	 */
	struct UUHandRigPackageComponent_Server_BroadcastHandStateChange_Params
	{
	public:
		EHandStateChange                                           State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryExtendHand
	 */
	struct UUHandRigPackageComponent_Multicast_TryExtendHand_Params
	{
	public:
		struct FVector_NetQuantize                                 FromLocation;                                            // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ToLocation;                                              // 0x000C(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryDetachAndRetractHand
	 */
	struct UUHandRigPackageComponent_Multicast_TryDetachAndRetractHand_Params
	{
	public:
		ENetRole                                                   CallerLocalRole;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_StartRetractBackwards
	 */
	struct UUHandRigPackageComponent_Multicast_StartRetractBackwards_Params
	{
	public:
		bool                                                       NeedsGrabbedPrimitiveToRetract;                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SetHasBeenCancelled;                                     // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CanTriggerStartedPulling;                                // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_ExtensionIsComplete
	 */
	struct UUHandRigPackageComponent_Multicast_ExtensionIsComplete_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.GetRopeStart
	 */
	struct UUHandRigPackageComponent_GetRopeStart_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.UHandRigPackageComponent.CheckWire
	 */
	struct UUHandRigPackageComponent_CheckWire_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.UpdateOldestPlayer
	 */
	struct AWhackAWuggySpawnPoint_UpdateOldestPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoSpawnWuggy
	 */
	struct AWhackAWuggySpawnPoint_PseudoSpawnWuggy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoDestroyWuggy
	 */
	struct AWhackAWuggySpawnPoint_PseudoDestroyWuggy_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoConstruct
	 */
	struct AWhackAWuggySpawnPoint_PseudoConstruct_Params
	{
	public:
		class UHandMagnetComponent*                                In_WuggyHandMagnet;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              In_Wuggy;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PrePseudoDestroyWuggy
	 */
	struct AWhackAWuggySpawnPoint_PrePseudoDestroyWuggy_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.OnRep_WuggyIsSpawned
	 */
	struct AWhackAWuggySpawnPoint_OnRep_WuggyIsSpawned_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_WuggySpawned
	 */
	struct AWhackAWuggySpawnPoint_BP_WuggySpawned_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_Server_WuggyKillPlayer
	 */
	struct AWhackAWuggySpawnPoint_BP_Server_WuggyKillPlayer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_OnRep_WuggyIsSpawned
	 */
	struct AWhackAWuggySpawnPoint_BP_OnRep_WuggyIsSpawned_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.ReturnOldestPlayer
	 */
	struct AWuggyHole_ReturnOldestPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.RemoveAndReturnOldestPlayer
	 */
	struct AWuggyHole_RemoveAndReturnOldestPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.OnRep_OldestPlayer
	 */
	struct AWuggyHole_OnRep_OldestPlayer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.Multicast_EndMiniGame
	 */
	struct AWuggyHole_Multicast_EndMiniGame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.EndMiniGame
	 */
	struct AWuggyHole_EndMiniGame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.CleanPlayingCharacters
	 */
	struct AWuggyHole_CleanPlayingCharacters_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.BP_OnRep_OldestPlayer
	 */
	struct AWuggyHole_BP_OnRep_OldestPlayer_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.BP_AuthorityEndMinigame
	 */
	struct AWuggyHole_BP_AuthorityEndMinigame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.BP_AuthorityBeginMinigame
	 */
	struct AWuggyHole_BP_AuthorityBeginMinigame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.Authority_SpawnWuggy
	 */
	struct AWuggyHole_Authority_SpawnWuggy_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.Authority_EndMiniGame
	 */
	struct AWuggyHole_Authority_EndMiniGame_Params
	{	};

	/**
	 * Function Playtime_Multiplayer.WuggyHole.AddNewPlayer
	 */
	struct AWuggyHole_AddNewPlayer_Params
	{
	public:
		class AANetworkCharacter*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AddAtFront;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
