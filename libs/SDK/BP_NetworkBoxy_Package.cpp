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
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetMonsterHUD
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::GetMonsterHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetMonsterHUD");
		
		ABP_NetworkBoxy_C_GetMonsterHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUpPlayer");
		
		ABP_NetworkBoxy_C_SetPickedUpPlayer_Params params {};
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
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUpPlayer");
		
		ABP_NetworkBoxy_C_GetPickedUpPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpPlayer != nullptr)
			*PickedUpPlayer = params.PickedUpPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUpIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PickedUpOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::SetPickedUp(bool PickedUpIn, bool* PickedUpOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUp");
		
		ABP_NetworkBoxy_C_SetPickedUp_Params params {};
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
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::GetPickedUp(bool* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUp");
		
		ABP_NetworkBoxy_C_GetPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUp != nullptr)
			*PickedUp = params.PickedUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MonsterActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::GetOwningMonster(class AActor** MonsterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningMonster");
		
		ABP_NetworkBoxy_C_GetOwningMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MonsterActor != nullptr)
			*MonsterActor = params.MonsterActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceGetMonsterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InterfaceMonsterName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InterfaceGetMonsterName(class FString* InterfaceMonsterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceGetMonsterName");
		
		ABP_NetworkBoxy_C_InterfaceGetMonsterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterfaceMonsterName != nullptr)
			*InterfaceMonsterName = params.InterfaceMonsterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Sounds
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::OnRep_Sounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Sounds");
		
		ABP_NetworkBoxy_C_OnRep_Sounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Preset
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::OnRep_Preset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Preset");
		
		ABP_NetworkBoxy_C_OnRep_Preset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Third Person
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ToggleThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Third Person");
		
		ABP_NetworkBoxy_C_ToggleThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set First Person Visiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::SetFirstPersonVisiblity(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set First Person Visiblity");
		
		ABP_NetworkBoxy_C_SetFirstPersonVisiblity_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set Third Person Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::SetThirdPersonVisibility(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set Third Person Visibility");
		
		ABP_NetworkBoxy_C_SetThirdPersonVisibility_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::GetOwningPlayerController(class APlayerController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningPlayerController");
		
		ABP_NetworkBoxy_C_GetOwningPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetClosestPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Closest                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::GetClosestPlayer(class ABP_NetworkCharacter_C** Closest, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetClosestPlayer");
		
		ABP_NetworkBoxy_C_GetClosestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Closest != nullptr)
			*Closest = params.Closest;
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.IsMonsterMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::IsMonsterMoving(bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.IsMonsterMoving");
		
		ABP_NetworkBoxy_C_IsMonsterMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_PunchButtonIsDown?
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::OnRep_PunchButtonIsDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_PunchButtonIsDown?");
		
		ABP_NetworkBoxy_C_OnRep_PunchButtonIsDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetCurrentPunchDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::GetCurrentPunchDelay(float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetCurrentPunchDelay");
		
		ABP_NetworkBoxy_C_GetCurrentPunchDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Punch Delays
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      Array                                                      (Parm, OutParm)
	 */
	void ABP_NetworkBoxy_C::GetPunchDelays(TArray<float>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Punch Delays");
		
		ABP_NetworkBoxy_C_GetPunchDelays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Boxy HUD
	 * 		Flags  -> ()
	 */
	class UUI_MonsterHUD_C* ABP_NetworkBoxy_C::GetBoxyHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Boxy HUD");
		
		ABP_NetworkBoxy_C_GetBoxyHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Trace Attack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::TraceAttack(float BaseDamage, bool* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Trace Attack");
		
		ABP_NetworkBoxy_C_TraceAttack_Params params {};
		params.BaseDamage = BaseDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Look Around
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::LookAround(float Val, bool Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Look Around");
		
		ABP_NetworkBoxy_C_LookAround_Params params {};
		params.Val = Val;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Crouching__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__FinishedFunc");
		
		ABP_NetworkBoxy_C_Crouching__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Crouching__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__UpdateFunc");
		
		ABP_NetworkBoxy_C_Crouching__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Emote_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Emote_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Emote_K2Node_InputActionEvent_8");
		
		ABP_NetworkBoxy_C_InpActEvt_Emote_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Jump_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Jump_K2Node_InputActionEvent_7");
		
		ABP_NetworkBoxy_C_InpActEvt_Jump_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3");
		
		ABP_NetworkBoxy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2");
		
		ABP_NetworkBoxy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_T_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_T_K2Node_InputKeyEvent_1");
		
		ABP_NetworkBoxy_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Run_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_6");
		
		ABP_NetworkBoxy_C_InpActEvt_Run_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_5");
		
		ABP_NetworkBoxy_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303");
		
		ABP_NetworkBoxy_C_OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303");
		
		ABP_NetworkBoxy_C_OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303");
		
		ABP_NetworkBoxy_C_OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303");
		
		ABP_NetworkBoxy_C_OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnCompleted_2D8CC7C7449A3A38C86D4987CC324303
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::OnCompleted_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnCompleted_2D8CC7C7449A3A38C86D4987CC324303");
		
		ABP_NetworkBoxy_C_OnCompleted_2D8CC7C7449A3A38C86D4987CC324303_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4");
		
		ABP_NetworkBoxy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_RightHandExtend_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_3");
		
		ABP_NetworkBoxy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Sabotage_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2");
		
		ABP_NetworkBoxy_C_InpActEvt_Sabotage_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Interact_K2Node_InputActionEvent_1");
		
		ABP_NetworkBoxy_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Uncrouch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::TryToUncrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Uncrouch");
		
		ABP_NetworkBoxy_C_TryToUncrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Crouch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::TryToCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Crouch");
		
		ABP_NetworkBoxy_C_TryToCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.CrouchCamera
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::CrouchCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.CrouchCamera");
		
		ABP_NetworkBoxy_C_CrouchCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NetworkBoxy_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnLanded");
		
		ABP_NetworkBoxy_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ForceUncrouch
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ForceUncrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ForceUncrouch");
		
		ABP_NetworkBoxy_C_ForceUncrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetCapsuleHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::SetCapsuleHeight(float NewHeight, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetCapsuleHeight");
		
		ABP_NetworkBoxy_C_SetCapsuleHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.MultiSetCapsuleHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::MultiSetCapsuleHeight(float NewHeight, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.MultiSetCapsuleHeight");
		
		ABP_NetworkBoxy_C_MultiSetCapsuleHeight_Params params {};
		params.NewHeight = NewHeight;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4");
		
		ABP_NetworkBoxy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3");
		
		ABP_NetworkBoxy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2");
		
		ABP_NetworkBoxy_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1");
		
		ABP_NetworkBoxy_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Begin Charge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::MulticastBeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Begin Charge");
		
		ABP_NetworkBoxy_C_MulticastBeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Begin Charge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ServerBeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Begin Charge");
		
		ABP_NetworkBoxy_C_ServerBeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Release Charge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::MulticastReleaseCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Release Charge");
		
		ABP_NetworkBoxy_C_MulticastReleaseCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_ReleaseCharge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Server_ReleaseCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_ReleaseCharge");
		
		ABP_NetworkBoxy_C_Server_ReleaseCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.K2_OnMovementModeChanged");
		
		ABP_NetworkBoxy_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReleaseCharge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ReleaseCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReleaseCharge");
		
		ABP_NetworkBoxy_C_ReleaseCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.BeginCharge
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::BeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.BeginCharge");
		
		ABP_NetworkBoxy_C_BeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature");
		
		ABP_NetworkBoxy_C_BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ShowHoleNav
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::ShowHoleNav(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ShowHoleNav");
		
		ABP_NetworkBoxy_C_ShowHoleNav_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.DropPlayer
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::DropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.DropPlayer");
		
		ABP_NetworkBoxy_C_DropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Drop Player
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ServerDropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Drop Player");
		
		ABP_NetworkBoxy_C_ServerDropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Punch!
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::Punch(bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Punch!");
		
		ABP_NetworkBoxy_C_Punch_Params params {};
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFistState                                         State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature(EFistState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature");
		
		ABP_NetworkBoxy_C_BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveEndPlay");
		
		ABP_NetworkBoxy_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.FoundSteamInventory");
		
		ABP_NetworkBoxy_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.RemoveCosmeticsDueToError
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::RemoveCosmeticsDueToError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.RemoveCosmeticsDueToError");
		
		ABP_NetworkBoxy_C_RemoveCosmeticsDueToError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.VerifyClientInventory
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::VerifyClientInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.VerifyClientInventory");
		
		ABP_NetworkBoxy_C_VerifyClientInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceivePossessed");
		
		ABP_NetworkBoxy_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Jumpscare Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EnoughSpaceforJumpscare                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::JumpscarePlayer(class ABP_NetworkCharacter_C* Player, bool EnoughSpaceforJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Jumpscare Player");
		
		ABP_NetworkBoxy_C_JumpscarePlayer_Params params {};
		params.Player = Player;
		params.EnoughSpaceforJumpscare = EnoughSpaceforJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");
		
		ABP_NetworkBoxy_C_BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.PickupPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.PickupPlayer");
		
		ABP_NetworkBoxy_C_PickupPlayer_Params params {};
		params.PickedUpPlayer = PickedUpPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.CreateBoxyWidget
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::CreateBoxyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.CreateBoxyWidget");
		
		ABP_NetworkBoxy_C_CreateBoxyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceClientMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkBoxy_C::InterfaceClientMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceClientMonsterInteractUI");
		
		ABP_NetworkBoxy_C_InterfaceClientMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceShowMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkBoxy_C::InterfaceShowMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceShowMonsterInteractUI");
		
		ABP_NetworkBoxy_C_InterfaceShowMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceToggleCanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::InterfaceToggleCanInteract(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceToggleCanInteract");
		
		ABP_NetworkBoxy_C_InterfaceToggleCanInteract_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceResetSecurityUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::InterfaceResetSecurityUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceResetSecurityUI");
		
		ABP_NetworkBoxy_C_InterfaceResetSecurityUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveTick");
		
		ABP_NetworkBoxy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveBeginPlay");
		
		ABP_NetworkBoxy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Client_HasFullyCharged
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Client_HasFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Client_HasFullyCharged");
		
		ABP_NetworkBoxy_C_Client_HasFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature");
		
		ABP_NetworkBoxy_C_BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ResetFOVAndHUD
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ResetFOVAndHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ResetFOVAndHUD");
		
		ABP_NetworkBoxy_C_ResetFOVAndHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayLandedSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::PlayLandedSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayLandedSound");
		
		ABP_NetworkBoxy_C_PlayLandedSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_LandedSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Multicast_LandedSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_LandedSound");
		
		ABP_NetworkBoxy_C_Multicast_LandedSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayJumpSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::PlayJumpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayJumpSound");
		
		ABP_NetworkBoxy_C_PlayJumpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_PlayJumpSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Multicast_PlayJumpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_PlayJumpSound");
		
		ABP_NetworkBoxy_C_Multicast_PlayJumpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnJumped
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnJumped");
		
		ABP_NetworkBoxy_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Hitsound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::Hitsound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Hitsound");
		
		ABP_NetworkBoxy_C_Hitsound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Music Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MusicBoxOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkBoxy_C::ToggleMusicBox(bool MusicBoxOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Music Box");
		
		ABP_NetworkBoxy_C_ToggleMusicBox_Params params {};
		params.MusicBoxOn = MusicBoxOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.DoEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::DoEmote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.DoEmote");
		
		ABP_NetworkBoxy_C_DoEmote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::Multicast_Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_Emote");
		
		ABP_NetworkBoxy_C_Multicast_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::Server_Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_Emote");
		
		ABP_NetworkBoxy_C_Server_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::Emote(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Emote");
		
		ABP_NetworkBoxy_C_Emote_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.NetSetCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FBoxySoundSet                               Sounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_NetworkBoxy_C::NetSetCosmetics(const struct FPresetSlot& Preset, const struct FBoxySoundSet& Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.NetSetCosmetics");
		
		ABP_NetworkBoxy_C_NetSetCosmetics_Params params {};
		params.Preset = Preset;
		params.Sounds = Sounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlaySwingHitSound
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::PlaySwingHitSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlaySwingHitSound");
		
		ABP_NetworkBoxy_C_PlaySwingHitSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.HUD_HitAnimation
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::HUD_HitAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.HUD_HitAnimation");
		
		ABP_NetworkBoxy_C_HUD_HitAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.ExecuteUbergraph_BP_NetworkBoxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkBoxy_C::ExecuteUbergraph_BP_NetworkBoxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.ExecuteUbergraph_BP_NetworkBoxy");
		
		ABP_NetworkBoxy_C_ExecuteUbergraph_BP_NetworkBoxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Doesn't Want Crouch During Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::DoesntWantCrouchDuringJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Doesn't Want Crouch During Jumpscare__DelegateSignature");
		
		ABP_NetworkBoxy_C_DoesntWantCrouchDuringJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Want Crouch During Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::WantCrouchDuringJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Want Crouch During Jumpscare__DelegateSignature");
		
		ABP_NetworkBoxy_C_WantCrouchDuringJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggled Third Person During Jumpscare__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NetworkBoxy_C::ToggledThirdPersonDuringJumpscare__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggled Third Person During Jumpscare__DelegateSignature");
		
		ABP_NetworkBoxy_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkBoxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkBoxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkBoxy.BP_NetworkBoxy_C");
		return ptr;
	}

}


