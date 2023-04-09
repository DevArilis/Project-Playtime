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
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.ResetGrabPack
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::ResetGrabPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.ResetGrabPack");
		
		ABP_PlayerPreview_C_ResetGrabPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.ClearCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::ClearCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.ClearCosmetics");
		
		ABP_PlayerPreview_C_ClearCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.LoadCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::LoadCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.LoadCosmetics");
		
		ABP_PlayerPreview_C_LoadCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.SaveCosmeticData
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::SaveCosmeticData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.SaveCosmeticData");
		
		ABP_PlayerPreview_C_SaveCosmeticData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.ClearNonOwnedCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::ClearNonOwnedCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.ClearNonOwnedCosmetics");
		
		ABP_PlayerPreview_C_ClearNonOwnedCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.Handle Cosmetic Preview
	 * 		Flags  -> ()
	 */
	void ABP_PlayerPreview_C::HandleCosmeticPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.Handle Cosmetic Preview");
		
		ABP_PlayerPreview_C_HandleCosmeticPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.GetHandReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class ABP_NetExtendoHand_C* ABP_PlayerPreview_C::GetHandReference(bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.GetHandReference");
		
		ABP_PlayerPreview_C_GetHandReference_Params params {};
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.SpawnExtendoHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RoughEndLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerPreview_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerPreview_C::SpawnExtendoHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.SpawnExtendoHand");
		
		ABP_PlayerPreview_C_SpawnExtendoHand_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.RoughEndLocation = RoughEndLocation;
		params.Player = Player;
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerPreview.BP_PlayerPreview_C.Rotate Gun to Hand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerPreview_C::RotateGuntoHand(class USceneComponent* Gun, const struct FRotator& NewRotation, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerPreview.BP_PlayerPreview_C.Rotate Gun to Hand");
		
		ABP_PlayerPreview_C_RotateGuntoHand_Params params {};
		params.Gun = Gun;
		params.NewRotation = NewRotation;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPreview.BP_PlayerPreview_C");
		return ptr;
	}

}


