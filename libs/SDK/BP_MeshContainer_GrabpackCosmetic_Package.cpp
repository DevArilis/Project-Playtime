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
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::SetHandVisibility(bool Left, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandVisibility");
		
		ABP_MeshContainer_GrabpackCosmetic_C_SetHandVisibility_Params params {};
		params.Left = Left;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandSourceComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::SetHandSourceComponent(class USkeletalMeshComponent* Source, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandSourceComponent");
		
		ABP_MeshContainer_GrabpackCosmetic_C_SetHandSourceComponent_Params params {};
		params.Source = Source;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.Set Overriding Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::SetOverridingVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.Set Overriding Visibility");
		
		ABP_MeshContainer_GrabpackCosmetic_C_SetOverridingVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::SetVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetVisibility");
		
		ABP_MeshContainer_GrabpackCosmetic_C_SetVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UpdateHandCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::UpdateHandCosmetics(const struct FPresetSlot& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UpdateHandCosmetics");
		
		ABP_MeshContainer_GrabpackCosmetic_C_UpdateHandCosmetics_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetPlaytimeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::SetPlaytimeCharacter(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetPlaytimeCharacter");
		
		ABP_MeshContainer_GrabpackCosmetic_C_SetPlaytimeCharacter_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.GetHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_MeshContainer_HandCosmetic_C*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::GetHand(bool Left, class ABP_MeshContainer_HandCosmetic_C** ReturnValue, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.GetHand");
		
		ABP_MeshContainer_GrabpackCosmetic_C_GetHand_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_GrabpackCosmetic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UserConstructionScript");
		
		ABP_MeshContainer_GrabpackCosmetic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_GrabpackCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_GrabpackCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C");
		return ptr;
	}

}


