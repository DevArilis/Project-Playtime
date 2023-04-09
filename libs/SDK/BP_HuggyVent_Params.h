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
	 * Function BP_HuggyVent.BP_HuggyVent_C.GetRightVent
	 */
	struct ABP_HuggyVent_C_GetRightVent_Params
	{
	public:
		class ABP_HuggyVent_C*                                     RightVent;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.GetLeftVent
	 */
	struct ABP_HuggyVent_C_GetLeftVent_Params
	{
	public:
		class ABP_HuggyVent_C*                                     LeftVent;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.Is In Range?
	 */
	struct ABP_HuggyVent_C_IsInRange_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InRange;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.LockVent
	 */
	struct ABP_HuggyVent_C_LockVent_Params
	{	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.ReceiveBeginPlay
	 */
	struct ABP_HuggyVent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.EnterVent
	 */
	struct ABP_HuggyVent_C_EnterVent_Params
	{	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.MoveToVent
	 */
	struct ABP_HuggyVent_C_MoveToVent_Params
	{	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.ExitVent
	 */
	struct ABP_HuggyVent_C_ExitVent_Params
	{	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.Alert
	 */
	struct ABP_HuggyVent_C_Alert_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HuggyVent.BP_HuggyVent_C.ExecuteUbergraph_BP_HuggyVent
	 */
	struct ABP_HuggyVent_C_ExecuteUbergraph_BP_HuggyVent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLK8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
