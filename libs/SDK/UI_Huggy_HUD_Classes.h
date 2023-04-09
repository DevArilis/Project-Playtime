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
	 * WidgetBlueprintGeneratedClass UI_Huggy_HUD.UI_Huggy_HUD_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UUI_Huggy_HUD_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    RechargeHit;                                             // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Init;                                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Fader;                                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MonsterHUD_C*                                    UI_MonsterHUD;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTexture2D*                                          FirstAbilityImage;                                       // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          SecondAbilityImage;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                SecondAbilityText;                                       // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                FirstAbilityText;                                        // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetCrosshairToRed();
		void SetCrosshairToWhite();
		void PlayHitmarker();
		void PlayAttackAnimation(float Duration);
		void SetCrosshairProgress(float Progress);
		void UpdateToyCount(TArray<bool> ToysFound);
		void PlayFirstAbilityRechargeAnim(float Cooldown);
		void PlaySecondAbilityRechargeAnim(float Cooldown);
		void CheckDownPlayers();
		void RadialRecharge(float Duration);
		void ResetRadialRecharge();
		void PlaySabotageAbilityRechargeAnim(float Cooldown);
		void SetSabotageIcon(class UTexture2D* Icon);
		void ShowEmotes(ECharacterType Character);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void SetCrosshairColor(const struct FLinearColor& Color);
		void ExecuteUbergraph_UI_Huggy_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
