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
	 * WidgetBlueprintGeneratedClass UI_Appearance.UI_Appearance_C
	 * Size -> 0x00D0 (FullSize[0x0330] - InheritedSize[0x0260])
	 */
	class UUI_Appearance_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BackButton;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CategoriesPanel;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CategoryText;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CosmeticSelectionGrid;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            grabpacks;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            hats;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            lefthands;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            masks;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            Pants;                                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            righthands;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            shirts;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            Shoes;                                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSlotButton_C*                            Skins;                                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ColorSelector_C*                                 UI_ColorSelector;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticInfo_C*                                  UI_CosmeticInfo;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticSelectionGrid_C*                         UI_CosmeticSelectionGrid;                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_201;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CosmeticItem_C*                                  PreviousCaller;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NetworkCharacter_C*                              Character;                                               // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UUI_ColorItem_C*                                     CurrentColor;                                            // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             CharacterType;                                           // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1ZQE[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ChangedAppearance;                                       // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    GetSteamInventoryAttempts;                               // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3KGG[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_CustomizationMenuCharacter_C*                    MenuPlayerCharacter;                                     // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetCharacterType(ECharacterType NewValue);
		void SetMenuCharacter(class ABP_CustomizationMenuCharacter_C* MenuCharacter);
		void UpdateVisuals();
		void BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature(int32_t ItemID, ECosmeticTypeEnum Type, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor);
		void BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void PreConstruct(bool IsDesignTime);
		void Back();
		void Construct();
		void ShowFoundSteamInventory();
		void UpdateSteamInventory();
		void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature(int32_t ItemID);
		void SetColorMenuStatus(int32_t ItemId);
		void ColorSelected(int32_t ColorIndex, class UUI_ColorItem_C* SelectedColor);
		void SwitchCategory(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature(int32_t EquippedItemID);
		void BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void PlaySelectAnimations();
		void BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void SetTypeAnimations(ECosmeticTypeEnum CosmeticType);
		void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature(int32_t ItemID);
		void BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature(ECosmeticTypeEnum Type);
		void ExecuteUbergraph_UI_Appearance(int32_t EntryPoint);
		void ChangedAppearance__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
