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
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.GetScaleDesiredSize
	 */
	struct UW_DirectionIcon3_C_GetScaleDesiredSize_Params
	{
	public:
		struct FVector2D                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.UpdateDistance
	 */
	struct UW_DirectionIcon3_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.UpdateIndicatorOffScreenAngle
	 */
	struct UW_DirectionIcon3_C_UpdateIndicatorOffScreenAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.ShowOffScreenArrow
	 */
	struct UW_DirectionIcon3_C_ShowOffScreenArrow_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.Show
	 */
	struct UW_DirectionIcon3_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.SetArrowAngle
	 */
	struct UW_DirectionIcon3_C_SetArrowAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.UpdateParentAngle
	 */
	struct UW_DirectionIcon3_C_UpdateParentAngle_Params
	{
	public:
		float                                                      ParentAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.UpdateMapRotate
	 */
	struct UW_DirectionIcon3_C_UpdateMapRotate_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.SetScaleUsingSize
	 */
	struct UW_DirectionIcon3_C_SetScaleUsingSize_Params
	{
	public:
		float                                                      IpScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.PreConstruct
	 */
	struct UW_DirectionIcon3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.UpdateMainText
	 */
	struct UW_DirectionIcon3_C_UpdateMainText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_DirectionIcon3.W_DirectionIcon3_C.ExecuteUbergraph_W_DirectionIcon3
	 */
	struct UW_DirectionIcon3_C_ExecuteUbergraph_W_DirectionIcon3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
