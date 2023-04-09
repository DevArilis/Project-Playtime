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
	 * WidgetBlueprintGeneratedClass W_CompassIcon_Waypoint.W_CompassIcon_Waypoint_C
	 * Size -> 0x0024 (FullSize[0x0284] - InheritedSize[0x0260])
	 */
	class UW_CompassIcon_Waypoint_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Icon;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Distance;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxDisplayedDistance;                                    // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetScaleDesiredSize(struct FVector2D* Result);
		void UpdateIndicatorOffScreenAngle(float Angle);
		void ShowOffScreenArrow(bool IsVisible);
		void UpdateMainText(const class FText& Text);
		void Show(bool IsShow);
		void SetArrowAngle(float Angle);
		void UpdateParentAngle(float ParentAngle);
		void UpdateMapRotate(float Angle);
		void SetScaleUsingSize(float IpScale);
		void UpdateDistance(float Distance);
		void ExecuteUbergraph_W_CompassIcon_Waypoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
