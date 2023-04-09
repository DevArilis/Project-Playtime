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
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetIndividualCosmeticVisibility
	 */
	struct ABP_MeshContainer_Player_C_SetIndividualCosmeticVisibility_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetCosmetics
	 */
	struct ABP_MeshContainer_Player_C_ResetCosmetics_Params
	{	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.ResetIndividualCosmeticVisibility
	 */
	struct ABP_MeshContainer_Player_C_ResetIndividualCosmeticVisibility_Params
	{	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandSourceComponent
	 */
	struct ABP_MeshContainer_Player_C_SetHandSourceComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              Source;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YFWP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetPlayerSourceComponent
	 */
	struct ABP_MeshContainer_Player_C_SetPlayerSourceComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              Source;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetNetworkCharacterOnContainers
	 */
	struct ABP_MeshContainer_Player_C_SetNetworkCharacterOnContainers_Params
	{	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetHandVisibility
	 */
	struct ABP_MeshContainer_Player_C_SetHandVisibility_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Visible;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XN3F[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetVisibility
	 */
	struct ABP_MeshContainer_Player_C_SetVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BC5L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.SetOverridingVisbility
	 */
	struct ABP_MeshContainer_Player_C_SetOverridingVisbility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQUW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UpdateCosmeticsFromPreset
	 */
	struct ABP_MeshContainer_Player_C_UpdateCosmeticsFromPreset_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.GetAllMeshContainers
	 */
	struct ABP_MeshContainer_Player_C_GetAllMeshContainers_Params
	{
	public:
		TArray<class ABP_MeshContainer_PlaytimeCharacterCosmetic_C*> ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_MeshContainer_Player.BP_MeshContainer_Player_C.UserConstructionScript
	 */
	struct ABP_MeshContainer_Player_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
