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
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetRotation
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_ResetRotation_Params
	{	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayAction
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_PlayAction_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CharacterType;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JDM4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetCharacterAnimations
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_ResetCharacterAnimations_Params
	{	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetPlayerCosmeticCategory
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_SetPlayerCosmeticCategory_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayUpdateAnimation
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_PlayUpdateAnimation_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetVisibleCharacter
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_SetVisibleCharacter_Params
	{
	public:
		ECharacterType                                             CharacterType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetCharacter
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_SetCharacter_Params
	{
	public:
		ECharacterType                                             CharacterType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYBI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPresetSlot                                         Preset;                                                  // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter
	 */
	struct ABP_MonsterAndPlayerMenuCharacter_C_ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IGKX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
