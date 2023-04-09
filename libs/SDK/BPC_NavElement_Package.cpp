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
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.Adjust Opacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MyDist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ClosestDist                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavElement_C::AdjustOpacity(float MyDist, float ClosestDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.Adjust Opacity");
		
		UBPC_NavElement_C_AdjustOpacity_Params params {};
		params.MyDist = MyDist;
		params.ClosestDist = ClosestDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.Use
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavElement_C::Use(bool IsUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.Use");
		
		UBPC_NavElement_C_Use_Params params {};
		params.IsUse = IsUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.ShowUserWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavElement_C::ShowUserWidget(class UUserWidget* UserWidget, bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.ShowUserWidget");
		
		UBPC_NavElement_C_ShowUserWidget_Params params {};
		params.UserWidget = UserWidget;
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.CheckDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavElement_C::CheckDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.CheckDistance");
		
		UBPC_NavElement_C_CheckDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.GetOwnerIndicatorLoc
	 * 		Flags  -> ()
	 */
	struct FVector UBPC_NavElement_C::GetOwnerIndicatorLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.GetOwnerIndicatorLoc");
		
		UBPC_NavElement_C_GetOwnerIndicatorLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.RemoveWidgetFromParent
	 * 		Flags  -> ()
	 */
	void UBPC_NavElement_C::RemoveWidgetFromParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.RemoveWidgetFromParent");
		
		UBPC_NavElement_C_RemoveWidgetFromParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavElement_C::Show(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.Show");
		
		UBPC_NavElement_C_Show_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_NavElement_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.ReceiveBeginPlay");
		
		UBPC_NavElement_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.SetCompassIconWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 CompassMarkWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavElement_C::SetCompassIconWidget(class UUserWidget* CompassMarkWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.SetCompassIconWidget");
		
		UBPC_NavElement_C_SetCompassIconWidget_Params params {};
		params.CompassMarkWidget = CompassMarkWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavElement_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.ReceiveEndPlay");
		
		UBPC_NavElement_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.Start
	 * 		Flags  -> ()
	 */
	void UBPC_NavElement_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.Start");
		
		UBPC_NavElement_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.Init
	 * 		Flags  -> ()
	 */
	void UBPC_NavElement_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.Init");
		
		UBPC_NavElement_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.ReInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavSystem_C*                            InNavSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavElement_C::ReInit(class UBPC_NavSystem_C* InNavSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.ReInit");
		
		UBPC_NavElement_C_ReInit_Params params {};
		params.InNavSystem = InNavSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavElement.BPC_NavElement_C.ExecuteUbergraph_BPC_NavElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavElement_C::ExecuteUbergraph_BPC_NavElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavElement.BPC_NavElement_C.ExecuteUbergraph_BPC_NavElement");
		
		UBPC_NavElement_C_ExecuteUbergraph_BPC_NavElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_NavElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_NavElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NavElement.BPC_NavElement_C");
		return ptr;
	}

}


