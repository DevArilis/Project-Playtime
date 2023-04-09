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
	 * 		Name   -> Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetMainSkeletalMeshComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_MeshContainer_SimpleMonsterSkin_C::GetMainSkeletalMeshComponents(TArray<class USkeletalMeshComponent*>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetMainSkeletalMeshComponents");
		
		ABP_MeshContainer_SimpleMonsterSkin_C_GetMainSkeletalMeshComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetAllSceneComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USceneComponent*>                     SceneComponents                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_MeshContainer_SimpleMonsterSkin_C::GetAllSceneComponents(TArray<class USceneComponent*>* SceneComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetAllSceneComponents");
		
		ABP_MeshContainer_SimpleMonsterSkin_C_GetAllSceneComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SceneComponents != nullptr)
			*SceneComponents = params.SceneComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.SetCosmeticFromStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_SimpleMonsterSkin_C::SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.SetCosmeticFromStruct");
		
		ABP_MeshContainer_SimpleMonsterSkin_C_SetCosmeticFromStruct_Params params {};
		params.Cosmetic = Cosmetic;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_SimpleMonsterSkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_SimpleMonsterSkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C");
		return ptr;
	}

}


