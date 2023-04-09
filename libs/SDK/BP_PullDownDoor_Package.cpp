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
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_ServerClosed
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::OnRep_ServerClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_ServerClosed");
		
		ABP_PullDownDoor_C_OnRep_ServerClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage_Shut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToTake                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::Sabotage_Shut(float TimeToTake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage_Shut");
		
		ABP_PullDownDoor_C_Sabotage_Shut_Params params {};
		params.TimeToTake = TimeToTake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.EvaluateHands
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::EvaluateHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.EvaluateHands");
		
		ABP_PullDownDoor_C_EvaluateHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_AccelerateUp
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::OnRep_AccelerateUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_AccelerateUp");
		
		ABP_PullDownDoor_C_OnRep_AccelerateUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__FinishedFunc");
		
		ABP_PullDownDoor_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__UpdateFunc");
		
		ABP_PullDownDoor_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::TL_Close__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__FinishedFunc");
		
		ABP_PullDownDoor_C_TL_Close__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::TL_Close__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__UpdateFunc");
		
		ABP_PullDownDoor_C_TL_Close__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C. Timeline Trigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MoveDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OverridePlayerInputLock                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PullDownDoor_C::TimelineTrigger(bool MoveDown, bool OverridePlayerInputLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C. Timeline Trigger");
		
		ABP_PullDownDoor_C_TimelineTrigger_Params params {};
		params.MoveDown = MoveDown;
		params.OverridePlayerInputLock = OverridePlayerInputLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.On Any AttachmentStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::OnAnyAttachmentStateChange(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.On Any AttachmentStateChange");
		
		ABP_PullDownDoor_C_OnAnyAttachmentStateChange_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.AutoReopen
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::AutoReopen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.AutoReopen");
		
		ABP_PullDownDoor_C_AutoReopen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::Sabotage(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage");
		
		ABP_PullDownDoor_C_Sabotage_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.Auto Reopen event
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::AutoReopenevent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.Auto Reopen event");
		
		ABP_PullDownDoor_C_AutoReopenevent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PullDownDoor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveBeginPlay");
		
		ABP_PullDownDoor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveTick");
		
		ABP_PullDownDoor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.ToggleDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Closed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PullDownDoor_C::ToggleDoor(bool Closed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.ToggleDoor");
		
		ABP_PullDownDoor_C_ToggleDoor_Params params {};
		params.Closed = Closed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.TotalLockdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Durantion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::TotalLockdown(float Durantion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.TotalLockdown");
		
		ABP_PullDownDoor_C_TotalLockdown_Params params {};
		params.Durantion = Durantion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PullDownDoor.BP_PullDownDoor_C.ExecuteUbergraph_BP_PullDownDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PullDownDoor_C::ExecuteUbergraph_BP_PullDownDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PullDownDoor.BP_PullDownDoor_C.ExecuteUbergraph_BP_PullDownDoor");
		
		ABP_PullDownDoor_C_ExecuteUbergraph_BP_PullDownDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PullDownDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PullDownDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PullDownDoor.BP_PullDownDoor_C");
		return ptr;
	}

}


