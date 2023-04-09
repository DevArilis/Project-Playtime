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
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetIndividualCosmeticVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_Player_C::SetIndividualCosmeticVisibility(ECosmeticTypeEnum CosmeticType, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetIndividualCosmeticVisibility");
		
		ABP_MeshContainer_Player_C_SetIndividualCosmeticVisibility_Params params {};
		params.CosmeticType = CosmeticType;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_Player_C::ResetCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetCosmetics");
		
		ABP_MeshContainer_Player_C_ResetCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetIndividualCosmeticVisibility
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_Player_C::ResetIndividualCosmeticVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetIndividualCosmeticVisibility");
		
		ABP_MeshContainer_Player_C_ResetIndividualCosmeticVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandSourceComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Source                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_Player_C::SetHandSourceComponent(class USkeletalMeshComponent* Source, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandSourceComponent");
		
		ABP_MeshContainer_Player_C_SetHandSourceComponent_Params params {};
		params.Source = Source;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetPlayerSourceComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Source                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_Player_C::SetPlayerSourceComponent(class USkeletalMeshComponent* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetPlayerSourceComponent");
		
		ABP_MeshContainer_Player_C_SetPlayerSourceComponent_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetNetworkCharacterOnContainers
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_Player_C::SetNetworkCharacterOnContainers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetNetworkCharacterOnContainers");
		
		ABP_MeshContainer_Player_C_SetNetworkCharacterOnContainers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_Player_C::SetHandVisibility(bool Left, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandVisibility");
		
		ABP_MeshContainer_Player_C_SetHandVisibility_Params params {};
		params.Left = Left;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_Player_C::SetVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetVisibility");
		
		ABP_MeshContainer_Player_C_SetVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetOverridingVisbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_Player_C::SetOverridingVisbility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetOverridingVisbility");
		
		ABP_MeshContainer_Player_C_SetOverridingVisbility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UpdateCosmeticsFromPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MeshContainer_Player_C::UpdateCosmeticsFromPreset(const struct FPresetSlot& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UpdateCosmeticsFromPreset");
		
		ABP_MeshContainer_Player_C_UpdateCosmeticsFromPreset_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.GetAllMeshContainers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_MeshContainer_PlaytimeCharacterCosmetic_C*> ReturnValue                                                (Parm, OutParm)
	 */
	void ABP_MeshContainer_Player_C::GetAllMeshContainers(TArray<class ABP_MeshContainer_PlaytimeCharacterCosmetic_C*>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.GetAllMeshContainers");
		
		ABP_MeshContainer_Player_C_GetAllMeshContainers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_Player_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UserConstructionScript");
		
		ABP_MeshContainer_Player_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_Player.BP_MeshContainer_Player_C");
		return ptr;
	}

}


