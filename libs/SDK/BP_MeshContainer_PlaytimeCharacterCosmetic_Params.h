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
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.GetPlaytimeCharacter
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_GetPlaytimeCharacter_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VBAP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.SetPlaytimeCharacter
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_SetPlaytimeCharacter_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.UserConstructionScript
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ReceiveTick
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.Playtime Character Tick
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_PlaytimeCharacterTick_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic
	 */
	struct ABP_MeshContainer_PlaytimeCharacterCosmetic_C_ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
