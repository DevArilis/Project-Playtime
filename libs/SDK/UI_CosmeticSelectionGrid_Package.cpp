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
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.PopulateGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CosmeticSelectionGrid_C::PopulateGrid(TArray<int32_t>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.PopulateGrid");
		
		UUI_CosmeticSelectionGrid_C_PopulateGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CosmeticSelectionGrid_C::Refresh(ECosmeticTypeEnum Type, ECharacterType For, bool ShowLocked, TArray<struct FSteamItemDetails>* SteamInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Refresh");
		
		UUI_CosmeticSelectionGrid_C_Refresh_Params params {};
		params.Type = Type;
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
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnHoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::OnHoveredEvent(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnHoveredEvent");
		
		UUI_CosmeticSelectionGrid_C_OnHoveredEvent_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnUnHoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::OnUnHoveredEvent(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnUnHoveredEvent");
		
		UUI_CosmeticSelectionGrid_C_OnUnHoveredEvent_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnReleasedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::OnReleasedEvent(int32_t ItemID, class UUI_CosmeticItem_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnReleasedEvent");
		
		UUI_CosmeticSelectionGrid_C_OnReleasedEvent_Params params {};
		params.ItemID = ItemID;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnPopulateGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EquippedItemID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::OnPopulateGrid(int32_t EquippedItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnPopulateGrid");
		
		UUI_CosmeticSelectionGrid_C_OnPopulateGrid_Params params {};
		params.EquippedItemID = EquippedItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ExecuteUbergraph_UI_CosmeticSelectionGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::ExecuteUbergraph_UI_CosmeticSelectionGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ExecuteUbergraph_UI_CosmeticSelectionGrid");
		
		UUI_CosmeticSelectionGrid_C_ExecuteUbergraph_UI_CosmeticSelectionGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnPopulate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EquippedItemID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::Grid_OnPopulate__DelegateSignature(int32_t EquippedItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnPopulate__DelegateSignature");
		
		UUI_CosmeticSelectionGrid_C_Grid_OnPopulate__DelegateSignature_Params params {};
		params.EquippedItemID = EquippedItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CosmeticFor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::Grid_OnReleased__DelegateSignature(int32_t ItemID, ECosmeticTypeEnum Type, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnReleased__DelegateSignature");
		
		UUI_CosmeticSelectionGrid_C_Grid_OnReleased__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		params.Type = Type;
		params.Caller = Caller;
		params.CosmeticFor = CosmeticFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::Grid_OnUnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnUnHovered__DelegateSignature");
		
		UUI_CosmeticSelectionGrid_C_Grid_OnUnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::Grid_OnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnHovered__DelegateSignature");
		
		UUI_CosmeticSelectionGrid_C_Grid_OnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ReleasedGesturesButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Gesture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticSelectionGrid_C::ReleasedGesturesButton__DelegateSignature(int32_t Slot, int32_t Gesture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ReleasedGesturesButton__DelegateSignature");
		
		UUI_CosmeticSelectionGrid_C_ReleasedGesturesButton__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.Gesture = Gesture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CosmeticSelectionGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CosmeticSelectionGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C");
		return ptr;
	}

}


