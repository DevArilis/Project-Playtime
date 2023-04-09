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
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyExitCrouch
	 */
	struct ABP_MonsterShrinker_C_BoxyExitCrouch_Params
	{
	public:
		class ABP_NetworkBoxy_C*                                   BoxyRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyEnterCrouch
	 */
	struct ABP_MonsterShrinker_C_BoxyEnterCrouch_Params
	{
	public:
		class ABP_NetworkBoxy_C*                                   BoxyRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyExitCrouch
	 */
	struct ABP_MonsterShrinker_C_MommyExitCrouch_Params
	{
	public:
		class ABP_NetworkMommy_C*                                  MommyRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyEnterCrouch
	 */
	struct ABP_MonsterShrinker_C_MommyEnterCrouch_Params
	{
	public:
		class ABP_NetworkMommy_C*                                  MommyRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyExitCrouch
	 */
	struct ABP_MonsterShrinker_C_HuggyExitCrouch_Params
	{
	public:
		class ABP_NetworkHuggy_C*                                  HuggyRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyEnterCrouch
	 */
	struct ABP_MonsterShrinker_C_HuggyEnterCrouch_Params
	{
	public:
		class ABP_NetworkHuggy_C*                                  HuggyRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorEndOverlap
	 */
	struct ABP_MonsterShrinker_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorBeginOverlap
	 */
	struct ABP_MonsterShrinker_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterShrinker.BP_MonsterShrinker_C.ExecuteUbergraph_BP_MonsterShrinker
	 */
	struct ABP_MonsterShrinker_C_ExecuteUbergraph_BP_MonsterShrinker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_22Y3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
