/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.GetPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PromptPrefix                                               (Parm, OutParm)
	 * 		class FText                                        PromptSuffix                                               (Parm, OutParm)
	 * 		bool                                               CanPrompt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Locker_C::GetPrompt(class FText* PromptPrefix, class FText* PromptSuffix, bool* CanPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.GetPrompt");
		
		ABP_Locker_C_GetPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PromptPrefix != nullptr)
			*PromptPrefix = params.PromptPrefix;
		if (PromptSuffix != nullptr)
			*PromptSuffix = params.PromptSuffix;
		if (CanPrompt != nullptr)
			*CanPrompt = params.CanPrompt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Authority_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Authority_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Authority_BeginInteraction");
		
		ABP_Locker_C_Authority_BeginInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanContinueInteraction != nullptr)
			*CanContinueInteraction = params.CanContinueInteraction;
		if (ContinueInteractionDuration != nullptr)
			*ContinueInteractionDuration = params.ContinueInteractionDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Owner_BeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanContinueInteraction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ContinueInteractionDuration                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Owner_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Owner_BeginInteraction");
		
		ABP_Locker_C_Owner_BeginInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanContinueInteraction != nullptr)
			*CanContinueInteraction = params.CanContinueInteraction;
		if (ContinueInteractionDuration != nullptr)
			*ContinueInteractionDuration = params.ContinueInteractionDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.ChangeLockerLightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Locker_C::ChangeLockerLightState(bool Alert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.ChangeLockerLightState");
		
		ABP_Locker_C_ChangeLockerLightState_Params params {};
		params.Alert = Alert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.SetLockerOpenVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Locker_C::SetLockerOpenVisibility(class ACharacter* Monster, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.SetLockerOpenVisibility");
		
		ABP_Locker_C_SetLockerOpenVisibility_Params params {};
		params.Monster = Monster;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.SetLockerOpenProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::SetLockerOpenProgress(class ACharacter* Monster, int32_t Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.SetLockerOpenProgress");
		
		ABP_Locker_C_SetLockerOpenProgress_Params params {};
		params.Monster = Monster;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.UserConstructionScript");
		
		ABP_Locker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Timeline_0__FinishedFunc");
		
		ABP_Locker_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Timeline_0__UpdateFunc");
		
		ABP_Locker_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Authority_ContinueInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Authority_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Authority_ContinueInteraction");
		
		ABP_Locker_C_Authority_ContinueInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Authority_EndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Authority_EndInteraction(class AANetworkCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Authority_EndInteraction");
		
		ABP_Locker_C_Authority_EndInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Owner_ContinueInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Owner_ContinueInteraction(class AANetworkCharacter* InteractingActor, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Owner_ContinueInteraction");
		
		ABP_Locker_C_Owner_ContinueInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Owner_EndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Owner_EndInteraction(class AANetworkCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Owner_EndInteraction");
		
		ABP_Locker_C_Owner_EndInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.GetInLocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::GetInLocker(class ABP_NetworkCharacter_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.GetInLocker");
		
		ABP_Locker_C_GetInLocker_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.GetOutOfLocker
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::GetOutOfLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.GetOutOfLocker");
		
		ABP_Locker_C_GetOutOfLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.OpenCloseDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Locker_C::OpenCloseDoor(bool ShouldOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.OpenCloseDoor");
		
		ABP_Locker_C_OpenCloseDoor_Params params {};
		params.ShouldOpen = ShouldOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Monster_TryOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 MonsterController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Monster_TryOpen(class ACharacter* Monster, class AController* MonsterController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Monster_TryOpen");
		
		ABP_Locker_C_Monster_TryOpen_Params params {};
		params.Monster = Monster;
		params.MonsterController = MonsterController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.CancelMonster_TryOpen
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::CancelMonster_TryOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.CancelMonster_TryOpen");
		
		ABP_Locker_C_CancelMonster_TryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.SetLockOpenVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Locker_C::SetLockOpenVisibility(class ACharacter* Monster, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.SetLockOpenVisibility");
		
		ABP_Locker_C_SetLockOpenVisibility_Params params {};
		params.Monster = Monster;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.SetLockOpenProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::SetLockOpenProgress(class ACharacter* Monster, int32_t Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.SetLockOpenProgress");
		
		ABP_Locker_C_SetLockOpenProgress_Params params {};
		params.Monster = Monster;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Sabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::Sabotage(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Sabotage");
		
		ABP_Locker_C_Sabotage_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Multi_ShakeLocker_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Multi_ShakeLocker_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Multi_ShakeLocker_Anim");
		
		ABP_Locker_C_Multi_ShakeLocker_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Multi_EnterLocker_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Multi_EnterLocker_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Multi_EnterLocker_Anim");
		
		ABP_Locker_C_Multi_EnterLocker_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Multi_ExitLocker_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Multi_ExitLocker_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Multi_ExitLocker_Anim");
		
		ABP_Locker_C_Multi_ExitLocker_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Multi_LockerTakeout_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::Multi_LockerTakeout_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Multi_LockerTakeout_Anim");
		
		ABP_Locker_C_Multi_LockerTakeout_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.EnterLockerCam
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::EnterLockerCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.EnterLockerCam");
		
		ABP_Locker_C_EnterLockerCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.ExitLockerCam
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::ExitLockerCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.ExitLockerCam");
		
		ABP_Locker_C_ExitLockerCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.InterruptLockerCam
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::InterruptLockerCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.InterruptLockerCam");
		
		ABP_Locker_C_InterruptLockerCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.TakeoutLockerCam
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::TakeoutLockerCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.TakeoutLockerCam");
		
		ABP_Locker_C_TakeoutLockerCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.EnterLockerCam_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::EnterLockerCam_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.EnterLockerCam_Anim");
		
		ABP_Locker_C_EnterLockerCam_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.ExitLockerCam_Anim
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::ExitLockerCam_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.ExitLockerCam_Anim");
		
		ABP_Locker_C_ExitLockerCam_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Trigger Camping Alarm
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::TriggerCampingAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Trigger Camping Alarm");
		
		ABP_Locker_C_TriggerCampingAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.Stop Camping Alarm
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::StopCampingAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.Stop Camping Alarm");
		
		ABP_Locker_C_StopCampingAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.SoundTheAlarm
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::SoundTheAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.SoundTheAlarm");
		
		ABP_Locker_C_SoundTheAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.ExecuteUbergraph_BP_Locker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Locker_C::ExecuteUbergraph_BP_Locker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.ExecuteUbergraph_BP_Locker");
		
		ABP_Locker_C_ExecuteUbergraph_BP_Locker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.OnExitLocker__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::OnExitLocker__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.OnExitLocker__DelegateSignature");
		
		ABP_Locker_C_OnExitLocker__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.OnEnteredLocker__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::OnEnteredLocker__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.OnEnteredLocker__DelegateSignature");
		
		ABP_Locker_C_OnEnteredLocker__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.OnLockerClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::OnLockerClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.OnLockerClosed__DelegateSignature");
		
		ABP_Locker_C_OnLockerClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Locker.BP_Locker_C.OnLockerOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Locker_C::OnLockerOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Locker.BP_Locker_C.OnLockerOpened__DelegateSignature");
		
		ABP_Locker_C_OnLockerOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Locker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Locker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Locker.BP_Locker_C");
		return ptr;
	}

}


