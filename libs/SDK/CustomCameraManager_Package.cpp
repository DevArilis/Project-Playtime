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
	 * 		Name   -> Function CustomCameraManager.CustomCameraManager_C.BlueprintUpdateCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      CameraTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewCameraRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewCameraFOV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ACustomCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomCameraManager.CustomCameraManager_C.BlueprintUpdateCamera");
		
		ACustomCameraManager_C_BlueprintUpdateCamera_Params params {};
		params.CameraTarget = CameraTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCameraLocation != nullptr)
			*NewCameraLocation = params.NewCameraLocation;
		if (NewCameraRotation != nullptr)
			*NewCameraRotation = params.NewCameraRotation;
		if (NewCameraFOV != nullptr)
			*NewCameraFOV = params.NewCameraFOV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomCameraManager.CustomCameraManager_C.BP_OnBlendComplete
	 * 		Flags  -> ()
	 */
	void ACustomCameraManager_C::BP_OnBlendComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomCameraManager.CustomCameraManager_C.BP_OnBlendComplete");
		
		ACustomCameraManager_C_BP_OnBlendComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomCameraManager.CustomCameraManager_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomCameraManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomCameraManager.CustomCameraManager_C.ReceiveTick");
		
		ACustomCameraManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomCameraManager.CustomCameraManager_C.OnUpdatePOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMinimalViewInfo                            NewPOV                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ACustomCameraManager_C::OnUpdatePOV(const struct FMinimalViewInfo& NewPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomCameraManager.CustomCameraManager_C.OnUpdatePOV");
		
		ACustomCameraManager_C_OnUpdatePOV_Params params {};
		params.NewPOV = NewPOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomCameraManager.CustomCameraManager_C.ExecuteUbergraph_CustomCameraManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomCameraManager_C::ExecuteUbergraph_CustomCameraManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomCameraManager.CustomCameraManager_C.ExecuteUbergraph_CustomCameraManager");
		
		ACustomCameraManager_C_ExecuteUbergraph_CustomCameraManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomCameraManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomCameraManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomCameraManager.CustomCameraManager_C");
		return ptr;
	}

}


