#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetMainSkeletalMeshComponents
	 */
	struct ABP_MeshContainer_SimpleMonsterSkin_C_GetMainSkeletalMeshComponents_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.GetAllSceneComponents
	 */
	struct ABP_MeshContainer_SimpleMonsterSkin_C_GetAllSceneComponents_Params
	{
	public:
		TArray<class USceneComponent*>                             SceneComponents;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C.SetCosmeticFromStruct
	 */
	struct ABP_MeshContainer_SimpleMonsterSkin_C_SetCosmeticFromStruct_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0248(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
