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
	 * Function MP_DefaultMap.MP_DefaultMap_C.ShouldPlayIntro
	 */
	struct AMP_DefaultMap_C_ShouldPlayIntro_Params
	{
	public:
		bool                                                       Should;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N2L3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.GetReconnectConsoleCommand
	 */
	struct AMP_DefaultMap_C_GetReconnectConsoleCommand_Params
	{
	public:
		class FString                                              NewHostIP;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8
	 */
	struct AMP_DefaultMap_C_OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8
	 */
	struct AMP_DefaultMap_C_OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnCallback_A6336C8F4158FC455E22909FE6D5133B
	 */
	struct AMP_DefaultMap_C_OnCallback_A6336C8F4158FC455E22909FE6D5133B_Params
	{
	public:
		TArray<struct FSteamSessionResult>                         Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E
	 */
	struct AMP_DefaultMap_C_OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E
	 */
	struct AMP_DefaultMap_C_OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7
	 */
	struct AMP_DefaultMap_C_OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7
	 */
	struct AMP_DefaultMap_C_OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.OnTimeout
	 */
	struct AMP_DefaultMap_C_OnTimeout_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.AttempMigrateClient
	 */
	struct AMP_DefaultMap_C_AttempMigrateClient_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.MigrateClient
	 */
	struct AMP_DefaultMap_C_MigrateClient_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.MigrateHost
	 */
	struct AMP_DefaultMap_C_MigrateHost_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.ReceiveBeginPlay
	 */
	struct AMP_DefaultMap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MP_DefaultMap.MP_DefaultMap_C.ExecuteUbergraph_MP_DefaultMap
	 */
	struct AMP_DefaultMap_C_ExecuteUbergraph_MP_DefaultMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
