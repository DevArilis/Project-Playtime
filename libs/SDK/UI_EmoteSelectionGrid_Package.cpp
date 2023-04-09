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
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.PopulateGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_EmoteSelectionGrid_C::PopulateGrid(TArray<int32_t>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.PopulateGrid");
		
		UUI_EmoteSelectionGrid_C_PopulateGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_EmoteSelectionGrid_C::Refresh(ECharacterType For, bool ShowLocked, TArray<struct FSteamItemDetails>* SteamInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Refresh");
		
		UUI_EmoteSelectionGrid_C_Refresh_Params params {};
		params.For = For;
		params.ShowLocked = ShowLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamInventory != nullptr)
			*SteamInventory = params.SteamInventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnHoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::OnHoveredEvent(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnHoveredEvent");
		
		UUI_EmoteSelectionGrid_C_OnHoveredEvent_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnUnHoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::OnUnHoveredEvent(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnUnHoveredEvent");
		
		UUI_EmoteSelectionGrid_C_OnUnHoveredEvent_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnReleasedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::OnReleasedEvent(int32_t ItemID, class UUI_CosmeticItem_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnReleasedEvent");
		
		UUI_EmoteSelectionGrid_C_OnReleasedEvent_Params params {};
		params.ItemID = ItemID;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_EmoteSelectionGrid_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Construct");
		
		UUI_EmoteSelectionGrid_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.ExecuteUbergraph_UI_EmoteSelectionGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::ExecuteUbergraph_UI_EmoteSelectionGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.ExecuteUbergraph_UI_EmoteSelectionGrid");
		
		UUI_EmoteSelectionGrid_C_ExecuteUbergraph_UI_EmoteSelectionGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CosmeticFor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::Grid_OnReleased__DelegateSignature(int32_t ItemID, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnReleased__DelegateSignature");
		
		UUI_EmoteSelectionGrid_C_Grid_OnReleased__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		params.Caller = Caller;
		params.CosmeticFor = CosmeticFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::Grid_OnUnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnUnHovered__DelegateSignature");
		
		UUI_EmoteSelectionGrid_C_Grid_OnUnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteSelectionGrid_C::Grid_OnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnHovered__DelegateSignature");
		
		UUI_EmoteSelectionGrid_C_Grid_OnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EmoteSelectionGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EmoteSelectionGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C");
		return ptr;
	}

}


