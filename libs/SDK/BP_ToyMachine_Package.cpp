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
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHandsObjective
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::EvaluateHandsObjective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHandsObjective");
		
		ABP_ToyMachine_C_EvaluateHandsObjective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.HowManyBoolsTrue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	int32_t ABP_ToyMachine_C::HowManyBoolsTrue(TArray<bool>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.HowManyBoolsTrue");
		
		ABP_ToyMachine_C_HowManyBoolsTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHands
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::EvaluateHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.EvaluateHands");
		
		ABP_ToyMachine_C_EvaluateHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PipeGrabbable
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::OnRep_PipeGrabbable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PipeGrabbable");
		
		ABP_ToyMachine_C_OnRep_PipeGrabbable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.MakePipeGrabbable
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::MakePipeGrabbable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.MakePipeGrabbable");
		
		ABP_ToyMachine_C_MakePipeGrabbable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PartsAdded
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::OnRep_PartsAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.OnRep_PartsAdded");
		
		ABP_ToyMachine_C_OnRep_PartsAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.AddToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ToyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::AddToyPart(int32_t ToyIndex, class UStaticMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.AddToyPart");
		
		ABP_ToyMachine_C_AddToyPart_Params params {};
		params.ToyIndex = ToyIndex;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.AreAllPartsAdded
	 * 		Flags  -> ()
	 */
	bool ABP_ToyMachine_C::AreAllPartsAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.AreAllPartsAdded");
		
		ABP_ToyMachine_C_AreAllPartsAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ClearToyParts
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ClearToyParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ClearToyParts");
		
		ABP_ToyMachine_C_ClearToyParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ToyAdd__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__FinishedFunc");
		
		ABP_ToyMachine_C_ToyAdd__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ToyAdd__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ToyAdd__UpdateFunc");
		
		ABP_ToyMachine_C_ToyAdd__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ToyUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__FinishedFunc");
		
		ABP_ToyMachine_C_ToyUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ToyUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ToyUp__UpdateFunc");
		
		ABP_ToyMachine_C_ToyUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::PullTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__FinishedFunc");
		
		ABP_ToyMachine_C_PullTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::PullTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.PullTimeline__UpdateFunc");
		
		ABP_ToyMachine_C_PullTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.PreSaveActorState
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::PreSaveActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.PreSaveActorState");
		
		ABP_ToyMachine_C_PreSaveActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.PlayToyAddAnimation
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::PlayToyAddAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.PlayToyAddAnimation");
		
		ABP_ToyMachine_C_PlayToyAddAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.PlayToyUpAnimation
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::PlayToyUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.PlayToyUpAnimation");
		
		ABP_ToyMachine_C_PlayToyUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ReceiveActorBeginOverlap");
		
		ABP_ToyMachine_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ReceiveBeginPlay");
		
		ABP_ToyMachine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.MultiChangeObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_ToyMachine_C::MultiChangeObjective(const class FText& NewObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.MultiChangeObjective");
		
		ABP_ToyMachine_C_MultiChangeObjective_Params params {};
		params.NewObjective = NewObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.MultiSetIsUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToyMachine_C::MultiSetIsUse(bool IsUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.MultiSetIsUse");
		
		ABP_ToyMachine_C_MultiSetIsUse_Params params {};
		params.IsUse = IsUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.On Hand Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::OnHandAttached(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.On Hand Attached");
		
		ABP_ToyMachine_C_OnHandAttached_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.Set Pull Speed Timeline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PullSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::SetPullSpeedTimeline(int32_t PullSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.Set Pull Speed Timeline");
		
		ABP_ToyMachine_C_SetPullSpeedTimeline_Params params {};
		params.PullSpeed = PullSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ReceiveTick");
		
		ABP_ToyMachine_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.Multicast_IncrementStat
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::Multicast_IncrementStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.Multicast_IncrementStat");
		
		ABP_ToyMachine_C_Multicast_IncrementStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.LoadActorState
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::LoadActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.LoadActorState");
		
		ABP_ToyMachine_C_LoadActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.IsPlayerNearby
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::IsPlayerNearby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.IsPlayerNearby");
		
		ABP_ToyMachine_C_IsPlayerNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.Multicast_PlayPullingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::Multicast_PlayPullingSound(int32_t Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.Multicast_PlayPullingSound");
		
		ABP_ToyMachine_C_Multicast_PlayPullingSound_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ConnectPipe
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::ConnectPipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ConnectPipe");
		
		ABP_ToyMachine_C_ConnectPipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.ExecuteUbergraph_BP_ToyMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToyMachine_C::ExecuteUbergraph_BP_ToyMachine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.ExecuteUbergraph_BP_ToyMachine");
		
		ABP_ToyMachine_C_ExecuteUbergraph_BP_ToyMachine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.OnPipeConnected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::OnPipeConnected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.OnPipeConnected__DelegateSignature");
		
		ABP_ToyMachine_C_OnPipeConnected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToyMachine.BP_ToyMachine_C.OnAddToyPart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ToyMachine_C::OnAddToyPart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToyMachine.BP_ToyMachine_C.OnAddToyPart__DelegateSignature");
		
		ABP_ToyMachine_C_OnAddToyPart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ToyMachine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ToyMachine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToyMachine.BP_ToyMachine_C");
		return ptr;
	}

}


