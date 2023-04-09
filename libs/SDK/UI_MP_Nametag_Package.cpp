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
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.SetDevTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Developer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MP_Nametag_C::SetDevTag(bool Developer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.SetDevTag");
		
		UUI_MP_Nametag_C_SetDevTag_Params params {};
		params.Developer = Developer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UUI_MP_Nametag_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.UpdateVisibility");
		
		UUI_MP_Nametag_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_MP_Nametag_C::SetName(const class FString& UserName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.SetName");
		
		UUI_MP_Nametag_C_SetName_Params params {};
		params.UserName = UserName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_Nametag_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.SetColor");
		
		UUI_MP_Nametag_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MP_Nametag_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.Construct");
		
		UUI_MP_Nametag_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void UUI_MP_Nametag_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.FoundSteamInventory");
		
		UUI_MP_Nametag_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Nametag.UI_MP_Nametag_C.ExecuteUbergraph_UI_MP_Nametag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_Nametag_C::ExecuteUbergraph_UI_MP_Nametag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Nametag.UI_MP_Nametag_C.ExecuteUbergraph_UI_MP_Nametag");
		
		UUI_MP_Nametag_C_ExecuteUbergraph_UI_MP_Nametag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_Nametag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_Nametag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_Nametag.UI_MP_Nametag_C");
		return ptr;
	}

}


