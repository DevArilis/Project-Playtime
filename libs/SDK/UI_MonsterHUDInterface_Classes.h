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
	 * BlueprintGeneratedClass UI_MonsterHUDInterface.UI_MonsterHUDInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUI_MonsterHUDInterface_C : public UInterface
	{
	public:
		void ShowEmotes(ECharacterType Character);
		void SetSabotageIcon(class UTexture2D* Icon);
		void PlaySabotageAbilityRechargeAnim(float Cooldown);
		void ResetRadialRecharge();
		void RadialRecharge(float Duration);
		void CheckDownPlayers();
		void PlaySecondAbilityRechargeAnim(float Cooldown);
		void PlayFirstAbilityRechargeAnim(float Cooldown);
		void UpdateToyCount(TArray<bool> ToysFound);
		void SetCrosshairProgress(float Progress);
		void PlayAttackAnimation(float Duration);
		void PlayHitmarker();
		void SetCrosshairToWhite();
		void SetCrosshairToRed();
		void SetCrosshairColor(const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
