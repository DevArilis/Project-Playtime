#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UUI_CosmeticSelectionGrid_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   UniformGridPanel_127;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECosmeticTypeEnum                                          Type;                                                    // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZHR4[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ReleasedGesturesButton;                                  // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Grid_OnHovered;                                          // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Grid_OnUnHovered;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Grid_OnReleased;                                         // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_Appearance_C*                                    UI_AppearanceParent;                                     // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             CharacterType;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R0E6[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Grid_OnPopulate;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PopulateGrid(TArray<int32_t>* Array);
		void Refresh(ECosmeticTypeEnum Type, ECharacterType For, bool ShowLocked, TArray<struct FSteamItemDetails>* SteamInventory);
		void OnHoveredEvent(int32_t ID);
		void OnUnHoveredEvent(int32_t ItemID);
		void OnReleasedEvent(int32_t ItemID, class UUI_CosmeticItem_C* Caller);
		void OnPopulateGrid(int32_t EquippedItemID);
		void ExecuteUbergraph_UI_CosmeticSelectionGrid(int32_t EntryPoint);
		void Grid_OnPopulate__DelegateSignature(int32_t EquippedItemID);
		void Grid_OnReleased__DelegateSignature(int32_t ItemID, ECosmeticTypeEnum Type, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor);
		void Grid_OnUnHovered__DelegateSignature(int32_t ItemID);
		void Grid_OnHovered__DelegateSignature(int32_t ItemID);
		void ReleasedGesturesButton__DelegateSignature(int32_t Slot, int32_t Gesture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
