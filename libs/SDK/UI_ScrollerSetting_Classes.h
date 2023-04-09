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
	 * WidgetBlueprintGeneratedClass UI_ScrollerSetting.UI_ScrollerSetting_C
	 * Size -> 0x0074 (FullSize[0x02D4] - InheritedSize[0x0260])
	 */
	class UUI_ScrollerSetting_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             LeftButton;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LeftButtonText;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RightButton;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RightButtonText;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SettingText;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_134;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Label;                                                   // 0x0298(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             ValueChanged;                                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      Values;                                                  // 0x02C0(0x0010) Edit, BlueprintVisible
		int32_t                                                    Value;                                                   // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentValue(int32_t* Value, class FString* Output);
		void PreConstruct(bool IsDesignTime);
		void SetLabel(const class FText& Label);
		void UpdateVisuals();
		void BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void SetValue(int32_t Value);
		void SetValuesEvent(TArray<class FString> Values);
		void SetValueFromString(const class FString& Str);
		void ExecuteUbergraph_UI_ScrollerSetting(int32_t EntryPoint);
		void ValueChanged__DelegateSignature(int32_t Index, const class FString& Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
