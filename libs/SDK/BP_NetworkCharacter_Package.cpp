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
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_SelectedSoundsPackage
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_SelectedSoundsPackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_SelectedSoundsPackage");
		
		ABP_NetworkCharacter_C_OnRep_SelectedSoundsPackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PromptPrefix                                               (Parm, OutParm)
	 * 		class FText                                        PromptSuffix                                               (Parm, OutParm)
	 * 		bool                                               CanPrompt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::GetPrompt(class FText* PromptPrefix, class FText* PromptSuffix, bool* CanPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPrompt");
		
		ABP_NetworkCharacter_C_GetPrompt_Params params {};
		
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
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Update Cosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkCharacter_C::UpdateCosmetics(const struct FPresetSlot& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Update Cosmetics");
		
		ABP_NetworkCharacter_C_UpdateCosmetics_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerOnTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::IsPlayerOnTrain(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerOnTrain");
		
		ABP_NetworkCharacter_C_IsPlayerOnTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Random Player Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::RandomPlayerMovement(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Random Player Movement");
		
		ABP_NetworkCharacter_C_RandomPlayerMovement_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_CurrentPreset
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_CurrentPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_CurrentPreset");
		
		ABP_NetworkCharacter_C_OnRep_CurrentPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C. Notify
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Notify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C. Notify");
		
		ABP_NetworkCharacter_C_Notify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrossReferenceEquippedCosmeticsWithSteamInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   SteamItemDetails                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               EquippedCosmeticsAreOwned                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::CrossReferenceEquippedCosmeticsWithSteamInventory(TArray<struct FSteamItemDetails>* SteamItemDetails, bool* EquippedCosmeticsAreOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrossReferenceEquippedCosmeticsWithSteamInventory");
		
		ABP_NetworkCharacter_C_CrossReferenceEquippedCosmeticsWithSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamItemDetails != nullptr)
			*SteamItemDetails = params.SteamItemDetails;
		if (EquippedCosmeticsAreOwned != nullptr)
			*EquippedCosmeticsAreOwned = params.EquippedCosmeticsAreOwned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.UpdateSecondaryObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESecondaryObjectives                               NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::UpdateSecondaryObjective(ESecondaryObjectives NewObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.UpdateSecondaryObjective");
		
		ABP_NetworkCharacter_C_UpdateSecondaryObjective_Params params {};
		params.NewObjective = NewObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get Monster Jumpscare Origin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::GetMonsterJumpscareOrigin(class ACharacter* Monster, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get Monster Jumpscare Origin");
		
		ABP_NetworkCharacter_C_GetMonsterJumpscareOrigin_Params params {};
		params.Monster = Monster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGeneralVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FirstPerson                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VisibleToOthers                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetGeneralVisibility(bool FirstPerson, bool VisibleToOthers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGeneralVisibility");
		
		ABP_NetworkCharacter_C_SetGeneralVisibility_Params params {};
		params.FirstPerson = FirstPerson;
		params.VisibleToOthers = VisibleToOthers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetFirstPersonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetFirstPersonVisibility(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetFirstPersonVisibility");
		
		ABP_NetworkCharacter_C_SetFirstPersonVisibility_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetThirdPersonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetThirdPersonVisibility(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetThirdPersonVisibility");
		
		ABP_NetworkCharacter_C_SetThirdPersonVisibility_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_LivingNightmare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Sabotage_LivingNightmare(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_LivingNightmare");
		
		ABP_NetworkCharacter_C_Sabotage_LivingNightmare_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_NetInteractingState
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_NetInteractingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_NetInteractingState");
		
		ABP_NetworkCharacter_C_OnRep_NetInteractingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsBeingInteractedWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InteractedWith                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::IsBeingInteractedWith(bool* InteractedWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsBeingInteractedWith");
		
		ABP_NetworkCharacter_C_IsBeingInteractedWith_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InteractedWith != nullptr)
			*InteractedWith = params.InteractedWith;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Owner_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_BeginInteraction");
		
		ABP_NetworkCharacter_C_Owner_BeginInteraction_Params params {};
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
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Authority_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_BeginInteraction");
		
		ABP_NetworkCharacter_C_Authority_BeginInteraction_Params params {};
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
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanBePickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBe                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::CanBePickedUp(bool* CanBe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanBePickedUp");
		
		ABP_NetworkCharacter_C_CanBePickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBe != nullptr)
			*CanBe = params.CanBe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Strikes
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_Strikes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Strikes");
		
		ABP_NetworkCharacter_C_OnRep_Strikes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get All Character Meshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_NetworkCharacter_C::GetAllCharacterMeshes(TArray<class UPrimitiveComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Get All Character Meshes");
		
		ABP_NetworkCharacter_C_GetAllCharacterMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     MonsterLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              In_MaxMod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              In_Volume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              In_Distance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZedIgnorance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_NetworkCharacter_C::GetMultiplier(const struct FVector& MonsterLocation, float In_MaxMod, float In_Volume, float In_Distance, float ZedIgnorance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetMultiplier");
		
		ABP_NetworkCharacter_C_GetMultiplier_Params params {};
		params.MonsterLocation = MonsterLocation;
		params.In_MaxMod = In_MaxMod;
		params.In_Volume = In_Volume;
		params.In_Distance = In_Distance;
		params.ZedIgnorance = ZedIgnorance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_StartedGame
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_StartedGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_StartedGame");
		
		ABP_NetworkCharacter_C_OnRep_StartedGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayersInRegenZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_NetworkCharacter_C*>              Players                                                    (Parm, OutParm)
	 */
	void ABP_NetworkCharacter_C::GetPlayersInRegenZone(TArray<class ABP_NetworkCharacter_C*>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayersInRegenZone");
		
		ABP_NetworkCharacter_C_GetPlayersInRegenZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthRegen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetHealthRegen(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthRegen");
		
		ABP_NetworkCharacter_C_SetHealthRegen_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetOwningPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::GetOwningPlayerController(class APlayerController** Controller, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetOwningPlayerController");
		
		ABP_NetworkCharacter_C_GetOwningPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NoPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Sabotage_NoPack(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NoPack");
		
		ABP_NetworkCharacter_C_Sabotage_NoPack_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NavIndicators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Sabotage_NavIndicators(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_NavIndicators");
		
		ABP_NetworkCharacter_C_Sabotage_NavIndicators_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_AutoCarry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Sabotage_AutoCarry(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Sabotage_AutoCarry");
		
		ABP_NetworkCharacter_C_Sabotage_AutoCarry_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UABP_NetworkPlayer_C*                        ABP                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::GetABP(class UABP_NetworkPlayer_C** ABP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetABP");
		
		ABP_NetworkCharacter_C_GetABP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ABP != nullptr)
			*ABP = params.ABP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMoving                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::IsPlayerMoving(bool* IsMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerMoving");
		
		ABP_NetworkCharacter_C_IsPlayerMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMoving != nullptr)
			*IsMoving = params.IsMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowThirdPersonViewmodels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ShowThirdPersonViewmodels(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowThirdPersonViewmodels");
		
		ABP_NetworkCharacter_C_ShowThirdPersonViewmodels_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggle Third Person
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseManualInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ManualInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ToggleThirdPerson(bool UseManualInput, bool ManualInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggle Third Person");
		
		ABP_NetworkCharacter_C_ToggleThirdPerson_Params params {};
		params.UseManualInput = UseManualInput;
		params.ManualInput = ManualInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Can Play Game
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::CanPlayGame(bool* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Can Play Game");
		
		ABP_NetworkCharacter_C_CanPlayGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Status != nullptr)
			*Status = params.Status;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetHeldToyPart
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ABP_NetworkCharacter_C::BP_GetHeldToyPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetHeldToyPart");
		
		ABP_NetworkCharacter_C_BP_GetHeldToyPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetCameraComponent
	 * 		Flags  -> ()
	 */
	class UCameraComponent* ABP_NetworkCharacter_C::BP_GetCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetCameraComponent");
		
		ABP_NetworkCharacter_C_BP_GetCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetThirdPersonMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABP_NetworkCharacter_C::BP_GetThirdPersonMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_GetThirdPersonMesh");
		
		ABP_NetworkCharacter_C_BP_GetThirdPersonMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUHandRigPackageComponent*                   self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandStateChange                                   HSC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ManageHands(class UUHandRigPackageComponent* self2, EHandStateChange HSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageHands");
		
		ABP_NetworkCharacter_C_ManageHands_Params params {};
		params.self2 = self2;
		params.HSC = HSC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.DoHandSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELimb                                              Limb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandStateChange                                   HSC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::DoHandSounds(ELimb Limb, EHandStateChange HSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.DoHandSounds");
		
		ABP_NetworkCharacter_C_DoHandSounds_Params params {};
		params.Limb = Limb;
		params.HSC = HSC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_SpawnDroppedToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ToyPartIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CustomLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::BP_SpawnDroppedToyPart(int32_t ToyPartIndex, const struct FVector& CustomLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_SpawnDroppedToyPart");
		
		ABP_NetworkCharacter_C_BP_SpawnDroppedToyPart_Params params {};
		params.ToyPartIndex = ToyPartIndex;
		params.CustomLocation = CustomLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_HeldToyPartIndex
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BP_OnRep_HeldToyPartIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_HeldToyPartIndex");
		
		ABP_NetworkCharacter_C_BP_OnRep_HeldToyPartIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageThirdPersonHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELimb                                              Limb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandStateChange                                   HandStateChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ManageThirdPersonHands(ELimb Limb, EHandStateChange HandStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ManageThirdPersonHands");
		
		ABP_NetworkCharacter_C_ManageThirdPersonHands_Params params {};
		params.Limb = Limb;
		params.HandStateChange = HandStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Webbed
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_Webbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Webbed");
		
		ABP_NetworkCharacter_C_OnRep_Webbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanStandUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_NetworkCharacter_C::CanStandUp(class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CanStandUp");
		
		ABP_NetworkCharacter_C_CanStandUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Username
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_Username()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_Username");
		
		ABP_NetworkCharacter_C_OnRep_Username_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_PlayerColor
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_PlayerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_PlayerColor");
		
		ABP_NetworkCharacter_C_OnRep_PlayerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::MovePlayer(const struct FVector& WorldDirection, float ScaleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move Player");
		
		ABP_NetworkCharacter_C_MovePlayer_Params params {};
		params.WorldDirection = WorldDirection;
		params.ScaleValue = ScaleValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleDownWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ToggleDownWidget(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleDownWidget");
		
		ABP_NetworkCharacter_C_ToggleDownWidget_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetDownWidgetName
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SetDownWidgetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetDownWidgetName");
		
		ABP_NetworkCharacter_C_SetDownWidgetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetPlayerColor
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SetPlayerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetPlayerColor");
		
		ABP_NetworkCharacter_C_SetPlayerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayerNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::GetPlayerNumber(int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.GetPlayerNumber");
		
		ABP_NetworkCharacter_C_GetPlayerNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Land
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Land()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Land");
		
		ABP_NetworkCharacter_C_Land_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.LookAround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::LookAround(float Val, bool Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.LookAround");
		
		ABP_NetworkCharacter_C_LookAround_Params params {};
		params.Val = Val;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Running                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ToggleRun(bool Running)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleRun");
		
		ABP_NetworkCharacter_C_ToggleRun_Params params {};
		params.Running = Running;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerSprinting
	 * 		Flags  -> ()
	 */
	bool ABP_NetworkCharacter_C::IsPlayerSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerSprinting");
		
		ABP_NetworkCharacter_C_IsPlayerSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerCrouching
	 * 		Flags  -> ()
	 */
	bool ABP_NetworkCharacter_C::IsPlayerCrouching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.IsPlayerCrouching");
		
		ABP_NetworkCharacter_C_IsPlayerCrouching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShakeCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Shake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ShakeCamera(class UClass* Shake, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShakeCamera");
		
		ABP_NetworkCharacter_C_ShakeCamera_Params params {};
		params.Shake = Shake;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.MovementCameraShake
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::MovementCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.MovementCameraShake");
		
		ABP_NetworkCharacter_C_MovementCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.UserConstructionScript");
		
		ABP_NetworkCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__FinishedFunc");
		
		ABP_NetworkCharacter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_0__UpdateFunc");
		
		ABP_NetworkCharacter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::PlayerLookAtJumpscare__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__FinishedFunc");
		
		ABP_NetworkCharacter_C_PlayerLookAtJumpscare__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::PlayerLookAtJumpscare__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayerLookAtJumpscare__UpdateFunc");
		
		ABP_NetworkCharacter_C_PlayerLookAtJumpscare__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::WebOpacityTime__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__FinishedFunc");
		
		ABP_NetworkCharacter_C_WebOpacityTime__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::WebOpacityTime__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.WebOpacityTime__UpdateFunc");
		
		ABP_NetworkCharacter_C_WebOpacityTime__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::InteractingWithTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__FinishedFunc");
		
		ABP_NetworkCharacter_C_InteractingWithTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::InteractingWithTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractingWithTimeline__UpdateFunc");
		
		ABP_NetworkCharacter_C_InteractingWithTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::InteractedWithTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__FinishedFunc");
		
		ABP_NetworkCharacter_C_InteractedWithTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::InteractedWithTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InteractedWithTimeline__UpdateFunc");
		
		ABP_NetworkCharacter_C_InteractedWithTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SelfReviveTimer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__FinishedFunc");
		
		ABP_NetworkCharacter_C_SelfReviveTimer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SelfReviveTimer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SelfReviveTimer__UpdateFunc");
		
		ABP_NetworkCharacter_C_SelfReviveTimer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::DownCameraTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__FinishedFunc");
		
		ABP_NetworkCharacter_C_DownCameraTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::DownCameraTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.DownCameraTL__UpdateFunc");
		
		ABP_NetworkCharacter_C_DownCameraTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CameraHit__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__FinishedFunc");
		
		ABP_NetworkCharacter_C_CameraHit__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CameraHit__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CameraHit__UpdateFunc");
		
		ABP_NetworkCharacter_C_CameraHit__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SetGlitchOpacity__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__FinishedFunc");
		
		ABP_NetworkCharacter_C_SetGlitchOpacity__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SetGlitchOpacity__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetGlitchOpacity__UpdateFunc");
		
		ABP_NetworkCharacter_C_SetGlitchOpacity__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__FinishedFunc");
		
		ABP_NetworkCharacter_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Timeline_1__UpdateFunc");
		
		ABP_NetworkCharacter_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Roll_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Roll_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Roll_K2Node_InputActionEvent_10");
		
		ABP_NetworkCharacter_C_InpActEvt_Roll_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_9");
		
		ABP_NetworkCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_8");
		
		ABP_NetworkCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Run_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_7");
		
		ABP_NetworkCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Run_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_6");
		
		ABP_NetworkCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_5");
		
		ABP_NetworkCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_4");
		
		ABP_NetworkCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnFailure_0A1F0A8944BA901C903E9692824BA4FC
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnFailure_0A1F0A8944BA901C903E9692824BA4FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnFailure_0A1F0A8944BA901C903E9692824BA4FC");
		
		ABP_NetworkCharacter_C_OnFailure_0A1F0A8944BA901C903E9692824BA4FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnSuccess_0A1F0A8944BA901C903E9692824BA4FC
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnSuccess_0A1F0A8944BA901C903E9692824BA4FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnSuccess_0A1F0A8944BA901C903E9692824BA4FC");
		
		ABP_NetworkCharacter_C_OnSuccess_0A1F0A8944BA901C903E9692824BA4FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_K_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_3");
		
		ABP_NetworkCharacter_C_InpActEvt_K_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_3");
		
		ABP_NetworkCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2");
		
		ABP_NetworkCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Emote_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_Emote_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_Emote_K2Node_InputActionEvent_1");
		
		ABP_NetworkCharacter_C_InpActEvt_Emote_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_2");
		
		ABP_NetworkCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpActEvt_M_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_1");
		
		ABP_NetworkCharacter_C_InpActEvt_M_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnStartCrouch");
		
		ABP_NetworkCharacter_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.K2_OnEndCrouch");
		
		ABP_NetworkCharacter_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.FootprintOnDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::FootprintOnDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.FootprintOnDestroyed");
		
		ABP_NetworkCharacter_C_FootprintOnDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveFootprints
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::RemoveFootprints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveFootprints");
		
		ABP_NetworkCharacter_C_RemoveFootprints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnFootprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnFootprint");
		
		ABP_NetworkCharacter_C_SpawnFootprint_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryUncrouch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::TryUncrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryUncrouch");
		
		ABP_NetworkCharacter_C_TryUncrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.HitByWeb
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::HitByWeb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.HitByWeb");
		
		ABP_NetworkCharacter_C_HitByWeb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NetworkCharacter_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnLanded");
		
		ABP_NetworkCharacter_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4");
		
		ABP_NetworkCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3");
		
		ABP_NetworkCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2");
		
		ABP_NetworkCharacter_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1");
		
		ABP_NetworkCharacter_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiOuttaBreath
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::MultiOuttaBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiOuttaBreath");
		
		ABP_NetworkCharacter_C_MultiOuttaBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiBreathing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StartBreathing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::MultiBreathing(bool StartBreathing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiBreathing");
		
		ABP_NetworkCharacter_C_MultiBreathing_Params params {};
		params.StartBreathing = StartBreathing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Holding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::HoldBreathClient(bool Holding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathClient");
		
		ABP_NetworkCharacter_C_HoldBreathClient_Params params {};
		params.Holding = Holding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Holding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::HoldBreathServer(bool Holding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.HoldBreathServer");
		
		ABP_NetworkCharacter_C_HoldBreathServer_Params params {};
		params.Holding = Holding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CallHoldBreath
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CallHoldBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CallHoldBreath");
		
		ABP_NetworkCharacter_C_CallHoldBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move TP_Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::MoveTP_Camera(float DeltaSeconds, bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Move TP_Camera");
		
		ABP_NetworkCharacter_C_MoveTP_Camera_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrouchCamera
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CrouchCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CrouchCamera");
		
		ABP_NetworkCharacter_C_CrouchCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Web Sound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::MulticastWebSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Web Sound");
		
		ABP_NetworkCharacter_C_MulticastWebSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventShowWebs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::EventShowWebs(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventShowWebs");
		
		ABP_NetworkCharacter_C_EventShowWebs_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.KickPlayer
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::KickPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.KickPlayer");
		
		ABP_NetworkCharacter_C_KickPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowIdleWarning
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ShowIdleWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowIdleWarning");
		
		ABP_NetworkCharacter_C_ShowIdleWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.RestartIdleTimer
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::RestartIdleTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.RestartIdleTimer");
		
		ABP_NetworkCharacter_C_RestartIdleTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::MulticastEmote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Emote");
		
		ABP_NetworkCharacter_C_MulticastEmote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Server Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ServerEmote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Server Emote");
		
		ABP_NetworkCharacter_C_ServerEmote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Emote");
		
		ABP_NetworkCharacter_C_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Client_Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Emote");
		
		ABP_NetworkCharacter_C_Client_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToCancelled
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Owner_InteractingToCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToCancelled");
		
		ABP_NetworkCharacter_C_Owner_InteractingToCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToFixing
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Owner_InteractingToFixing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToFixing");
		
		ABP_NetworkCharacter_C_Owner_InteractingToFixing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToReviving
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Owner_InteractingToReviving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToReviving");
		
		ABP_NetworkCharacter_C_Owner_InteractingToReviving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToIdle
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Owner_InteractingToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingToIdle");
		
		ABP_NetworkCharacter_C_Owner_InteractingToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingTransitionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractedWithState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Owner_InteractingTransitionState(EInteractedWithState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owner_InteractingTransitionState");
		
		ABP_NetworkCharacter_C_Owner_InteractingTransitionState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToCancelled
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Authority_IWSToCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToCancelled");
		
		ABP_NetworkCharacter_C_Authority_IWSToCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToFixing
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Authority_IWSToFixing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToFixing");
		
		ABP_NetworkCharacter_C_Authority_IWSToFixing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToReviving
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Authority_IWSToReviving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToReviving");
		
		ABP_NetworkCharacter_C_Authority_IWSToReviving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToIdle
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Authority_IWSToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_IWSToIdle");
		
		ABP_NetworkCharacter_C_Authority_IWSToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_TransitionInteractedWithState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractedWithState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Authority_TransitionInteractedWithState(EInteractedWithState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_TransitionInteractedWithState");
		
		ABP_NetworkCharacter_C_Authority_TransitionInteractedWithState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_EndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Authority_EndInteraction(class AANetworkCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_EndInteraction");
		
		ABP_NetworkCharacter_C_Authority_EndInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OwnerFinishedInteractingWith
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OwnerFinishedInteractingWith()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OwnerFinishedInteractingWith");
		
		ABP_NetworkCharacter_C_OwnerFinishedInteractingWith_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning_SetInteractInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::Owning_SetInteractInProgress(bool InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning_SetInteractInProgress");
		
		ABP_NetworkCharacter_C_Owning_SetInteractInProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartInteractFromClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ThirdPerson                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::StartInteractFromClient(bool ThirdPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartInteractFromClient");
		
		ABP_NetworkCharacter_C_StartInteractFromClient_Params params {};
		params.ThirdPerson = ThirdPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteractFromClient
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CancelInteractFromClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteractFromClient");
		
		ABP_NetworkCharacter_C_CancelInteractFromClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetInteractUI(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetInteractUI");
		
		ABP_NetworkCharacter_C_SetInteractUI_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteract
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CancelInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelInteract");
		
		ABP_NetworkCharacter_C_CancelInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveEndPlay");
		
		ABP_NetworkCharacter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchChase
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SwitchChase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchChase");
		
		ABP_NetworkCharacter_C_SwitchChase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchTense
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SwitchTense()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SwitchTense");
		
		ABP_NetworkCharacter_C_SwitchTense_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Switch Ambience
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SwitchAmbience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Switch Ambience");
		
		ABP_NetworkCharacter_C_SwitchAmbience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Interrupted Locker
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::AnimSetInterruptedLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Interrupted Locker");
		
		ABP_NetworkCharacter_C_AnimSetInterruptedLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceivePossessed");
		
		ABP_NetworkCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.FoundSteamInventory");
		
		ABP_NetworkCharacter_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Disable Player Mesh Shadows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::DisablePlayerMeshShadows(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Disable Player Mesh Shadows");
		
		ABP_NetworkCharacter_C_DisablePlayerMeshShadows_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Exiting Locker
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::AnimSetExitingLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Exiting Locker");
		
		ABP_NetworkCharacter_C_AnimSetExitingLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Entering Locker
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::AnimSetEnteringLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Anim Set Entering Locker");
		
		ABP_NetworkCharacter_C_AnimSetEnteringLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Raise Lower Hands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lowered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::RaiseLowerHands(bool Lowered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Raise Lower Hands");
		
		ABP_NetworkCharacter_C_RaiseLowerHands_Params params {};
		params.Lowered = Lowered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewNetSetCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 CurrentPreset                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkCharacter_C::NewNetSetCosmetics(const struct FPresetSlot& CurrentPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewNetSetCosmetics");
		
		ABP_NetworkCharacter_C_NewNetSetCosmetics_Params params {};
		params.CurrentPreset = CurrentPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewLoadCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::NewLoadCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NewLoadCosmetics");
		
		ABP_NetworkCharacter_C_NewLoadCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.LockerTakeout
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::LockerTakeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.LockerTakeout");
		
		ABP_NetworkCharacter_C_LockerTakeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveCosmeticsDueToError
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::RemoveCosmeticsDueToError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.RemoveCosmeticsDueToError");
		
		ABP_NetworkCharacter_C_RemoveCosmeticsDueToError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.VerifyClientInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::VerifyClientInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.VerifyClientInventory");
		
		ABP_NetworkCharacter_C_VerifyClientInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetToyDepositIndicators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetToyDepositIndicators(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetToyDepositIndicators");
		
		ABP_NetworkCharacter_C_SetToyDepositIndicators_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SimBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SimBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SimBeginPlay");
		
		ABP_NetworkCharacter_C_SimBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExitLockerFinish
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ExitLockerFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExitLockerFinish");
		
		ABP_NetworkCharacter_C_ExitLockerFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterLockerFinish
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EnterLockerFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterLockerFinish");
		
		ABP_NetworkCharacter_C_EnterLockerFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Locker_C*                                LockerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EnterExitLockerServer(class ABP_Locker_C* LockerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerServer");
		
		ABP_NetworkCharacter_C_EnterExitLockerServer_Params params {};
		params.LockerRef = LockerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multi_ShowHidePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::Multi_ShowHidePlayer(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multi_ShowHidePlayer");
		
		ABP_NetworkCharacter_C_Multi_ShowHidePlayer_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Locker_C*                                LockerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EnterExitLockerClient(class ABP_Locker_C* LockerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnterExitLockerClient");
		
		ABP_NetworkCharacter_C_EnterExitLockerClient_Params params {};
		params.LockerRef = LockerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NotDetected
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::NotDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NotDetected");
		
		ABP_NetworkCharacter_C_NotDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.DetectedByMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::DetectedByMonster(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.DetectedByMonster");
		
		ABP_NetworkCharacter_C_DetectedByMonster_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.StopCarryUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::StopCarryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.StopCarryUI");
		
		ABP_NetworkCharacter_C_StopCarryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartHookUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::StartHookUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartHookUI");
		
		ABP_NetworkCharacter_C_StartHookUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartCarryUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::StartCarryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartCarryUI");
		
		ABP_NetworkCharacter_C_StartCarryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EndAutoReviveUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EndAutoReviveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EndAutoReviveUI");
		
		ABP_NetworkCharacter_C_EndAutoReviveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelAutoReviveUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::CancelAutoReviveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.CancelAutoReviveUI");
		
		ABP_NetworkCharacter_C_CancelAutoReviveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartAutoReviveUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::StartAutoReviveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.StartAutoReviveUI");
		
		ABP_NetworkCharacter_C_StartAutoReviveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.AutoRevive
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::AutoRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.AutoRevive");
		
		ABP_NetworkCharacter_C_AutoRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ServerOnly_EvaluateAutoReviveTimer
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ServerOnly_EvaluateAutoReviveTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ServerOnly_EvaluateAutoReviveTimer");
		
		ABP_NetworkCharacter_C_ServerOnly_EvaluateAutoReviveTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHUD_ToyList
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SetHUD_ToyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHUD_ToyList");
		
		ABP_NetworkCharacter_C_SetHUD_ToyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUHandRigPackageComponent*                   Pkg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandStateChange                                   HandStateChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature");
		
		ABP_NetworkCharacter_C_BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature_Params params {};
		params.Pkg = Pkg;
		params.HandStateChange = HandStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUHandRigPackageComponent*                   Pkg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandStateChange                                   HandStateChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature");
		
		ABP_NetworkCharacter_C_BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature_Params params {};
		params.Pkg = Pkg;
		params.HandStateChange = HandStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiShowWin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::MultiShowWin(int32_t PlayerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.MultiShowWin");
		
		ABP_NetworkCharacter_C_MultiShowWin_Params params {};
		params.PlayerCount = PlayerCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveTick");
		
		ABP_NetworkCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReceiveBeginPlay");
		
		ABP_NetworkCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSelectedSoundsPackage                      SelectedSoundsPackage                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::NetSetSounds(const struct FSelectedSoundsPackage& SelectedSoundsPackage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetSounds");
		
		ABP_NetworkCharacter_C_NetSetSounds_Params params {};
		params.SelectedSoundsPackage = SelectedSoundsPackage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Roll Sound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::MulticastRollSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Multicast Roll Sound");
		
		ABP_NetworkCharacter_C_MulticastRollSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.DashSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::DashSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.DashSound");
		
		ABP_NetworkCharacter_C_DashSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Spawn Jumpscare Light
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SpawnJumpscareLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Spawn Jumpscare Light");
		
		ABP_NetworkCharacter_C_SpawnJumpscareLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PerkSaveGame
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BP_OnRep_PerkSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PerkSaveGame");
		
		ABP_NetworkCharacter_C_BP_OnRep_PerkSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustDestroyUI                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ResetCharacter(bool JustDestroyUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetCharacter");
		
		ABP_NetworkCharacter_C_ResetCharacter_Params params {};
		params.JustDestroyUI = JustDestroyUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustDestroyUI                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ResetViewTarget(bool JustDestroyUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ResetViewTarget");
		
		ABP_NetworkCharacter_C_ResetViewTarget_Params params {};
		params.JustDestroyUI = JustDestroyUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::TryReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.TryReady");
		
		ABP_NetworkCharacter_C_TryReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventFixNameTag
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventFixNameTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventFixNameTag");
		
		ABP_NetworkCharacter_C_EventFixNameTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::NetSetPlayerName(const class FString& UserName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerName");
		
		ABP_NetworkCharacter_C_NetSetPlayerName_Params params {};
		params.UserName = UserName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerColor
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::NetSetPlayerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.NetSetPlayerColor");
		
		ABP_NetworkCharacter_C_NetSetPlayerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayFixingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::PlayFixingSound(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayFixingSound");
		
		ABP_NetworkCharacter_C_PlayFixingSound_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayRevivingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::PlayRevivingSound(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayRevivingSound");
		
		ABP_NetworkCharacter_C_PlayRevivingSound_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayBrokenHandAttemptThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::PlayBrokenHandAttemptThings(bool LHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayBrokenHandAttemptThings");
		
		ABP_NetworkCharacter_C_PlayBrokenHandAttemptThings_Params params {};
		params.LHand = LHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_ShowRollRecharge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Client_ShowRollRecharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_ShowRollRecharge");
		
		ABP_NetworkCharacter_C_Client_ShowRollRecharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BindEventOnRepCanDashEventHandler
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BindEventOnRepCanDashEventHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BindEventOnRepCanDashEventHandler");
		
		ABP_NetworkCharacter_C_BindEventOnRepCanDashEventHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PlayerNeedsRevived
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BP_OnRep_PlayerNeedsRevived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_PlayerNeedsRevived");
		
		ABP_NetworkCharacter_C_BP_OnRep_PlayerNeedsRevived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forceoff                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ToggleCosmetics(bool Forceoff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ToggleCosmetics");
		
		ABP_NetworkCharacter_C_ToggleCosmetics_Params params {};
		params.Forceoff = Forceoff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnToyLocker
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::SpawnToyLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SpawnToyLocker");
		
		ABP_NetworkCharacter_C_SpawnToyLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ChangeClientInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::ChangeClientInput(bool ShouldDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ChangeClientInput");
		
		ABP_NetworkCharacter_C_ChangeClientInput_Params params {};
		params.ShouldDisable = ShouldDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnableClientInput
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EnableClientInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EnableClientInput");
		
		ABP_NetworkCharacter_C_EnableClientInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::SetHealthVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealthVisibility");
		
		ABP_NetworkCharacter_C_SetHealthVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.JumpscareInterruption
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::JumpscareInterruption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.JumpscareInterruption");
		
		ABP_NetworkCharacter_C_JumpscareInterruption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayJumpSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::PlayJumpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PlayJumpSound");
		
		ABP_NetworkCharacter_C_PlayJumpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnJumped
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnJumped");
		
		ABP_NetworkCharacter_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealingAuraVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AANetworkCharacter*                          HealingChar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::SetHealingAuraVisibility(bool Visible, class AANetworkCharacter* HealingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.SetHealingAuraVisibility");
		
		ABP_NetworkCharacter_C_SetHealingAuraVisibility_Params params {};
		params.Visible = Visible;
		params.HealingChar = HealingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_Health
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BP_OnRep_Health()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_OnRep_Health");
		
		ABP_NetworkCharacter_C_BP_OnRep_Health_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowStrikes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ShowStrikes(int32_t Strikes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowStrikes");
		
		ABP_NetworkCharacter_C_ShowStrikes_Params params {};
		params.Strikes = Strikes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnHealthRegen
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnHealthRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnHealthRegen");
		
		ABP_NetworkCharacter_C_OnHealthRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_PlayDamageFX
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::BP_PlayDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_PlayDamageFX");
		
		ABP_NetworkCharacter_C_BP_PlayDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_TakeAnyDamageWhileAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bKillingHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkCharacter_C::BP_TakeAnyDamageWhileAlive(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bKillingHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.BP_TakeAnyDamageWhileAlive");
		
		ABP_NetworkCharacter_C_BP_TakeAnyDamageWhileAlive_Params params {};
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
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning Kill
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OwningKill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Owning Kill");
		
		ABP_NetworkCharacter_C_OwningKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Kill
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Kill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Kill");
		
		ABP_NetworkCharacter_C_Kill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventDropped
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventDropped");
		
		ABP_NetworkCharacter_C_EventDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventExtractedFromWuggyHole
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventExtractedFromWuggyHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventExtractedFromWuggyHole");
		
		ABP_NetworkCharacter_C_EventExtractedFromWuggyHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventImprisonedInWuggyHole
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventImprisonedInWuggyHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventImprisonedInWuggyHole");
		
		ABP_NetworkCharacter_C_EventImprisonedInWuggyHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventPickedUp
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventPickedUp");
		
		ABP_NetworkCharacter_C_EventPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceFromMonster                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendOut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EnoughSpaceforJumpscare                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMonster_Type                                      MonsterType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EventJumpscare(class ACharacter* Monster, class ABP_NetworkCharacter_C* Character, float DistanceFromMonster, float Duration, float BlendOut, bool EnoughSpaceforJumpscare, EMonster_Type MonsterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EventJumpscare");
		
		ABP_NetworkCharacter_C_EventJumpscare_Params params {};
		params.Monster = Monster;
		params.Character = Character;
		params.DistanceFromMonster = DistanceFromMonster;
		params.Duration = Duration;
		params.BlendOut = BlendOut;
		params.EnoughSpaceforJumpscare = EnoughSpaceforJumpscare;
		params.MonsterType = MonsterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_GetHealed
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::Authority_GetHealed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Authority_GetHealed");
		
		ABP_NetworkCharacter_C_Authority_GetHealed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientResetDeathScreen
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ClientResetDeathScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientResetDeathScreen");
		
		ABP_NetworkCharacter_C_ClientResetDeathScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowDeathScreen
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ShowDeathScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ShowDeathScreen");
		
		ABP_NetworkCharacter_C_ShowDeathScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Jumpscare Montage
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EndJumpscareMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Jumpscare Montage");
		
		ABP_NetworkCharacter_C_EndJumpscareMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnStartedJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare");
		
		ABP_NetworkCharacter_C_OnStartedJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Ended Jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EndedJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Ended Jumpscare");
		
		ABP_NetworkCharacter_C_EndedJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Play Jumpscare Montage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::PlayJumpscareMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Play Jumpscare Montage");
		
		ABP_NetworkCharacter_C_PlayJumpscareMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.PickedUpThirdPerson
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::PickedUpThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.PickedUpThirdPerson");
		
		ABP_NetworkCharacter_C_PickedUpThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientToggleThirdTrue
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ClientToggleThirdTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientToggleThirdTrue");
		
		ABP_NetworkCharacter_C_ClientToggleThirdTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReviveThirdPerson
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ReviveThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ReviveThirdPerson");
		
		ABP_NetworkCharacter_C_ReviveThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientSetCachedPersp
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ClientSetCachedPersp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ClientSetCachedPersp");
		
		ABP_NetworkCharacter_C_ClientSetCachedPersp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_GrabpackBroken
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnRep_GrabpackBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.OnRep_GrabpackBroken");
		
		ABP_NetworkCharacter_C_OnRep_GrabpackBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Living Nightmare
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EndLivingNightmare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.End Living Nightmare");
		
		ABP_NetworkCharacter_C_EndLivingNightmare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Sabotage_LivingNightmare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::Client_Sabotage_LivingNightmare(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Client_Sabotage_LivingNightmare");
		
		ABP_NetworkCharacter_C_Client_Sabotage_LivingNightmare_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_LivingNightmare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EventSabotage_LivingNightmare(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_LivingNightmare");
		
		ABP_NetworkCharacter_C_EventSabotage_LivingNightmare_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Fix Grabpack
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventFixGrabpack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Fix Grabpack");
		
		ABP_NetworkCharacter_C_EventFixGrabpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Try Send To Wuggy Hole
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EventTrySendToWuggyHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Try Send To Wuggy Hole");
		
		ABP_NetworkCharacter_C_EventTrySendToWuggyHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_AutoCarry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EventSabotage_AutoCarry(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_AutoCarry");
		
		ABP_NetworkCharacter_C_EventSabotage_AutoCarry_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_NavIndicators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::EventSabotage_NavIndicators(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Event Sabotage_NavIndicators");
		
		ABP_NetworkCharacter_C_EventSabotage_NavIndicators_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExecuteUbergraph_BP_NetworkCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkCharacter_C::ExecuteUbergraph_BP_NetworkCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.ExecuteUbergraph_BP_NetworkCharacter");
		
		ABP_NetworkCharacter_C_ExecuteUbergraph_BP_NetworkCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.EmoteRequested__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::EmoteRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.EmoteRequested__DelegateSignature");
		
		ABP_NetworkCharacter_C_EmoteRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare Animation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::OnStartedJumpscareAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.On Started Jumpscare Animation__DelegateSignature");
		
		ABP_NetworkCharacter_C_OnStartedJumpscareAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggled Third Person During Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkCharacter_C::ToggledThirdPersonDuringJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkCharacter.BP_NetworkCharacter_C.Toggled Third Person During Jumpscare__DelegateSignature");
		
		ABP_NetworkCharacter_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkCharacter.BP_NetworkCharacter_C");
		return ptr;
	}

}


