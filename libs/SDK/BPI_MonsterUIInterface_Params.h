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
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetMonsterHUD
	 */
	struct UBPI_MonsterUIInterface_C_GetMonsterHUD_Params
	{	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUpPlayer
	 */
	struct UBPI_MonsterUIInterface_C_SetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayerIn;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_NetworkCharacter_C*                              PickedUpPlayerOut;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUpPlayer
	 */
	struct UBPI_MonsterUIInterface_C_GetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUp
	 */
	struct UBPI_MonsterUIInterface_C_SetPickedUp_Params
	{
	public:
		bool                                                       PickedUpIn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PickedUpOut;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUp
	 */
	struct UBPI_MonsterUIInterface_C_GetPickedUp_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetOwningMonster
	 */
	struct UBPI_MonsterUIInterface_C_GetOwningMonster_Params
	{
	public:
		class AActor*                                              MonsterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.DropPlayer
	 */
	struct UBPI_MonsterUIInterface_C_DropPlayer_Params
	{	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.PickupPlayer
	 */
	struct UBPI_MonsterUIInterface_C_PickupPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceGetMonsterName
	 */
	struct UBPI_MonsterUIInterface_C_InterfaceGetMonsterName_Params
	{
	public:
		class FString                                              InterfaceMonsterName;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceResetSecurityUI
	 */
	struct UBPI_MonsterUIInterface_C_InterfaceResetSecurityUI_Params
	{	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceToggleCanInteract
	 */
	struct UBPI_MonsterUIInterface_C_InterfaceToggleCanInteract_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceShowMonsterInteractUI
	 */
	struct UBPI_MonsterUIInterface_C_InterfaceShowMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceClientMonsterInteractUI
	 */
	struct UBPI_MonsterUIInterface_C_InterfaceClientMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
