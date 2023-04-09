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
	 * Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Playtime Character Tick
	 */
	struct ABP_MeshContainer_HuggySkin_C_PlaytimeCharacterTick_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Network Huggy Tick
	 */
	struct ABP_MeshContainer_HuggySkin_C_NetworkHuggyTick_Params
	{
	public:
		class ABP_NetworkHuggy_C*                                  NetworkHuggy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.ExecuteUbergraph_BP_MeshContainer_HuggySkin
	 */
	struct ABP_MeshContainer_HuggySkin_C_ExecuteUbergraph_BP_MeshContainer_HuggySkin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_67B6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
