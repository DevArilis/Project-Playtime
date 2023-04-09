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
	 * WidgetBlueprintGeneratedClass W_DirectionIcon3.W_DirectionIcon3_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UW_DirectionIcon3_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetScaleDesiredSize(struct FVector2D* Result);
		void UpdateDistance(float Distance);
		void UpdateIndicatorOffScreenAngle(float Angle);
		void ShowOffScreenArrow(bool IsVisible);
		void Show(bool IsShow);
		void SetArrowAngle(float Angle);
		void UpdateParentAngle(float ParentAngle);
		void UpdateMapRotate(float Angle);
		void SetScaleUsingSize(float IpScale);
		void PreConstruct(bool IsDesignTime);
		void UpdateMainText(const class FText& Text);
		void ExecuteUbergraph_W_DirectionIcon3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
