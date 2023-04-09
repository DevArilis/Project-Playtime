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
	 * Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetCosmeticFromStruct
	 */
	struct ABP_MeshContainer_BoxySkin_C_SetCosmeticFromStruct_Params
	{
	public:
		struct FCosmetic                                           Cosmetic;                                                // 0x0000(0x0248)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0248(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetEyeDecalVisibility
	 */
	struct ABP_MeshContainer_BoxySkin_C_SetEyeDecalVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Playtime Character Tick
	 */
	struct ABP_MeshContainer_BoxySkin_C_PlaytimeCharacterTick_Params
	{
	public:
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Network Boxy Tick
	 */
	struct ABP_MeshContainer_BoxySkin_C_NetworkBoxyTick_Params
	{
	public:
		class ABP_NetworkBoxy_C*                                   NetworkBoxy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.ExecuteUbergraph_BP_MeshContainer_BoxySkin
	 */
	struct ABP_MeshContainer_BoxySkin_C_ExecuteUbergraph_BP_MeshContainer_BoxySkin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5K2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
