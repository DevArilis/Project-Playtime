﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.GetScaleDesiredSize
	 */
	struct UW_IndicatorIcon_Default_C_GetScaleDesiredSize_Params
	{
	public:
		struct FVector2D                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.UpdateMainText
	 */
	struct UW_IndicatorIcon_Default_C_UpdateMainText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.SetArrowAngle
	 */
	struct UW_IndicatorIcon_Default_C_SetArrowAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.UpdateParentAngle
	 */
	struct UW_IndicatorIcon_Default_C_UpdateParentAngle_Params
	{
	public:
		float                                                      ParentAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.UpdateMapRotate
	 */
	struct UW_IndicatorIcon_Default_C_UpdateMapRotate_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.SetScaleUsingSize
	 */
	struct UW_IndicatorIcon_Default_C_SetScaleUsingSize_Params
	{
	public:
		float                                                      IpScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.Construct
	 */
	struct UW_IndicatorIcon_Default_C_Construct_Params
	{	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.UpdateDistance
	 */
	struct UW_IndicatorIcon_Default_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.UpdateIndicatorOffScreenAngle
	 */
	struct UW_IndicatorIcon_Default_C_UpdateIndicatorOffScreenAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.ShowOffScreenArrow
	 */
	struct UW_IndicatorIcon_Default_C_ShowOffScreenArrow_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.Show
	 */
	struct UW_IndicatorIcon_Default_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.ShowEscapeText
	 */
	struct UW_IndicatorIcon_Default_C_ShowEscapeText_Params
	{	};

	/**
	 * Function W_IndicatorIcon_Default.W_IndicatorIcon_Default_C.ExecuteUbergraph_W_IndicatorIcon_Default
	 */
	struct UW_IndicatorIcon_Default_C_ExecuteUbergraph_W_IndicatorIcon_Default_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PTS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif