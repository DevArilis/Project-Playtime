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
	 * WidgetBlueprintGeneratedClass UI_BuyPoints.UI_BuyPoints_C
	 * Size -> 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
	 */
	class UUI_BuyPoints_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Purchase;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Transaction;                                             // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Init;                                                    // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_77;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_212;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PurchaseConfirmText;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BackButton_C*                                    UI_BackButton;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_BuyPointsButton_C*                             UI_N_BuyPointsButton;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_BuyPointsButton_C*                             UI_N_BuyPointsButton_2;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_BuyPointsButton_C*                             UI_N_BuyPointsButton_3;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_BuyPointsButton_C*                             UI_N_BuyPointsButton_4;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_BuyPointsButton_C*                             UI_N_BuyPointsButton_5;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_N_Loading_C*                                     UI_N_Loading;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    BundleToBuy;                                             // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AQ18[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Updated;                                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_N_BuyPointsButton_C*                             CurrentPointsButton;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunningTransaction;                                      // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P87C[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_N_BuyPointsButton_C*>                     BuyButtons;                                              // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		class FText Get_PurchaseConfirmText_Text_1();
		void ShowTransactionScreen(bool Condition);
		void OnCallback_6F72935A464FBAFF7E9FC5A2297C521A(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
		void OnCallback_02A12AEA43C3F739CE86D384936AC92C(const class FString& Data, bool bWasSuccessful);
		void OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2(const class FString& Data, bool bWasSuccessful);
		void Construct();
		void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
		void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
		void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
		void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
		void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
		void Run();
		void OnEscapeInputCapture();
		void BndEvt__UI_BuyPoints_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature();
		void MicroTransactionAuthorized(const struct FMicroTxnAuthorizationResponse& Data);
		void Success(class UVaRestRequestJSON* Request);
		void DoNothing(class UVaRestRequestJSON* Request);
		void ExecuteUbergraph_UI_BuyPoints(int32_t EntryPoint);
		void Updated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
