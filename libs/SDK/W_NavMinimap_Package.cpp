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
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.GetMinimapSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ResultSize                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NavMinimap_C::GetMinimapSize(float* ResultSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.GetMinimapSize");
		
		UW_NavMinimap_C_GetMinimapSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultSize != nullptr)
			*ResultSize = params.ResultSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.Toggle
	 * 		Flags  -> ()
	 */
	void UW_NavMinimap_C::Toggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.Toggle");
		
		UW_NavMinimap_C_Toggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_NavMinimap_C::Show(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.Show");
		
		UW_NavMinimap_C_Show_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.AddPlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PlayerIconWidgetClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UW_NavMinimap_C::AddPlayerIcon(class UClass* PlayerIconWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.AddPlayerIcon");
		
		UW_NavMinimap_C_AddPlayerIcon_Params params {};
		params.PlayerIconWidgetClass = PlayerIconWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WidgetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UW_NavMinimap_C::AddIcon(class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.AddIcon");
		
		UW_NavMinimap_C_AddIcon_Params params {};
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavSystem_C*                            NavSystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    MapImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Dimentions                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Zoom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NavMinimap_C::Init(class UBPC_NavSystem_C* NavSystem, class UTexture* MapImage, float Dimentions, float Zoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.Init");
		
		UW_NavMinimap_C_Init_Params params {};
		params.NavSystem = NavSystem;
		params.MapImage = MapImage;
		params.Dimentions = Dimentions;
		params.Zoom = Zoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_NavMinimap_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UW_NavMinimap_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_NavMinimap_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UW_NavMinimap_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.UpdateRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NavMinimap_C::UpdateRotate(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.UpdateRotate");
		
		UW_NavMinimap_C_UpdateRotate_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_NavMinimap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.Construct");
		
		UW_NavMinimap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavMinimap.W_NavMinimap_C.ExecuteUbergraph_W_NavMinimap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NavMinimap_C::ExecuteUbergraph_W_NavMinimap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavMinimap.W_NavMinimap_C.ExecuteUbergraph_W_NavMinimap");
		
		UW_NavMinimap_C_ExecuteUbergraph_W_NavMinimap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_NavMinimap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_NavMinimap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NavMinimap.W_NavMinimap_C");
		return ptr;
	}

}


