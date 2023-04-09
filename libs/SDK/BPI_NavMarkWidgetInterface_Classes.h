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
	 * BlueprintGeneratedClass BPI_NavMarkWidgetInterface.BPI_NavMarkWidgetInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_NavMarkWidgetInterface_C : public UInterface
	{
	public:
		void GetScaleDesiredSize(struct FVector2D* Result);
		void SetScaleUsingSize(float IpScale);
		void UpdateMapRotate(float Angle);
		void UpdateParentAngle(float ParentAngle);
		void SetArrowAngle(float Angle);
		void Show(bool IsShow);
		void UpdateMainText(const class FText& Text);
		void ShowOffScreenArrow(bool IsVisible);
		void UpdateIndicatorOffScreenAngle(float Angle);
		void UpdateDistance(float Distance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
