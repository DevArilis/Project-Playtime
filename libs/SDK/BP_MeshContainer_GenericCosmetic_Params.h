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
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyMaterialOverrides
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_ApplyMaterialOverrides_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCosmetic                                           Cosmetic;                                                // 0x0008(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetAnimationBlueprintOrPoseComponent
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetAnimationBlueprintOrPoseComponent_Params
	{
	public:
		class UClass*                                              AnimationBlueprint;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ApplyColorableCosmeticMaterialParams
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_ApplyColorableCosmeticMaterialParams_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCosmetic                                           Cosmetic;                                                // 0x0008(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0250(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSkeletalMeshFromReference
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetSkeletalMeshFromReference_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LIYK[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Overriding Visibility
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetOverridingVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKVO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetVisibility
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HFV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Set Master Pose Component
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetMasterPoseComponent_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JK4H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromStruct
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetCosmeticFromStruct_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0248(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetCosmeticFromID
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetCosmeticFromID_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetDefaultCosmetic
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetDefaultCosmetic_Params
	{	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetCosmeticVerified
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_GetCosmeticVerified_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CharacterType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P0Z3[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCosmetic                                           Cosmetic;                                                // 0x0008(0x0248)  (Parm, OutParm)
		bool                                                       Valid;                                                   // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FQ1B[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshComponent
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_GetMainSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetMainSkeletalMeshReference
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_GetMainSkeletalMeshReference_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAnimationBlueprintClass
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_GetAnimationBlueprintClass_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UClass*                                              ReturnValue;                                             // 0x0248(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.GetAllSceneComponents
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_GetAllSceneComponents_Params
	{
	public:
		TArray<class USceneComponent*>                             SceneComponents;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.SetSourceMesh
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_SetSourceMesh_Params
	{	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.UserConstructionScript
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Update Source Pose
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_UpdateSourcePose_Params
	{	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.Manually Set Source Pose
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_ManuallySetSourcePose_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C.ExecuteUbergraph_BP_MeshContainer_GenericCosmetic
	 */
	struct ABP_MeshContainer_GenericCosmetic_C_ExecuteUbergraph_BP_MeshContainer_GenericCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V193[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
