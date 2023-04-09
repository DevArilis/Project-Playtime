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
	 * Function BP_Locker.BP_Locker_C.GetPrompt
	 */
	struct ABP_Locker_C_GetPrompt_Params
	{
	public:
		class FText                                                PromptPrefix;                                            // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                PromptSuffix;                                            // 0x0018(0x0018)  (Parm, OutParm)
		bool                                                       CanPrompt;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYIY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Authority_BeginInteraction
	 */
	struct ABP_Locker_C_Authority_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3S0F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Owner_BeginInteraction
	 */
	struct ABP_Locker_C_Owner_BeginInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanContinueInteraction;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z70L[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ContinueInteractionDuration;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.ChangeLockerLightState
	 */
	struct ABP_Locker_C_ChangeLockerLightState_Params
	{
	public:
		bool                                                       Alert;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RLF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Locker.BP_Locker_C.SetLockerOpenVisibility
	 */
	struct ABP_Locker_C_SetLockerOpenVisibility_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EVF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Locker.BP_Locker_C.SetLockerOpenProgress
	 */
	struct ABP_Locker_C_SetLockerOpenProgress_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Hits;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6TOU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Locker.BP_Locker_C.UserConstructionScript
	 */
	struct ABP_Locker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Locker_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Locker_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Authority_ContinueInteraction
	 */
	struct ABP_Locker_C_Authority_ContinueInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Authority_EndInteraction
	 */
	struct ABP_Locker_C_Authority_EndInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Owner_ContinueInteraction
	 */
	struct ABP_Locker_C_Owner_ContinueInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Owner_EndInteraction
	 */
	struct ABP_Locker_C_Owner_EndInteraction_Params
	{
	public:
		class AANetworkCharacter*                                  InteractingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.GetInLocker
	 */
	struct ABP_Locker_C_GetInLocker_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.GetOutOfLocker
	 */
	struct ABP_Locker_C_GetOutOfLocker_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.OpenCloseDoor
	 */
	struct ABP_Locker_C_OpenCloseDoor_Params
	{
	public:
		bool                                                       ShouldOpen;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Monster_TryOpen
	 */
	struct ABP_Locker_C_Monster_TryOpen_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         MonsterController;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.CancelMonster_TryOpen
	 */
	struct ABP_Locker_C_CancelMonster_TryOpen_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.SetLockOpenVisibility
	 */
	struct ABP_Locker_C_SetLockOpenVisibility_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.SetLockOpenProgress
	 */
	struct ABP_Locker_C_SetLockOpenProgress_Params
	{
	public:
		class ACharacter*                                          Monster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Hits;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Sabotage
	 */
	struct ABP_Locker_C_Sabotage_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.Multi_ShakeLocker_Anim
	 */
	struct ABP_Locker_C_Multi_ShakeLocker_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Multi_EnterLocker_Anim
	 */
	struct ABP_Locker_C_Multi_EnterLocker_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Multi_ExitLocker_Anim
	 */
	struct ABP_Locker_C_Multi_ExitLocker_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Multi_LockerTakeout_Anim
	 */
	struct ABP_Locker_C_Multi_LockerTakeout_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.EnterLockerCam
	 */
	struct ABP_Locker_C_EnterLockerCam_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.ExitLockerCam
	 */
	struct ABP_Locker_C_ExitLockerCam_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.InterruptLockerCam
	 */
	struct ABP_Locker_C_InterruptLockerCam_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.TakeoutLockerCam
	 */
	struct ABP_Locker_C_TakeoutLockerCam_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.EnterLockerCam_Anim
	 */
	struct ABP_Locker_C_EnterLockerCam_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.ExitLockerCam_Anim
	 */
	struct ABP_Locker_C_ExitLockerCam_Anim_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Trigger Camping Alarm
	 */
	struct ABP_Locker_C_TriggerCampingAlarm_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.Stop Camping Alarm
	 */
	struct ABP_Locker_C_StopCampingAlarm_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.SoundTheAlarm
	 */
	struct ABP_Locker_C_SoundTheAlarm_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.ExecuteUbergraph_BP_Locker
	 */
	struct ABP_Locker_C_ExecuteUbergraph_BP_Locker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Locker.BP_Locker_C.OnExitLocker__DelegateSignature
	 */
	struct ABP_Locker_C_OnExitLocker__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.OnEnteredLocker__DelegateSignature
	 */
	struct ABP_Locker_C_OnEnteredLocker__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.OnLockerClosed__DelegateSignature
	 */
	struct ABP_Locker_C_OnLockerClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Locker.BP_Locker_C.OnLockerOpened__DelegateSignature
	 */
	struct ABP_Locker_C_OnLockerOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
