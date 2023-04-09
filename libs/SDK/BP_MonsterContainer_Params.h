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
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.GetMonsterIndex
	 */
	struct ABP_MonsterContainer_C_GetMonsterIndex_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IFN8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__FinishedFunc
	 */
	struct ABP_MonsterContainer_C_CameraTranslationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__UpdateFunc
	 */
	struct ABP_MonsterContainer_C_CameraTranslationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.RefreshVisuals
	 */
	struct ABP_MonsterContainer_C_RefreshVisuals_Params
	{
	public:
		bool                                                       Delay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.SetCharacter
	 */
	struct ABP_MonsterContainer_C_SetCharacter_Params
	{
	public:
		ECharacterType                                             Character;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.StartAnimation
	 */
	struct ABP_MonsterContainer_C_StartAnimation_Params
	{	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.Owning_Capture
	 */
	struct ABP_MonsterContainer_C_Owning_Capture_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.Server_Capture
	 */
	struct ABP_MonsterContainer_C_Server_Capture_Params
	{
	public:
		class APlayerController*                                   CharPicking;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.Main Menu View Target
	 */
	struct ABP_MonsterContainer_C_MainMenuViewTarget_Params
	{	};

	/**
	 * Function BP_MonsterContainer.BP_MonsterContainer_C.ExecuteUbergraph_BP_MonsterContainer
	 */
	struct ABP_MonsterContainer_C_ExecuteUbergraph_BP_MonsterContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
