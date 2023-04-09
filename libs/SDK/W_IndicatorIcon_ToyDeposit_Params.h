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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.GetScaleDesiredSize
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_GetScaleDesiredSize_Params
	{
	public:
		struct FVector2D                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.UpdateMainText
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_UpdateMainText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.SetArrowAngle
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_SetArrowAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.UpdateParentAngle
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_UpdateParentAngle_Params
	{
	public:
		float                                                      ParentAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.UpdateMapRotate
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_UpdateMapRotate_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.SetScaleUsingSize
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_SetScaleUsingSize_Params
	{
	public:
		float                                                      IpScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.UpdateDistance
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.UpdateIndicatorOffScreenAngle
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_UpdateIndicatorOffScreenAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.ShowOffScreenArrow
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_ShowOffScreenArrow_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.Show
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_IndicatorIcon_ToyDeposit.W_IndicatorIcon_ToyDeposit_C.ExecuteUbergraph_W_IndicatorIcon_ToyDeposit
	 */
	struct UW_IndicatorIcon_ToyDeposit_C_ExecuteUbergraph_W_IndicatorIcon_ToyDeposit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
