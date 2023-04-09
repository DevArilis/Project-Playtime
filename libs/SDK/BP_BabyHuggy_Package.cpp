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
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_BabyHuggy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.UserConstructionScript");
		
		ABP_BabyHuggy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4");
		
		ABP_BabyHuggy_C_OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4");
		
		ABP_BabyHuggy_C_OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4");
		
		ABP_BabyHuggy_C_OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4");
		
		ABP_BabyHuggy_C_OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4");
		
		ABP_BabyHuggy_C_OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.BabyHuggyScream
	 * 		Flags  -> ()
	 */
	void ABP_BabyHuggy_C::BabyHuggyScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.BabyHuggyScream");
		
		ABP_BabyHuggy_C_BabyHuggyScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BabyHuggy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.ReceiveBeginPlay");
		
		ABP_BabyHuggy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.RotateBaby
	 * 		Flags  -> ()
	 */
	void ABP_BabyHuggy_C::RotateBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.RotateBaby");
		
		ABP_BabyHuggy_C_RotateBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_BabyHuggy_C::BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");
		
		ABP_BabyHuggy_C_BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.ReceiveTick");
		
		ABP_BabyHuggy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BabyHuggy.BP_BabyHuggy_C.ExecuteUbergraph_BP_BabyHuggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BabyHuggy_C::ExecuteUbergraph_BP_BabyHuggy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BabyHuggy.BP_BabyHuggy_C.ExecuteUbergraph_BP_BabyHuggy");
		
		ABP_BabyHuggy_C_ExecuteUbergraph_BP_BabyHuggy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BabyHuggy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BabyHuggy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BabyHuggy.BP_BabyHuggy_C");
		return ptr;
	}

}


