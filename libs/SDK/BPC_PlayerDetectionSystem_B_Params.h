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
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.OnRep_SelectedSoundsPackage
	 */
	struct UBPC_PlayerDetectionSystem_B_C_OnRep_SelectedSoundsPackage_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.MML_UpdateTimer
	 */
	struct UBPC_PlayerDetectionSystem_B_C_MML_UpdateTimer_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.MML_MainTimerEnd
	 */
	struct UBPC_PlayerDetectionSystem_B_C_MML_MainTimerEnd_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ReceiveBeginPlay
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ExitedBlue
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ExitedBlue_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.EnteredYellow
	 */
	struct UBPC_PlayerDetectionSystem_B_C_EnteredYellow_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CK7P[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ExitRed
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ExitRed_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.EnteredRed
	 */
	struct UBPC_PlayerDetectionSystem_B_C_EnteredRed_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J6KD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ExitedYellow
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ExitedYellow_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.NetSetSounds
	 */
	struct UBPC_PlayerDetectionSystem_B_C_NetSetSounds_Params
	{
	public:
		struct FSelectedSoundsPackage                              SelectedSoundsPackage;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ActivateMonsterChaseMusic
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ActivateMonsterChaseMusic_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ActivateMonsterAmbientMusic
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ActivateMonsterAmbientMusic_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.TriggerChase
	 */
	struct UBPC_PlayerDetectionSystem_B_C_TriggerChase_Params
	{	};

	/**
	 * Function BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C.ExecuteUbergraph_BPC_PlayerDetectionSystem_B
	 */
	struct UBPC_PlayerDetectionSystem_B_C_ExecuteUbergraph_BPC_PlayerDetectionSystem_B_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
