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
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetVisibility
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_SetVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Set Overriding Visibility
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_SetOverridingVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetDefaultCosmetic
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_SetDefaultCosmetic_Params
	{	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetSkinFromID
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_SetSkinFromID_Params
	{
	public:
		int32_t                                                    Identifier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.GetDefaultSkinType
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_GetDefaultSkinType_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticOutfitSkinType                                    ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.VerifySkinType
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_VerifySkinType_Params
	{
	public:
		ECosmeticOutfitSkinType                                    SkinType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLR2[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.SetCosmeticFromStruct
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_SetCosmeticFromStruct_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0248(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.UserConstructionScript
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.OnLoaded_4F31B9074DE4B27CB283518368ABF648
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_OnLoaded_4F31B9074DE4B27CB283518368ABF648_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.Load Skin
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_LoadSkin_Params
	{	};

	/**
	 * Function BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C.ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic
	 */
	struct ABP_MeshContainer_OutfitCosmetic_C_ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3B9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
