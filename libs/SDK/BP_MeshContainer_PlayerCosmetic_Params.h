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
	 * Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Playtime Character Tick
	 */
	struct ABP_MeshContainer_PlayerCosmetic_C_PlaytimeCharacterTick_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Network Character Tick
	 */
	struct ABP_MeshContainer_PlayerCosmetic_C_NetworkCharacterTick_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              NetworkCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic
	 */
	struct ABP_MeshContainer_PlayerCosmetic_C_ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QDGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
