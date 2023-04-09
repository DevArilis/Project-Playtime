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
	 * BlueprintGeneratedClass BPC_Tooltip.BPC_Tooltip_C
	 * Size -> 0x0009 (FullSize[0x0249] - InheritedSize[0x0240])
	 */
	class UBPC_Tooltip_C : public UTooltipComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShowNonEssentialHUD;                                     // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetNonEssentialHUDVisibility(bool Visible);
		void ShowTooltip(bool Value);
		void ExecuteUbergraph_BPC_Tooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
