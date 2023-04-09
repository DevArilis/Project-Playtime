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
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.GetFirstAttachedCharacter
	 */
	struct UBPC_HandMagnet_C_GetFirstAttachedCharacter_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandStartPull
	 */
	struct UBPC_HandMagnet_C_OnHandStartPull_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandDetach
	 */
	struct UBPC_HandMagnet_C_OnHandDetach_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.OnHandAttach
	 */
	struct UBPC_HandMagnet_C_OnHandAttach_Params
	{
	public:
		class UObject*                                             Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.ReceiveBeginPlay
	 */
	struct UBPC_HandMagnet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_HandMagnet.BPC_HandMagnet_C.ExecuteUbergraph_BPC_HandMagnet
	 */
	struct UBPC_HandMagnet_C_ExecuteUbergraph_BPC_HandMagnet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8918[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
