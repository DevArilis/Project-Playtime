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
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandVisibility
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_SetHandVisibility_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Visible;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00I3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetHandSourceComponent
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_SetHandSourceComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Left;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CK9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.Set Overriding Visibility
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_SetOverridingVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LL2W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetVisibility
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_SetVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AD08[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UpdateHandCosmetics
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_UpdateHandCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.SetPlaytimeCharacter
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_SetPlaytimeCharacter_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.GetHand
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_GetHand_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6057[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MeshContainer_HandCosmetic_C*                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeshContainer_GrabpackCosmetic.BP_MeshContainer_GrabpackCosmetic_C.UserConstructionScript
	 */
	struct ABP_MeshContainer_GrabpackCosmetic_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
