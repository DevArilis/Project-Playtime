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
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.GetTimeToDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowEventTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Time                                                       (Parm, OutParm)
	 */
	void UUI_Shoppy_C::GetTimeToDisplay(bool ShowEventTime, class FText* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.GetTimeToDisplay");
		
		UUI_Shoppy_C_GetTimeToDisplay_Params params {};
		params.ShowEventTime = ShowEventTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.FormatTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::FormatTime(const struct FTimespan& Timespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.FormatTime");
		
		UUI_Shoppy_C_FormatTime_Params params {};
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.CacheStockParents
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::CacheStockParents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.CacheStockParents");
		
		UUI_Shoppy_C_CacheStockParents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.Load Items
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::LoadItems(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.Load Items");
		
		UUI_Shoppy_C_LoadItems_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.RandomlyRetrieveItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    ShopItems                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Shoppy_C::RandomlyRetrieveItems(TArray<int32_t>* ShopItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.RandomlyRetrieveItems");
		
		UUI_Shoppy_C_RandomlyRetrieveItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShopItems != nullptr)
			*ShopItems = params.ShopItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.SetThingsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Shoppy_C::SetThingsEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.SetThingsEnabled");
		
		UUI_Shoppy_C_SetThingsEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.CheckTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowEventTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Shoppy_C::CheckTime(bool ShowEventTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.CheckTime");
		
		UUI_Shoppy_C_CheckTime_Params params {};
		params.ShowEventTime = ShowEventTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.GetFeaturedTimeLeft
	 * 		Flags  -> ()
	 */
	class FString UUI_Shoppy_C::GetFeaturedTimeLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.GetFeaturedTimeLeft");
		
		UUI_Shoppy_C_GetFeaturedTimeLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.GetSeedFromDateTime
	 * 		Flags  -> ()
	 */
	int32_t UUI_Shoppy_C::GetSeedFromDateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.GetSeedFromDateTime");
		
		UUI_Shoppy_C_GetSeedFromDateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.CacheTopButtons
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::CacheTopButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.CacheTopButtons");
		
		UUI_Shoppy_C_CacheTopButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.Construct");
		
		UUI_Shoppy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.LoadItemsFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Shoppy_C::LoadItemsFor(const class FText& Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.LoadItemsFor");
		
		UUI_Shoppy_C_LoadItemsFor_Params params {};
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.LoadShop
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::LoadShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.LoadShop");
		
		UUI_Shoppy_C_LoadShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.LoadSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::LoadSuccess(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.LoadSuccess");
		
		UUI_Shoppy_C_LoadSuccess_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.LoadFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::LoadFail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.LoadFail");
		
		UUI_Shoppy_C_LoadFail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.TimeUp
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::TimeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.TimeUp");
		
		UUI_Shoppy_C_TimeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_New_C*                   Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_New_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_Shoppy_C_BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.Refresh");
		
		UUI_Shoppy_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature");
		
		UUI_Shoppy_C_BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.LoadEventItems
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::LoadEventItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.LoadEventItems");
		
		UUI_Shoppy_C_LoadEventItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.ShopItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::ShopItemSelected(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.ShopItemSelected");
		
		UUI_Shoppy_C_ShopItemSelected_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.CloseShoppyPreviewLoading
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::CloseShoppyPreviewLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.CloseShoppyPreviewLoading");
		
		UUI_Shoppy_C_CloseShoppyPreviewLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.CallCheckTime
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::CallCheckTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.CallCheckTime");
		
		UUI_Shoppy_C_CallCheckTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.ExecuteUbergraph_UI_Shoppy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_C::ExecuteUbergraph_UI_Shoppy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.ExecuteUbergraph_UI_Shoppy");
		
		UUI_Shoppy_C_ExecuteUbergraph_UI_Shoppy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy.UI_Shoppy_C.BackReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_C::BackReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy.UI_Shoppy_C.BackReleased__DelegateSignature");
		
		UUI_Shoppy_C_BackReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Shoppy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Shoppy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Shoppy.UI_Shoppy_C");
		return ptr;
	}

}


