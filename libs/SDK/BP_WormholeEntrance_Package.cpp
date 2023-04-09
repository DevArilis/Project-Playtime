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
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetReviveSpeed
	 * 		Flags  -> ()
	 */
	float ABP_WormholeEntrance_C::GetReviveSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetReviveSpeed");
		
		ABP_WormholeEntrance_C_GetReviveSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetHandFromReviver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkHand*                               Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::GetHandFromReviver(class AANetworkHand** Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.GetHandFromReviver");
		
		ABP_WormholeEntrance_C_GetHandFromReviver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hand != nullptr)
			*Hand = params.Hand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Reviver Is Local
	 * 		Flags  -> ()
	 */
	bool ABP_WormholeEntrance_C::ReviverIsLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Reviver Is Local");
		
		ABP_WormholeEntrance_C_ReviverIsLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Progress
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OnRep_Progress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Progress");
		
		ABP_WormholeEntrance_C_OnRep_Progress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ViewProgress
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::ViewProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ViewProgress");
		
		ABP_WormholeEntrance_C_ViewProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Opened
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OnRep_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnRep_Opened");
		
		ABP_WormholeEntrance_C_OnRep_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.UserConstructionScript");
		
		ABP_WormholeEntrance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::CloseDoorTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__FinishedFunc");
		
		ABP_WormholeEntrance_C_CloseDoorTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::CloseDoorTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorTimeline__UpdateFunc");
		
		ABP_WormholeEntrance_C_CloseDoorTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OpenDoorTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__FinishedFunc");
		
		ABP_WormholeEntrance_C_OpenDoorTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OpenDoorTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorTimeline__UpdateFunc");
		
		ABP_WormholeEntrance_C_OpenDoorTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Cancel Reviver Tooltip
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::MulticastCancelReviverTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Cancel Reviver Tooltip");
		
		ABP_WormholeEntrance_C_MulticastCancelReviverTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Success Reviver Tooltip
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::MulticastSuccessReviverTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Success Reviver Tooltip");
		
		ABP_WormholeEntrance_C_MulticastSuccessReviverTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Start Reviver Tooltip
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::MulticastStartReviverTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Start Reviver Tooltip");
		
		ABP_WormholeEntrance_C_MulticastStartReviverTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_WormholeEntrance_C::BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Net_DetachHands
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::Net_DetachHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Net_DetachHands");
		
		ABP_WormholeEntrance_C_Net_DetachHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReviveSuccess
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::ReviveSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReviveSuccess");
		
		ABP_WormholeEntrance_C_ReviveSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ShowReviveIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WormholeEntrance_C::ShowReviveIndicator(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ShowReviveIndicator");
		
		ABP_WormholeEntrance_C_ShowReviveIndicator_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Spawn Reviver Tooltip
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::MulticastSpawnReviverTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast Spawn Reviver Tooltip");
		
		ABP_WormholeEntrance_C_MulticastSpawnReviverTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.MonsterShowNavIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WormholeEntrance_C::MonsterShowNavIndicator(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.MonsterShowNavIndicator");
		
		ABP_WormholeEntrance_C_MonsterShowNavIndicator_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveTick");
		
		ABP_WormholeEntrance_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorAnim
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::CloseDoorAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.CloseDoorAnim");
		
		ABP_WormholeEntrance_C_CloseDoorAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorAnim
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OpenDoorAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OpenDoorAnim");
		
		ABP_WormholeEntrance_C_OpenDoorAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast_DetachHands
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::Multicast_DetachHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Multicast_DetachHands");
		
		ABP_WormholeEntrance_C_Multicast_DetachHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Close Door
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Close Door");
		
		ABP_WormholeEntrance_C_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Open Door
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Open Door");
		
		ABP_WormholeEntrance_C_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.PutPlayerInto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PlayerMovingThrough                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::PutPlayerInto(class ABP_NetworkCharacter_C* PlayerMovingThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.PutPlayerInto");
		
		ABP_WormholeEntrance_C_PutPlayerInto_Params params {};
		params.PlayerMovingThrough = PlayerMovingThrough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_WormholeEntrance_C_BndEvt__BP_WormholeEntrance_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.Set Hinge Rotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::SetHingeRotation(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.Set Hinge Rotation");
		
		ABP_WormholeEntrance_C_SetHingeRotation_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WormholeEntrance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ReceiveBeginPlay");
		
		ABP_WormholeEntrance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.ExecuteUbergraph_BP_WormholeEntrance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::ExecuteUbergraph_BP_WormholeEntrance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.ExecuteUbergraph_BP_WormholeEntrance");
		
		ABP_WormholeEntrance_C_ExecuteUbergraph_BP_WormholeEntrance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnDroppedInHole__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DualSplineFollower_C*                    DSF                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeEntrance_C::OnDroppedInHole__DelegateSignature(class ABP_DualSplineFollower_C* DSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeEntrance.BP_WormholeEntrance_C.OnDroppedInHole__DelegateSignature");
		
		ABP_WormholeEntrance_C_OnDroppedInHole__DelegateSignature_Params params {};
		params.DSF = DSF;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WormholeEntrance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WormholeEntrance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WormholeEntrance.BP_WormholeEntrance_C");
		return ptr;
	}

}


