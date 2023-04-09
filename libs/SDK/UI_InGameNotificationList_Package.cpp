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
	 * 		Name   -> Function UI_InGameNotificationList.UI_InGameNotificationList_C.HandleNotificationAddition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     HandledWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameNotificationList_C::HandleNotificationAddition(class UWidget* HandledWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameNotificationList.UI_InGameNotificationList_C.HandleNotificationAddition");
		
		UUI_InGameNotificationList_C_HandleNotificationAddition_Params params {};
		params.HandledWidget = HandledWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameNotificationList.UI_InGameNotificationList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InGameNotificationList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameNotificationList.UI_InGameNotificationList_C.PreConstruct");
		
		UUI_InGameNotificationList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameNotificationList.UI_InGameNotificationList_C.DisplayNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NotifText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TicketReward                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_InGameNotificationList_C::DisplayNotification(const class FText& NotifText, const class FText& TicketReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameNotificationList.UI_InGameNotificationList_C.DisplayNotification");
		
		UUI_InGameNotificationList_C_DisplayNotification_Params params {};
		params.NotifText = NotifText;
		params.TicketReward = TicketReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameNotificationList.UI_InGameNotificationList_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_InGameNotificationList_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameNotificationList.UI_InGameNotificationList_C.OnInitialized");
		
		UUI_InGameNotificationList_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameNotificationList.UI_InGameNotificationList_C.ExecuteUbergraph_UI_InGameNotificationList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameNotificationList_C::ExecuteUbergraph_UI_InGameNotificationList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameNotificationList.UI_InGameNotificationList_C.ExecuteUbergraph_UI_InGameNotificationList");
		
		UUI_InGameNotificationList_C_ExecuteUbergraph_UI_InGameNotificationList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InGameNotificationList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InGameNotificationList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InGameNotificationList.UI_InGameNotificationList_C");
		return ptr;
	}

}


