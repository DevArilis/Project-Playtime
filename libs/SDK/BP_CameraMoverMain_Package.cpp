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
	 * 		Name   -> Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_CameraMoverMain_C::Transition__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__FinishedFunc");
		
		ABP_CameraMoverMain_C_Transition__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_CameraMoverMain_C::Transition__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__UpdateFunc");
		
		ABP_CameraMoverMain_C_Transition__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraMoverMain.BP_CameraMoverMain_C.TransitionToCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Smoothed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CameraMoverMain_C::TransitionToCamera(const class FName& Target, float Time, bool Smoothed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraMoverMain.BP_CameraMoverMain_C.TransitionToCamera");
		
		ABP_CameraMoverMain_C_TransitionToCamera_Params params {};
		params.Target = Target;
		params.Time = Time;
		params.Smoothed = Smoothed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraMoverMain.BP_CameraMoverMain_C.ExecuteUbergraph_BP_CameraMoverMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraMoverMain_C::ExecuteUbergraph_BP_CameraMoverMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraMoverMain.BP_CameraMoverMain_C.ExecuteUbergraph_BP_CameraMoverMain");
		
		ABP_CameraMoverMain_C_ExecuteUbergraph_BP_CameraMoverMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CameraMoverMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraMoverMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraMoverMain.BP_CameraMoverMain_C");
		return ptr;
	}

}


