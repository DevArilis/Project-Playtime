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
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.ResetGrabPack
	 */
	struct ABP_PlayerPreview_C_ResetGrabPack_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.ClearCosmetics
	 */
	struct ABP_PlayerPreview_C_ClearCosmetics_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.LoadCosmetics
	 */
	struct ABP_PlayerPreview_C_LoadCosmetics_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.SaveCosmeticData
	 */
	struct ABP_PlayerPreview_C_SaveCosmeticData_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.ClearNonOwnedCosmetics
	 */
	struct ABP_PlayerPreview_C_ClearNonOwnedCosmetics_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.Handle Cosmetic Preview
	 */
	struct ABP_PlayerPreview_C_HandleCosmeticPreview_Params
	{	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.GetHandReference
	 */
	struct ABP_PlayerPreview_C_GetHandReference_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_43EP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_NetExtendoHand_C*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.SpawnExtendoHand
	 */
	struct ABP_PlayerPreview_C_SpawnExtendoHand_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             RoughEndLocation;                                        // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKO0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerPreview_C*                                 Player;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerPreview.BP_PlayerPreview_C.Rotate Gun to Hand
	 */
	struct ABP_PlayerPreview_C_RotateGuntoHand_Params
	{
	public:
		class USceneComponent*                                     Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FRotator                                            NewRotation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZBX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
