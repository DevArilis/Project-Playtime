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
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetMonsterHUD
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::GetMonsterHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetMonsterHUD");
		
		ABP_NetworkHuggy_C_GetMonsterHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUpPlayer");
		
		ABP_NetworkHuggy_C_SetPickedUpPlayer_Params params {};
		params.PickedUpPlayerIn = PickedUpPlayerIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpPlayerOut != nullptr)
			*PickedUpPlayerOut = params.PickedUpPlayerOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUpPlayer");
		
		ABP_NetworkHuggy_C_GetPickedUpPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpPlayer != nullptr)
			*PickedUpPlayer = params.PickedUpPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUpIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PickedUpOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::SetPickedUp(bool PickedUpIn, bool* PickedUpOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUp");
		
		ABP_NetworkHuggy_C_SetPickedUp_Params params {};
		params.PickedUpIn = PickedUpIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpOut != nullptr)
			*PickedUpOut = params.PickedUpOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::GetPickedUp(bool* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUp");
		
		ABP_NetworkHuggy_C_GetPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUp != nullptr)
			*PickedUp = params.PickedUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MonsterActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::GetOwningMonster(class AActor** MonsterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningMonster");
		
		ABP_NetworkHuggy_C_GetOwningMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MonsterActor != nullptr)
			*MonsterActor = params.MonsterActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceGetMonsterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InterfaceMonsterName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InterfaceGetMonsterName(class FString* InterfaceMonsterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceGetMonsterName");
		
		ABP_NetworkHuggy_C_InterfaceGetMonsterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterfaceMonsterName != nullptr)
			*InterfaceMonsterName = params.InterfaceMonsterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent2
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnRep_CurrentVent2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent2");
		
		ABP_NetworkHuggy_C_OnRep_CurrentVent2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_InVent?
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnRep_InVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_InVent?");
		
		ABP_NetworkHuggy_C_OnRep_InVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnRep_CurrentVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent");
		
		ABP_NetworkHuggy_C_OnRep_CurrentVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Footstep
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::Footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Footstep");
		
		ABP_NetworkHuggy_C_Footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_Preset
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnRep_Preset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_Preset");
		
		ABP_NetworkHuggy_C_OnRep_Preset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggle ThirdPerson
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ToggleThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggle ThirdPerson");
		
		ABP_NetworkHuggy_C_ToggleThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set First Person Visiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::SetFirstPersonVisiblity(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set First Person Visiblity");
		
		ABP_NetworkHuggy_C_SetFirstPersonVisiblity_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Third Person Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::SetThirdPersonVisibility(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Third Person Visibility");
		
		ABP_NetworkHuggy_C_SetThirdPersonVisibility_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::GetOwningPlayerController(class APlayerController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningPlayerController");
		
		ABP_NetworkHuggy_C_GetOwningPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayThirdPersonHitAnimation
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::PlayThirdPersonHitAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayThirdPersonHitAnimation");
		
		ABP_NetworkHuggy_C_PlayThirdPersonHitAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.BabyHuggyDownTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DownLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::BabyHuggyDownTrace(const struct FVector& InLocation, struct FVector* DownLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.BabyHuggyDownTrace");
		
		ABP_NetworkHuggy_C_BabyHuggyDownTrace_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DownLocation != nullptr)
			*DownLocation = params.DownLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CanPlaceBaby
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnRep_CanPlaceBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CanPlaceBaby");
		
		ABP_NetworkHuggy_C_OnRep_CanPlaceBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayFirstPersonHitMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::PlayFirstPersonHitMontage(bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayFirstPersonHitMontage");
		
		ABP_NetworkHuggy_C_PlayFirstPersonHitMontage_Params params {};
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetHuggyHUD
	 * 		Flags  -> ()
	 */
	class UUI_MonsterHUD_C* ABP_NetworkHuggy_C::GetHuggyHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetHuggyHUD");
		
		ABP_NetworkHuggy_C_GetHuggyHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.LookAround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::LookAround(float Val, bool Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.LookAround");
		
		ABP_NetworkHuggy_C_LookAround_Params params {};
		params.Val = Val;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CrouchCam__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__FinishedFunc");
		
		ABP_NetworkHuggy_C_CrouchCam__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CrouchCam__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__UpdateFunc");
		
		ABP_NetworkHuggy_C_CrouchCam__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CrosshairCooldown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__FinishedFunc");
		
		ABP_NetworkHuggy_C_CrosshairCooldown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CrosshairCooldown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__UpdateFunc");
		
		ABP_NetworkHuggy_C_CrosshairCooldown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ChargeHugFOVMod__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__FinishedFunc");
		
		ABP_NetworkHuggy_C_ChargeHugFOVMod__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ChargeHugFOVMod__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__UpdateFunc");
		
		ABP_NetworkHuggy_C_ChargeHugFOVMod__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Emote_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Emote_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Emote_K2Node_InputActionEvent_12");
		
		ABP_NetworkHuggy_C_InpActEvt_Emote_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Jump_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Jump_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Jump_K2Node_InputActionEvent_11");
		
		ABP_NetworkHuggy_C_InpActEvt_Jump_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_T_K2Node_InputKeyEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_T_K2Node_InputKeyEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_T_K2Node_InputKeyEvent_10");
		
		ABP_NetworkHuggy_C_InpActEvt_T_K2Node_InputKeyEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_9");
		
		ABP_NetworkHuggy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8");
		
		ABP_NetworkHuggy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_7");
		
		ABP_NetworkHuggy_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_S_K2Node_InputKeyEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_S_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_S_K2Node_InputKeyEvent_6");
		
		ABP_NetworkHuggy_C_InpActEvt_S_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_W_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_W_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_W_K2Node_InputKeyEvent_5");
		
		ABP_NetworkHuggy_C_InpActEvt_W_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_D_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_D_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_D_K2Node_InputKeyEvent_4");
		
		ABP_NetworkHuggy_C_InpActEvt_D_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_A_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_A_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_A_K2Node_InputKeyEvent_3");
		
		ABP_NetworkHuggy_C_InpActEvt_A_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
		
		ABP_NetworkHuggy_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
		
		ABP_NetworkHuggy_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Interact_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_10");
		
		ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Interact_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_9");
		
		ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Run_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_8");
		
		ABP_NetworkHuggy_C_InpActEvt_Run_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Run_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_7");
		
		ABP_NetworkHuggy_C_InpActEvt_Run_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_RightHandExtend_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_6");
		
		ABP_NetworkHuggy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_RightHandExtend_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_5");
		
		ABP_NetworkHuggy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4");
		
		ABP_NetworkHuggy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_LeftHandExtend_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_3");
		
		ABP_NetworkHuggy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Sabotage_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2");
		
		ABP_NetworkHuggy_C_InpActEvt_Sabotage_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_1");
		
		ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnEndCrouch");
		
		ABP_NetworkHuggy_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnStartCrouch");
		
		ABP_NetworkHuggy_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCamera
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CrouchCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCamera");
		
		ABP_NetworkHuggy_C_CrouchCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NetworkHuggy_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnLanded");
		
		ABP_NetworkHuggy_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ForceUncrouch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ForceUncrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ForceUncrouch");
		
		ABP_NetworkHuggy_C_ForceUncrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiSetCapsuleHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::MultiSetCapsuleHeight(float NewHeight, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiSetCapsuleHeight");
		
		ABP_NetworkHuggy_C_MultiSetCapsuleHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetCapsuleHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::SetCapsuleHeight(float NewHeight, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetCapsuleHeight");
		
		ABP_NetworkHuggy_C_SetCapsuleHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4");
		
		ABP_NetworkHuggy_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3");
		
		ABP_NetworkHuggy_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");
		
		ABP_NetworkHuggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");
		
		ABP_NetworkHuggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopHeadBob
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::StopHeadBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopHeadBob");
		
		ABP_NetworkHuggy_C_StopHeadBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartHeadBob
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::StartHeadBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartHeadBob");
		
		ABP_NetworkHuggy_C_StartHeadBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopChargeBob
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::StopChargeBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopChargeBob");
		
		ABP_NetworkHuggy_C_StopChargeBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartChargeBob
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::StartChargeBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartChargeBob");
		
		ABP_NetworkHuggy_C_StartChargeBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlertOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            vent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Server_ScanAlertOff(int32_t vent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlertOff");
		
		ABP_NetworkHuggy_C_Server_ScanAlertOff_Params params {};
		params.vent = vent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            vent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Server_ScanAlert(int32_t vent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlert");
		
		ABP_NetworkHuggy_C_Server_ScanAlert_Params params {};
		params.vent = vent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ExitVent
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::Server_ExitVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ExitVent");
		
		ABP_NetworkHuggy_C_Server_ExitVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_CycleVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VentIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Server_CycleVent(int32_t VentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_CycleVent");
		
		ABP_NetworkHuggy_C_Server_CycleVent_Params params {};
		params.VentIndex = VentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_TryToVent
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::Server_TryToVent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_TryToVent");
		
		ABP_NetworkHuggy_C_Server_TryToVent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryStartBabyHuggy
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::TryStartBabyHuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryStartBabyHuggy");
		
		ABP_NetworkHuggy_C_TryStartBabyHuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToCharge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::TryToCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToCharge");
		
		ABP_NetworkHuggy_C_TryToCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToRightPunch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::TryToRightPunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToRightPunch");
		
		ABP_NetworkHuggy_C_TryToRightPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToLeftPunch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::TryToLeftPunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToLeftPunch");
		
		ABP_NetworkHuggy_C_TryToLeftPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargingSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ChargingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargingSound");
		
		ABP_NetworkHuggy_C_ChargingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHitSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ChargeHitSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHitSound");
		
		ABP_NetworkHuggy_C_ChargeHitSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Play Swing Sound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::PlaySwingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Play Swing Sound");
		
		ABP_NetworkHuggy_C_PlaySwingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Enable Movement
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ServerEnableMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Enable Movement");
		
		ABP_NetworkHuggy_C_ServerEnableMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Disable Movement and Head Bob
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ServerDisableMovementandHeadBob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Disable Movement and Head Bob");
		
		ABP_NetworkHuggy_C_ServerDisableMovementandHeadBob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.RightAttackShake
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::RightAttackShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.RightAttackShake");
		
		ABP_NetworkHuggy_C_RightAttackShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.LeftAttackShake
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::LeftAttackShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.LeftAttackShake");
		
		ABP_NetworkHuggy_C_LeftAttackShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature");
		
		ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature");
		
		ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReverseChargeHugFOVMod
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ReverseChargeHugFOVMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReverseChargeHugFOVMod");
		
		ABP_NetworkHuggy_C_ReverseChargeHugFOVMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayChargeHugFOVMod
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::PlayChargeHugFOVMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayChargeHugFOVMod");
		
		ABP_NetworkHuggy_C_PlayChargeHugFOVMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Baby Huggy Skeletal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BabyHuggy_C*                             BabyHuggy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::SetBabyHuggySkeletal(class ABP_BabyHuggy_C* BabyHuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Baby Huggy Skeletal");
		
		ABP_NetworkHuggy_C_SetBabyHuggySkeletal_Params params {};
		params.BabyHuggy = BabyHuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlaceHuggyServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HuggyLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    HuggyRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::PlaceHuggyServer(const struct FVector& HuggyLocation, const struct FRotator& HuggyRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlaceHuggyServer");
		
		ABP_NetworkHuggy_C_PlaceHuggyServer_Params params {};
		params.HuggyLocation = HuggyLocation;
		params.HuggyRotation = HuggyRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveEndPlay");
		
		ABP_NetworkHuggy_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.FoundSteamInventory");
		
		ABP_NetworkHuggy_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.RemoveCosmeticsDueToError
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::RemoveCosmeticsDueToError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.RemoveCosmeticsDueToError");
		
		ABP_NetworkHuggy_C_RemoveCosmeticsDueToError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.VerifyClientInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::VerifyClientInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.VerifyClientInventory");
		
		ABP_NetworkHuggy_C_VerifyClientInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceivePossessed");
		
		ABP_NetworkHuggy_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.CreateHuggyWidget
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::CreateHuggyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.CreateHuggyWidget");
		
		ABP_NetworkHuggy_C_CreateHuggyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ShowHoleNav
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::ShowHoleNav(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ShowHoleNav");
		
		ABP_NetworkHuggy_C_ShowHoleNav_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");
		
		ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.DropPlayer
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::DropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.DropPlayer");
		
		ABP_NetworkHuggy_C_DropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PickupPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PickupPlayer");
		
		ABP_NetworkHuggy_C_PickupPlayer_Params params {};
		params.PickedUpPlayer = PickedUpPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Drop Player
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ServerDropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Drop Player");
		
		ABP_NetworkHuggy_C_ServerDropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceResetSecurityUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::InterfaceResetSecurityUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceResetSecurityUI");
		
		ABP_NetworkHuggy_C_InterfaceResetSecurityUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceToggleCanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::InterfaceToggleCanInteract(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceToggleCanInteract");
		
		ABP_NetworkHuggy_C_InterfaceToggleCanInteract_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceShowMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkHuggy_C::InterfaceShowMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceShowMonsterInteractUI");
		
		ABP_NetworkHuggy_C_InterfaceShowMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceClientMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkHuggy_C::InterfaceClientMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceClientMonsterInteractUI");
		
		ABP_NetworkHuggy_C_InterfaceClientMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveTick");
		
		ABP_NetworkHuggy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveBeginPlay");
		
		ABP_NetworkHuggy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiHugPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PlayerToHug                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendOut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Charging                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EnoughSpaceforJumpscare                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::MultiHugPlayer(class ABP_NetworkCharacter_C* PlayerToHug, float Duration, float BlendOut, bool Charging, bool EnoughSpaceforJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiHugPlayer");
		
		ABP_NetworkHuggy_C_MultiHugPlayer_Params params {};
		params.PlayerToHug = PlayerToHug;
		params.Duration = Duration;
		params.BlendOut = BlendOut;
		params.Charging = Charging;
		params.EnoughSpaceforJumpscare = EnoughSpaceforJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetHugPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PlayerToHug                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::NetHugPlayer(class ABP_NetworkCharacter_C* PlayerToHug, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetHugPlayer");
		
		ABP_NetworkHuggy_C_NetHugPlayer_Params params {};
		params.PlayerToHug = PlayerToHug;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ServerOnly_ToggleHugHitScan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::ServerOnly_ToggleHugHitScan(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ServerOnly_ToggleHugHitScan");
		
		ABP_NetworkHuggy_C_ServerOnly_ToggleHugHitScan_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.DoEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::DoEmote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.DoEmote");
		
		ABP_NetworkHuggy_C_DoEmote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Multicast_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Multicast_Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Multicast_Emote");
		
		ABP_NetworkHuggy_C_Multicast_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Server_Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_Emote");
		
		ABP_NetworkHuggy_C_Server_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Emote");
		
		ABP_NetworkHuggy_C_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetSetCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FHuggySoundSet                              Sounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkHuggy_C::NetSetCosmetics(const struct FPresetSlot& Preset, const struct FHuggySoundSet& Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetSetCosmetics");
		
		ABP_NetworkHuggy_C_NetSetCosmetics_Params params {};
		params.Preset = Preset;
		params.Sounds = Sounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.HitSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::HitSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.HitSound");
		
		ABP_NetworkHuggy_C_HitSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayHitMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::PlayHitMontage(bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayHitMontage");
		
		ABP_NetworkHuggy_C_PlayHitMontage_Params params {};
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetTraceAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkHuggy_C::NetTraceAttack(bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetTraceAttack");
		
		ABP_NetworkHuggy_C_NetTraceAttack_Params params {};
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.ExecuteUbergraph_BP_NetworkHuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHuggy_C::ExecuteUbergraph_BP_NetworkHuggy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.ExecuteUbergraph_BP_NetworkHuggy");
		
		ABP_NetworkHuggy_C_ExecuteUbergraph_BP_NetworkHuggy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnSabotage__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnSabotage__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnSabotage__DelegateSignature");
		
		ABP_NetworkHuggy_C_OnSabotage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnPlacedBabyHuggy__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnPlacedBabyHuggy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnPlacedBabyHuggy__DelegateSignature");
		
		ABP_NetworkHuggy_C_OnPlacedBabyHuggy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnJump__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnJump__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnJump__DelegateSignature");
		
		ABP_NetworkHuggy_C_OnJump__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnBasicAttack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::OnBasicAttack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnBasicAttack__DelegateSignature");
		
		ABP_NetworkHuggy_C_OnBasicAttack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggled Third Person During Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHuggy_C::ToggledThirdPersonDuringJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggled Third Person During Jumpscare__DelegateSignature");
		
		ABP_NetworkHuggy_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkHuggy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkHuggy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkHuggy.BP_NetworkHuggy_C");
		return ptr;
	}

}


