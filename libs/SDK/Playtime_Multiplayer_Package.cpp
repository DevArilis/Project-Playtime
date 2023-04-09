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
	 * 		Name   -> PredefinedFunction ACosmeticMeshContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACosmeticMeshContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.CosmeticMeshContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionStopped__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AActorConnection::OnConnectionStopped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionStopped__DelegateSignature");
		
		AActorConnection_OnConnectionStopped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionBroken__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActorConnection*                            Connection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorConnection::OnConnectionBroken__DelegateSignature(class AActorConnection* Connection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Playtime_Multiplayer.ActorConnection.OnConnectionBroken__DelegateSignature");
		
		AActorConnection_OnConnectionBroken__DelegateSignature_Params params {};
		params.Connection = Connection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ActorConnection.IsComponentLastInConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AActorConnection::IsComponentLastInConnection(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ActorConnection.IsComponentLastInConnection");
		
		AActorConnection_IsComponentLastInConnection_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ActorConnection.IsComponentInConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AActorConnection::IsComponentInConnection(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ActorConnection.IsComponentInConnection");
		
		AActorConnection_IsComponentInConnection_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ActorConnection.HandleComponentWantsToDisconnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorConnection::HandleComponentWantsToDisconnect(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ActorConnection.HandleComponentWantsToDisconnect");
		
		AActorConnection_HandleComponentWantsToDisconnect_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ActorConnection.AddComponentToConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             NewComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorConnection::AddComponentToConnection(class USceneComponent* NewComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ActorConnection.AddComponentToConnection");
		
		AActorConnection_AddComponentToConnection_Params params {};
		params.NewComponent = NewComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActorConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ActorConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAFirstCPPClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAFirstCPPClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.AFirstCPPClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeCharacter.ShowTooltipIfAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTooltipComponent*                           Tooltip                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeCharacter::ShowTooltipIfAllowed(class AActor* Actor, class UTooltipComponent* Tooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeCharacter.ShowTooltipIfAllowed");
		
		APlaytimeCharacter_ShowTooltipIfAllowed_Params params {};
		params.Actor = Actor;
		params.Tooltip = Tooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeCharacter.Server_KnockBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     KnockBackOrigin                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Horizontal                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Vertical                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeCharacter::Server_KnockBack(const struct FVector& KnockBackOrigin, float Horizontal, float Vertical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeCharacter.Server_KnockBack");
		
		APlaytimeCharacter_Server_KnockBack_Params params {};
		params.KnockBackOrigin = KnockBackOrigin;
		params.Horizontal = Horizontal;
		params.Vertical = Vertical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeCharacter.OnTargetPerceptionUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void APlaytimeCharacter::OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeCharacter.OnTargetPerceptionUpdated");
		
		APlaytimeCharacter_OnTargetPerceptionUpdated_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimeCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimeCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.TurnOnJokeTimer
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::TurnOnJokeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.TurnOnJokeTimer");
		
		AANetworkCharacter_TurnOnJokeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.TurnOffJokeTimer
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::TurnOffJokeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.TurnOffJokeTimer");
		
		AANetworkCharacter_TurnOffJokeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.TakeAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::TakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.TakeAnyDamage");
		
		AANetworkCharacter_TakeAnyDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.ShouldLeaveFootprint
	 * 		Flags  -> ()
	 */
	bool AANetworkCharacter::ShouldLeaveFootprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.ShouldLeaveFootprint");
		
		AANetworkCharacter_ShouldLeaveFootprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.SetPlayerNeedsRevivedWithNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::SetPlayerNeedsRevivedWithNotify(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.SetPlayerNeedsRevivedWithNotify");
		
		AANetworkCharacter_SetPlayerNeedsRevivedWithNotify_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.SetLocalPerksThenReplicate
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::SetLocalPerksThenReplicate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.SetLocalPerksThenReplicate");
		
		AANetworkCharacter_SetLocalPerksThenReplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.SetInteractedInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::SetInteractedInterface(class UObject* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.SetInteractedInterface");
		
		AANetworkCharacter_SetInteractedInterface_Params params {};
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.SetHealthWithNotifyClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In_Health                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::SetHealthWithNotifyClamped(float In_Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.SetHealthWithNotifyClamped");
		
		AANetworkCharacter_SetHealthWithNotifyClamped_Params params {};
		params.In_Health = In_Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.ServerOnly_DropToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpawnDrop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CustomLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::ServerOnly_DropToyPart(bool SpawnDrop, const struct FVector& CustomLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.ServerOnly_DropToyPart");
		
		AANetworkCharacter_ServerOnly_DropToyPart_Params params {};
		params.SpawnDrop = SpawnDrop;
		params.CustomLocation = CustomLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.Server_SetSharedLookPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::Server_SetSharedLookPitch(float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.Server_SetSharedLookPitch");
		
		AANetworkCharacter_Server_SetSharedLookPitch_Params params {};
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.Server_SetPerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkPackage                                In_PerkSaveGame                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::Server_SetPerks(const struct FPerkPackage& In_PerkSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.Server_SetPerks");
		
		AANetworkCharacter_Server_SetPerks_Params params {};
		params.In_PerkSaveGame = In_PerkSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.Server_DropToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::Server_DropToyPart(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.Server_DropToyPart");
		
		AANetworkCharacter_Server_DropToyPart_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.PseudoConstruct
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::PseudoConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.PseudoConstruct");
		
		AANetworkCharacter_PseudoConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PlayerNeedsRevived
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_PlayerNeedsRevived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PlayerNeedsRevived");
		
		AANetworkCharacter_OnRep_PlayerNeedsRevived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PerkSaveGame
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_PerkSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_PerkSaveGame");
		
		AANetworkCharacter_OnRep_PerkSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartLimb
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_HeldToyPartLimb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartLimb");
		
		AANetworkCharacter_OnRep_HeldToyPartLimb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartIndex
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_HeldToyPartIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_HeldToyPartIndex");
		
		AANetworkCharacter_OnRep_HeldToyPartIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_Health
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_Health()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_Health");
		
		AANetworkCharacter_OnRep_Health_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.OnRep_GrabpackBroken
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::OnRep_GrabpackBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.OnRep_GrabpackBroken");
		
		AANetworkCharacter_OnRep_GrabpackBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.ObtainInteractedInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* AANetworkCharacter::ObtainInteractedInterface(bool* OutIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.ObtainInteractedInterface");
		
		AANetworkCharacter_ObtainInteractedInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.JokeTimer
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::JokeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.JokeTimer");
		
		AANetworkCharacter_JokeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Released
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::InputAction_RightHandExtend_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Released");
		
		AANetworkCharacter_InputAction_RightHandExtend_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Pressed
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::InputAction_RightHandExtend_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.InputAction_RightHandExtend_Pressed");
		
		AANetworkCharacter_InputAction_RightHandExtend_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Released
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::InputAction_LeftHandExtend_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Released");
		
		AANetworkCharacter_InputAction_LeftHandExtend_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Pressed
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::InputAction_LeftHandExtend_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.InputAction_LeftHandExtend_Pressed");
		
		AANetworkCharacter_InputAction_LeftHandExtend_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.IncrementPlayerStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPlayerStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::IncrementPlayerStat(float Amount, EPlayerStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.IncrementPlayerStat");
		
		AANetworkCharacter_IncrementPlayerStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.HandStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUHandRigPackageComponent*                   Pkg                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHandStateChange                                   HandStateChange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::HandStateChange(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.HandStateChange");
		
		AANetworkCharacter_HandStateChange_Params params {};
		params.Pkg = Pkg;
		params.HandStateChange = HandStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.GetPlaytimeMovementComponent
	 * 		Flags  -> ()
	 */
	class UPlaytimeMovementComponent* AANetworkCharacter::GetPlaytimeMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.GetPlaytimeMovementComponent");
		
		AANetworkCharacter_GetPlaytimeMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.Client_PlayDamageFX
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::Client_PlayDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.Client_PlayDamageFX");
		
		AANetworkCharacter_Client_PlayDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_TakeAnyDamageWhileAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKillingHit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::BP_TakeAnyDamageWhileAlive(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bKillingHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_TakeAnyDamageWhileAlive");
		
		AANetworkCharacter_BP_TakeAnyDamageWhileAlive_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.bKillingHit = bKillingHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_SpawnDroppedToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ToyPartIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CustomLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::BP_SpawnDroppedToyPart(int32_t ToyPartIndex, const struct FVector& CustomLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_SpawnDroppedToyPart");
		
		AANetworkCharacter_BP_SpawnDroppedToyPart_Params params {};
		params.ToyPartIndex = ToyPartIndex;
		params.CustomLocation = CustomLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_PlayDamageFX
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_PlayDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_PlayDamageFX");
		
		AANetworkCharacter_BP_PlayDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_SavedPerksChanged
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_OnRep_SavedPerksChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_SavedPerksChanged");
		
		AANetworkCharacter_BP_OnRep_SavedPerksChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PlayerNeedsRevived
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_OnRep_PlayerNeedsRevived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PlayerNeedsRevived");
		
		AANetworkCharacter_BP_OnRep_PlayerNeedsRevived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PerkSaveGame
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_OnRep_PerkSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_PerkSaveGame");
		
		AANetworkCharacter_BP_OnRep_PerkSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_HeldToyPartIndex
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_OnRep_HeldToyPartIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_HeldToyPartIndex");
		
		AANetworkCharacter_BP_OnRep_HeldToyPartIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_Health
	 * 		Flags  -> ()
	 */
	void AANetworkCharacter::BP_OnRep_Health()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_OnRep_Health");
		
		AANetworkCharacter_BP_OnRep_Health_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_GetThirdPersonMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AANetworkCharacter::BP_GetThirdPersonMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_GetThirdPersonMesh");
		
		AANetworkCharacter_BP_GetThirdPersonMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_GetHeldToyPart
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AANetworkCharacter::BP_GetHeldToyPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_GetHeldToyPart");
		
		AANetworkCharacter_BP_GetHeldToyPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.BP_GetCameraComponent
	 * 		Flags  -> ()
	 */
	class UCameraComponent* AANetworkCharacter::BP_GetCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.BP_GetCameraComponent");
		
		AANetworkCharacter_BP_GetCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkCharacter.Authority_SetGrabpackBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_Broken                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkCharacter::Authority_SetGrabpackBroken(bool In_Broken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkCharacter.Authority_SetGrabpackBroken");
		
		AANetworkCharacter_Authority_SetGrabpackBroken_Params params {};
		params.In_Broken = In_Broken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AANetworkCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AANetworkCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ANetworkCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkDashHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkDashHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkDashHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkFist.IsRetractingBackward
	 * 		Flags  -> ()
	 */
	bool AANetworkFist::IsRetractingBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkFist.IsRetractingBackward");
		
		AANetworkFist_IsRetractingBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkFist.GetOwningCharacter
	 * 		Flags  -> ()
	 */
	class AActor* AANetworkFist::GetOwningCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkFist.GetOwningCharacter");
		
		AANetworkFist_GetOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkFist.DetachAndRetract
	 * 		Flags  -> ()
	 */
	void AANetworkFist::DetachAndRetract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkFist.DetachAndRetract");
		
		AANetworkFist_DetachAndRetract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AANetworkFist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AANetworkFist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ANetworkFist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.Multicast_GrabOntoPrimitive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUNetworkGrabComponent*                      In_GrabComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHandMagnetComponent*                        In_MagnetComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AANetworkHand::Multicast_GrabOntoPrimitive(class UPrimitiveComponent* Primitive, class UUNetworkGrabComponent* In_GrabComponent, class UHandMagnetComponent* In_MagnetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.Multicast_GrabOntoPrimitive");
		
		AANetworkHand_Multicast_GrabOntoPrimitive_Params params {};
		params.Primitive = Primitive;
		params.In_GrabComponent = In_GrabComponent;
		params.In_MagnetComponent = In_MagnetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.GetOwningCharacter
	 * 		Flags  -> ()
	 */
	class AANetworkCharacter* AANetworkHand::GetOwningCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.GetOwningCharacter");
		
		AANetworkHand_GetOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.GetAnimInstance
	 * 		Flags  -> ()
	 */
	class UAnimInstance* AANetworkHand::GetAnimInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.GetAnimInstance");
		
		AANetworkHand_GetAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.DetermineVisuals
	 * 		Flags  -> ()
	 */
	void AANetworkHand::DetermineVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.DetermineVisuals");
		
		AANetworkHand_DetermineVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.DetachAndRetract
	 * 		Flags  -> ()
	 */
	void AANetworkHand::DetachAndRetract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.DetachAndRetract");
		
		AANetworkHand_DetachAndRetract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ANetworkHand.CheckWire
	 * 		Flags  -> ()
	 */
	void AANetworkHand::CheckWire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ANetworkHand.CheckWire");
		
		AANetworkHand_CheckWire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AANetworkHand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AANetworkHand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ANetworkHand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AANetworkSwingHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AANetworkSwingHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ANetworkSwingHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsInterface.EstablishConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ConnectedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConnectionsInterface::EstablishConnection(class USceneComponent* ConnectedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsInterface.EstablishConnection");
		
		UConnectionsInterface_EstablishConnection_Params params {};
		params.ConnectedComponent = ConnectedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsInterface.BreakConnection
	 * 		Flags  -> ()
	 */
	void UConnectionsInterface::BreakConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsInterface.BreakConnection");
		
		UConnectionsInterface_BreakConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConnectionsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConnectionsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ConnectionsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsManagerComponent.StopCurrentConnection
	 * 		Flags  -> ()
	 */
	void UConnectionsManagerComponent::StopCurrentConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsManagerComponent.StopCurrentConnection");
		
		UConnectionsManagerComponent_StopCurrentConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Playtime_Multiplayer.ConnectionsManagerComponent.OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EManagerConnectionState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConnectionsManagerComponent::OnStateChanged__DelegateSignature(EManagerConnectionState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Playtime_Multiplayer.ConnectionsManagerComponent.OnStateChanged__DelegateSignature");
		
		UConnectionsManagerComponent_OnStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsManagerComponent.HandleConnectionBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActorConnection*                            Connection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConnectionsManagerComponent::HandleConnectionBroken(class AActorConnection* Connection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsManagerComponent.HandleConnectionBroken");
		
		UConnectionsManagerComponent_HandleConnectionBroken_Params params {};
		params.Connection = Connection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsManagerComponent.GetState
	 * 		Flags  -> ()
	 */
	EManagerConnectionState UConnectionsManagerComponent::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsManagerComponent.GetState");
		
		UConnectionsManagerComponent_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.ConnectionsManagerComponent.AddToConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             NewComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConnectionsManagerComponent::AddToConnection(class USceneComponent* NewComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.ConnectionsManagerComponent.AddToConnection");
		
		UConnectionsManagerComponent_AddToConnection_Params params {};
		params.NewComponent = NewComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConnectionsManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConnectionsManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ConnectionsManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConnectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConnectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ConnectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.SaveCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      In_SaveGame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticFunctionLibrary::SaveCosmetics(class UCustomizationSaveGame* In_SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.SaveCosmetics");
		
		UCosmeticFunctionLibrary_SaveCosmetics_Params params {};
		params.In_SaveGame = In_SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.LoadCosmetics
	 * 		Flags  -> ()
	 */
	class UCustomizationSaveGame* UCosmeticFunctionLibrary::LoadCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.LoadCosmetics");
		
		UCosmeticFunctionLibrary_LoadCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetSoundPackData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSoundPackEntry UCosmeticFunctionLibrary::GetSoundPackData(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetSoundPackData");
		
		UCosmeticFunctionLibrary_GetSoundPackData_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemsByEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetShopItemsByEvent(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemsByEvent");
		
		UCosmeticFunctionLibrary_GetShopItemsByEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FShopItem UCosmeticFunctionLibrary::GetShopItemData(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetShopItemData");
		
		UCosmeticFunctionLibrary_GetShopItemData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRarityColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticRarity                                    Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UCosmeticFunctionLibrary::GetRarityColor(ECosmeticRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRarityColor");
		
		UCosmeticFunctionLibrary_GetRarityColor_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRandomItem
	 * 		Flags  -> ()
	 */
	int32_t UCosmeticFunctionLibrary::GetRandomItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetRandomItem");
		
		UCosmeticFunctionLibrary_GetRandomItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetPlayerCosmeticAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   CosmeticItem                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCosmeticFunctionLibrary::GetPlayerCosmeticAnimInstance(const struct FCosmetic& CosmeticItem, class UClass** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetPlayerCosmeticAnimInstance");
		
		UCosmeticFunctionLibrary_GetPlayerCosmeticAnimInstance_Params params {};
		params.CosmeticItem = CosmeticItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMommySoundSet UCosmeticFunctionLibrary::GetMommySounds(class UCustomizationSaveGame* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySounds");
		
		UCosmeticFunctionLibrary_GetMommySounds_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySoundFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMommySoundSet                              Sounds                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EMommySoundSet                                     Set                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundBase* UCosmeticFunctionLibrary::GetMommySoundFor(const struct FMommySoundSet& Sounds, EMommySoundSet Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetMommySoundFor");
		
		UCosmeticFunctionLibrary_GetMommySoundFor_Params params {};
		params.Sounds = Sounds;
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UCosmeticFunctionLibrary::GetItemThumbnail(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemThumbnail");
		
		UCosmeticFunctionLibrary_GetItemThumbnail_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UCosmeticFunctionLibrary::GetItemName(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemName");
		
		UCosmeticFunctionLibrary_GetItemName_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItem UCosmeticFunctionLibrary::GetItemData(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetItemData");
		
		UCosmeticFunctionLibrary_GetItemData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetIDsFromSpecifiedTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Table                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetIDsFromSpecifiedTable(const class FString& Table)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetIDsFromSpecifiedTable");
		
		UCosmeticFunctionLibrary_GetIDsFromSpecifiedTable_Params params {};
		params.Table = Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FHuggySoundSet UCosmeticFunctionLibrary::GetHuggySounds(class UCustomizationSaveGame* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySounds");
		
		UCosmeticFunctionLibrary_GetHuggySounds_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySoundFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHuggySoundSet                              Sounds                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EHuggySoundSet                                     Set                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundBase* UCosmeticFunctionLibrary::GetHuggySoundFor(const struct FHuggySoundSet& Sounds, EHuggySoundSet Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetHuggySoundFor");
		
		UCosmeticFunctionLibrary_GetHuggySoundFor_Params params {};
		params.Sounds = Sounds;
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetEmoteSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Slot                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCosmeticFunctionLibrary::GetEmoteSimple(const struct FPresetSlot& Slot, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetEmoteSimple");
		
		UCosmeticFunctionLibrary_GetEmoteSimple_Params params {};
		params.Slot = Slot;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetDefaultUnlockedItemsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetDefaultUnlockedItemsOfType(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetDefaultUnlockedItemsOfType");
		
		UCosmeticFunctionLibrary_GetDefaultUnlockedItemsOfType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UCosmeticFunctionLibrary::GetCosmeticTypeName(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticTypeName");
		
		UCosmeticFunctionLibrary_GetCosmeticTypeName_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECosmeticTypeEnum UCosmeticFunctionLibrary::GetCosmeticType(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticType");
		
		UCosmeticFunctionLibrary_GetCosmeticType_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetCosmeticsOfType(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticsOfType");
		
		UCosmeticFunctionLibrary_GetCosmeticsOfType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterType                                     For                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowPrivate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetCosmeticOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, bool bShowPrivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticOfTypeFor");
		
		UCosmeticFunctionLibrary_GetCosmeticOfTypeFor_Params params {};
		params.Type = Type;
		params.For = For;
		params.bShowPrivate = bShowPrivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticDataByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Cosmetic                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCosmetic UCosmeticFunctionLibrary::GetCosmeticDataByName(const class FName& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticDataByName");
		
		UCosmeticFunctionLibrary_GetCosmeticDataByName_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCosmetic UCosmeticFunctionLibrary::GetCosmeticData(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetCosmeticData");
		
		UCosmeticFunctionLibrary_GetCosmeticData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBundleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBundle UCosmeticFunctionLibrary::GetBundleData(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBundleData");
		
		UCosmeticFunctionLibrary_GetBundleData_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBoxySoundSet UCosmeticFunctionLibrary::GetBoxySounds(class UCustomizationSaveGame* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySounds");
		
		UCosmeticFunctionLibrary_GetBoxySounds_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySoundFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBoxySoundSet                               Sounds                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBoxySoundSet                                      Set                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundBase* UCosmeticFunctionLibrary::GetBoxySoundFor(const struct FBoxySoundSet& Sounds, EBoxySoundSet Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetBoxySoundFor");
		
		UCosmeticFunctionLibrary_GetBoxySoundFor_Params params {};
		params.Sounds = Sounds;
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllItems
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllItems");
		
		UCosmeticFunctionLibrary_GetAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllActions
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetAllActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetAllActions");
		
		UCosmeticFunctionLibrary_GetAllActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionsOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     For                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::GetActionsOfTypeFor(ECharacterType For)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionsOfTypeFor");
		
		UCosmeticFunctionLibrary_GetActionsOfTypeFor_Params params {};
		params.For = For;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAction UCosmeticFunctionLibrary::GetActionData(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.GetActionData");
		
		UCosmeticFunctionLibrary_GetActionData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearMaterialSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticFunctionLibrary::ClearMaterialSlots(class USkeletalMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearMaterialSlots");
		
		UCosmeticFunctionLibrary_ClearMaterialSlots_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Slot                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCosmeticFunctionLibrary::ClearCosmetics(struct FPresetSlot* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.ClearCosmetics");
		
		UCosmeticFunctionLibrary_ClearCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CosmeticFunctionLibrary.AsCleanIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Slot                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCosmeticFunctionLibrary::AsCleanIntArray(const struct FPresetSlot& Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CosmeticFunctionLibrary.AsCleanIntArray");
		
		UCosmeticFunctionLibrary_AsCleanIntArray_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.CosmeticFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.UnequipCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticTypeEnum                                  Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::UnequipCosmetic(ECharacterType Character, ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.UnequipCosmetic");
		
		UCustomizationSaveGame_UnequipCosmetic_Params params {};
		params.Character = Character;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.SetSelectedPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::SetSelectedPreset(ECharacterType Character, const class FName& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.SetSelectedPreset");
		
		UCustomizationSaveGame_SetSelectedPreset_Params params {};
		params.Character = Character;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.Print
	 * 		Flags  -> ()
	 */
	void UCustomizationSaveGame::Print()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.Print");
		
		UCustomizationSaveGame_Print_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.IsEmoteEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomizationSaveGame::IsEmoteEquipped(ECharacterType Character, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.IsEmoteEquipped");
		
		UCustomizationSaveGame_IsEmoteEquipped_Params params {};
		params.Character = Character;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.IsCosmeticEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticTypeEnum                                  Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomizationSaveGame::IsCosmeticEquipped(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.IsCosmeticEquipped");
		
		UCustomizationSaveGame_IsCosmeticEquipped_Params params {};
		params.Character = Character;
		params.Type = Type;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.GetSelectedPresetNotByRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPresetSlot UCustomizationSaveGame::GetSelectedPresetNotByRef(ECharacterType Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.GetSelectedPresetNotByRef");
		
		UCustomizationSaveGame_GetSelectedPresetNotByRef_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomizationSaveGame::GetEquippedEmote(ECharacterType Character, int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedEmote");
		
		UCustomizationSaveGame_GetEquippedEmote_Params params {};
		params.Character = Character;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticTypeEnum                                  Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomizationSaveGame::GetEquippedCosmetic(ECharacterType Character, ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.GetEquippedCosmetic");
		
		UCustomizationSaveGame_GetEquippedCosmetic_Params params {};
		params.Character = Character;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.EquipEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::EquipEmote(ECharacterType Character, int32_t Slot, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.EquipEmote");
		
		UCustomizationSaveGame_EquipEmote_Params params {};
		params.Character = Character;
		params.Slot = Slot;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmeticColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticTypeEnum                                  Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ColorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::EquipCosmeticColor(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmeticColor");
		
		UCustomizationSaveGame_EquipCosmeticColor_Params params {};
		params.Character = Character;
		params.Type = Type;
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticTypeEnum                                  Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::EquipCosmetic(ECharacterType Character, ECosmeticTypeEnum Type, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.EquipCosmetic");
		
		UCustomizationSaveGame_EquipCosmetic_Params params {};
		params.Character = Character;
		params.Type = Type;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.DirectlySetSelectedPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPresetSlot                                 Preset                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::DirectlySetSelectedPreset(ECharacterType Character, const struct FPresetSlot& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.DirectlySetSelectedPreset");
		
		UCustomizationSaveGame_DirectlySetSelectedPreset_Params params {};
		params.Character = Character;
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.DeletePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::DeletePreset(ECharacterType Character, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.DeletePreset");
		
		UCustomizationSaveGame_DeletePreset_Params params {};
		params.Character = Character;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.ClampPresetRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomizationSaveGame::ClampPresetRange(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.ClampPresetRange");
		
		UCustomizationSaveGame_ClampPresetRange_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomizationSaveGame.AddNewPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPresetSlot                                 PresetStruct                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UCustomizationSaveGame::AddNewPreset(ECharacterType Character, const class FName& Name, const struct FPresetSlot& PresetStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomizationSaveGame.AddNewPreset");
		
		UCustomizationSaveGame_AddNewPreset_Params params {};
		params.Character = Character;
		params.Name = Name;
		params.PresetStruct = PresetStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.CustomizationSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomNinjaCharacter.SpawnMommyCamera
	 * 		Flags  -> ()
	 */
	void ACustomNinjaCharacter::SpawnMommyCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomNinjaCharacter.SpawnMommyCamera");
		
		ACustomNinjaCharacter_SpawnMommyCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomNinjaCharacter.OnTouchingWallChanged
	 * 		Flags  -> ()
	 */
	void ACustomNinjaCharacter::OnTouchingWallChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomNinjaCharacter.OnTouchingWallChanged");
		
		ACustomNinjaCharacter_OnTouchingWallChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomNinjaCharacter.OnRep_TouchingWall
	 * 		Flags  -> ()
	 */
	void ACustomNinjaCharacter::OnRep_TouchingWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomNinjaCharacter.OnRep_TouchingWall");
		
		ACustomNinjaCharacter_OnRep_TouchingWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomNinjaCharacter.MoveRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACustomNinjaCharacter::MoveRight(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomNinjaCharacter.MoveRight");
		
		ACustomNinjaCharacter_MoveRight_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomNinjaCharacter.MoveForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACustomNinjaCharacter::MoveForward(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomNinjaCharacter.MoveForward");
		
		ACustomNinjaCharacter_MoveForward_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomNinjaCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomNinjaCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.CustomNinjaCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.CustomPlayerController.SetViewTargetToMommyCamera
	 * 		Flags  -> ()
	 */
	void ACustomPlayerController::SetViewTargetToMommyCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.CustomPlayerController.SetViewTargetToMommyCamera");
		
		ACustomPlayerController_SetViewTargetToMommyCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.CustomPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DoorStateMachineComponet.SwitchState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                _StateTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDoorStateMachineComponet::SwitchState(const struct FGameplayTag& _StateTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DoorStateMachineComponet.SwitchState");
		
		UDoorStateMachineComponet_SwitchState_Params params {};
		params._StateTag = _StateTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DoorStateMachineComponet.OpenDoor
	 * 		Flags  -> ()
	 */
	void UDoorStateMachineComponet::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DoorStateMachineComponet.OpenDoor");
		
		UDoorStateMachineComponet_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DoorStateMachineComponet.CloseDoor
	 * 		Flags  -> ()
	 */
	void UDoorStateMachineComponet::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DoorStateMachineComponet.CloseDoor");
		
		UDoorStateMachineComponet_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorStateMachineComponet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorStateMachineComponet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.DoorStateMachineComponet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DualSplineFollower.SetTimeToTake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToTake                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADualSplineFollower::SetTimeToTake(float TimeToTake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DualSplineFollower.SetTimeToTake");
		
		ADualSplineFollower_SetTimeToTake_Params params {};
		params.TimeToTake = TimeToTake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DualSplineFollower.ReverseDirection
	 * 		Flags  -> ()
	 */
	void ADualSplineFollower::ReverseDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DualSplineFollower.ReverseDirection");
		
		ADualSplineFollower_ReverseDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DualSplineFollower.Multicast_PseudoSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            SplineToBaseFirstSplineOn                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            In_SecondSpline                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CharacterLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADualSplineFollower::Multicast_PseudoSpawn(class USplineComponent* SplineToBaseFirstSplineOn, class USplineComponent* In_SecondSpline, const struct FVector& CharacterLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DualSplineFollower.Multicast_PseudoSpawn");
		
		ADualSplineFollower_Multicast_PseudoSpawn_Params params {};
		params.SplineToBaseFirstSplineOn = SplineToBaseFirstSplineOn;
		params.In_SecondSpline = In_SecondSpline;
		params.CharacterLocation = CharacterLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DualSplineFollower.GetCharacterToPull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADualSplineFollower::GetCharacterToPull(class AANetworkCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DualSplineFollower.GetCharacterToPull");
		
		ADualSplineFollower_GetCharacterToPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DualSplineFollower.Authority_PseudoSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToTake                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            SplineToBaseFirstSplineOn                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            In_SecondSpline                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADualSplineFollower::Authority_PseudoSpawn(float TimeToTake, class USplineComponent* SplineToBaseFirstSplineOn, class USplineComponent* In_SecondSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DualSplineFollower.Authority_PseudoSpawn");
		
		ADualSplineFollower_Authority_PseudoSpawn_Params params {};
		params.TimeToTake = TimeToTake;
		params.SplineToBaseFirstSplineOn = SplineToBaseFirstSplineOn;
		params.In_SecondSpline = In_SecondSpline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADualSplineFollower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADualSplineFollower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.DualSplineFollower");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.SetInactiveAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Inactive                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::SetInactiveAudio(class UAudioComponent* Inactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.SetInactiveAudio");
		
		UDynamicMusicSubsystem_SetInactiveAudio_Params params {};
		params.Inactive = Inactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.SetAmbientMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  AmbientMusic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::SetAmbientMusic(class USoundWave* AmbientMusic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.SetAmbientMusic");
		
		UDynamicMusicSubsystem_SetAmbientMusic_Params params {};
		params.AmbientMusic = AmbientMusic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.SetActiveAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Active                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::SetActiveAudio(class UAudioComponent* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.SetActiveAudio");
		
		UDynamicMusicSubsystem_SetActiveAudio_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.ReturnToAmbientMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVolume                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::ReturnToAmbientMusic(float FadeTime, float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.ReturnToAmbientMusic");
		
		UDynamicMusicSubsystem_ReturnToAmbientMusic_Params params {};
		params.FadeTime = FadeTime;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.GetInactiveAudio
	 * 		Flags  -> ()
	 */
	class UAudioComponent* UDynamicMusicSubsystem::GetInactiveAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.GetInactiveAudio");
		
		UDynamicMusicSubsystem_GetInactiveAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.GetActiveAudio
	 * 		Flags  -> ()
	 */
	class UAudioComponent* UDynamicMusicSubsystem::GetActiveAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.GetActiveAudio");
		
		UDynamicMusicSubsystem_GetActiveAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::FadeOut(float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.FadeOut");
		
		UDynamicMusicSubsystem_FadeOut_Params params {};
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.ExecuteNextCrossfadeRequest
	 * 		Flags  -> ()
	 */
	void UDynamicMusicSubsystem::ExecuteNextCrossfadeRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.ExecuteNextCrossfadeRequest");
		
		UDynamicMusicSubsystem_ExecuteNextCrossfadeRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.DynamicMusicSubsystem.CrossfadeTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  NewMusic                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVolume                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMusicSubsystem::CrossfadeTo(class USoundWave* NewMusic, float FadeTime, float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.DynamicMusicSubsystem.CrossfadeTo");
		
		UDynamicMusicSubsystem_CrossfadeTo_Params params {};
		params.NewMusic = NewMusic;
		params.FadeTime = FadeTime;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMusicSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMusicSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.DynamicMusicSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GirlbossFunctionLibrary.LoadAssetsByClassFromPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UGirlbossFunctionLibrary::LoadAssetsByClassFromPath(class UClass* Class, const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GirlbossFunctionLibrary.LoadAssetsByClassFromPath");
		
		UGirlbossFunctionLibrary_LoadAssetsByClassFromPath_Params params {};
		params.Class = Class;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GirlbossFunctionLibrary.InEditor
	 * 		Flags  -> ()
	 */
	bool UGirlbossFunctionLibrary::InEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GirlbossFunctionLibrary.InEditor");
		
		UGirlbossFunctionLibrary_InEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GirlbossFunctionLibrary.ForceResetBoundInputsOnActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGirlbossFunctionLibrary::ForceResetBoundInputsOnActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GirlbossFunctionLibrary.ForceResetBoundInputsOnActor");
		
		UGirlbossFunctionLibrary_ForceResetBoundInputsOnActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGirlbossFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGirlbossFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.GirlbossFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabbable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabbable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.Grabbable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GrabpackInterface.OnHandStartPull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabpackInterface::OnHandStartPull(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GrabpackInterface.OnHandStartPull");
		
		UGrabpackInterface_OnHandStartPull_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GrabpackInterface.OnHandDetach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabpackInterface::OnHandDetach(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GrabpackInterface.OnHandDetach");
		
		UGrabpackInterface_OnHandDetach_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.GrabpackInterface.OnHandAttach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Caller                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabpackInterface::OnHandAttach(class UObject* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.GrabpackInterface.OnHandAttach");
		
		UGrabpackInterface_OnHandAttach_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabpackInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabpackInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.GrabpackInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.TimerRemoveHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHandTimer                                  HandTimer                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHandMagnetComponent::TimerRemoveHand(const struct FHandTimer& HandTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.TimerRemoveHand");
		
		UHandMagnetComponent_TimerRemoveHand_Params params {};
		params.HandTimer = HandTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.RemoveHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHandTimer                                  HandTimer                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHandMagnetComponent::RemoveHand(const struct FHandTimer& HandTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.RemoveHand");
		
		UHandMagnetComponent_RemoveHand_Params params {};
		params.HandTimer = HandTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     In_GrabpackInterfaceImplementers                           (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHandMagnetComponent::PseudoConstruct(TArray<class UActorComponent*> In_GrabpackInterfaceImplementers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.PseudoConstruct");
		
		UHandMagnetComponent_PseudoConstruct_Params params {};
		params.In_GrabpackInterfaceImplementers = In_GrabpackInterfaceImplementers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.IsBeingPulled
	 * 		Flags  -> ()
	 */
	bool UHandMagnetComponent::IsBeingPulled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.IsBeingPulled");
		
		UHandMagnetComponent_IsBeingPulled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.HasPullingHands
	 * 		Flags  -> ()
	 */
	bool UHandMagnetComponent::HasPullingHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.HasPullingHands");
		
		UHandMagnetComponent_HasPullingHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.HasAnyAttachedHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHandMagnetComponent::HasAnyAttachedHands(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.HasAnyAttachedHands");
		
		UHandMagnetComponent_HasAnyAttachedHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.GetPullAlignment
	 * 		Flags  -> ()
	 */
	float UHandMagnetComponent::GetPullAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.GetPullAlignment");
		
		UHandMagnetComponent_GetPullAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.GetGhostHandTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UHandMagnetComponent::GetGhostHandTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.GetGhostHandTransform");
		
		UHandMagnetComponent_GetGhostHandTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.GetFirstAttachedPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHandMagnetComponent::GetFirstAttachedPlayer(class AActor** Player, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.GetFirstAttachedPlayer");
		
		UHandMagnetComponent_GetFirstAttachedPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.GetAnimationToPlay
	 * 		Flags  -> ()
	 */
	class UAnimSequence* UHandMagnetComponent::GetAnimationToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.GetAnimationToPlay");
		
		UHandMagnetComponent_GetAnimationToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.DetachAllHands
	 * 		Flags  -> ()
	 */
	void UHandMagnetComponent::DetachAllHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.DetachAllHands");
		
		UHandMagnetComponent_DetachAllHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HandMagnetComponent.CanAcceptAnotherHand
	 * 		Flags  -> ()
	 */
	bool UHandMagnetComponent::CanAcceptAnotherHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HandMagnetComponent.CanAcceptAnotherHand");
		
		UHandMagnetComponent_CanAcceptAnotherHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandMagnetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandMagnetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.HandMagnetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HostMigrationData.GetExpectedPlayerCount
	 * 		Flags  -> ()
	 */
	int32_t UHostMigrationData::GetExpectedPlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HostMigrationData.GetExpectedPlayerCount");
		
		UHostMigrationData_GetExpectedPlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HostMigrationData.ClearSaveData
	 * 		Flags  -> ()
	 */
	void UHostMigrationData::ClearSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HostMigrationData.ClearSaveData");
		
		UHostMigrationData_ClearSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHostMigrationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHostMigrationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.HostMigrationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHostMigrationData_Escape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHostMigrationData_Escape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.HostMigrationData_Escape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.TimerForRecharge
	 * 		Flags  -> ()
	 */
	void UHuggyMovementComponent::TimerForRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.TimerForRecharge");
		
		UHuggyMovementComponent_TimerForRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.Server_BeginCharging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Is_Charging                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHuggyMovementComponent::Server_BeginCharging(bool Is_Charging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.Server_BeginCharging");
		
		UHuggyMovementComponent_Server_BeginCharging_Params params {};
		params.Is_Charging = Is_Charging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.NetworkSafe_BeginCharging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Is_Charging                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHuggyMovementComponent::NetworkSafe_BeginCharging(bool Is_Charging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.NetworkSafe_BeginCharging");
		
		UHuggyMovementComponent_NetworkSafe_BeginCharging_Params params {};
		params.Is_Charging = Is_Charging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.IsHuggyCharging
	 * 		Flags  -> ()
	 */
	bool UHuggyMovementComponent::IsHuggyCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.IsHuggyCharging");
		
		UHuggyMovementComponent_IsHuggyCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.EndCharging
	 * 		Flags  -> ()
	 */
	void UHuggyMovementComponent::EndCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.EndCharging");
		
		UHuggyMovementComponent_EndCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.HuggyMovementComponent.AfterAttackSlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHuggyMovementComponent::AfterAttackSlow(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.HuggyMovementComponent.AfterAttackSlow");
		
		UHuggyMovementComponent_AfterAttackSlow_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHuggyMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHuggyMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.HuggyMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Owner_EndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Owner_EndInteraction(class AANetworkCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Owner_EndInteraction");
		
		UInteractable_Owner_EndInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Owner_ContinueInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Owner_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Owner_ContinueInteraction");
		
		UInteractable_Owner_ContinueInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Owner_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Owner_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Owner_BeginInteraction");
		
		UInteractable_Owner_BeginInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanContinueInteraction != nullptr)
			*CanContinueInteraction = params.CanContinueInteraction;
		if (ContinueInteractionDuration != nullptr)
			*ContinueInteractionDuration = params.ContinueInteractionDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Authority_EndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Authority_EndInteraction(class AANetworkCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Authority_EndInteraction");
		
		UInteractable_Authority_EndInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Authority_ContinueInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Authority_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Authority_ContinueInteraction");
		
		UInteractable_Authority_ContinueInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Interactable.Authority_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractable::Authority_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Interactable.Authority_BeginInteraction");
		
		UInteractable_Authority_BeginInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanContinueInteraction != nullptr)
			*CanContinueInteraction = params.CanContinueInteraction;
		if (ContinueInteractionDuration != nullptr)
			*ContinueInteractionDuration = params.ContinueInteractionDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.Interactable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJSONFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJSONFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.JSONFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.Test_BattlepassJsonFunctions
	 * 		Flags  -> ()
	 */
	void UJSONSubsystem::Test_BattlepassJsonFunctions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.Test_BattlepassJsonFunctions");
		
		UJSONSubsystem_Test_BattlepassJsonFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.SetBattlepassJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BPResponse                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJSONSubsystem::SetBattlepassJson(const class FString& BPResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.SetBattlepassJson");
		
		UJSONSubsystem_SetBattlepassJson_Params params {};
		params.BPResponse = BPResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetWalletsResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPIWalletsResponse UJSONSubsystem::GetWalletsResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetWalletsResponse");
		
		UJSONSubsystem_GetWalletsResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetShoppyResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPIShoppyResponse UJSONSubsystem::GetShoppyResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetShoppyResponse");
		
		UJSONSubsystem_GetShoppyResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetRewardsResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPIRewardsResponse UJSONSubsystem::GetRewardsResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetRewardsResponse");
		
		UJSONSubsystem_GetRewardsResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetPlaytimeApiRoute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Route                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJSONSubsystem::GetPlaytimeApiRoute(const class FString& Route)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetPlaytimeApiRoute");
		
		UJSONSubsystem_GetPlaytimeApiRoute_Params params {};
		params.Route = Route;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetPerksResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPIPerksResponse UJSONSubsystem::GetPerksResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetPerksResponse");
		
		UJSONSubsystem_GetPerksResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetLevelResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPILevelResponse UJSONSubsystem::GetLevelResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetLevelResponse");
		
		UJSONSubsystem_GetLevelResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetInventoryResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResponseString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAPIInventoryResponse UJSONSubsystem::GetInventoryResponse(const class FString& ResponseString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetInventoryResponse");
		
		UJSONSubsystem_GetInventoryResponse_Params params {};
		params.ResponseString = ResponseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.JSONSubsystem.GetBattlepassJson
	 * 		Flags  -> ()
	 */
	struct FBattlepassJsonResponse UJSONSubsystem::GetBattlepassJson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.JSONSubsystem.GetBattlepassJson");
		
		UJSONSubsystem_GetBattlepassJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJSONSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJSONSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.JSONSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.SetPunchPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_PunchPressed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKangarooMovementComponent::SetPunchPressed(bool In_PunchPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.SetPunchPressed");
		
		UKangarooMovementComponent_SetPunchPressed_Params params {};
		params.In_PunchPressed = In_PunchPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.Server_Punch
	 * 		Flags  -> ()
	 */
	void UKangarooMovementComponent::Server_Punch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.Server_Punch");
		
		UKangarooMovementComponent_Server_Punch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpReleaseCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKangarooMovementComponent::Server_JumpReleaseCharge(float ChargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpReleaseCharge");
		
		UKangarooMovementComponent_Server_JumpReleaseCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpBeginCharge
	 * 		Flags  -> ()
	 */
	void UKangarooMovementComponent::Server_JumpBeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.Server_JumpBeginCharge");
		
		UKangarooMovementComponent_Server_JumpBeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANetworkKangaroo*                            In_Owner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKangarooMovementComponent::PseudoConstruct(class ANetworkKangaroo* In_Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.PseudoConstruct");
		
		UKangarooMovementComponent_PseudoConstruct_Params params {};
		params.In_Owner = In_Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_Punch
	 * 		Flags  -> ()
	 */
	void UKangarooMovementComponent::NetworkSafe_Punch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_Punch");
		
		UKangarooMovementComponent_NetworkSafe_Punch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpReleaseCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKangarooMovementComponent::NetworkSafe_JumpReleaseCharge(float ChargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpReleaseCharge");
		
		UKangarooMovementComponent_NetworkSafe_JumpReleaseCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpBeginCharge
	 * 		Flags  -> ()
	 */
	bool UKangarooMovementComponent::NetworkSafe_JumpBeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.NetworkSafe_JumpBeginCharge");
		
		UKangarooMovementComponent_NetworkSafe_JumpBeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.Multicast_Punch
	 * 		Flags  -> ()
	 */
	void UKangarooMovementComponent::Multicast_Punch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.Multicast_Punch");
		
		UKangarooMovementComponent_Multicast_Punch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.IsLaunchVerified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AmountToCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKangarooMovementComponent::IsLaunchVerified(float AmountToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.IsLaunchVerified");
		
		UKangarooMovementComponent_IsLaunchVerified_Params params {};
		params.AmountToCheck = AmountToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.IsBoxyBarraging
	 * 		Flags  -> ()
	 */
	bool UKangarooMovementComponent::IsBoxyBarraging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.IsBoxyBarraging");
		
		UKangarooMovementComponent_IsBoxyBarraging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.KangarooMovementComponent.DrawProjectedPath
	 * 		Flags  -> ()
	 */
	void UKangarooMovementComponent::DrawProjectedPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.KangarooMovementComponent.DrawProjectedPath");
		
		UKangarooMovementComponent_DrawProjectedPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKangarooMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKangarooMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.KangarooMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeadershipRadius.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeadershipRadius::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.LeadershipRadius");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LeaverFunctionLibrary.SaveLeaverSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULeaverSaveGame*                             SaveGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULeaverFunctionLibrary::SaveLeaverSaveGame(class ULeaverSaveGame* SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LeaverFunctionLibrary.SaveLeaverSaveGame");
		
		ULeaverFunctionLibrary_SaveLeaverSaveGame_Params params {};
		params.SaveGame = SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LeaverFunctionLibrary.LoadLeaverSaveGame
	 * 		Flags  -> ()
	 */
	class ULeaverSaveGame* ULeaverFunctionLibrary::LoadLeaverSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LeaverFunctionLibrary.LoadLeaverSaveGame");
		
		ULeaverFunctionLibrary_LoadLeaverSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaverFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaverFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.LeaverFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LeaverSaveGame.Does12HourPunishmentExist
	 * 		Flags  -> ()
	 */
	bool ULeaverSaveGame::Does12HourPunishmentExist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LeaverSaveGame.Does12HourPunishmentExist");
		
		ULeaverSaveGame_Does12HourPunishmentExist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LeaverSaveGame.ComparePunishmentLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   TimeLeft                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULeaverSaveGame::ComparePunishmentLevel(struct FTimespan* TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LeaverSaveGame.ComparePunishmentLevel");
		
		ULeaverSaveGame_ComparePunishmentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeLeft != nullptr)
			*TimeLeft = params.TimeLeft;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaverSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaverSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.LeaverSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LevelFunctions.GetLevelByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLevelStruct ULevelFunctions::GetLevelByID(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LevelFunctions.GetLevelByID");
		
		ULevelFunctions_GetLevelByID_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LevelFunctions.GetAllPlayableLevels
	 * 		Flags  -> ()
	 */
	TArray<int32_t> ULevelFunctions::GetAllPlayableLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LevelFunctions.GetAllPlayableLevels");
		
		ULevelFunctions_GetAllPlayableLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.LevelFunctions.GetAllLevels
	 * 		Flags  -> ()
	 */
	TArray<struct FLevelStruct> ULevelFunctions::GetAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.LevelFunctions.GetAllLevels");
		
		ULevelFunctions_GetAllLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.LevelFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMasterDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MasterDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.WrapInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Min                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Max                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::WrapInt(int32_t Value, int32_t Min, int32_t Max, int32_t* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.WrapInt");
		
		UMasterFunctionLibrary_WrapInt_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchLocallyControlledByPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SwitchLocallyControlledByPlayer(class APawn* Pawn, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchLocallyControlledByPlayer");
		
		UMasterFunctionLibrary_SwitchLocallyControlledByPlayer_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchIsPlayerMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SwitchIsPlayerMonster(class UObject* WorldContextObject, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SwitchIsPlayerMonster");
		
		UMasterFunctionLibrary_SwitchIsPlayerMonster_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.StringContainsProfanity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::StringContainsProfanity(const class FString& In, bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.StringContainsProfanity");
		
		UMasterFunctionLibrary_StringContainsProfanity_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.StringArrayToNameArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                Out                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::StringArrayToNameArray(TArray<class FString> In, TArray<class FName>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.StringArrayToNameArray");
		
		UMasterFunctionLibrary_StringArrayToNameArray_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SortFloats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      Floats                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<float> UMasterFunctionLibrary::SortFloats(TArray<float> Floats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SortFloats");
		
		UMasterFunctionLibrary_SortFloats_Params params {};
		params.Floats = Floats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SetUIMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUIMode                                            UIMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SetUIMode(class APlayerController* PlayerController, bool bShowMouse, EUIMode UIMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SetUIMode");
		
		UMasterFunctionLibrary_SetUIMode_Params params {};
		params.PlayerController = PlayerController;
		params.bShowMouse = bShowMouse;
		params.UIMode = UIMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SetSelectedSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Sabotage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SetSelectedSabotage(const class FName& Sabotage, TMap<class FName, struct FSabotageSaveData>* Sabotages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SetSelectedSabotage");
		
		UMasterFunctionLibrary_SetSelectedSabotage_Params params {};
		params.Sabotage = Sabotage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotages != nullptr)
			*Sabotages = params.Sabotages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SetSabotageLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Sabotage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SetSabotageLevel(const class FName& Sabotage, int32_t Level, TMap<class FName, struct FSabotageSaveData>* Sabotages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SetSabotageLevel");
		
		UMasterFunctionLibrary_SetSabotageLevel_Params params {};
		params.Sabotage = Sabotage;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotages != nullptr)
			*Sabotages = params.Sabotages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USettingsSaveGame*                           Settings                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SaveSettings(class USettingsSaveGame* Settings, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSettings");
		
		UMasterFunctionLibrary_SaveSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSabotages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SaveSabotages(TMap<class FName, struct FSabotageSaveData> Sabotages, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SaveSabotages");
		
		UMasterFunctionLibrary_SaveSabotages_Params params {};
		params.Sabotages = Sabotages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.SanitizeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Out                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::SanitizeString(const class FString& In, class FString* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.SanitizeString");
		
		UMasterFunctionLibrary_SanitizeString_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.RemoveWidgetIfValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::RemoveWidgetIfValid(class UWidget* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.RemoveWidgetIfValid");
		
		UMasterFunctionLibrary_RemoveWidgetIfValid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousMonsterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECharacterType UMasterFunctionLibrary::PreviousMonsterType(ECharacterType Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousMonsterType");
		
		UMasterFunctionLibrary_PreviousMonsterType_Params params {};
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousCharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECharacterType UMasterFunctionLibrary::PreviousCharacterType(ECharacterType Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.PreviousCharacterType");
		
		UMasterFunctionLibrary_PreviousCharacterType_Params params {};
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.PointToResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMasterFunctionLibrary::PointToResolution(const struct FIntPoint& In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.PointToResolution");
		
		UMasterFunctionLibrary_PointToResolution_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.PointsToResolutions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIntPoint>                           In                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Out                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::PointsToResolutions(TArray<struct FIntPoint> In, TArray<class FString>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.PointsToResolutions");
		
		UMasterFunctionLibrary_PointsToResolutions_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NtoI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMasterFunctionLibrary::NtoI(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NtoI");
		
		UMasterFunctionLibrary_NtoI_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NextMonsterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECharacterType UMasterFunctionLibrary::NextMonsterType(ECharacterType Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NextMonsterType");
		
		UMasterFunctionLibrary_NextMonsterType_Params params {};
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NextCharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECharacterType UMasterFunctionLibrary::NextCharacterType(ECharacterType Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NextCharacterType");
		
		UMasterFunctionLibrary_NextCharacterType_Params params {};
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NearlyEqual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Epsilon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMasterFunctionLibrary::NearlyEqual(const struct FVector& A, const struct FVector& B, float Epsilon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NearlyEqual");
		
		UMasterFunctionLibrary_NearlyEqual_Params params {};
		params.A = A;
		params.B = B;
		params.Epsilon = Epsilon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToStringArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                In                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Out                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::NameArrayToStringArray(TArray<class FName> In, TArray<class FString>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToStringArray");
		
		UMasterFunctionLibrary_NameArrayToStringArray_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Names                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UMasterFunctionLibrary::NameArrayToIntArray(TArray<class FName> Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.NameArrayToIntArray");
		
		UMasterFunctionLibrary_NameArrayToIntArray_Params params {};
		params.Names = Names;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.MultiplyByPiOverTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMasterFunctionLibrary::MultiplyByPiOverTwo(float In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.MultiplyByPiOverTwo");
		
		UMasterFunctionLibrary_MultiplyByPiOverTwo_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSettings
	 * 		Flags  -> ()
	 */
	class USettingsSaveGame* UMasterFunctionLibrary::LoadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSettings");
		
		UMasterFunctionLibrary_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSabotages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::LoadSabotages(TMap<class FName, struct FSabotageSaveData>* Sabotages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.LoadSabotages");
		
		UMasterFunctionLibrary_LoadSabotages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotages != nullptr)
			*Sabotages = params.Sabotages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.LoadAndApplySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USettingsSaveGame*                           Settings                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::LoadAndApplySettings(class APlayerController* Controller, class USettingsSaveGame** Settings, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.LoadAndApplySettings");
		
		UMasterFunctionLibrary_LoadAndApplySettings_Params params {};
		params.Controller = Controller;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.LevelUpSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Sabotage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::LevelUpSabotage(const class FName& Sabotage, TMap<class FName, struct FSabotageSaveData>* Sabotages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.LevelUpSabotage");
		
		UMasterFunctionLibrary_LevelUpSabotage_Params params {};
		params.Sabotage = Sabotage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotages != nullptr)
			*Sabotages = params.Sabotages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.ItoN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMasterFunctionLibrary::ItoN(int32_t Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.ItoN");
		
		UMasterFunctionLibrary_ItoN_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IsValidCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::IsValidCharacters(const class FString& String, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IsValidCharacters");
		
		UMasterFunctionLibrary_IsValidCharacters_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IsTooltipNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TooltipKey                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMasterFunctionLibrary::IsTooltipNeeded(class UObject* WorldContextObject, const class FString& TooltipKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IsTooltipNeeded");
		
		UMasterFunctionLibrary_IsTooltipNeeded_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TooltipKey = TooltipKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IsPlayerMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsMonster                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::IsPlayerMonster(class UObject* WorldContextObject, bool* IsMonster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IsPlayerMonster");
		
		UMasterFunctionLibrary_IsPlayerMonster_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMonster != nullptr)
			*IsMonster = params.IsMonster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IsOdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            I                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMasterFunctionLibrary::IsOdd(int32_t I)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IsOdd");
		
		UMasterFunctionLibrary_IsOdd_Params params {};
		params.I = I;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IsLocallyControlledByPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::IsLocallyControlledByPlayer(class APawn* Pawn, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IsLocallyControlledByPlayer");
		
		UMasterFunctionLibrary_IsLocallyControlledByPlayer_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IntArrayToNameArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Ints                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UMasterFunctionLibrary::IntArrayToNameArray(TArray<int32_t> Ints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IntArrayToNameArray");
		
		UMasterFunctionLibrary_IntArrayToNameArray_Params params {};
		params.Ints = Ints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.IndexToGridCoords
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GridWidth                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GridRow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GridColumn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::IndexToGridCoords(int32_t In, int32_t GridWidth, int32_t* GridRow, int32_t* GridColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.IndexToGridCoords");
		
		UMasterFunctionLibrary_IndexToGridCoords_Params params {};
		params.In = In;
		params.GridWidth = GridWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridRow != nullptr)
			*GridRow = params.GridRow;
		if (GridColumn != nullptr)
			*GridColumn = params.GridColumn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetTransitionLevel
	 * 		Flags  -> ()
	 */
	class UWorld* UMasterFunctionLibrary::GetTransitionLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetTransitionLevel");
		
		UMasterFunctionLibrary_GetTransitionLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetTargetArmLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentLength                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRunning                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShouldUpdate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetTargetArmLength(float CurrentLength, float DeltaSeconds, bool IsRunning, float* Length, bool* ShouldUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetTargetArmLength");
		
		UMasterFunctionLibrary_GetTargetArmLength_Params params {};
		params.CurrentLength = CurrentLength;
		params.DeltaSeconds = DeltaSeconds;
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
		if (ShouldUpdate != nullptr)
			*ShouldUpdate = params.ShouldUpdate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetSpecifiedDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDataTable* UMasterFunctionLibrary::GetSpecifiedDataTable(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetSpecifiedDataTable");
		
		UMasterFunctionLibrary_GetSpecifiedDataTable_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetSoundClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundClass* UMasterFunctionLibrary::GetSoundClass(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetSoundClass");
		
		UMasterFunctionLibrary_GetSoundClass_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Sabotage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetSelectedSabotageName(class FName* Sabotage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotageName");
		
		UMasterFunctionLibrary_GetSelectedSabotageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotage != nullptr)
			*Sabotage = params.Sabotage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Sabotage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetSelectedSabotage(TMap<class FName, struct FSabotageSaveData> Sabotages, class FName* Sabotage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetSelectedSabotage");
		
		UMasterFunctionLibrary_GetSelectedSabotage_Params params {};
		params.Sabotages = Sabotages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sabotage != nullptr)
			*Sabotage = params.Sabotage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetSabotageDataFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FSabotageSaveData>        Sabotages                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSabotageDef                                Def                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetSabotageDataFromName(TMap<class FName, struct FSabotageSaveData> Sabotages, const class FName& SabotageName, class FString* Name, int32_t* Level, bool* Selected, class FString* Description, bool* Yes, struct FSabotageDef* Def)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetSabotageDataFromName");
		
		UMasterFunctionLibrary_GetSabotageDataFromName_Params params {};
		params.Sabotages = Sabotages;
		params.SabotageName = SabotageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Level != nullptr)
			*Level = params.Level;
		if (Selected != nullptr)
			*Selected = params.Selected;
		if (Description != nullptr)
			*Description = params.Description;
		if (Yes != nullptr)
			*Yes = params.Yes;
		if (Def != nullptr)
			*Def = params.Def;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetRandomActorTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UMasterFunctionLibrary::GetRandomActorTransform(TArray<class AActor*> Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetRandomActorTransform");
		
		UMasterFunctionLibrary_GetRandomActorTransform_Params params {};
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetPlaybackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             AudioComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetPlaybackTime(class UAudioComponent* AudioComponent, float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetPlaybackTime");
		
		UMasterFunctionLibrary_GetPlaybackTime_Params params {};
		params.AudioComponent = AudioComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetOctant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMasterFunctionLibrary::GetOctant(class UObject* WorldContextObject, const struct FVector2D& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetOctant");
		
		UMasterFunctionLibrary_GetOctant_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetNearestMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MultipleOf                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetNearestMultiple(float In, float MultipleOf, float* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetNearestMultiple");
		
		UMasterFunctionLibrary_GetNearestMultiple_Params params {};
		params.In = In;
		params.MultipleOf = MultipleOf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetMasterDataAsset
	 * 		Flags  -> ()
	 */
	class UMasterDataAsset* UMasterFunctionLibrary::GetMasterDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetMasterDataAsset");
		
		UMasterFunctionLibrary_GetMasterDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetGameVersion
	 * 		Flags  -> ()
	 */
	class FString UMasterFunctionLibrary::GetGameVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetGameVersion");
		
		UMasterFunctionLibrary_GetGameVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetDefaultSoundMixModifier
	 * 		Flags  -> ()
	 */
	class USoundMix* UMasterFunctionLibrary::GetDefaultSoundMixModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetDefaultSoundMixModifier");
		
		UMasterFunctionLibrary_GetDefaultSoundMixModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetComponentForwardTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::GetComponentForwardTrace(class USceneComponent* Target, float Distance, struct FVector* Start, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetComponentForwardTrace");
		
		UMasterFunctionLibrary_GetComponentForwardTrace_Params params {};
		params.Target = Target;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetCharacterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMasterFunctionLibrary::GetCharacterName(ECharacterType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetCharacterName");
		
		UMasterFunctionLibrary_GetCharacterName_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.GetBuildDate
	 * 		Flags  -> ()
	 */
	class FString UMasterFunctionLibrary::GetBuildDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.GetBuildDate");
		
		UMasterFunctionLibrary_GetBuildDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.FilterAndSortByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Elements                                                   (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::FilterAndSortByType(TArray<class UActorComponent*> Elements, class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.FilterAndSortByType");
		
		UMasterFunctionLibrary_FilterAndSortByType_Params params {};
		params.Elements = Elements;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.DoesMonsterExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMasterFunctionLibrary::DoesMonsterExist(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.DoesMonsterExist");
		
		UMasterFunctionLibrary_DoesMonsterExist_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.ClampClientLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ServerLocation                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         ClientLocation                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ValidatedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DoTrace                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::ClampClientLocation(class UObject* WorldContextObject, const struct FVector& ServerLocation, const struct FVector_NetQuantize& ClientLocation, struct FVector* ValidatedLocation, bool DoTrace, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.ClampClientLocation");
		
		UMasterFunctionLibrary_ClampClientLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ServerLocation = ServerLocation;
		params.ClientLocation = ClientLocation;
		params.DoTrace = DoTrace;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidatedLocation != nullptr)
			*ValidatedLocation = params.ValidatedLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.ApplySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USettingsSaveGame*                           Settings                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMasterFunctionLibrary::ApplySettings(class USettingsSaveGame* Settings, class APlayerController* Controller, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.ApplySettings");
		
		UMasterFunctionLibrary_ApplySettings_Params params {};
		params.Settings = Settings;
		params.Controller = Controller;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MasterFunctionLibrary.AddFloats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      Floats                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	float UMasterFunctionLibrary::AddFloats(TArray<float> Floats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MasterFunctionLibrary.AddFloats");
		
		UMasterFunctionLibrary_AddFloats_Params params {};
		params.Floats = Floats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMasterFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MasterFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMommyCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMommyCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MommyCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMommyCameraPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMommyCameraPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MommyCameraPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MommyMovementComponent.Server_SetWantsToGrapple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_WantsToGrapple                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMommyMovementComponent::Server_SetWantsToGrapple(bool In_WantsToGrapple)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MommyMovementComponent.Server_SetWantsToGrapple");
		
		UMommyMovementComponent_Server_SetWantsToGrapple_Params params {};
		params.In_WantsToGrapple = In_WantsToGrapple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MommyMovementComponent.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANetworkMommy*                               In_Owner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMommyMovementComponent::PseudoConstruct(class ANetworkMommy* In_Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MommyMovementComponent.PseudoConstruct");
		
		UMommyMovementComponent_PseudoConstruct_Params params {};
		params.In_Owner = In_Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MommyMovementComponent.AfterAttackSlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMommyMovementComponent::AfterAttackSlow(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MommyMovementComponent.AfterAttackSlow");
		
		UMommyMovementComponent_AfterAttackSlow_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMommyMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMommyMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MommyMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.Server_EndChargeAttack
	 * 		Flags  -> ()
	 */
	void AMonster::Server_EndChargeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.Server_EndChargeAttack");
		
		AMonster_Server_EndChargeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.Server_BeginChargeAttack
	 * 		Flags  -> ()
	 */
	void AMonster::Server_BeginChargeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.Server_BeginChargeAttack");
		
		AMonster_Server_BeginChargeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.Multicast_PickupPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMonster::Multicast_PickupPlayer(class AANetworkCharacter* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.Multicast_PickupPlayer");
		
		AMonster_Multicast_PickupPlayer_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.Multicast_DropPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMonster::Multicast_DropPlayer(class AANetworkCharacter* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.Multicast_DropPlayer");
		
		AMonster_Multicast_DropPlayer_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.DetermineTraceResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AMonster::DetermineTraceResult(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.DetermineTraceResult");
		
		AMonster_DetermineTraceResult_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.DamagePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackData                                 In_AttackData                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AMonster::DamagePlayer(class AANetworkCharacter* Player, const struct FAttackData& In_AttackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.DamagePlayer");
		
		AMonster_DamagePlayer_Params params {};
		params.Player = Player;
		params.In_AttackData = In_AttackData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.ChargeAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMonster::ChargeAttack(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.ChargeAttack");
		
		AMonster_ChargeAttack_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.AttackTripleTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleHalfHeight                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AMonster::AttackTripleTrace(const struct FVector& Start, const struct FVector& End, float CapsuleHalfHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.AttackTripleTrace");
		
		AMonster_AttackTripleTrace_Params params {};
		params.Start = Start;
		params.End = End;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.Monster.AttackTrace
	 * 		Flags  -> ()
	 */
	struct FHitResult AMonster::AttackTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.Monster.AttackTrace");
		
		AMonster_AttackTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMonster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.Monster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMonsterCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonsterCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MonsterCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonsterDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonsterDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MonsterDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MonsterQueueData.TestMonsterQueueDataSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfTests                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMonsterQueueData::TestMonsterQueueDataSelection(int32_t NumberOfTests, bool* bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MonsterQueueData.TestMonsterQueueDataSelection");
		
		UMonsterQueueData_TestMonsterQueueDataSelection_Params params {};
		params.NumberOfTests = NumberOfTests;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessful != nullptr)
			*bSuccessful = params.bSuccessful;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.MonsterQueueData.SelectMonsterFromQueueDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, struct FQueueData>                   MonsterQueueDatas                                          (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMonsterQueueData::SelectMonsterFromQueueDatas(TMap<int32_t, struct FQueueData> MonsterQueueDatas, bool* bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.MonsterQueueData.SelectMonsterFromQueueDatas");
		
		UMonsterQueueData_SelectMonsterFromQueueDatas_Params params {};
		params.MonsterQueueDatas = MonsterQueueDatas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessful != nullptr)
			*bSuccessful = params.bSuccessful;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonsterQueueData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonsterQueueData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MonsterQueueData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NavigatorIndicatorSorter.SortArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     ElementArray                                               (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<class UActorComponent*> UNavigatorIndicatorSorter::SortArray(TArray<class UActorComponent*> ElementArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NavigatorIndicatorSorter.SortArray");
		
		UNavigatorIndicatorSorter_SortArray_Params params {};
		params.ElementArray = ElementArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigatorIndicatorSorter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigatorIndicatorSorter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NavigatorIndicatorSorter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkHuggy.IncrementHuggyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHuggyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkHuggy::IncrementHuggyStat(float Amount, EHuggyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkHuggy.IncrementHuggyStat");
		
		ANetworkHuggy_IncrementHuggyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkHuggy.GetHuggyMovementComponent
	 * 		Flags  -> ()
	 */
	class UHuggyMovementComponent* ANetworkHuggy::GetHuggyMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkHuggy.GetHuggyMovementComponent");
		
		ANetworkHuggy_GetHuggyMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkHuggy.AddBabyHuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BabyHuggy                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkHuggy::AddBabyHuggy(class AActor* BabyHuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkHuggy.AddBabyHuggy");
		
		ANetworkHuggy_AddBabyHuggy_Params params {};
		params.BabyHuggy = BabyHuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkHuggy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkHuggy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkHuggy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.ResetFOV
	 * 		Flags  -> ()
	 */
	void ANetworkKangaroo::ResetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.ResetFOV");
		
		ANetworkKangaroo_ResetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.ParseInputAction_HandExtend_Pressed
	 * 		Flags  -> ()
	 */
	bool ANetworkKangaroo::ParseInputAction_HandExtend_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.ParseInputAction_HandExtend_Pressed");
		
		ANetworkKangaroo_ParseInputAction_HandExtend_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.IsFistRetracting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Retracting                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkKangaroo::IsFistRetracting(bool* Retracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.IsFistRetracting");
		
		ANetworkKangaroo_IsFistRetracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Retracting != nullptr)
			*Retracting = params.Retracting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.IsFistExtended
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Extended                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkKangaroo::IsFistExtended(bool* Extended)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.IsFistExtended");
		
		ANetworkKangaroo_IsFistExtended_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Extended != nullptr)
			*Extended = params.Extended;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.IncrementBoxyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoxyStatistics                                    Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkKangaroo::IncrementBoxyStat(float Amount, EBoxyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.IncrementBoxyStat");
		
		ANetworkKangaroo_IncrementBoxyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.GetSurvivorProximityMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkKangaroo::GetSurvivorProximityMultiplier(class AANetworkCharacter* Character, float MaxDistance, float* Multiplier, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.GetSurvivorProximityMultiplier");
		
		ANetworkKangaroo_GetSurvivorProximityMultiplier_Params params {};
		params.Character = Character;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.GetFistPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkKangaroo::GetFistPosition(struct FVector* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.GetFistPosition");
		
		ANetworkKangaroo_GetFistPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkKangaroo.GetBoxyMovementComponent
	 * 		Flags  -> ()
	 */
	class UKangarooMovementComponent* ANetworkKangaroo::GetBoxyMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkKangaroo.GetBoxyMovementComponent");
		
		ANetworkKangaroo_GetBoxyMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkKangaroo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkKangaroo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkKangaroo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Server_SendGrapple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     In_Direction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::Server_SendGrapple(const struct FVector& In_Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Server_SendGrapple");
		
		ANetworkMommy_Server_SendGrapple_Params params {};
		params.In_Direction = In_Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Server_LaunchFromWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    LaunchDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::Server_LaunchFromWall(const struct FRotator& LaunchDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Server_LaunchFromWall");
		
		ANetworkMommy_Server_LaunchFromWall_Params params {};
		params.LaunchDirection = LaunchDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Server_CancelGrapple
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::Server_CancelGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Server_CancelGrapple");
		
		ANetworkMommy_Server_CancelGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Server_BeginPulling
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::Server_BeginPulling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Server_BeginPulling");
		
		ANetworkMommy_Server_BeginPulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Server_AttachToWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::Server_AttachToWall(const struct FVector& Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Server_AttachToWall");
		
		ANetworkMommy_Server_AttachToWall_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             In_FirstPersonArmsSpring                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             In_FirstPersonArms                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCapsuleComponent*                           In_CapsuleComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::PseudoConstruct(class USceneComponent* In_FirstPersonArmsSpring, class USceneComponent* In_FirstPersonArms, class UCapsuleComponent* In_CapsuleComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.PseudoConstruct");
		
		ANetworkMommy_PseudoConstruct_Params params {};
		params.In_FirstPersonArmsSpring = In_FirstPersonArmsSpring;
		params.In_FirstPersonArms = In_FirstPersonArms;
		params.In_CapsuleComponent = In_CapsuleComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.ParseInputAction_Jump
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::ParseInputAction_Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.ParseInputAction_Jump");
		
		ANetworkMommy_ParseInputAction_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Owning_BeginPulling
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::Owning_BeginPulling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Owning_BeginPulling");
		
		ANetworkMommy_Owning_BeginPulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.OnRep_GrappleState
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::OnRep_GrappleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.OnRep_GrappleState");
		
		ANetworkMommy_OnRep_GrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Multicast_SendGrapple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     In_Direction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::Multicast_SendGrapple(const struct FVector& In_Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Multicast_SendGrapple");
		
		ANetworkMommy_Multicast_SendGrapple_Params params {};
		params.In_Direction = In_Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Multicast_CancelGrapple
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::Multicast_CancelGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Multicast_CancelGrapple");
		
		ANetworkMommy_Multicast_CancelGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.Multicast_AttachToWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::Multicast_AttachToWall(const struct FVector& Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.Multicast_AttachToWall");
		
		ANetworkMommy_Multicast_AttachToWall_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.LaunchFromWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    LaunchDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::LaunchFromWall(const struct FRotator& LaunchDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.LaunchFromWall");
		
		ANetworkMommy_LaunchFromWall_Params params {};
		params.LaunchDirection = LaunchDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.IsMommyAttachedToWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AttachedToWall                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::IsMommyAttachedToWall(bool* AttachedToWall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.IsMommyAttachedToWall");
		
		ANetworkMommy_IsMommyAttachedToWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachedToWall != nullptr)
			*AttachedToWall = params.AttachedToWall;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.IsGrapplePulling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pulling                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::IsGrapplePulling(bool* Pulling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.IsGrapplePulling");
		
		ANetworkMommy_IsGrapplePulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pulling != nullptr)
			*Pulling = params.Pulling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.IsGrappleActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Extended                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::IsGrappleActive(bool* Extended)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.IsGrappleActive");
		
		ANetworkMommy_IsGrappleActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Extended != nullptr)
			*Extended = params.Extended;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.IncrementMommyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMommyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::IncrementMommyStat(float Amount, EMommyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.IncrementMommyStat");
		
		ANetworkMommy_IncrementMommyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.GetMommyMovementComponent
	 * 		Flags  -> ()
	 */
	class UMommyMovementComponent* ANetworkMommy::GetMommyMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.GetMommyMovementComponent");
		
		ANetworkMommy_GetMommyMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.GetGrappleEndpointPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::GetGrappleEndpointPosition(struct FVector* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.GetGrappleEndpointPosition");
		
		ANetworkMommy_GetGrappleEndpointPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.DoGrappleExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::DoGrappleExtension(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.DoGrappleExtension");
		
		ANetworkMommy_DoGrappleExtension_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.CancelGrapple
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::CancelGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.CancelGrapple");
		
		ANetworkMommy_CancelGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_IsGrapplePulling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPulling                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::BP_OnRep_IsGrapplePulling(bool IsPulling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_IsGrapplePulling");
		
		ANetworkMommy_BP_OnRep_IsGrapplePulling_Params params {};
		params.IsPulling = IsPulling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_GrappleState
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::BP_OnRep_GrappleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.BP_OnRep_GrappleState");
		
		ANetworkMommy_BP_OnRep_GrappleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.BeginPulling
	 * 		Flags  -> ()
	 */
	void ANetworkMommy::BeginPulling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.BeginPulling");
		
		ANetworkMommy_BeginPulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkMommy.AttachToWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkMommy::AttachToWall(const struct FVector& Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkMommy.AttachToWall");
		
		ANetworkMommy_AttachToWall_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkMommy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkMommy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkMommy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkPhysicsActor.UpdateRotation
	 * 		Flags  -> ()
	 */
	void ANetworkPhysicsActor::UpdateRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkPhysicsActor.UpdateRotation");
		
		ANetworkPhysicsActor_UpdateRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkPhysicsActor.UpdatePosition
	 * 		Flags  -> ()
	 */
	void ANetworkPhysicsActor::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkPhysicsActor.UpdatePosition");
		
		ANetworkPhysicsActor_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkPhysicsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkPhysicsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkPhysicsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkRope.MakeSimpleRope
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             StartComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             EndComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkRope::MakeSimpleRope(class USceneComponent* StartComponent, class USceneComponent* EndComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkRope.MakeSimpleRope");
		
		ANetworkRope_MakeSimpleRope_Params params {};
		params.StartComponent = StartComponent;
		params.EndComponent = EndComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkRope.EnterRetractMode
	 * 		Flags  -> ()
	 */
	void ANetworkRope::EnterRetractMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkRope.EnterRetractMode");
		
		ANetworkRope_EnterRetractMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkRope.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkRope::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkRope");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkToyPart.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUNetworkGrabComponent*                      In_GrabComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkToyPart::PseudoConstruct(class UUNetworkGrabComponent* In_GrabComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkToyPart.PseudoConstruct");
		
		ANetworkToyPart_PseudoConstruct_Params params {};
		params.In_GrabComponent = In_GrabComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkToyPart.IsPlayerHandAttached
	 * 		Flags  -> ()
	 */
	bool ANetworkToyPart::IsPlayerHandAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkToyPart.IsPlayerHandAttached");
		
		ANetworkToyPart_IsPlayerHandAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkToyPart.GetNetworkGrab
	 * 		Flags  -> ()
	 */
	class UUNetworkGrabComponent* ANetworkToyPart::GetNetworkGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkToyPart.GetNetworkGrab");
		
		ANetworkToyPart_GetNetworkGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkToyPart.AttachmentStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             StateChange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkToyPart::AttachmentStateChange(EAttachmentStateChange StateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkToyPart.AttachmentStateChange");
		
		ANetworkToyPart_AttachmentStateChange_Params params {};
		params.StateChange = StateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkToyPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkToyPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkToyPart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkTrain.UpdateCurrentTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECurrentTrack                                      TrackTransition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkTrain::UpdateCurrentTrack(int32_t Index, float Distance, ECurrentTrack* TrackTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkTrain.UpdateCurrentTrack");
		
		ANetworkTrain_UpdateCurrentTrack_Params params {};
		params.Index = Index;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrackTransition != nullptr)
			*TrackTransition = params.TrackTransition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkTrain.PseudoConstruct
	 * 		Flags  -> ()
	 */
	void ANetworkTrain::PseudoConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkTrain.PseudoConstruct");
		
		ANetworkTrain_PseudoConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkTrain.MoveTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Cart                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CartIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkTrain::MoveTrain(float Alpha, class USceneComponent* Cart, int32_t CartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkTrain.MoveTrain");
		
		ANetworkTrain_MoveTrain_Params params {};
		params.Alpha = Alpha;
		params.Cart = Cart;
		params.CartIndex = CartIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkTrain.GetDistanceOnTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECurrentTrack                                      TrackTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_Distance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            Track                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkTrain::GetDistanceOnTrack(ECurrentTrack TrackTransition, float In_Distance, float* OutDistance, class USplineComponent** Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkTrain.GetDistanceOnTrack");
		
		ANetworkTrain_GetDistanceOnTrack_Params params {};
		params.TrackTransition = TrackTransition;
		params.In_Distance = In_Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDistance != nullptr)
			*OutDistance = params.OutDistance;
		if (Track != nullptr)
			*Track = params.Track;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.NetworkTrain.GetDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SecondStation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ANetworkTrain::GetDestination(float SecondStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.NetworkTrain.GetDestination");
		
		ANetworkTrain_GetDestination_Params params {};
		params.SecondStation = SecondStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkTrain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkTrain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkTrain");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.SavePerkSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkSaveGame*                               SaveGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkFunctionLibrary::SavePerkSaveGame(class UPerkSaveGame* SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.SavePerkSaveGame");
		
		UPerkFunctionLibrary_SavePerkSaveGame_Params params {};
		params.SaveGame = SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.LoadPerkSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkSaveGame*                               SaveGame                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkFunctionLibrary::LoadPerkSaveGame(class UPerkSaveGame** SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.LoadPerkSaveGame");
		
		UPerkFunctionLibrary_LoadPerkSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveGame != nullptr)
			*SaveGame = params.SaveGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.LevelToValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          PerkType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerkFunctionLibrary::LevelToValue(EPerkType PerkType, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.LevelToValue");
		
		UPerkFunctionLibrary_LevelToValue_Params params {};
		params.PerkType = PerkType;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGameSlotName
	 * 		Flags  -> ()
	 */
	class FString UPerkFunctionLibrary::GetPerkSaveGameSlotName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGameSlotName");
		
		UPerkFunctionLibrary_GetPerkSaveGameSlotName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkSaveGame*                               OutSaveGame                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkFunctionLibrary::GetPerkSaveGame(class UPerkSaveGame** OutSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkSaveGame");
		
		UPerkFunctionLibrary_GetPerkSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSaveGame != nullptr)
			*OutSaveGame = params.OutSaveGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          PerkType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkFunctionLibrary::GetPerkRowName(EPerkType PerkType, class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.GetPerkRowName");
		
		UPerkFunctionLibrary_GetPerkRowName_Params params {};
		params.PerkType = PerkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.GetHighestPerkLevelFromPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AANetworkCharacter*>                  Players                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EPerkType                                          PerkType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerkLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AANetworkCharacter*                          CharWithPerk                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkFunctionLibrary::GetHighestPerkLevelFromPlayers(TArray<class AANetworkCharacter*> Players, EPerkType PerkType, int32_t* PerkLevel, class AANetworkCharacter** CharWithPerk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.GetHighestPerkLevelFromPlayers");
		
		UPerkFunctionLibrary_GetHighestPerkLevelFromPlayers_Params params {};
		params.Players = Players;
		params.PerkType = PerkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkLevel != nullptr)
			*PerkLevel = params.PerkLevel;
		if (CharWithPerk != nullptr)
			*CharWithPerk = params.CharWithPerk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkFunctionLibrary.CharHasPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPerkType                                          Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerkFunctionLibrary::CharHasPerk(class AANetworkCharacter* Character, EPerkType Type, int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkFunctionLibrary.CharHasPerk");
		
		UPerkFunctionLibrary_CharHasPerk_Params params {};
		params.Character = Character;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PerkFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.UnequipPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkSaveGame::UnequipPerk(EPerkType Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.UnequipPerk");
		
		UPerkSaveGame_UnequipPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.SetPerkLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkSaveGame::SetPerkLevel(EPerkType Perk, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.SetPerkLevel");
		
		UPerkSaveGame_SetPerkLevel_Params params {};
		params.Perk = Perk;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.LevelUpPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkSaveGame::LevelUpPerk(EPerkType Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.LevelUpPerk");
		
		UPerkSaveGame_LevelUpPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.IsPerkTypeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerkSaveGame::IsPerkTypeSelected(EPerkType Perk, int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.IsPerkTypeSelected");
		
		UPerkSaveGame_IsPerkTypeSelected_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.GetSelectedPerkList
	 * 		Flags  -> ()
	 */
	TArray<EPerkType> UPerkSaveGame::GetSelectedPerkList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.GetSelectedPerkList");
		
		UPerkSaveGame_GetSelectedPerkList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.GetPerkLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPerkSaveGame::GetPerkLevel(EPerkType Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.GetPerkLevel");
		
		UPerkSaveGame_GetPerkLevel_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.EquipPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerkIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkSaveGame::EquipPerk(EPerkType Perk, int32_t PerkIndex, bool* IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.EquipPerk");
		
		UPerkSaveGame_EquipPerk_Params params {};
		params.Perk = Perk;
		params.PerkIndex = PerkIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipped != nullptr)
			*IsEquipped = params.IsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PerkSaveGame.Clean
	 * 		Flags  -> ()
	 */
	void UPerkSaveGame::Clean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PerkSaveGame.Clean");
		
		UPerkSaveGame_Clean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PerkSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             In_Target                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UHandMagnetComponent*>                In_HandMagnetComponents                                    (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPhonyPhysicsComponent::PseudoConstruct(class USceneComponent* In_Target, TArray<class UHandMagnetComponent*> In_HandMagnetComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.PseudoConstruct");
		
		UPhonyPhysicsComponent_PseudoConstruct_Params params {};
		params.In_Target = In_Target;
		params.In_HandMagnetComponents = In_HandMagnetComponents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetSpeed
	 * 		Flags  -> ()
	 */
	void UPhonyPhysicsComponent::OnRep_NetSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetSpeed");
		
		UPhonyPhysicsComponent_OnRep_NetSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetProgress
	 * 		Flags  -> ()
	 */
	void UPhonyPhysicsComponent::OnRep_NetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetProgress");
		
		UPhonyPhysicsComponent_OnRep_NetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetHasPassedThreshold
	 * 		Flags  -> ()
	 */
	void UPhonyPhysicsComponent::OnRep_NetHasPassedThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.OnRep_NetHasPassedThreshold");
		
		UPhonyPhysicsComponent_OnRep_NetHasPassedThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.HasPullingHands
	 * 		Flags  -> ()
	 */
	bool UPhonyPhysicsComponent::HasPullingHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.HasPullingHands");
		
		UPhonyPhysicsComponent_HasPullingHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.HasAttachedHands
	 * 		Flags  -> ()
	 */
	bool UPhonyPhysicsComponent::HasAttachedHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.HasAttachedHands");
		
		UPhonyPhysicsComponent_HasAttachedHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.GetPullAmount
	 * 		Flags  -> ()
	 */
	float UPhonyPhysicsComponent::GetPullAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.GetPullAmount");
		
		UPhonyPhysicsComponent_GetPullAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.DrawDebug
	 * 		Flags  -> ()
	 */
	void UPhonyPhysicsComponent::DrawDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.DrawDebug");
		
		UPhonyPhysicsComponent_DrawDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsComponent.Accelerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_Acceleration                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhonyPhysicsComponent::Accelerate(float DeltaTime, float In_Acceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsComponent.Accelerate");
		
		UPhonyPhysicsComponent_Accelerate_Params params {};
		params.DeltaTime = DeltaTime;
		params.In_Acceleration = In_Acceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhonyPhysicsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhonyPhysicsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PhonyPhysicsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhonyPhysicsHinge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhonyPhysicsHinge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PhonyPhysicsHinge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhonyPhysicsHingeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhonyPhysicsHingeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PhonyPhysicsHingeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SnapTargetToSpline
	 * 		Flags  -> ()
	 */
	void UPhonyPhysicsRailComponent::SnapTargetToSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SnapTargetToSpline");
		
		UPhonyPhysicsRailComponent_SnapTargetToSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhonyPhysicsRailComponent::SetSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetSpeed");
		
		UPhonyPhysicsRailComponent_SetSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhonyPhysicsRailComponent::SetDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PhonyPhysicsRailComponent.SetDistance");
		
		UPhonyPhysicsRailComponent_SetDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhonyPhysicsRailComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhonyPhysicsRailComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PhonyPhysicsRailComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeBezier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeBezier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeBezier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeCameraManager.OnUpdatePOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMinimalViewInfo                            NewPOV                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void APlaytimeCameraManager::OnUpdatePOV(const struct FMinimalViewInfo& NewPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeCameraManager.OnUpdatePOV");
		
		APlaytimeCameraManager_OnUpdatePOV_Params params {};
		params.NewPOV = NewPOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeCameraManager.BP_OnBlendComplete
	 * 		Flags  -> ()
	 */
	void APlaytimeCameraManager::BP_OnBlendComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeCameraManager.BP_OnBlendComplete");
		
		APlaytimeCameraManager_BP_OnBlendComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimeCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimeCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.ToggleWantsToBeMonster
	 * 		Flags  -> ()
	 */
	bool UPlaytimeGameInstance::ToggleWantsToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.ToggleWantsToBeMonster");
		
		UPlaytimeGameInstance_ToggleWantsToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.StartMigration
	 * 		Flags  -> ()
	 */
	void UPlaytimeGameInstance::StartMigration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.StartMigration");
		
		UPlaytimeGameInstance_StartMigration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.SetWantsToBeMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantsToBeMonster                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeGameInstance::SetWantsToBeMonster(bool bWantsToBeMonster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.SetWantsToBeMonster");
		
		UPlaytimeGameInstance_SetWantsToBeMonster_Params params {};
		params.bWantsToBeMonster = bWantsToBeMonster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.SetTransitionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETransition                                        In_TransitionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeGameInstance::SetTransitionType(ETransition In_TransitionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.SetTransitionType");
		
		UPlaytimeGameInstance_SetTransitionType_Params params {};
		params.In_TransitionType = In_TransitionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.RecieveMonsterChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSelected                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeGameInstance::RecieveMonsterChoice(bool bWasSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.RecieveMonsterChoice");
		
		UPlaytimeGameInstance_RecieveMonsterChoice_Params params {};
		params.bWasSelected = bWasSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.GetWantsToBeMonster
	 * 		Flags  -> ()
	 */
	bool UPlaytimeGameInstance::GetWantsToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.GetWantsToBeMonster");
		
		UPlaytimeGameInstance_GetWantsToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.GetQueueData
	 * 		Flags  -> ()
	 */
	struct FQueueData UPlaytimeGameInstance::GetQueueData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.GetQueueData");
		
		UPlaytimeGameInstance_GetQueueData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.GetNumberOfGamesWithoutMonster
	 * 		Flags  -> ()
	 */
	int32_t UPlaytimeGameInstance::GetNumberOfGamesWithoutMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.GetNumberOfGamesWithoutMonster");
		
		UPlaytimeGameInstance_GetNumberOfGamesWithoutMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.GetBestIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HostIP                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HostName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeGameInstance::GetBestIP(class FString* HostIP, class FString* HostName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.GetBestIP");
		
		UPlaytimeGameInstance_GetBestIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HostIP != nullptr)
			*HostIP = params.HostIP;
		if (HostName != nullptr)
			*HostName = params.HostName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.FlagHasVisitedSplashScreen
	 * 		Flags  -> ()
	 */
	void UPlaytimeGameInstance::FlagHasVisitedSplashScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.FlagHasVisitedSplashScreen");
		
		UPlaytimeGameInstance_FlagHasVisitedSplashScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameInstance.DetermineTransition
	 * 		Flags  -> ()
	 */
	void UPlaytimeGameInstance::DetermineTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameInstance.DetermineTransition");
		
		UPlaytimeGameInstance_DetermineTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimeGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimeGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.UpdateBestPotentialHost
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::UpdateBestPotentialHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.UpdateBestPotentialHost");
		
		APlaytimeGameState_UpdateBestPotentialHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.StartWaitForMigratingClientsTimer
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::StartWaitForMigratingClientsTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.StartWaitForMigratingClientsTimer");
		
		APlaytimeGameState_StartWaitForMigratingClientsTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.SaveMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeGameState::SaveMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.SaveMigrationData");
		
		APlaytimeGameState_SaveMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.PrepareLoadData
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::PrepareLoadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.PrepareLoadData");
		
		APlaytimeGameState_PrepareLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.OnRep_ProspectiveMonsters
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::OnRep_ProspectiveMonsters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.OnRep_ProspectiveMonsters");
		
		APlaytimeGameState_OnRep_ProspectiveMonsters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.Multicast_UpdateMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewIP                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HostName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeGameState::Multicast_UpdateMigrationData(const class FString& NewIP, const class FString& HostName, const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.Multicast_UpdateMigrationData");
		
		APlaytimeGameState_Multicast_UpdateMigrationData_Params params {};
		params.NewIP = NewIP;
		params.HostName = HostName;
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.Multicast_SendMonsterDecision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeGameState::Multicast_SendMonsterDecision(int32_t PlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.Multicast_SendMonsterDecision");
		
		APlaytimeGameState_Multicast_SendMonsterDecision_Params params {};
		params.PlayerID = PlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.LoadMigrationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHostMigrationData*                          Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimeGameState::LoadMigrationData(class UHostMigrationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.LoadMigrationData");
		
		APlaytimeGameState_LoadMigrationData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.GetQueueDatasAsString
	 * 		Flags  -> ()
	 */
	class FString APlaytimeGameState::GetQueueDatasAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.GetQueueDatasAsString");
		
		APlaytimeGameState_GetQueueDatasAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.CheckForMigratingPlayers
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::CheckForMigratingPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.CheckForMigratingPlayers");
		
		APlaytimeGameState_CheckForMigratingPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.BeginPlay
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::BeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.BeginPlay");
		
		APlaytimeGameState_BeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.Authority_StartUpdateHostMigrationTimer
	 * 		Flags  -> ()
	 */
	void APlaytimeGameState::Authority_StartUpdateHostMigrationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.Authority_StartUpdateHostMigrationTimer");
		
		APlaytimeGameState_Authority_StartUpdateHostMigrationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.Authority_ReceiveQueueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQueueData                                  Data                                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void APlaytimeGameState::Authority_ReceiveQueueData(int32_t PlayerID, const struct FQueueData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.Authority_ReceiveQueueData");
		
		APlaytimeGameState_Authority_ReceiveQueueData_Params params {};
		params.PlayerID = PlayerID;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeGameState.Authority_ChooseMonster
	 * 		Flags  -> ()
	 */
	class APlayerController* APlaytimeGameState::Authority_ChooseMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeGameState.Authority_ChooseMonster");
		
		APlaytimeGameState_Authority_ChooseMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimeGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimeGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.StopSpeedBoost
	 * 		Flags  -> ()
	 */
	void UPlaytimeMovementComponent::StopSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.StopSpeedBoost");
		
		UPlaytimeMovementComponent_StopSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.StartSpeedBoost
	 * 		Flags  -> ()
	 */
	void UPlaytimeMovementComponent::StartSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.StartSpeedBoost");
		
		UPlaytimeMovementComponent_StartSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.SetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_Running                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::SetRunning(bool In_Running)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.SetRunning");
		
		UPlaytimeMovementComponent_SetRunning_Params params {};
		params.In_Running = In_Running;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.SetDashDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     In_Target                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::SetDashDirection(const struct FVector& In_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.SetDashDirection");
		
		UPlaytimeMovementComponent_SetDashDirection_Params params {};
		params.In_Target = In_Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SyncStrafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Strafe                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Server_SyncStrafe(float Strafe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SyncStrafe");
		
		UPlaytimeMovementComponent_Server_SyncStrafe_Params params {};
		params.Strafe = Strafe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Server_Stun(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_Stun");
		
		UPlaytimeMovementComponent_Server_Stun_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToSwing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_Swinging                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Server_SetWantsToSwing(bool In_Swinging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToSwing");
		
		UPlaytimeMovementComponent_Server_SetWantsToSwing_Params params {};
		params.In_Swinging = In_Swinging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToDash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_WantsToDash                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Server_SetWantsToDash(bool In_WantsToDash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_SetWantsToDash");
		
		UPlaytimeMovementComponent_Server_SetWantsToDash_Params params {};
		params.In_WantsToDash = In_WantsToDash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_ActivateRoll
	 * 		Flags  -> ()
	 */
	void UPlaytimeMovementComponent::Server_ActivateRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Server_ActivateRoll");
		
		UPlaytimeMovementComponent_Server_ActivateRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.OnRep_CanRoll
	 * 		Flags  -> ()
	 */
	void UPlaytimeMovementComponent::OnRep_CanRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.OnRep_CanRoll");
		
		UPlaytimeMovementComponent_OnRep_CanRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.OnPerkSaveGameChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkPackage                                In_PerkSaveGame                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::OnPerkSaveGameChanged(const struct FPerkPackage& In_PerkSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.OnPerkSaveGameChanged");
		
		UPlaytimeMovementComponent_OnPerkSaveGameChanged_Params params {};
		params.In_PerkSaveGame = In_PerkSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SwitchSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            SplineToUse                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MinSplineSpeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MaxSpline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_SplineAcceleration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::NetworkSafe_SwitchSpline(class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SwitchSpline");
		
		UPlaytimeMovementComponent_NetworkSafe_SwitchSpline_Params params {};
		params.SplineToUse = SplineToUse;
		params.In_MinSplineSpeed = In_MinSplineSpeed;
		params.In_MaxSpline = In_MaxSpline;
		params.In_SplineAcceleration = In_SplineAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::NetworkSafe_Stun(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_Stun");
		
		UPlaytimeMovementComponent_NetworkSafe_Stun_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_WantsToSpline                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            SplineToUse                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MinSplineSpeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MaxSpline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_SplineAcceleration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::NetworkSafe_SetWantsToSpline(bool In_WantsToSpline, class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToSpline");
		
		UPlaytimeMovementComponent_NetworkSafe_SetWantsToSpline_Params params {};
		params.In_WantsToSpline = In_WantsToSpline;
		params.SplineToUse = SplineToUse;
		params.In_MinSplineSpeed = In_MinSplineSpeed;
		params.In_MaxSpline = In_MaxSpline;
		params.In_SplineAcceleration = In_SplineAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToDash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_WantsToDash                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::NetworkSafe_SetWantsToDash(bool In_WantsToDash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_SetWantsToDash");
		
		UPlaytimeMovementComponent_NetworkSafe_SetWantsToDash_Params params {};
		params.In_WantsToDash = In_WantsToDash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_ActivateRoll
	 * 		Flags  -> ()
	 */
	void UPlaytimeMovementComponent::NetworkSafe_ActivateRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.NetworkSafe_ActivateRoll");
		
		UPlaytimeMovementComponent_NetworkSafe_ActivateRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.IsRolling
	 * 		Flags  -> ()
	 */
	bool UPlaytimeMovementComponent::IsRolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.IsRolling");
		
		UPlaytimeMovementComponent_IsRolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.IsCustomMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      custom_movement_mode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlaytimeMovementComponent::IsCustomMovementMode(unsigned char custom_movement_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.IsCustomMovementMode");
		
		UPlaytimeMovementComponent_IsCustomMovementMode_Params params {};
		params.custom_movement_mode = custom_movement_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.GetSplineProgress
	 * 		Flags  -> ()
	 */
	float UPlaytimeMovementComponent::GetSplineProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.GetSplineProgress");
		
		UPlaytimeMovementComponent_GetSplineProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.GetMaxRollTime
	 * 		Flags  -> ()
	 */
	float UPlaytimeMovementComponent::GetMaxRollTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.GetMaxRollTime");
		
		UPlaytimeMovementComponent_GetMaxRollTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SyncSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             SplinePoints                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Client_SyncSpline(TArray<struct FVector> SplinePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SyncSpline");
		
		UPlaytimeMovementComponent_Client_SyncSpline_Params params {};
		params.SplinePoints = SplinePoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SwitchSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            SplineToUse                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MinSplineSpeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MaxSpline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_SplineAcceleration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Client_SwitchSpline(class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SwitchSpline");
		
		UPlaytimeMovementComponent_Client_SwitchSpline_Params params {};
		params.SplineToUse = SplineToUse;
		params.In_MinSplineSpeed = In_MinSplineSpeed;
		params.In_MaxSpline = In_MaxSpline;
		params.In_SplineAcceleration = In_SplineAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SetWantsToSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_WantsToSpline                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            SplineToUse                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MinSplineSpeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_MaxSpline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              In_SplineAcceleration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaytimeMovementComponent::Client_SetWantsToSpline(bool In_WantsToSpline, class USplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimeMovementComponent.Client_SetWantsToSpline");
		
		UPlaytimeMovementComponent_Client_SetWantsToSpline_Params params {};
		params.In_WantsToSpline = In_WantsToSpline;
		params.SplineToUse = SplineToUse;
		params.In_MinSplineSpeed = In_MinSplineSpeed;
		params.In_MaxSpline = In_MaxSpline;
		params.In_SplineAcceleration = In_SplineAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimeMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerController.ServerNotifyLoadedWorldWorkaround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WorldPackageName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerController::ServerNotifyLoadedWorldWorkaround(const class FName& WorldPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerController.ServerNotifyLoadedWorldWorkaround");
		
		APlaytimePlayerController_ServerNotifyLoadedWorldWorkaround_Params params {};
		params.WorldPackageName = WorldPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerController.Server_SetQueueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RoundsSinceLastMonster                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWantsToBeMonster                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerController::Server_SetQueueData(int32_t RoundsSinceLastMonster, bool bWantsToBeMonster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerController.Server_SetQueueData");
		
		APlaytimePlayerController_Server_SetQueueData_Params params {};
		params.RoundsSinceLastMonster = RoundsSinceLastMonster;
		params.bWantsToBeMonster = bWantsToBeMonster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.TickPuzzlesSolved
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::TickPuzzlesSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.TickPuzzlesSolved");
		
		APlaytimePlayerState_TickPuzzlesSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.TickPlayersRescued
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::TickPlayersRescued()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.TickPlayersRescued");
		
		APlaytimePlayerState_TickPlayersRescued_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.TickKills
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::TickKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.TickKills");
		
		APlaytimePlayerState_TickKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.SetEarnedTicketsWithNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbsoluteValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerState::SetEarnedTicketsWithNotify(int32_t AbsoluteValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.SetEarnedTicketsWithNotify");
		
		APlaytimePlayerState_SetEarnedTicketsWithNotify_Params params {};
		params.AbsoluteValue = AbsoluteValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.Server_CollectTicketRewardWithNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TicketRewardRowName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CallNotificationOnClient                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerState::Server_CollectTicketRewardWithNotify(const class FName& TicketRewardRowName, bool CallNotificationOnClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.Server_CollectTicketRewardWithNotify");
		
		APlaytimePlayerState_Server_CollectTicketRewardWithNotify_Params params {};
		params.TicketRewardRowName = TicketRewardRowName;
		params.CallNotificationOnClient = CallNotificationOnClient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.Server_ClearEarnedTickets
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::Server_ClearEarnedTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.Server_ClearEarnedTickets");
		
		APlaytimePlayerState_Server_ClearEarnedTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_TicketRewardableActions
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::OnRep_TicketRewardableActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_TicketRewardableActions");
		
		APlaytimePlayerState_OnRep_TicketRewardableActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_EarnedTickets
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::OnRep_EarnedTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.OnRep_EarnedTickets");
		
		APlaytimePlayerState_OnRep_EarnedTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.Client_DisplayTicketCollectionNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TicketRewardRowName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerState::Client_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.Client_DisplayTicketCollectionNotification");
		
		APlaytimePlayerState_Client_DisplayTicketCollectionNotification_Params params {};
		params.TicketRewardRowName = TicketRewardRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.Client_DepositEarnedTicketsIntoStash
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::Client_DepositEarnedTicketsIntoStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.Client_DepositEarnedTicketsIntoStash");
		
		APlaytimePlayerState_Client_DepositEarnedTicketsIntoStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.BP_OnRep_EarnedTickets
	 * 		Flags  -> ()
	 */
	void APlaytimePlayerState::BP_OnRep_EarnedTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.BP_OnRep_EarnedTickets");
		
		APlaytimePlayerState_BP_OnRep_EarnedTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.BP_DisplayTicketCollectionNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TicketRewardRowName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerState::BP_DisplayTicketCollectionNotification(const class FName& TicketRewardRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.BP_DisplayTicketCollectionNotification");
		
		APlaytimePlayerState_BP_DisplayTicketCollectionNotification_Params params {};
		params.TicketRewardRowName = TicketRewardRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PlaytimePlayerState.AddToDamageDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlaytimePlayerState::AddToDamageDone(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PlaytimePlayerState.AddToDamageDone");
		
		APlaytimePlayerState_AddToDamageDone_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaytimePlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaytimePlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PlaytimePlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PromptGenerator.GetPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PromptPrefix                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        PromptSuffix                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               CanPrompt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPromptGenerator::GetPrompt(class FText* PromptPrefix, class FText* PromptSuffix, bool* CanPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PromptGenerator.GetPrompt");
		
		UPromptGenerator_GetPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PromptPrefix != nullptr)
			*PromptPrefix = params.PromptPrefix;
		if (PromptSuffix != nullptr)
			*PromptSuffix = params.PromptSuffix;
		if (CanPrompt != nullptr)
			*CanPrompt = params.CanPrompt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPromptGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPromptGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PromptGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APseudoHand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APseudoHand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PseudoHand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMazeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMazeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MazeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMazeMeshes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMazeMeshes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.MazeMeshes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPuzzleMazeComponent::TimelineProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineProgress");
		
		UPuzzleMazeComponent_TimelineProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineEnded
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::TimelineEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.TimelineEnded");
		
		UPuzzleMazeComponent_TimelineEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.StartMaze
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InitialSpeed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPuzzleMazeComponent::StartMaze(float InitialSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.StartMaze");
		
		UPuzzleMazeComponent_StartMaze_Params params {};
		params.InitialSpeed = InitialSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.Rotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clockwise                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPuzzleMazeComponent::Rotate(bool Clockwise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.Rotate");
		
		UPuzzleMazeComponent_Rotate_Params params {};
		params.Clockwise = Clockwise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_Orientation
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::OnRep_Orientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_Orientation");
		
		UPuzzleMazeComponent_OnRep_Orientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_MazeChoice
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::OnRep_MazeChoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_MazeChoice");
		
		UPuzzleMazeComponent_OnRep_MazeChoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_IsComplete
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::OnRep_IsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.OnRep_IsComplete");
		
		UPuzzleMazeComponent_OnRep_IsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.Multicast_ResetMaze
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::Multicast_ResetMaze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.Multicast_ResetMaze");
		
		UPuzzleMazeComponent_Multicast_ResetMaze_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.MoveBallPhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPuzzleMazeComponent::MoveBallPhysics(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.MoveBallPhysics");
		
		UPuzzleMazeComponent_MoveBallPhysics_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.IsInProgress
	 * 		Flags  -> ()
	 */
	bool UPuzzleMazeComponent::IsInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.IsInProgress");
		
		UPuzzleMazeComponent_IsInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetSplinePointAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSplinePoint UPuzzleMazeComponent::GetSplinePointAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetSplinePointAt");
		
		UPuzzleMazeComponent_GetSplinePointAt_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetScaledBallSpeed
	 * 		Flags  -> ()
	 */
	float UPuzzleMazeComponent::GetScaledBallSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetScaledBallSpeed");
		
		UPuzzleMazeComponent_GetScaledBallSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetMeshDataFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMazeComponentType                                 Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ring                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Flipped                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShouldMakeCurve                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurveRotation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPuzzleMazeComponent::GetMeshDataFor(int32_t Index, EMazeComponentType* Type, int32_t* Ring, float* Rotation, bool* Flipped, bool* ShouldMakeCurve, float* CurveRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetMeshDataFor");
		
		UPuzzleMazeComponent_GetMeshDataFor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (Ring != nullptr)
			*Ring = params.Ring;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (Flipped != nullptr)
			*Flipped = params.Flipped;
		if (ShouldMakeCurve != nullptr)
			*ShouldMakeCurve = params.ShouldMakeCurve;
		if (CurveRotation != nullptr)
			*CurveRotation = params.CurveRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetLocationOfIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPuzzleMazeComponent::GetLocationOfIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetLocationOfIndex");
		
		UPuzzleMazeComponent_GetLocationOfIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetDesiredPosition
	 * 		Flags  -> ()
	 */
	struct FIntPoint UPuzzleMazeComponent::GetDesiredPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetDesiredPosition");
		
		UPuzzleMazeComponent_GetDesiredPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.GetBallPosition
	 * 		Flags  -> ()
	 */
	struct FVector UPuzzleMazeComponent::GetBallPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.GetBallPosition");
		
		UPuzzleMazeComponent_GetBallPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.FindBallTarget
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::FindBallTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.FindBallTarget");
		
		UPuzzleMazeComponent_FindBallTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.BP_Rotate_Sound_Trigger
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::BP_Rotate_Sound_Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.BP_Rotate_Sound_Trigger");
		
		UPuzzleMazeComponent_BP_Rotate_Sound_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.PuzzleMazeComponent.Authority_ResetMaze
	 * 		Flags  -> ()
	 */
	void UPuzzleMazeComponent::Authority_ResetMaze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.PuzzleMazeComponent.Authority_ResetMaze");
		
		UPuzzleMazeComponent_Authority_ResetMaze_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPuzzleMazeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPuzzleMazeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PuzzleMazeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPuzzleList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPuzzleList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PuzzleList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APuzzlePillar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APuzzlePillar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PuzzlePillar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.Server_DoSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USabotageComponent::Server_DoSabotage(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.Server_DoSabotage");
		
		USabotageComponent_Server_DoSabotage_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.Sabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USabotageComponent::Sabotage(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.Sabotage");
		
		USabotageComponent_Sabotage_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.Multicast_SabotageFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USabotageComponent::Multicast_SabotageFX(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.Multicast_SabotageFX");
		
		USabotageComponent_Multicast_SabotageFX_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.Multicast_DoSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USabotageComponent::Multicast_DoSabotage(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.Multicast_DoSabotage");
		
		USabotageComponent_Multicast_DoSabotage_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.EndCooldown
	 * 		Flags  -> ()
	 */
	void USabotageComponent::EndCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.EndCooldown");
		
		USabotageComponent_EndCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.DoSabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USabotageComponent::DoSabotage(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.DoSabotage");
		
		USabotageComponent_DoSabotage_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SabotageComponent.BP_SabotageFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SabotageName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USabotageComponent::BP_SabotageFX(const class FName& SabotageName, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SabotageComponent.BP_SabotageFX");
		
		USabotageComponent_BP_SabotageFX_Params params {};
		params.SabotageName = SabotageName;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USabotageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USabotageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SabotageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USabotageSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USabotageSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SabotageSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetVSyncEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetVSyncEnabled(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetVSyncEnabled");
		
		USettingsFunctionLibrary_SetVSyncEnabled_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetViewDistanceQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetViewDistanceQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetViewDistanceQuality");
		
		USettingsFunctionLibrary_SetViewDistanceQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetTextureQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetTextureQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetTextureQuality");
		
		USettingsFunctionLibrary_SetTextureQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShadowQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetShadowQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShadowQuality");
		
		USettingsFunctionLibrary_SetShadowQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShaderQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetShaderQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetShaderQuality");
		
		USettingsFunctionLibrary_SetShaderQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolutionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetResolutionScale(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolutionScale");
		
		USettingsFunctionLibrary_SetResolutionScale_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   In_Resolution                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetResolution(const struct FIntPoint& In_Resolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetResolution");
		
		USettingsFunctionLibrary_SetResolution_Params params {};
		params.In_Resolution = In_Resolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetPostProcessQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetPostProcessQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetPostProcessQuality");
		
		USettingsFunctionLibrary_SetPostProcessQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFullscreenMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowMode                                        InFullscreenMode                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetFullscreenMode(EWindowMode InFullscreenMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFullscreenMode");
		
		USettingsFunctionLibrary_SetFullscreenMode_Params params {};
		params.InFullscreenMode = InFullscreenMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFrameRateLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetFrameRateLimit(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetFrameRateLimit");
		
		USettingsFunctionLibrary_SetFrameRateLimit_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SetAntiAliasingQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsFunctionLibrary::SetAntiAliasingQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SetAntiAliasingQuality");
		
		USettingsFunctionLibrary_SetAntiAliasingQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.SaveAndApplySettings
	 * 		Flags  -> ()
	 */
	void USettingsFunctionLibrary::SaveAndApplySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.SaveAndApplySettings");
		
		USettingsFunctionLibrary_SaveAndApplySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.RevertToDefaults
	 * 		Flags  -> ()
	 */
	void USettingsFunctionLibrary::RevertToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.RevertToDefaults");
		
		USettingsFunctionLibrary_RevertToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.PreloadResolutionSettings
	 * 		Flags  -> ()
	 */
	void USettingsFunctionLibrary::PreloadResolutionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.PreloadResolutionSettings");
		
		USettingsFunctionLibrary_PreloadResolutionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.GetRecommendedResolutions
	 * 		Flags  -> ()
	 */
	TArray<struct FIntPoint> USettingsFunctionLibrary::GetRecommendedResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.GetRecommendedResolutions");
		
		USettingsFunctionLibrary_GetRecommendedResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.GetPrimaryGPUBrand
	 * 		Flags  -> ()
	 */
	class FString USettingsFunctionLibrary::GetPrimaryGPUBrand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.GetPrimaryGPUBrand");
		
		USettingsFunctionLibrary_GetPrimaryGPUBrand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsFunctionLibrary.AreSettingsDirty
	 * 		Flags  -> ()
	 */
	bool USettingsFunctionLibrary::AreSettingsDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsFunctionLibrary.AreSettingsDirty");
		
		USettingsFunctionLibrary_AreSettingsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USettingsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SettingsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetSFXVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In_SFXVolume                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_SFXVolume                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetSFXVolume(int32_t In_SFXVolume, float* Out_SFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetSFXVolume");
		
		USettingsSaveGame_SetSFXVolume_Params params {};
		params.In_SFXVolume = In_SFXVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_SFXVolume != nullptr)
			*Out_SFXVolume = params.Out_SFXVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetMusicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In_MusicVolume                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_MusicVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetMusicVolume(int32_t In_MusicVolume, float* Out_MusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetMusicVolume");
		
		USettingsSaveGame_SetMusicVolume_Params params {};
		params.In_MusicVolume = In_MusicVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_MusicVolume != nullptr)
			*Out_MusicVolume = params.Out_MusicVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetMainVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In_MainVolume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_MainVolume                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetMainVolume(int32_t In_MainVolume, float* Out_MainVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetMainVolume");
		
		USettingsSaveGame_SetMainVolume_Params params {};
		params.In_MainVolume = In_MainVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_MainVolume != nullptr)
			*Out_MainVolume = params.Out_MainVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetGrabpackVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In_GrabpackVolume                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_GrabpackVolume                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetGrabpackVolume(int32_t In_GrabpackVolume, float* Out_GrabpackVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetGrabpackVolume");
		
		USettingsSaveGame_SetGrabpackVolume_Params params {};
		params.In_GrabpackVolume = In_GrabpackVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_GrabpackVolume != nullptr)
			*Out_GrabpackVolume = params.Out_GrabpackVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In_Strength                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_Strength                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetColorblindStrength(float In_Strength, float* Out_Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindStrength");
		
		USettingsSaveGame_SetColorblindStrength_Params params {};
		params.In_Strength = In_Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Strength != nullptr)
			*Out_Strength = params.Out_Strength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            In_Mode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Out_Mode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::SetColorblindMode(int32_t In_Mode, int32_t* Out_Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.SetColorblindMode");
		
		USettingsSaveGame_SetColorblindMode_Params params {};
		params.In_Mode = In_Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Mode != nullptr)
			*Out_Mode = params.Out_Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.ApplyCustomScalabilitySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameUserSettings*                           Settings                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsSaveGame::ApplyCustomScalabilitySettings(class UGameUserSettings* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.ApplyCustomScalabilitySettings");
		
		USettingsSaveGame_ApplyCustomScalabilitySettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SettingsSaveGame.ApplyColorblind
	 * 		Flags  -> ()
	 */
	void USettingsSaveGame::ApplyColorblind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SettingsSaveGame.ApplyColorblind");
		
		USettingsSaveGame_ApplyColorblind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USettingsSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SettingsSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.OpenDoor
	 * 		Flags  -> ()
	 */
	void ASlidingDoor::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.OpenDoor");
		
		ASlidingDoor_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.GetProgress
	 * 		Flags  -> ()
	 */
	float ASlidingDoor::GetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.GetProgress");
		
		ASlidingDoor_GetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.CloseDoor
	 * 		Flags  -> ()
	 */
	void ASlidingDoor::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.CloseDoor");
		
		ASlidingDoor_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.ChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDoorState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASlidingDoor::ChangeState(EDoorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.ChangeState");
		
		ASlidingDoor_ChangeState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.BP_UpdateVisuals
	 * 		Flags  -> ()
	 */
	void ASlidingDoor::BP_UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.BP_UpdateVisuals");
		
		ASlidingDoor_BP_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SlidingDoor.BP_ChangedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDoorState                                         PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDoorState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASlidingDoor::BP_ChangedState(EDoorState PreviousState, EDoorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SlidingDoor.BP_ChangedState");
		
		ASlidingDoor_BP_ChangedState_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASlidingDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASlidingDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SlidingDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SoundPack.ResolveSoundPackReference
	 * 		Flags  -> ()
	 */
	class USoundBase* USoundPack::ResolveSoundPackReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SoundPack.ResolveSoundPackReference");
		
		USoundPack_ResolveSoundPackReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SoundPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmbiencePack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbiencePack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.AmbiencePack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTenseMusicPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTenseMusicPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TenseMusicPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaseMusicPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaseMusicPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.ChaseMusicPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULobbyMusicPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobbyMusicPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.LobbyMusicPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPuzzleSoundPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPuzzleSoundPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.PuzzleSoundPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorSoundPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorSoundPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SurvivorSoundPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SoundPackSaveGame.SetSelectedPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESoundPackType                                     SoundPackType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundPackSaveGame::SetSelectedPack(ESoundPackType SoundPackType, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SoundPackSaveGame.SetSelectedPack");
		
		USoundPackSaveGame_SetSelectedPack_Params params {};
		params.SoundPackType = SoundPackType;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SoundPackSaveGame.SaveSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundPackSaveGame*                          In_SaveGame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundPackSaveGame::SaveSounds(class USoundPackSaveGame* In_SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SoundPackSaveGame.SaveSounds");
		
		USoundPackSaveGame_SaveSounds_Params params {};
		params.In_SaveGame = In_SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SoundPackSaveGame.LoadSounds
	 * 		Flags  -> ()
	 */
	class USoundPackSaveGame* USoundPackSaveGame::LoadSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SoundPackSaveGame.LoadSounds");
		
		USoundPackSaveGame_LoadSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.SoundPackSaveGame.GetSelectedSoundPackData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESoundPackType                                     SoundPackType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSoundPackEntry USoundPackSaveGame::GetSelectedSoundPackData(ESoundPackType SoundPackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.SoundPackSaveGame.GetSelectedSoundPackData");
		
		USoundPackSaveGame_GetSelectedSoundPackData_Params params {};
		params.SoundPackType = SoundPackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundPackSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundPackSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.SoundPackSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.UpdateCalculations
	 * 		Flags  -> ()
	 */
	void UStatsCoreFunctionLibrary::UpdateCalculations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.UpdateCalculations");
		
		UStatsCoreFunctionLibrary_UpdateCalculations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementRandomStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERandomStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::IncrementRandomStat(float Amount, ERandomStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementRandomStat");
		
		UStatsCoreFunctionLibrary_IncrementRandomStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementPlayerStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPlayerStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::IncrementPlayerStat(float Amount, EPlayerStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementPlayerStat");
		
		UStatsCoreFunctionLibrary_IncrementPlayerStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementMommyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMommyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::IncrementMommyStat(float Amount, EMommyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementMommyStat");
		
		UStatsCoreFunctionLibrary_IncrementMommyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementHuggyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHuggyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::IncrementHuggyStat(float Amount, EHuggyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementHuggyStat");
		
		UStatsCoreFunctionLibrary_IncrementHuggyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementBoxyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoxyStatistics                                    Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::IncrementBoxyStat(float Amount, EBoxyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.IncrementBoxyStat");
		
		UStatsCoreFunctionLibrary_IncrementBoxyStat_Params params {};
		params.Amount = Amount;
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatistics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStatisticCategory                                 Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, class FString> UStatsCoreFunctionLibrary::GetStatistics(EStatisticCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatistics");
		
		UStatsCoreFunctionLibrary_GetStatistics_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatisticNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStatisticCategory                                 Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::GetStatisticNames(EStatisticCategory Category, TArray<class FString>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStatisticNames");
		
		UStatsCoreFunctionLibrary_GetStatisticNames_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Category                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatisticName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetStat(const class FString& Category, const class FString& StatisticName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetStat");
		
		UStatsCoreFunctionLibrary_GetStat_Params params {};
		params.Category = Category;
		params.StatisticName = StatisticName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERandomStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetRandomStatF(ERandomStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStatF");
		
		UStatsCoreFunctionLibrary_GetRandomStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERandomStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetRandomStat(ERandomStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetRandomStat");
		
		UStatsCoreFunctionLibrary_GetRandomStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetPlayerStatF(EPlayerStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStatF");
		
		UStatsCoreFunctionLibrary_GetPlayerStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStatistics                                  Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetPlayerStat(EPlayerStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetPlayerStat");
		
		UStatsCoreFunctionLibrary_GetPlayerStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMonsterStatistics                                 Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetMonsterStatF(EMonsterStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStatF");
		
		UStatsCoreFunctionLibrary_GetMonsterStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMonsterStatistics                                 Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetMonsterStat(EMonsterStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMonsterStat");
		
		UStatsCoreFunctionLibrary_GetMonsterStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMommyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetMommyStatF(EMommyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStatF");
		
		UStatsCoreFunctionLibrary_GetMommyStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMommyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetMommyStat(EMommyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetMommyStat");
		
		UStatsCoreFunctionLibrary_GetMommyStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHuggyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetHuggyStatF(EHuggyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStatF");
		
		UStatsCoreFunctionLibrary_GetHuggyStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHuggyStatistics                                   Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetHuggyStat(EHuggyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetHuggyStat");
		
		UStatsCoreFunctionLibrary_GetHuggyStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGeneralStatistics                                 Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetGeneralStatF(EGeneralStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStatF");
		
		UStatsCoreFunctionLibrary_GetGeneralStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGeneralStatistics                                 Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetGeneralStat(EGeneralStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetGeneralStat");
		
		UStatsCoreFunctionLibrary_GetGeneralStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<EStatisticCategory>                         Categories                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UStatsCoreFunctionLibrary::GetCategories(TArray<class FString>* Names, TArray<EStatisticCategory>* Categories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetCategories");
		
		UStatsCoreFunctionLibrary_GetCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
		if (Categories != nullptr)
			*Categories = params.Categories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStatF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBoxyStatistics                                    Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsCoreFunctionLibrary::GetBoxyStatF(EBoxyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStatF");
		
		UStatsCoreFunctionLibrary_GetBoxyStatF_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBoxyStatistics                                    Stat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UStatsCoreFunctionLibrary::GetBoxyStat(EBoxyStatistics Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.StatsCoreFunctionLibrary.GetBoxyStat");
		
		UStatsCoreFunctionLibrary_GetBoxyStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatsCoreFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsCoreFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.StatsCoreFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYellowConnectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYellowConnectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.YellowConnectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextConnectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextConnectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TextConnectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketFunctionLibrary.TryPurchaseItemWithTickets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PriceOfItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTicketFunctionLibrary::TryPurchaseItemWithTickets(int32_t PriceOfItem, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketFunctionLibrary.TryPurchaseItemWithTickets");
		
		UTicketFunctionLibrary_TryPurchaseItemWithTickets_Params params {};
		params.PriceOfItem = PriceOfItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketFunctionLibrary.SaveTicketSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTicketSaveGame*                             TicketSaveGame                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTicketFunctionLibrary::SaveTicketSaveGame(class UTicketSaveGame* TicketSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketFunctionLibrary.SaveTicketSaveGame");
		
		UTicketFunctionLibrary_SaveTicketSaveGame_Params params {};
		params.TicketSaveGame = TicketSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketFunctionLibrary.LoadTicketSaveGame
	 * 		Flags  -> ()
	 */
	class UTicketSaveGame* UTicketFunctionLibrary::LoadTicketSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketFunctionLibrary.LoadTicketSaveGame");
		
		UTicketFunctionLibrary_LoadTicketSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketFunctionLibrary.GetTicketSaveGameSlotName
	 * 		Flags  -> ()
	 */
	class FString UTicketFunctionLibrary::GetTicketSaveGameSlotName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketFunctionLibrary.GetTicketSaveGameSlotName");
		
		UTicketFunctionLibrary_GetTicketSaveGameSlotName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketFunctionLibrary.CalculateTicketRewardFromEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  TicketRewardsDataTable                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTicketRewardableAction                     TicketRewardableAction                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTicketReward                               Out_Reward                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	int32_t UTicketFunctionLibrary::CalculateTicketRewardFromEntries(class UDataTable* TicketRewardsDataTable, const struct FTicketRewardableAction& TicketRewardableAction, struct FTicketReward* Out_Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketFunctionLibrary.CalculateTicketRewardFromEntries");
		
		UTicketFunctionLibrary_CalculateTicketRewardFromEntries_Params params {};
		params.TicketRewardsDataTable = TicketRewardsDataTable;
		params.TicketRewardableAction = TicketRewardableAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Reward != nullptr)
			*Out_Reward = params.Out_Reward;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TicketFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketSaveGame.SetTicketCountClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbsoluteValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTicketSaveGame::SetTicketCountClamped(int32_t AbsoluteValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketSaveGame.SetTicketCountClamped");
		
		UTicketSaveGame_SetTicketCountClamped_Params params {};
		params.AbsoluteValue = AbsoluteValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketSaveGame.RemoveFromTicketCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTicketSaveGame::RemoveFromTicketCount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketSaveGame.RemoveFromTicketCount");
		
		UTicketSaveGame_RemoveFromTicketCount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketSaveGame.GetTicketCount
	 * 		Flags  -> ()
	 */
	int32_t UTicketSaveGame::GetTicketCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketSaveGame.GetTicketCount");
		
		UTicketSaveGame_GetTicketCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TicketSaveGame.AddToTicketCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTicketSaveGame::AddToTicketCount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TicketSaveGame.AddToTicketCount");
		
		UTicketSaveGame_AddToTicketCount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TicketSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TooltipComponent.StartUpdateTimer
	 * 		Flags  -> ()
	 */
	void UTooltipComponent::StartUpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TooltipComponent.StartUpdateTimer");
		
		UTooltipComponent_StartUpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TooltipComponent.ShowTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipComponent::ShowTooltip(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TooltipComponent.ShowTooltip");
		
		UTooltipComponent_ShowTooltip_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TooltipComponent.RetryTooltip
	 * 		Flags  -> ()
	 */
	void UTooltipComponent::RetryTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TooltipComponent.RetryTooltip");
		
		UTooltipComponent_RetryTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TooltipComponent.ClearUpdateTimer
	 * 		Flags  -> ()
	 */
	void UTooltipComponent::ClearUpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TooltipComponent.ClearUpdateTimer");
		
		UTooltipComponent_ClearUpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTooltipComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTooltipComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TooltipComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTooltipSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTooltipSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TooltipSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TrainStation.PseudoConstruct
	 * 		Flags  -> ()
	 */
	void ATrainStation::PseudoConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TrainStation.PseudoConstruct");
		
		ATrainStation_PseudoConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TrainStation.GetStopLocation
	 * 		Flags  -> ()
	 */
	float ATrainStation::GetStopLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TrainStation.GetStopLocation");
		
		ATrainStation_GetStopLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.TrainStation.GetFullCartCount
	 * 		Flags  -> ()
	 */
	int32_t ATrainStation::GetFullCartCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.TrainStation.GetFullCartCount");
		
		ATrainStation_GetFullCartCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrainStation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainStation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.TrainStation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUFistRigPackageComponent::Server_TryExtendHand(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryExtendHand");
		
		UUFistRigPackageComponent_Server_TryExtendHand_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryDetachAndRetractHand
	 * 		Flags  -> ()
	 */
	void UUFistRigPackageComponent::Server_TryDetachAndRetractHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Server_TryDetachAndRetractHand");
		
		UUFistRigPackageComponent_Server_TryDetachAndRetractHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Server_StartRetractBackwards
	 * 		Flags  -> ()
	 */
	void UUFistRigPackageComponent::Server_StartRetractBackwards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Server_StartRetractBackwards");
		
		UUFistRigPackageComponent_Server_StartRetractBackwards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Server_BroadcastFistStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFistState                                         State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUFistRigPackageComponent::Server_BroadcastFistStateChange(EFistState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Server_BroadcastFistStateChange");
		
		UUFistRigPackageComponent_Server_BroadcastFistStateChange_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUFistRigPackageComponent::Multicast_TryExtendHand(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryExtendHand");
		
		UUFistRigPackageComponent_Multicast_TryExtendHand_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryDetachAndRetractHand
	 * 		Flags  -> ()
	 */
	void UUFistRigPackageComponent::Multicast_TryDetachAndRetractHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_TryDetachAndRetractHand");
		
		UUFistRigPackageComponent_Multicast_TryDetachAndRetractHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_StartRetractBackwards
	 * 		Flags  -> ()
	 */
	void UUFistRigPackageComponent::Multicast_StartRetractBackwards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_StartRetractBackwards");
		
		UUFistRigPackageComponent_Multicast_StartRetractBackwards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_ExtensionIsComplete
	 * 		Flags  -> ()
	 */
	void UUFistRigPackageComponent::Multicast_ExtensionIsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_ExtensionIsComplete");
		
		UUFistRigPackageComponent_Multicast_ExtensionIsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_BroadcastFistStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFistState                                         State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUFistRigPackageComponent::Multicast_BroadcastFistStateChange(EFistState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UFistRigPackageComponent.Multicast_BroadcastFistStateChange");
		
		UUFistRigPackageComponent_Multicast_BroadcastFistStateChange_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUFistRigPackageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUFistRigPackageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.UFistRigPackageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.SetRopeComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             TP_Rope                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::SetRopeComponent(class USceneComponent* TP_Rope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.SetRopeComponent");
		
		UUHandRigPackageComponent_SetRopeComponent_Params params {};
		params.TP_Rope = TP_Rope;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         FromLocation                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         ToLocation                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Server_TryExtendHand(const struct FVector_NetQuantize& FromLocation, const struct FVector_NetQuantize& ToLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryExtendHand");
		
		UUHandRigPackageComponent_Server_TryExtendHand_Params params {};
		params.FromLocation = FromLocation;
		params.ToLocation = ToLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryDetachAndRetractHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetRole                                           CallerLocalRole                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Server_TryDetachAndRetractHand(ENetRole CallerLocalRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Server_TryDetachAndRetractHand");
		
		UUHandRigPackageComponent_Server_TryDetachAndRetractHand_Params params {};
		params.CallerLocalRole = CallerLocalRole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Server_StartRetractBackwards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedsGrabbedPrimitiveToRetract                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SetHasBeenCancelled                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CanTriggerStartedPulling                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Server_StartRetractBackwards(bool NeedsGrabbedPrimitiveToRetract, bool SetHasBeenCancelled, bool CanTriggerStartedPulling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Server_StartRetractBackwards");
		
		UUHandRigPackageComponent_Server_StartRetractBackwards_Params params {};
		params.NeedsGrabbedPrimitiveToRetract = NeedsGrabbedPrimitiveToRetract;
		params.SetHasBeenCancelled = SetHasBeenCancelled;
		params.CanTriggerStartedPulling = CanTriggerStartedPulling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Server_SetOwningClientDesiredHandState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandStateChange                                   State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Server_SetOwningClientDesiredHandState(EHandStateChange State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Server_SetOwningClientDesiredHandState");
		
		UUHandRigPackageComponent_Server_SetOwningClientDesiredHandState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Server_BroadcastHandStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandStateChange                                   State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Server_BroadcastHandStateChange(EHandStateChange State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Server_BroadcastHandStateChange");
		
		UUHandRigPackageComponent_Server_BroadcastHandStateChange_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         FromLocation                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         ToLocation                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Multicast_TryExtendHand(const struct FVector_NetQuantize& FromLocation, const struct FVector_NetQuantize& ToLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryExtendHand");
		
		UUHandRigPackageComponent_Multicast_TryExtendHand_Params params {};
		params.FromLocation = FromLocation;
		params.ToLocation = ToLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryDetachAndRetractHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetRole                                           CallerLocalRole                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Multicast_TryDetachAndRetractHand(ENetRole CallerLocalRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_TryDetachAndRetractHand");
		
		UUHandRigPackageComponent_Multicast_TryDetachAndRetractHand_Params params {};
		params.CallerLocalRole = CallerLocalRole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_StartRetractBackwards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedsGrabbedPrimitiveToRetract                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SetHasBeenCancelled                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CanTriggerStartedPulling                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUHandRigPackageComponent::Multicast_StartRetractBackwards(bool NeedsGrabbedPrimitiveToRetract, bool SetHasBeenCancelled, bool CanTriggerStartedPulling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_StartRetractBackwards");
		
		UUHandRigPackageComponent_Multicast_StartRetractBackwards_Params params {};
		params.NeedsGrabbedPrimitiveToRetract = NeedsGrabbedPrimitiveToRetract;
		params.SetHasBeenCancelled = SetHasBeenCancelled;
		params.CanTriggerStartedPulling = CanTriggerStartedPulling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_ExtensionIsComplete
	 * 		Flags  -> ()
	 */
	void UUHandRigPackageComponent::Multicast_ExtensionIsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.Multicast_ExtensionIsComplete");
		
		UUHandRigPackageComponent_Multicast_ExtensionIsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.GetRopeStart
	 * 		Flags  -> ()
	 */
	class USceneComponent* UUHandRigPackageComponent::GetRopeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.GetRopeStart");
		
		UUHandRigPackageComponent_GetRopeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.UHandRigPackageComponent.CheckWire
	 * 		Flags  -> ()
	 */
	void UUHandRigPackageComponent::CheckWire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.UHandRigPackageComponent.CheckWire");
		
		UUHandRigPackageComponent_CheckWire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUHandRigPackageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUHandRigPackageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.UHandRigPackageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUNetworkGrabComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUNetworkGrabComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.UNetworkGrabComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkPhysicsGrabComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkPhysicsGrabComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.NetworkPhysicsGrabComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOutfitSkinAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOutfitSkinAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.OutfitSkinAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWallMobilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWallMobilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.WallMobilityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.UpdateOldestPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWhackAWuggySpawnPoint::UpdateOldestPlayer(class AANetworkCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.UpdateOldestPlayer");
		
		AWhackAWuggySpawnPoint_UpdateOldestPlayer_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoSpawnWuggy
	 * 		Flags  -> ()
	 */
	bool AWhackAWuggySpawnPoint::PseudoSpawnWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoSpawnWuggy");
		
		AWhackAWuggySpawnPoint_PseudoSpawnWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoDestroyWuggy
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::PseudoDestroyWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoDestroyWuggy");
		
		AWhackAWuggySpawnPoint_PseudoDestroyWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHandMagnetComponent*                        In_WuggyHandMagnet                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      In_Wuggy                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWhackAWuggySpawnPoint::PseudoConstruct(class UHandMagnetComponent* In_WuggyHandMagnet, class USkeletalMeshComponent* In_Wuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PseudoConstruct");
		
		AWhackAWuggySpawnPoint_PseudoConstruct_Params params {};
		params.In_WuggyHandMagnet = In_WuggyHandMagnet;
		params.In_Wuggy = In_Wuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PrePseudoDestroyWuggy
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::PrePseudoDestroyWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.PrePseudoDestroyWuggy");
		
		AWhackAWuggySpawnPoint_PrePseudoDestroyWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.OnRep_WuggyIsSpawned
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::OnRep_WuggyIsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.OnRep_WuggyIsSpawned");
		
		AWhackAWuggySpawnPoint_OnRep_WuggyIsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_WuggySpawned
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::BP_WuggySpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_WuggySpawned");
		
		AWhackAWuggySpawnPoint_BP_WuggySpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_Server_WuggyKillPlayer
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::BP_Server_WuggyKillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_Server_WuggyKillPlayer");
		
		AWhackAWuggySpawnPoint_BP_Server_WuggyKillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_OnRep_WuggyIsSpawned
	 * 		Flags  -> ()
	 */
	void AWhackAWuggySpawnPoint::BP_OnRep_WuggyIsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WhackAWuggySpawnPoint.BP_OnRep_WuggyIsSpawned");
		
		AWhackAWuggySpawnPoint_BP_OnRep_WuggyIsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWhackAWuggySpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWhackAWuggySpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.WhackAWuggySpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.ReturnOldestPlayer
	 * 		Flags  -> ()
	 */
	class AANetworkCharacter* AWuggyHole::ReturnOldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.ReturnOldestPlayer");
		
		AWuggyHole_ReturnOldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.RemoveAndReturnOldestPlayer
	 * 		Flags  -> ()
	 */
	class AANetworkCharacter* AWuggyHole::RemoveAndReturnOldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.RemoveAndReturnOldestPlayer");
		
		AWuggyHole_RemoveAndReturnOldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.OnRep_OldestPlayer
	 * 		Flags  -> ()
	 */
	void AWuggyHole::OnRep_OldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.OnRep_OldestPlayer");
		
		AWuggyHole_OnRep_OldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.Multicast_EndMiniGame
	 * 		Flags  -> ()
	 */
	void AWuggyHole::Multicast_EndMiniGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.Multicast_EndMiniGame");
		
		AWuggyHole_Multicast_EndMiniGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.EndMiniGame
	 * 		Flags  -> ()
	 */
	void AWuggyHole::EndMiniGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.EndMiniGame");
		
		AWuggyHole_EndMiniGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.CleanPlayingCharacters
	 * 		Flags  -> ()
	 */
	void AWuggyHole::CleanPlayingCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.CleanPlayingCharacters");
		
		AWuggyHole_CleanPlayingCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.BP_OnRep_OldestPlayer
	 * 		Flags  -> ()
	 */
	void AWuggyHole::BP_OnRep_OldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.BP_OnRep_OldestPlayer");
		
		AWuggyHole_BP_OnRep_OldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.BP_AuthorityEndMinigame
	 * 		Flags  -> ()
	 */
	void AWuggyHole::BP_AuthorityEndMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.BP_AuthorityEndMinigame");
		
		AWuggyHole_BP_AuthorityEndMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.BP_AuthorityBeginMinigame
	 * 		Flags  -> ()
	 */
	void AWuggyHole::BP_AuthorityBeginMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.BP_AuthorityBeginMinigame");
		
		AWuggyHole_BP_AuthorityBeginMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.Authority_SpawnWuggy
	 * 		Flags  -> ()
	 */
	void AWuggyHole::Authority_SpawnWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.Authority_SpawnWuggy");
		
		AWuggyHole_Authority_SpawnWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.Authority_EndMiniGame
	 * 		Flags  -> ()
	 */
	void AWuggyHole::Authority_EndMiniGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.Authority_EndMiniGame");
		
		AWuggyHole_Authority_EndMiniGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_Multiplayer.WuggyHole.AddNewPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AddAtFront                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWuggyHole::AddNewPlayer(class AANetworkCharacter* Player, bool AddAtFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_Multiplayer.WuggyHole.AddNewPlayer");
		
		AWuggyHole_AddNewPlayer_Params params {};
		params.Player = Player;
		params.AddAtFront = AddAtFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWuggyHole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWuggyHole::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.WuggyHole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYellowHandMagnetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYellowHandMagnetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Playtime_Multiplayer.YellowHandMagnetComponent");
		return ptr;
	}

}


