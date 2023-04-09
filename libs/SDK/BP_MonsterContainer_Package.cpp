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
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.GetMonsterIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterContainer_C::GetMonsterIndex(ECharacterType Character, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.GetMonsterIndex");
		
		ABP_MonsterContainer_C_GetMonsterIndex_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MonsterContainer_C::CameraTranslationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__FinishedFunc");
		
		ABP_MonsterContainer_C_CameraTranslationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MonsterContainer_C::CameraTranslationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.CameraTranslationTimeline__UpdateFunc");
		
		ABP_MonsterContainer_C_CameraTranslationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.RefreshVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MonsterContainer_C::RefreshVisuals(bool Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.RefreshVisuals");
		
		ABP_MonsterContainer_C_RefreshVisuals_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterContainer_C::SetCharacter(ECharacterType Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.SetCharacter");
		
		ABP_MonsterContainer_C_SetCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.StartAnimation
	 * 		Flags  -> ()
	 */
	void ABP_MonsterContainer_C::StartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.StartAnimation");
		
		ABP_MonsterContainer_C_StartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.Owning_Capture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterContainer_C::Owning_Capture(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.Owning_Capture");
		
		ABP_MonsterContainer_C_Owning_Capture_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.Server_Capture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           CharPicking                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterContainer_C::Server_Capture(class APlayerController* CharPicking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.Server_Capture");
		
		ABP_MonsterContainer_C_Server_Capture_Params params {};
		params.CharPicking = CharPicking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.Main Menu View Target
	 * 		Flags  -> ()
	 */
	void ABP_MonsterContainer_C::MainMenuViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.Main Menu View Target");
		
		ABP_MonsterContainer_C_MainMenuViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterContainer.BP_MonsterContainer_C.ExecuteUbergraph_BP_MonsterContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterContainer_C::ExecuteUbergraph_BP_MonsterContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterContainer.BP_MonsterContainer_C.ExecuteUbergraph_BP_MonsterContainer");
		
		ABP_MonsterContainer_C_ExecuteUbergraph_BP_MonsterContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MonsterContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MonsterContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MonsterContainer.BP_MonsterContainer_C");
		return ptr;
	}

}


