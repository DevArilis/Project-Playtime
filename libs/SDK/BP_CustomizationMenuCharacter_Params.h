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
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetVisibility
	 */
	struct ABP_CustomizationMenuCharacter_C_SetVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetType
	 */
	struct ABP_CustomizationMenuCharacter_C_SetType_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QP6Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.GetAnimationBlueprint
	 */
	struct ABP_CustomizationMenuCharacter_C_GetAnimationBlueprint_Params
	{
	public:
		class UABP_CustomizationMenuPlayer_C*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromSave
	 */
	struct ABP_CustomizationMenuCharacter_C_UpdateCosmeticsFromSave_Params
	{	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromPreset
	 */
	struct ABP_CustomizationMenuCharacter_C_UpdateCosmeticsFromPreset_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.PlaySelectAnimation
	 */
	struct ABP_CustomizationMenuCharacter_C_PlaySelectAnimation_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetSourceComponent
	 */
	struct ABP_CustomizationMenuCharacter_C_SetSourceComponent_Params
	{	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UserConstructionScript
	 */
	struct ABP_CustomizationMenuCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_CustomizationMenuCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ExecuteUbergraph_BP_CustomizationMenuCharacter
	 */
	struct ABP_CustomizationMenuCharacter_C_ExecuteUbergraph_BP_CustomizationMenuCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58LN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
