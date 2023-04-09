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
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyMaterialOverrides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::ApplyMaterialOverrides(class USkeletalMeshComponent* Mesh, const struct FCosmetic& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyMaterialOverrides");
		
		ABP_MeshContainer_GenericCosmetic_C_ApplyMaterialOverrides_Params params {};
		params.Mesh = Mesh;
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetAnimationBlueprintOrPoseComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AnimationBlueprint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetAnimationBlueprintOrPoseComponent(class UClass* AnimationBlueprint, class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetAnimationBlueprintOrPoseComponent");
		
		ABP_MeshContainer_GenericCosmetic_C_SetAnimationBlueprintOrPoseComponent_Params params {};
		params.AnimationBlueprint = AnimationBlueprint;
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyColorableCosmeticMaterialParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::ApplyColorableCosmeticMaterialParams(class USkeletalMeshComponent* Mesh, const struct FCosmetic& Cosmetic, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyColorableCosmeticMaterialParams");
		
		ABP_MeshContainer_GenericCosmetic_C_ApplyColorableCosmeticMaterialParams_Params params {};
		params.Mesh = Mesh;
		params.Cosmetic = Cosmetic;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSkeletalMeshFromReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetSkeletalMeshFromReference(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSkeletalMeshFromReference");
		
		ABP_MeshContainer_GenericCosmetic_C_SetSkeletalMeshFromReference_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Overriding Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetOverridingVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Overriding Visibility");
		
		ABP_MeshContainer_GenericCosmetic_C_SetOverridingVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetVisibility");
		
		ABP_MeshContainer_GenericCosmetic_C_SetVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Master Pose Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetMasterPoseComponent(bool Attached, class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Master Pose Component");
		
		ABP_MeshContainer_GenericCosmetic_C_SetMasterPoseComponent_Params params {};
		params.Attached = Attached;
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromStruct");
		
		ABP_MeshContainer_GenericCosmetic_C_SetCosmeticFromStruct_Params params {};
		params.Cosmetic = Cosmetic;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetCosmeticFromID(int32_t Index, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromID");
		
		ABP_MeshContainer_GenericCosmetic_C_SetCosmeticFromID_Params params {};
		params.Index = Index;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetDefaultCosmetic
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetDefaultCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetDefaultCosmetic");
		
		ABP_MeshContainer_GenericCosmetic_C_SetDefaultCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetCosmeticVerified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCosmetic                                   Cosmetic                                                   (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::GetCosmeticVerified(int32_t Index, ECosmeticTypeEnum CosmeticType, ECharacterType CharacterType, struct FCosmetic* Cosmetic, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetCosmeticVerified");
		
		ABP_MeshContainer_GenericCosmetic_C_GetCosmeticVerified_Params params {};
		params.Index = Index;
		params.CosmeticType = CosmeticType;
		params.CharacterType = CharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cosmetic != nullptr)
			*Cosmetic = params.Cosmetic;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::GetMainSkeletalMeshComponent(class USkeletalMeshComponent** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshComponent");
		
		ABP_MeshContainer_GenericCosmetic_C_GetMainSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::GetMainSkeletalMeshReference(const struct FCosmetic& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshReference");
		
		ABP_MeshContainer_GenericCosmetic_C_GetMainSkeletalMeshReference_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAnimationBlueprintClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::GetAnimationBlueprintClass(const struct FCosmetic& Cosmetic, class UClass** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAnimationBlueprintClass");
		
		ABP_MeshContainer_GenericCosmetic_C_GetAnimationBlueprintClass_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAllSceneComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USceneComponent*>                     SceneComponents                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::GetAllSceneComponents(TArray<class USceneComponent*>* SceneComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAllSceneComponents");
		
		ABP_MeshContainer_GenericCosmetic_C_GetAllSceneComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SceneComponents != nullptr)
			*SceneComponents = params.SceneComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSourceMesh
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_GenericCosmetic_C::SetSourceMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSourceMesh");
		
		ABP_MeshContainer_GenericCosmetic_C_SetSourceMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_GenericCosmetic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.UserConstructionScript");
		
		ABP_MeshContainer_GenericCosmetic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Update Source Pose
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_GenericCosmetic_C::UpdateSourcePose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Update Source Pose");
		
		ABP_MeshContainer_GenericCosmetic_C_UpdateSourcePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Manually Set Source Pose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::ManuallySetSourcePose(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Manually Set Source Pose");
		
		ABP_MeshContainer_GenericCosmetic_C_ManuallySetSourcePose_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ExecuteUbergraph_BP_MeshContainer_GenericCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GenericCosmetic_C::ExecuteUbergraph_BP_MeshContainer_GenericCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ExecuteUbergraph_BP_MeshContainer_GenericCosmetic");
		
		ABP_MeshContainer_GenericCosmetic_C_ExecuteUbergraph_BP_MeshContainer_GenericCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_GenericCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_GenericCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C");
		return ptr;
	}

}


