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
	 * Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.GetMainSkeletalMeshReference
	 */
	struct ABP_MeshContainer_HandCosmetic_C_GetMainSkeletalMeshReference_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              UnknownData_Q4J2[0x28];                                  // 0x0248(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.Update Source Pose
	 */
	struct ABP_MeshContainer_HandCosmetic_C_UpdateSourcePose_Params
	{	};

	/**
	 * Function BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C.ExecuteUbergraph_BP_MeshContainer_HandCosmetic
	 */
	struct ABP_MeshContainer_HandCosmetic_C_ExecuteUbergraph_BP_MeshContainer_HandCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQGN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
