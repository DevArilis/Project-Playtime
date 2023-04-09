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
	 * WidgetBlueprintGeneratedClass UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C
	 * Size -> 0x0049 (FullSize[0x02A9] - InheritedSize[0x0260])
	 */
	class UUI_EmoteSelectionGrid_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   UniformGridPanel_127;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Grid_OnHovered;                                          // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Grid_OnUnHovered;                                        // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Grid_OnReleased;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_Appearance_C*                                    UI_AppearanceParent;                                     // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             CharacterType;                                           // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PopulateGrid(TArray<int32_t>* Array);
		void Refresh(ECharacterType For, bool ShowLocked, TArray<struct FSteamItemDetails>* SteamInventory);
		void OnHoveredEvent(int32_t ID);
		void OnUnHoveredEvent(int32_t ItemID);
		void OnReleasedEvent(int32_t ItemID, class UUI_CosmeticItem_C* Caller);
		void Construct();
		void ExecuteUbergraph_UI_EmoteSelectionGrid(int32_t EntryPoint);
		void Grid_OnReleased__DelegateSignature(int32_t ItemID, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor);
		void Grid_OnUnHovered__DelegateSignature(int32_t ItemID);
		void Grid_OnHovered__DelegateSignature(int32_t ItemID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
