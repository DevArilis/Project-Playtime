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
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ResetOrigin
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::ResetOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ResetOrigin");
		
		ABP_NetExtendoHand_C_ResetOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.Hit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NetExtendoHand_C::Hit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.Hit");
		
		ABP_NetExtendoHand_C_Hit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.OpenPanelChargeGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetExtendoHand_C::OpenPanelChargeGate(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.OpenPanelChargeGate");
		
		ABP_NetExtendoHand_C_OpenPanelChargeGate_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Air High Five
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorToCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoHighFive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetExtendoHand_C::CalculateAirHighFive(const struct FVector& Location, class AActor* ActorToCheck, bool* NoHighFive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Air High Five");
		
		ABP_NetExtendoHand_C_CalculateAirHighFive_Params params {};
		params.Location = Location;
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoHighFive != nullptr)
			*NoHighFive = params.NoHighFive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.Handle Wire
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::HandleWire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.Handle Wire");
		
		ABP_NetExtendoHand_C_HandleWire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateGun
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::RotateGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateGun");
		
		ABP_NetExtendoHand_C_RotateGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Panel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoPanel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class ABP_MP_HandPanel_C* ABP_NetExtendoHand_C::CalculatePanel(class AActor* ActorToCheck, bool* NoPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.Calculate Panel");
		
		ABP_NetExtendoHand_C_CalculatePanel_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoPanel != nullptr)
			*NoPanel = params.NoPanel;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.UnattachAndRetract
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::UnattachAndRetract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.UnattachAndRetract");
		
		ABP_NetExtendoHand_C_UnattachAndRetract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetHitComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ABP_NetExtendoHand_C::GetHitComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetHitComponent");
		
		ABP_NetExtendoHand_C_GetHitComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetReturnVelocity
	 * 		Flags  -> ()
	 */
	struct FVector ABP_NetExtendoHand_C::GetReturnVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.GetReturnVelocity");
		
		ABP_NetExtendoHand_C_GetReturnVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateHandToNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::RotateHandToNormal(const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.RotateHandToNormal");
		
		ABP_NetExtendoHand_C_RotateHandToNormal_Params params {};
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.FitHandOnAttachedItem
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::FitHandOnAttachedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.FitHandOnAttachedItem");
		
		ABP_NetExtendoHand_C_FitHandOnAttachedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleHighFive
	 * 		Flags  -> ()
	 */
	bool ABP_NetExtendoHand_C::HandleHighFive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleHighFive");
		
		ABP_NetExtendoHand_C_HandleHighFive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.RetractSound
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::RetractSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.RetractSound");
		
		ABP_NetExtendoHand_C_RetractSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.GrabSound
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::GrabSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.GrabSound");
		
		ABP_NetExtendoHand_C_GrabSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.TraceForHit
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::TraceForHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.TraceForHit");
		
		ABP_NetExtendoHand_C_TraceForHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleWireLength
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::HandleWireLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandleWireLength");
		
		ABP_NetExtendoHand_C_HandleWireLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::SetLocationByDirection(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDirection");
		
		ABP_NetExtendoHand_C_SetLocationByDirection_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.CheckIfReadyToDestroy
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::CheckIfReadyToDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.CheckIfReadyToDestroy");
		
		ABP_NetExtendoHand_C_CheckIfReadyToDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReturnHand
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::ReturnHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReturnHand");
		
		ABP_NetExtendoHand_C_ReturnHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDistanceMoved
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::SetLocationByDistanceMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetLocationByDistanceMoved");
		
		ABP_NetExtendoHand_C_SetLocationByDistanceMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.LaunchSound
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::LaunchSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.LaunchSound");
		
		ABP_NetExtendoHand_C_LaunchSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetHandSide
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::SetHandSide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.SetHandSide");
		
		ABP_NetExtendoHand_C_SetHandSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveTick");
		
		ABP_NetExtendoHand_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveBeginPlay");
		
		ABP_NetExtendoHand_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ReceiveDestroyed");
		
		ABP_NetExtendoHand_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MP_HandPanel_C*                          HandPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::EventAttachHandToPanel(class ABP_MP_HandPanel_C* HandPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToPanel");
		
		ABP_NetExtendoHand_C_EventAttachHandToPanel_Params params {};
		params.HandPanel = HandPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToActor
	 * 		Flags  -> ()
	 */
	void ABP_NetExtendoHand_C::EventAttachHandToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.EventAttachHandToActor");
		
		ABP_NetExtendoHand_C_EventAttachHandToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ToggleRetractionGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetExtendoHand_C::ToggleRetractionGate(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ToggleRetractionGate");
		
		ABP_NetExtendoHand_C_ToggleRetractionGate_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.ExecuteUbergraph_BP_NetExtendoHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::ExecuteUbergraph_BP_NetExtendoHand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.ExecuteUbergraph_BP_NetExtendoHand");
		
		ABP_NetExtendoHand_C_ExecuteUbergraph_BP_NetExtendoHand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandAttached__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AttachedTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetExtendoHand_C::HandAttached__DelegateSignature(class AActor* AttachedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetExtendoHand.BP_NetExtendoHand_C.HandAttached__DelegateSignature");
		
		ABP_NetExtendoHand_C_HandAttached__DelegateSignature_Params params {};
		params.AttachedTo = AttachedTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetExtendoHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetExtendoHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetExtendoHand.BP_NetExtendoHand_C");
		return ptr;
	}

}


