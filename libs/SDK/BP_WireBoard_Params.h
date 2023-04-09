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
	 * Function BP_WireBoard.BP_WireBoard_C.RandomizeEndPoints
	 */
	struct ABP_WireBoard_C_RandomizeEndPoints_Params
	{	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.CheckWireConnections
	 */
	struct ABP_WireBoard_C_CheckWireConnections_Params
	{
	public:
		bool                                                       Solved;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.UserConstructionScript
	 */
	struct ABP_WireBoard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.ReceiveBeginPlay
	 */
	struct ABP_WireBoard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.OnConnected
	 */
	struct ABP_WireBoard_C_OnConnected_Params
	{	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.Disconnect
	 */
	struct ABP_WireBoard_C_Disconnect_Params
	{	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.ExecuteUbergraph_BP_WireBoard
	 */
	struct ABP_WireBoard_C_ExecuteUbergraph_BP_WireBoard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WireBoard.BP_WireBoard_C.OnSolved__DelegateSignature
	 */
	struct ABP_WireBoard_C_OnSolved__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
