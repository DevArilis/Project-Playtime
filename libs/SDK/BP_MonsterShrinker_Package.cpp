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
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyExitCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkBoxy_C*                           BoxyRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::BoxyExitCrouch(class ABP_NetworkBoxy_C* BoxyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyExitCrouch");
		
		ABP_MonsterShrinker_C_BoxyExitCrouch_Params params {};
		params.BoxyRef = BoxyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyEnterCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkBoxy_C*                           BoxyRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::BoxyEnterCrouch(class ABP_NetworkBoxy_C* BoxyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.BoxyEnterCrouch");
		
		ABP_MonsterShrinker_C_BoxyEnterCrouch_Params params {};
		params.BoxyRef = BoxyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyExitCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkMommy_C*                          MommyRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::MommyExitCrouch(class ABP_NetworkMommy_C* MommyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyExitCrouch");
		
		ABP_MonsterShrinker_C_MommyExitCrouch_Params params {};
		params.MommyRef = MommyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyEnterCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkMommy_C*                          MommyRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::MommyEnterCrouch(class ABP_NetworkMommy_C* MommyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.MommyEnterCrouch");
		
		ABP_MonsterShrinker_C_MommyEnterCrouch_Params params {};
		params.MommyRef = MommyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyExitCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          HuggyRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::HuggyExitCrouch(class ABP_NetworkHuggy_C* HuggyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyExitCrouch");
		
		ABP_MonsterShrinker_C_HuggyExitCrouch_Params params {};
		params.HuggyRef = HuggyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyEnterCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          HuggyRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::HuggyEnterCrouch(class ABP_NetworkHuggy_C* HuggyRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.HuggyEnterCrouch");
		
		ABP_MonsterShrinker_C_HuggyEnterCrouch_Params params {};
		params.HuggyRef = HuggyRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorEndOverlap");
		
		ABP_MonsterShrinker_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.ReceiveActorBeginOverlap");
		
		ABP_MonsterShrinker_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterShrinker.BP_MonsterShrinker_C.ExecuteUbergraph_BP_MonsterShrinker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterShrinker_C::ExecuteUbergraph_BP_MonsterShrinker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterShrinker.BP_MonsterShrinker_C.ExecuteUbergraph_BP_MonsterShrinker");
		
		ABP_MonsterShrinker_C_ExecuteUbergraph_BP_MonsterShrinker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MonsterShrinker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MonsterShrinker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MonsterShrinker.BP_MonsterShrinker_C");
		return ptr;
	}

}


