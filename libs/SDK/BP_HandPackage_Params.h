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
	 * Function BP_HandPackage.BP_HandPackage_C.NetToggleRetraction
	 */
	struct UBP_HandPackage_C_NetToggleRetraction_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.MultiToggleRetraction
	 */
	struct UBP_HandPackage_C_MultiToggleRetraction_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.NetUnattachAndRetractHand
	 */
	struct UBP_HandPackage_C_NetUnattachAndRetractHand_Params
	{	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.MultiUnattachAndRetractHand
	 */
	struct UBP_HandPackage_C_MultiUnattachAndRetractHand_Params
	{	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.PackageUnattachAndRetractHand
	 */
	struct UBP_HandPackage_C_PackageUnattachAndRetractHand_Params
	{	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.PackageToggleRetraction
	 */
	struct UBP_HandPackage_C_PackageToggleRetraction_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.ExtendHand
	 */
	struct UBP_HandPackage_C_ExtendHand_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             RoughEndLocation;                                        // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q27Z[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerPreview_C*                                 Player;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.TryExtendHand
	 */
	struct UBP_HandPackage_C_TryExtendHand_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             RoughEndLocation;                                        // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ALVG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerPreview_C*                                 Player;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.MultiExtendHand
	 */
	struct UBP_HandPackage_C_MultiExtendHand_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             RoughEndLocation;                                        // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQY9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerPreview_C*                                 Player;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.NetExtendHand
	 */
	struct UBP_HandPackage_C_NetExtendHand_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             RoughEndLocation;                                        // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83WX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerPreview_C*                                 Player;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandPackage.BP_HandPackage_C.ExecuteUbergraph_BP_HandPackage
	 */
	struct UBP_HandPackage_C_ExecuteUbergraph_BP_HandPackage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HAF[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
