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
	 * Function BP_Lobby.BP_Lobby_C.UpdateExtraSlots
	 */
	struct ABP_Lobby_C_UpdateExtraSlots_Params
	{	};

	/**
	 * Function BP_Lobby.BP_Lobby_C.GS_SetInterface
	 */
	struct ABP_Lobby_C_GS_SetInterface_Params
	{	};

	/**
	 * Function BP_Lobby.BP_Lobby_C.SetInterface
	 */
	struct ABP_Lobby_C_SetInterface_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby.BP_Lobby_C.ReceiveBeginPlay
	 */
	struct ABP_Lobby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lobby.BP_Lobby_C.ExecuteUbergraph_BP_Lobby
	 */
	struct ABP_Lobby_C_ExecuteUbergraph_BP_Lobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
