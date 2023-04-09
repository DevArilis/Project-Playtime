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
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::SetVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetVisibility");
		
		ABP_MeshContainer_OutfitCosmetic_C_SetVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Set Overriding Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::SetOverridingVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Set Overriding Visibility");
		
		ABP_MeshContainer_OutfitCosmetic_C_SetOverridingVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetDefaultCosmetic
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::SetDefaultCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetDefaultCosmetic");
		
		ABP_MeshContainer_OutfitCosmetic_C_SetDefaultCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetSkinFromID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Identifier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::SetSkinFromID(int32_t Identifier, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetSkinFromID");
		
		ABP_MeshContainer_OutfitCosmetic_C_SetSkinFromID_Params params {};
		params.Identifier = Identifier;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.GetDefaultSkinType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticOutfitSkinType                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::GetDefaultSkinType(ECosmeticTypeEnum CosmeticType, ECosmeticOutfitSkinType* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.GetDefaultSkinType");
		
		ABP_MeshContainer_OutfitCosmetic_C_GetDefaultSkinType_Params params {};
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.VerifySkinType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticOutfitSkinType                            SkinType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::VerifySkinType(ECosmeticOutfitSkinType SkinType, ECosmeticTypeEnum CosmeticType, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.VerifySkinType");
		
		ABP_MeshContainer_OutfitCosmetic_C_VerifySkinType_Params params {};
		params.SkinType = SkinType;
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetCosmeticFromStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetCosmeticFromStruct");
		
		ABP_MeshContainer_OutfitCosmetic_C_SetCosmeticFromStruct_Params params {};
		params.Cosmetic = Cosmetic;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.UserConstructionScript");
		
		ABP_MeshContainer_OutfitCosmetic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.OnLoaded_4F31B9074DE4B27CB283518368ABF648
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::OnLoaded_4F31B9074DE4B27CB283518368ABF648(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.OnLoaded_4F31B9074DE4B27CB283518368ABF648");
		
		ABP_MeshContainer_OutfitCosmetic_C_OnLoaded_4F31B9074DE4B27CB283518368ABF648_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Load Skin
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::LoadSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Load Skin");
		
		ABP_MeshContainer_OutfitCosmetic_C_LoadSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_OutfitCosmetic_C::ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic");
		
		ABP_MeshContainer_OutfitCosmetic_C_ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_OutfitCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_OutfitCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C");
		return ptr;
	}

}


