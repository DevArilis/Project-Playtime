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
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ClientMonsterInteractUI
	 */
	struct UBPC_MonsterUIHandler_C_ClientMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ShowMonsterInteractUI
	 */
	struct UBPC_MonsterUIHandler_C_ShowMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Interact
	 */
	struct UBPC_MonsterUIHandler_C_Interact_Params
	{
	public:
		class ABP_NetworkHuggy_C*                                  Huggy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Toggle Can Interact
	 */
	struct UBPC_MonsterUIHandler_C_ToggleCanInteract_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceResetSecurityUI
	 */
	struct UBPC_MonsterUIHandler_C_InterfaceResetSecurityUI_Params
	{
	public:
		class ABP_NetworkHuggy_C*                                  Huggy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfacePickupPlayer
	 */
	struct UBPC_MonsterUIHandler_C_InterfacePickupPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceDropPlayer
	 */
	struct UBPC_MonsterUIHandler_C_InterfaceDropPlayer_Params
	{	};

	/**
	 * Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ExecuteUbergraph_BPC_MonsterUIHandler
	 */
	struct UBPC_MonsterUIHandler_C_ExecuteUbergraph_BPC_MonsterUIHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
