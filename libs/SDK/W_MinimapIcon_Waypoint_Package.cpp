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
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.GetScaleDesiredSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::GetScaleDesiredSize(struct FVector2D* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.GetScaleDesiredSize");
		
		UW_MinimapIcon_Waypoint_C_GetScaleDesiredSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::UpdateDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateDistance");
		
		UW_MinimapIcon_Waypoint_C_UpdateDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateIndicatorOffScreenAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::UpdateIndicatorOffScreenAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateIndicatorOffScreenAngle");
		
		UW_MinimapIcon_Waypoint_C_UpdateIndicatorOffScreenAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.ShowOffScreenArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MinimapIcon_Waypoint_C::ShowOffScreenArrow(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.ShowOffScreenArrow");
		
		UW_MinimapIcon_Waypoint_C_ShowOffScreenArrow_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateMainText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_MinimapIcon_Waypoint_C::UpdateMainText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateMainText");
		
		UW_MinimapIcon_Waypoint_C_UpdateMainText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MinimapIcon_Waypoint_C::Show(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.Show");
		
		UW_MinimapIcon_Waypoint_C_Show_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.SetArrowAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::SetArrowAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.SetArrowAngle");
		
		UW_MinimapIcon_Waypoint_C_SetArrowAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateParentAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ParentAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::UpdateParentAngle(float ParentAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateParentAngle");
		
		UW_MinimapIcon_Waypoint_C_UpdateParentAngle_Params params {};
		params.ParentAngle = ParentAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateMapRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::UpdateMapRotate(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.UpdateMapRotate");
		
		UW_MinimapIcon_Waypoint_C_UpdateMapRotate_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.SetScaleUsingSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IpScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::SetScaleUsingSize(float IpScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.SetScaleUsingSize");
		
		UW_MinimapIcon_Waypoint_C_SetScaleUsingSize_Params params {};
		params.IpScale = IpScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.ExecuteUbergraph_W_MinimapIcon_Waypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimapIcon_Waypoint_C::ExecuteUbergraph_W_MinimapIcon_Waypoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C.ExecuteUbergraph_W_MinimapIcon_Waypoint");
		
		UW_MinimapIcon_Waypoint_C_ExecuteUbergraph_W_MinimapIcon_Waypoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MinimapIcon_Waypoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MinimapIcon_Waypoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MinimapIcon_Waypoint.W_MinimapIcon_Waypoint_C");
		return ptr;
	}

}


