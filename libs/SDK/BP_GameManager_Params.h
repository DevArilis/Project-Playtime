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
	 * Function BP_GameManager.BP_GameManager_C.DetermineMonsterTrend
	 */
	struct ABP_GameManager_C_DetermineMonsterTrend_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.GetToyPartMeshFromIndex
	 */
	struct ABP_GameManager_C_GetToyPartMeshFromIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MVWV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.UpdateToysOnHUD
	 */
	struct ABP_GameManager_C_UpdateToysOnHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D4ZC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.OnRep_ToySelection
	 */
	struct ABP_GameManager_C_OnRep_ToySelection_Params
	{	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.ReceiveBeginPlay
	 */
	struct ABP_GameManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.TrainIsFixed
	 */
	struct ABP_GameManager_C_TrainIsFixed_Params
	{	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.ReceiveTick
	 */
	struct ABP_GameManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.LookForMonster
	 */
	struct ABP_GameManager_C_LookForMonster_Params
	{	};

	/**
	 * Function BP_GameManager.BP_GameManager_C.ExecuteUbergraph_BP_GameManager
	 */
	struct ABP_GameManager_C_ExecuteUbergraph_BP_GameManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
