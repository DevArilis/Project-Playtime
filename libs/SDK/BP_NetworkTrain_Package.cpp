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
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TraceForPlayersInDoorway
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TraceForPlayersInDoorway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TraceForPlayersInDoorway");
		
		ABP_NetworkTrain_C_TraceForPlayersInDoorway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::OnPlayerExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerExit");
		
		ABP_NetworkTrain_C_OnPlayerExit_Params params {};
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
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NetworkTrain_C::OnPlayerEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnPlayerEnter");
		
		ABP_NetworkTrain_C_OnPlayerEnter_Params params {};
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
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.SetArrays
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::SetArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.SetArrays");
		
		ABP_NetworkTrain_C_SetArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_ToggleDoors
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnRep_ToggleDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_ToggleDoors");
		
		ABP_NetworkTrain_C_OnRep_ToggleDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.GetPlayersOnTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_NetworkCharacter_C*>              Players                                                    (Parm, OutParm)
	 */
	void ABP_NetworkTrain_C::GetPlayersOnTrain(TArray<class ABP_NetworkCharacter_C*>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.GetPlayersOnTrain");
		
		ABP_NetworkTrain_C_GetPlayersOnTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.UpdateVariables
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::UpdateVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.UpdateVariables");
		
		ABP_NetworkTrain_C_UpdateVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.UpdatePlayersOnTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::UpdatePlayersOnTrain(int32_t* Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.UpdatePlayersOnTrain");
		
		ABP_NetworkTrain_C_UpdatePlayersOnTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.MoveCart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Cart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineComponent*                            Track                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::MoveCart(class USceneComponent* Cart, float Distance, class USplineComponent* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.MoveCart");
		
		ABP_NetworkTrain_C_MoveCart_Params params {};
		params.Cart = Cart;
		params.Distance = Distance;
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_R_IsTrainFixed
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnRep_R_IsTrainFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnRep_R_IsTrainFixed");
		
		ABP_NetworkTrain_C_OnRep_R_IsTrainFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleCarTriggers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkTrain_C::ToggleCarTriggers(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleCarTriggers");
		
		ABP_NetworkTrain_C_ToggleCarTriggers_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.SetupEscapeIndicator
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::SetupEscapeIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.SetupEscapeIndicator");
		
		ABP_NetworkTrain_C_SetupEscapeIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.GetDistanceOnSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnlyUseLoop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USplineComponent*                            Track                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_NetworkTrain_C::GetDistanceOnSpline(int32_t Index, float Alpha, bool OnlyUseLoop, class USplineComponent** Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.GetDistanceOnSpline");
		
		ABP_NetworkTrain_C_GetDistanceOnSpline_Params params {};
		params.Index = Index;
		params.Alpha = Alpha;
		params.OnlyUseLoop = OnlyUseLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Track != nullptr)
			*Track = params.Track;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerLeftCart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::PlayerLeftCart(class AActor* Actor, class UPrimitiveComponent* Trigger, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerLeftCart");
		
		ABP_NetworkTrain_C_PlayerLeftCart_Params params {};
		params.Actor = Actor;
		params.Trigger = Trigger;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerEnteredCart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::PlayerEnteredCart(class AActor* Actor, class UPrimitiveComponent* Component, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.PlayerEnteredCart");
		
		ABP_NetworkTrain_C_PlayerEnteredCart_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.UserConstructionScript");
		
		ABP_NetworkTrain_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TL_Train__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__FinishedFunc");
		
		ABP_NetworkTrain_C_TL_Train__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TL_Train__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__UpdateFunc");
		
		ABP_NetworkTrain_C_TL_Train__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__BeginDeceleration__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TL_Train__BeginDeceleration__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__BeginDeceleration__EventFunc");
		
		ABP_NetworkTrain_C_TL_Train__BeginDeceleration__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__ReachedFullSpeed__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TL_Train__ReachedFullSpeed__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__ReachedFullSpeed__EventFunc");
		
		ABP_NetworkTrain_C_TL_Train__ReachedFullSpeed__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__Start__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TL_Train__Start__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TL_Train__Start__EventFunc");
		
		ABP_NetworkTrain_C_TL_Train__Start__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.PreSaveActorState
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::PreSaveActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.PreSaveActorState");
		
		ABP_NetworkTrain_C_PreSaveActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.CheckForSolved
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::CheckForSolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.CheckForSolved");
		
		ABP_NetworkTrain_C_CheckForSolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.R_OnFixed
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::R_OnFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.R_OnFixed");
		
		ABP_NetworkTrain_C_R_OnFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ToEnd
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::ToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ToEnd");
		
		ABP_NetworkTrain_C_ToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.BeginEndGameSequence
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::BeginEndGameSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.BeginEndGameSequence");
		
		ABP_NetworkTrain_C_BeginEndGameSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.IsPlayerNearby
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::IsPlayerNearby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.IsPlayerNearby");
		
		ABP_NetworkTrain_C_IsPlayerNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OpenDoor
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OpenDoor");
		
		ABP_NetworkTrain_C_OpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkTrain_C::ToggleDoor(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ToggleDoor");
		
		ABP_NetworkTrain_C_ToggleDoor_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.LoadActorState
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::LoadActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.LoadActorState");
		
		ABP_NetworkTrain_C_LoadActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveBeginPlay");
		
		ABP_NetworkTrain_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ReceiveTick");
		
		ABP_NetworkTrain_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.Multicast Train Leaving Sound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::MulticastTrainLeavingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.Multicast Train Leaving Sound");
		
		ABP_NetworkTrain_C_MulticastTrainLeavingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.DeactivateCallButtons
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::DeactivateCallButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.DeactivateCallButtons");
		
		ABP_NetworkTrain_C_DeactivateCallButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.BeginDeparture
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::BeginDeparture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.BeginDeparture");
		
		ABP_NetworkTrain_C_BeginDeparture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.Countdown
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::Countdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.Countdown");
		
		ABP_NetworkTrain_C_Countdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ActivateCallButtons
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::ActivateCallButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ActivateCallButtons");
		
		ABP_NetworkTrain_C_ActivateCallButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.CallTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::CallTrain(int32_t Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.CallTrain");
		
		ABP_NetworkTrain_C_CallTrain_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.ExecuteUbergraph_BP_NetworkTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkTrain_C::ExecuteUbergraph_BP_NetworkTrain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.ExecuteUbergraph_BP_NetworkTrain");
		
		ABP_NetworkTrain_C_ExecuteUbergraph_BP_NetworkTrain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnBoardTrain__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnBoardTrain__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnBoardTrain__DelegateSignature");
		
		ABP_NetworkTrain_C_OnBoardTrain__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainCalled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnTrainCalled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainCalled__DelegateSignature");
		
		ABP_NetworkTrain_C_OnTrainCalled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnTrainStop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStop__DelegateSignature");
		
		ABP_NetworkTrain_C_OnTrainStop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::OnTrainStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.OnTrainStart__DelegateSignature");
		
		ABP_NetworkTrain_C_OnTrainStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkTrain.BP_NetworkTrain_C.TrainIsFixed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkTrain_C::TrainIsFixed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkTrain.BP_NetworkTrain_C.TrainIsFixed__DelegateSignature");
		
		ABP_NetworkTrain_C_TrainIsFixed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkTrain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkTrain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkTrain.BP_NetworkTrain_C");
		return ptr;
	}

}


