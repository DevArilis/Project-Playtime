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
	 * BlueprintGeneratedClass BP_HandPackage.BP_HandPackage_C
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UBP_HandPackage_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_NetExtendoHand_C*                                HandReference;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NetToggleRetraction(bool Condition);
		void MultiToggleRetraction(bool Condition);
		void NetUnattachAndRetractHand();
		void MultiUnattachAndRetractHand();
		void PackageUnattachAndRetractHand();
		void PackageToggleRetraction(bool Condition);
		void ExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand);
		void TryExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand);
		void MultiExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand);
		void NetExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand);
		void ExecuteUbergraph_BP_HandPackage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
