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
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.HandleVisibilityBasedOnSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::HandleVisibilityBasedOnSettings(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.HandleVisibilityBasedOnSettings");
		
		UBPC_NavSystem_C_HandleVisibilityBasedOnSettings_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToUnusable
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::SetMinMaxIndicatorDistancesToUnusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToUnusable");
		
		UBPC_NavSystem_C_SetMinMaxIndicatorDistancesToUnusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToDefault
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::SetMinMaxIndicatorDistancesToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToDefault");
		
		UBPC_NavSystem_C_SetMinMaxIndicatorDistancesToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.CheckIndicatorElementDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ElementActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPC_NavElement_C*                           NavElement                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavSystem_C::CheckIndicatorElementDistance(class AActor* ElementActor, class UBPC_NavElement_C* NavElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.CheckIndicatorElementDistance");
		
		UBPC_NavSystem_C_CheckIndicatorElementDistance_Params params {};
		params.ElementActor = ElementActor;
		params.NavElement = NavElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.Shutdown
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.Shutdown");
		
		UBPC_NavSystem_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.Initialize
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.Initialize");
		
		UBPC_NavSystem_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SetupFromLevelInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NavLevelInfo_C*                          IpLevelInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::SetupFromLevelInfo(class ABP_NavLevelInfo_C* IpLevelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SetupFromLevelInfo");
		
		UBPC_NavSystem_C_SetupFromLevelInfo_Params params {};
		params.IpLevelInfo = IpLevelInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetWaypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   IpLoc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_NavWaypointInfo                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::GetWaypoint(const struct FVector2D& IpLoc, struct FS_NavWaypointInfo* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetWaypoint");
		
		UBPC_NavSystem_C_GetWaypoint_Params params {};
		params.IpLoc = IpLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SpawnWaypont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ABP_NavWaypoint_C* UBPC_NavSystem_C::SpawnWaypont(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SpawnWaypont");
		
		UBPC_NavSystem_C_SpawnWaypont_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.DistanceToScreenLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::DistanceToScreenLoc(class AActor* Actor1, class AActor* Actor2, float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.DistanceToScreenLoc");
		
		UBPC_NavSystem_C_DistanceToScreenLoc_Params params {};
		params.Actor1 = Actor1;
		params.Actor2 = Actor2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddZoomMinimap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AddValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddZoomMinimap(float AddValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddZoomMinimap");
		
		UBPC_NavSystem_C_AddZoomMinimap_Params params {};
		params.AddValue = AddValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.CheckElementDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ElementActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavSystem_C::CheckElementDistance(class AActor* ElementActor, float Min, float Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.CheckElementDistance");
		
		UBPC_NavSystem_C_CheckElementDistance_Params params {};
		params.ElementActor = ElementActor;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleEnemyIndicator
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleEnemyIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleEnemyIndicator");
		
		UBPC_NavSystem_C_ToggleEnemyIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowEnemyIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowEnemyIndicator(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowEnemyIndicator");
		
		UBPC_NavSystem_C_ShowEnemyIndicator_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateUseWidgets
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateUseWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateUseWidgets");
		
		UBPC_NavSystem_C_UpdateUseWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateRadar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar");
		
		UBPC_NavSystem_C_UpdateRadar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateBigmap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap");
		
		UBPC_NavSystem_C_UpdateBigmap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateMinimap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap");
		
		UBPC_NavSystem_C_UpdateMinimap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicator
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateEnemyIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicator");
		
		UBPC_NavSystem_C_UpdateEnemyIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicator
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicator");
		
		UBPC_NavSystem_C_UpdateIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompass
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompass");
		
		UBPC_NavSystem_C_UpdateCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.CreatePlayerIcons
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::CreatePlayerIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.CreatePlayerIcons");
		
		UBPC_NavSystem_C_CreatePlayerIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddEnemyIndicatorIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddEnemyIndicatorIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddEnemyIndicatorIcon");
		
		UBPC_NavSystem_C_AddEnemyIndicatorIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SetPropIndicatorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOffscreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 IndicatorWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::SetPropIndicatorWidget(class UBPC_NavElement_C* Element, const struct FVector2D& Translation, float Angle, bool IsOffscreen, bool IsShow, class UUserWidget* IndicatorWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SetPropIndicatorWidget");
		
		UBPC_NavSystem_C_SetPropIndicatorWidget_Params params {};
		params.Element = Element;
		params.Translation = Translation;
		params.Angle = Angle;
		params.IsOffscreen = IsOffscreen;
		params.IsShow = IsShow;
		params.IndicatorWidget = IndicatorWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicatorElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           IpElement                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IpRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateEnemyIndicatorElement(class UBPC_NavElement_C* IpElement, float IpRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicatorElement");
		
		UBPC_NavSystem_C_UpdateEnemyIndicatorElement_Params params {};
		params.IpElement = IpElement;
		params.IpRadius = IpRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetDistanceElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPC_NavSystem_C::GetDistanceElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetDistanceElement");
		
		UBPC_NavSystem_C_GetDistanceElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateCheckDistanceElements
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateCheckDistanceElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateCheckDistanceElements");
		
		UBPC_NavSystem_C_UpdateCheckDistanceElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleRadar
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleRadar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleRadar");
		
		UBPC_NavSystem_C_ToggleRadar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowRadar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowRadar(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowRadar");
		
		UBPC_NavSystem_C_ShowRadar_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleIndicator
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleIndicator");
		
		UBPC_NavSystem_C_ToggleIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowIndicator(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowIndicator");
		
		UBPC_NavSystem_C_ShowIndicator_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleCompass
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleCompass");
		
		UBPC_NavSystem_C_ToggleCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowCompass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowCompass(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowCompass");
		
		UBPC_NavSystem_C_ShowCompass_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleMinimap
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleMinimap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleMinimap");
		
		UBPC_NavSystem_C_ToggleMinimap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowMinimap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowMinimap(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowMinimap");
		
		UBPC_NavSystem_C_ShowMinimap_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar_PlayerIcon
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateRadar_PlayerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar_PlayerIcon");
		
		UBPC_NavSystem_C_UpdateRadar_PlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadarElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateRadarElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadarElement");
		
		UBPC_NavSystem_C_UpdateRadarElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddRadarIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddRadarIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddRadarIcon");
		
		UBPC_NavSystem_C_AddRadarIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleRotateMinimap
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleRotateMinimap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleRotateMinimap");
		
		UBPC_NavSystem_C_ToggleRotateMinimap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ToggleBigMap
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ToggleBigMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ToggleBigMap");
		
		UBPC_NavSystem_C_ToggleBigMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowBigMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowBigMap(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowBigMap");
		
		UBPC_NavSystem_C_ShowBigMap_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmapElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateBigmapElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmapElement");
		
		UBPC_NavSystem_C_UpdateBigmapElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddBigmapIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddBigmapIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddBigmapIcon");
		
		UBPC_NavSystem_C_AddBigmapIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap_PlayerIcon
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateBigmap_PlayerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap_PlayerIcon");
		
		UBPC_NavSystem_C_UpdateBigmap_PlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ShowElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::ShowElement(class UBPC_NavElement_C* Element, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ShowElement");
		
		UBPC_NavSystem_C_ShowElement_Params params {};
		params.Element = Element;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.RemoveElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::RemoveElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.RemoveElement");
		
		UBPC_NavSystem_C_RemoveElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap_PlayerIcon
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateMinimap_PlayerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap_PlayerIcon");
		
		UBPC_NavSystem_C_UpdateMinimap_PlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimapElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateMinimapElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimapElement");
		
		UBPC_NavSystem_C_UpdateMinimapElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.FindAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Degree                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::FindAngle(const struct FVector2D& A, const struct FVector2D& B, float* Degree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.FindAngle");
		
		UBPC_NavSystem_C_FindAngle_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Degree != nullptr)
			*Degree = params.Degree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.FindCoord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IpRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IpDegrees                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D UBPC_NavSystem_C::FindCoord(float IpRadius, float IpDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.FindCoord");
		
		UBPC_NavSystem_C_FindCoord_Params params {};
		params.IpRadius = IpRadius;
		params.IpDegrees = IpDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddMinimapIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddMinimapIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddMinimapIcon");
		
		UBPC_NavSystem_C_AddMinimapIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetElementDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPC_NavSystem_C::GetElementDistance(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetElementDistance");
		
		UBPC_NavSystem_C_GetElementDistance_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetPlayerCamLoc
	 * 		Flags  -> ()
	 */
	struct FVector UBPC_NavSystem_C::GetPlayerCamLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetPlayerCamLoc");
		
		UBPC_NavSystem_C_GetPlayerCamLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddIndicatorIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddIndicatorIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddIndicatorIcon");
		
		UBPC_NavSystem_C_AddIndicatorIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           IpElement                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateCompassElement(class UBPC_NavElement_C* IpElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassElement");
		
		UBPC_NavSystem_C_UpdateCompassElement_Params params {};
		params.IpElement = IpElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.IsIndicatorInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScreenLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFlip                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::IsIndicatorInViewport(const struct FVector2D& ScreenLoc, bool IsFlip, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.IsIndicatorInViewport");
		
		UBPC_NavSystem_C_IsIndicatorInViewport_Params params {};
		params.ScreenLoc = ScreenLoc;
		params.IsFlip = IsFlip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetFlipElementLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavSystem_C::GetFlipElementLoc(class UBPC_NavElement_C* Element, struct FVector2D* ScreenLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetFlipElementLoc");
		
		UBPC_NavSystem_C_GetFlipElementLoc_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenLoc != nullptr)
			*ScreenLoc = params.ScreenLoc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.IsFlipElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavSystem_C::IsFlipElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.IsFlipElement");
		
		UBPC_NavSystem_C_IsFlipElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.WorldToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLoc                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_NavSystem_C::WorldToScreen(const struct FVector& WorldLoc, struct FVector2D* ScreenLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.WorldToScreen");
		
		UBPC_NavSystem_C_WorldToScreen_Params params {};
		params.WorldLoc = WorldLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenLoc != nullptr)
			*ScreenLoc = params.ScreenLoc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.GetScreenSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UBPC_NavSystem_C::GetScreenSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.GetScreenSize");
		
		UBPC_NavSystem_C_GetScreenSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicatorElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::UpdateIndicatorElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicatorElement");
		
		UBPC_NavSystem_C_UpdateIndicatorElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddElement(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddElement");
		
		UBPC_NavSystem_C_AddElement_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.AddCompassIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::AddCompassIcon(class UBPC_NavElement_C* Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.AddCompassIcon");
		
		UBPC_NavSystem_C_AddCompassIcon_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateElements
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateElements");
		
		UBPC_NavSystem_C_UpdateElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassDirectionWidgets
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::UpdateCompassDirectionWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassDirectionWidgets");
		
		UBPC_NavSystem_C_UpdateCompassDirectionWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IpVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::Show(bool IpVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.Show");
		
		UBPC_NavSystem_C_Show_Params params {};
		params.IpVisible = IpVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.OnPlayerTurned
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::OnPlayerTurned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.OnPlayerTurned");
		
		UBPC_NavSystem_C_OnPlayerTurned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ReceiveTick");
		
		UBPC_NavSystem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ReqAddElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_NavElement_C*                           NavElementComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::ReqAddElement(class UBPC_NavElement_C* NavElementComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ReqAddElement");
		
		UBPC_NavSystem_C_ReqAddElement_Params params {};
		params.NavElementComp = NavElementComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ReceiveEndPlay");
		
		UBPC_NavSystem_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.Server_SpawnWaypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLoc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::Server_SpawnWaypoint(const struct FVector& InLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.Server_SpawnWaypoint");
		
		UBPC_NavSystem_C_Server_SpawnWaypoint_Params params {};
		params.InLoc = InLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_NavSystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ReceiveBeginPlay");
		
		UBPC_NavSystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.SetNonEssentialHUDVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_NavSystem_C::SetNonEssentialHUDVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.SetNonEssentialHUDVisibility");
		
		UBPC_NavSystem_C_SetNonEssentialHUDVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_NavSystem.BPC_NavSystem_C.ExecuteUbergraph_BPC_NavSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_NavSystem_C::ExecuteUbergraph_BPC_NavSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_NavSystem.BPC_NavSystem_C.ExecuteUbergraph_BPC_NavSystem");
		
		UBPC_NavSystem_C_ExecuteUbergraph_BPC_NavSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_NavSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_NavSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NavSystem.BPC_NavSystem_C");
		return ptr;
	}

}


