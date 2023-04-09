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
	 * Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Playtime Character Tick
	 */
	struct ABP_MeshContainer_MommySkin_C_PlaytimeCharacterTick_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Network Mommy Tick
	 */
	struct ABP_MeshContainer_MommySkin_C_NetworkMommyTick_Params
	{
	public:
		class ABP_NetworkMommy_C*                                  NetworkMommy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.ExecuteUbergraph_BP_MeshContainer_MommySkin
	 */
	struct ABP_MeshContainer_MommySkin_C_ExecuteUbergraph_BP_MeshContainer_MommySkin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_382R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
