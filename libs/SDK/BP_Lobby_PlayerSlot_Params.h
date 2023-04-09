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
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdateSlot
	 */
	struct ABP_Lobby_PlayerSlot_C_UpdateSlot_Params
	{	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.OnRep_Enabled
	 */
	struct ABP_Lobby_PlayerSlot_C_OnRep_Enabled_Params
	{	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.IsMaterialReady
	 */
	struct ABP_Lobby_PlayerSlot_C_IsMaterialReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UH02[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetReady
	 */
	struct ABP_Lobby_PlayerSlot_C_SetReady_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.GS_Escape_SetInterface
	 */
	struct ABP_Lobby_PlayerSlot_C_GS_Escape_SetInterface_Params
	{	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.UpdatePlayerAsMonster
	 */
	struct ABP_Lobby_PlayerSlot_C_UpdatePlayerAsMonster_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ReceiveBeginPlay
	 */
	struct ABP_Lobby_PlayerSlot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.SetInterface
	 */
	struct ABP_Lobby_PlayerSlot_C_SetInterface_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C.ExecuteUbergraph_BP_Lobby_PlayerSlot
	 */
	struct ABP_Lobby_PlayerSlot_C_ExecuteUbergraph_BP_Lobby_PlayerSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
