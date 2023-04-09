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
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.SetStyle
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::SetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.SetStyle");
		
		ABP_NetworkHand_C_SetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.UserConstructionScript");
		
		ABP_NetworkHand_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.OnEndTouch_Event
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::OnEndTouch_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.OnEndTouch_Event");
		
		ABP_NetworkHand_C_OnEndTouch_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.OnBeginTouch_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Out_GrabbedThickness                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Out_DistanceFromPalm                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               AnimToPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHand_C::OnBeginTouch_Event(float Out_GrabbedThickness, float Out_DistanceFromPalm, class UAnimSequence* AnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.OnBeginTouch_Event");
		
		ABP_NetworkHand_C_OnBeginTouch_Event_Params params {};
		params.Out_GrabbedThickness = Out_GrabbedThickness;
		params.Out_DistanceFromPalm = Out_DistanceFromPalm;
		params.AnimToPlay = AnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoDestroy_Event
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::OnPseudoDestroy_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoDestroy_Event");
		
		ABP_NetworkHand_C_OnPseudoDestroy_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoSpawn_Event
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::OnPseudoSpawn_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.OnPseudoSpawn_Event");
		
		ABP_NetworkHand_C_OnPseudoSpawn_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.ReceiveBeginPlay");
		
		ABP_NetworkHand_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.DetermineVisuals
	 * 		Flags  -> ()
	 */
	void ABP_NetworkHand_C::DetermineVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.DetermineVisuals");
		
		ABP_NetworkHand_C_DetermineVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkHand.BP_NetworkHand_C.ExecuteUbergraph_BP_NetworkHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkHand_C::ExecuteUbergraph_BP_NetworkHand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkHand.BP_NetworkHand_C.ExecuteUbergraph_BP_NetworkHand");
		
		ABP_NetworkHand_C_ExecuteUbergraph_BP_NetworkHand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkHand.BP_NetworkHand_C");
		return ptr;
	}

}


