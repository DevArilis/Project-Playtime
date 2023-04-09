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
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Retract
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::Retract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Retract");
		
		ABP_AIController_TutorialPlayer_C_Retract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomPuzzleMagnet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_HandMagnet_C*                           HandMagnet                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::GetRandomPuzzleMagnet(class UBPC_HandMagnet_C** HandMagnet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomPuzzleMagnet");
		
		ABP_AIController_TutorialPlayer_C_GetRandomPuzzleMagnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandMagnet != nullptr)
			*HandMagnet = params.HandMagnet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetNearestPuzzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ToyPuzzle_C*                             AsBPToyPuzzle                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::GetNearestPuzzle(class ABP_ToyPuzzle_C** AsBPToyPuzzle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetNearestPuzzle");
		
		ABP_AIController_TutorialPlayer_C_GetNearestPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPToyPuzzle != nullptr)
			*AsBPToyPuzzle = params.AsBPToyPuzzle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomNavPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::GetRandomNavPoint(class AActor** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.GetRandomNavPoint");
		
		ABP_AIController_TutorialPlayer_C_GetRandomNavPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsWuggyTaken?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WhackAWuggySpawnPoint_C*                 Wuggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Taken                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AIController_TutorialPlayer_C::IsWuggyTaken(class ABP_WhackAWuggySpawnPoint_C* Wuggy, bool* Taken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsWuggyTaken?");
		
		ABP_AIController_TutorialPlayer_C_IsWuggyTaken_Params params {};
		params.Wuggy = Wuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Taken != nullptr)
			*Taken = params.Taken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsTargetWuggyStillValid?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AIController_TutorialPlayer_C::IsTargetWuggyStillValid(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.IsTargetWuggyStillValid?");
		
		ABP_AIController_TutorialPlayer_C_IsTargetWuggyStillValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FaceActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_WhackAWuggySpawnPoint_C*                 Wuggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::FaceActor(float Alpha, class ABP_WhackAWuggySpawnPoint_C* Wuggy, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FaceActor");
		
		ABP_AIController_TutorialPlayer_C_FaceActor_Params params {};
		params.Alpha = Alpha;
		params.Wuggy = Wuggy;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ScanWuggyHoles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WhackAWuggySpawnPoint_C*                 Wuggy                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::ScanWuggyHoles(class ABP_WhackAWuggySpawnPoint_C** Wuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ScanWuggyHoles");
		
		ABP_AIController_TutorialPlayer_C_ScanWuggyHoles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wuggy != nullptr)
			*Wuggy = params.Wuggy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.SetUsername
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::SetUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.SetUsername");
		
		ABP_AIController_TutorialPlayer_C_SetUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookTowards__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookTowards__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookTowards__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookTowards__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookTowards__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookAtHole__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookAtHole__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookAtHole__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtHole__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookAtHole__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_AimAtGrapple__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_AimAtGrapple__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_AimAtGrapple__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_AimAtGrapple__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_AimAtGrapple__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Timeline_0__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookAtTarget__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookAtTarget__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookAtTarget__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookAtTarget__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookAtTarget__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookATHandPanel__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__FinishedFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookATHandPanel__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::TL_LookATHandPanel__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.TL_LookATHandPanel__UpdateFunc");
		
		ABP_AIController_TutorialPlayer_C_TL_LookATHandPanel__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_DD1E782941BC088A4EEE048BA3BFF463
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnFail_DD1E782941BC088A4EEE048BA3BFF463(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_DD1E782941BC088A4EEE048BA3BFF463");
		
		ABP_AIController_TutorialPlayer_C_OnFail_DD1E782941BC088A4EEE048BA3BFF463_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_DD1E782941BC088A4EEE048BA3BFF463
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnSuccess_DD1E782941BC088A4EEE048BA3BFF463(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_DD1E782941BC088A4EEE048BA3BFF463");
		
		ABP_AIController_TutorialPlayer_C_OnSuccess_DD1E782941BC088A4EEE048BA3BFF463_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0");
		
		ABP_AIController_TutorialPlayer_C_OnFail_5260B4BE481D9BF3BD23FAA394A6CFD0_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0");
		
		ABP_AIController_TutorialPlayer_C_OnSuccess_5260B4BE481D9BF3BD23FAA394A6CFD0_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_9305B89D4398F382C3FFEC80866FD252
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnFail_9305B89D4398F382C3FFEC80866FD252(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_9305B89D4398F382C3FFEC80866FD252");
		
		ABP_AIController_TutorialPlayer_C_OnFail_9305B89D4398F382C3FFEC80866FD252_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_9305B89D4398F382C3FFEC80866FD252
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnSuccess_9305B89D4398F382C3FFEC80866FD252(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_9305B89D4398F382C3FFEC80866FD252");
		
		ABP_AIController_TutorialPlayer_C_OnSuccess_9305B89D4398F382C3FFEC80866FD252_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_6F31769947BEDFD6363706BA065091DD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnFail_6F31769947BEDFD6363706BA065091DD(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnFail_6F31769947BEDFD6363706BA065091DD");
		
		ABP_AIController_TutorialPlayer_C_OnFail_6F31769947BEDFD6363706BA065091DD_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_6F31769947BEDFD6363706BA065091DD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::OnSuccess_6F31769947BEDFD6363706BA065091DD(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.OnSuccess_6F31769947BEDFD6363706BA065091DD");
		
		ABP_AIController_TutorialPlayer_C_OnSuccess_6F31769947BEDFD6363706BA065091DD_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.WhackWuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WhackAWuggySpawnPoint_C*                 Wuggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::WhackWuggy(class ABP_WhackAWuggySpawnPoint_C* Wuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.WhackWuggy");
		
		ABP_AIController_TutorialPlayer_C_WhackWuggy_Params params {};
		params.Wuggy = Wuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.LookForWuggy
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::LookForWuggy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.LookForWuggy");
		
		ABP_AIController_TutorialPlayer_C_LookForWuggy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToHole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WormholeEntrance_C*                      WormHole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::MoveToHole(class ABP_WormholeEntrance_C* WormHole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToHole");
		
		ABP_AIController_TutorialPlayer_C_MoveToHole_Params params {};
		params.WormHole = WormHole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullPlayerOutOfHole
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::PullPlayerOutOfHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullPlayerOutOfHole");
		
		ABP_AIController_TutorialPlayer_C_PullPlayerOutOfHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Grapple
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::Grapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Grapple");
		
		ABP_AIController_TutorialPlayer_C_Grapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TrainCart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::Escape(const struct FVector& TrainCart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.Escape");
		
		ABP_AIController_TutorialPlayer_C_Escape_Params params {};
		params.TrainCart = TrainCart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToGrapple
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::MoveToGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.MoveToGrapple");
		
		ABP_AIController_TutorialPlayer_C_MoveToGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceivePossess");
		
		ABP_AIController_TutorialPlayer_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ReceiveBeginPlay");
		
		ABP_AIController_TutorialPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FindPuzzle
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::FindPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.FindPuzzle");
		
		ABP_AIController_TutorialPlayer_C_FindPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PlayPuzzle
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::PlayPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PlayPuzzle");
		
		ABP_AIController_TutorialPlayer_C_PlayPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExtendAtTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pull                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AIController_TutorialPlayer_C::ExtendAtTarget(class AActor* Target, const struct FVector& Location, bool Pull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExtendAtTarget");
		
		ABP_AIController_TutorialPlayer_C_ExtendAtTarget_Params params {};
		params.Target = Target;
		params.Location = Location;
		params.Pull = Pull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExecuteUbergraph_BP_AIController_TutorialPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_TutorialPlayer_C::ExecuteUbergraph_BP_AIController_TutorialPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.ExecuteUbergraph_BP_AIController_TutorialPlayer");
		
		ABP_AIController_TutorialPlayer_C_ExecuteUbergraph_BP_AIController_TutorialPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullingPlayerFromHole__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_AIController_TutorialPlayer_C::PullingPlayerFromHole__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C.PullingPlayerFromHole__DelegateSignature");
		
		ABP_AIController_TutorialPlayer_C_PullingPlayerFromHole__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AIController_TutorialPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AIController_TutorialPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIController_TutorialPlayer.BP_AIController_TutorialPlayer_C");
		return ptr;
	}

}


