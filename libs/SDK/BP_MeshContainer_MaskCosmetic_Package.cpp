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
	 * 		Name   -> Function BP_MeshContainer_MaskCosmetic.BP_MeshContainer_MaskCosmetic_C.SetVisibilityBasedOnHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Identifier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_MaskCosmetic_C::SetVisibilityBasedOnHat(int32_t Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_MaskCosmetic.BP_MeshContainer_MaskCosmetic_C.SetVisibilityBasedOnHat");
		
		ABP_MeshContainer_MaskCosmetic_C_SetVisibilityBasedOnHat_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_MaskCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_MaskCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_MaskCosmetic.BP_MeshContainer_MaskCosmetic_C");
		return ptr;
	}

}


