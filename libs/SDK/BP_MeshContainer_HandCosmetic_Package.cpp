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
	 * 		Name   -> Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.GetMainSkeletalMeshReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MeshContainer_HandCosmetic_C::GetMainSkeletalMeshReference(const struct FCosmetic& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.GetMainSkeletalMeshReference");
		
		ABP_MeshContainer_HandCosmetic_C_GetMainSkeletalMeshReference_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.Update Source Pose
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_HandCosmetic_C::UpdateSourcePose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.Update Source Pose");
		
		ABP_MeshContainer_HandCosmetic_C_UpdateSourcePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.ExecuteUbergraph_BP_MeshContainer_HandCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_HandCosmetic_C::ExecuteUbergraph_BP_MeshContainer_HandCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.ExecuteUbergraph_BP_MeshContainer_HandCosmetic");
		
		ABP_MeshContainer_HandCosmetic_C_ExecuteUbergraph_BP_MeshContainer_HandCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_HandCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_HandCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C");
		return ptr;
	}

}


