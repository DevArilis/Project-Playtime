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
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.GetScaleDesiredSize
	 */
	struct UW_HoleReviveTooltip_C_GetScaleDesiredSize_Params
	{
	public:
		struct FVector2D                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.Cancel Revive
	 */
	struct UW_HoleReviveTooltip_C_CancelRevive_Params
	{
	public:
		class FScriptDelegate                                      FinishedHandler;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.SuccessRevive
	 */
	struct UW_HoleReviveTooltip_C_SuccessRevive_Params
	{
	public:
		class FScriptDelegate                                      FinishedHandler;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.UpdateMainText
	 */
	struct UW_HoleReviveTooltip_C_UpdateMainText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.SetArrowAngle
	 */
	struct UW_HoleReviveTooltip_C_SetArrowAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.UpdateParentAngle
	 */
	struct UW_HoleReviveTooltip_C_UpdateParentAngle_Params
	{
	public:
		float                                                      ParentAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.UpdateMapRotate
	 */
	struct UW_HoleReviveTooltip_C_UpdateMapRotate_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.SetScaleUsingSize
	 */
	struct UW_HoleReviveTooltip_C_SetScaleUsingSize_Params
	{
	public:
		float                                                      IpScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.Construct
	 */
	struct UW_HoleReviveTooltip_C_Construct_Params
	{	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.UpdateDistance
	 */
	struct UW_HoleReviveTooltip_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.UpdateIndicatorOffScreenAngle
	 */
	struct UW_HoleReviveTooltip_C_UpdateIndicatorOffScreenAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.ShowOffScreenArrow
	 */
	struct UW_HoleReviveTooltip_C_ShowOffScreenArrow_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.Show
	 */
	struct UW_HoleReviveTooltip_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.StartRevive
	 */
	struct UW_HoleReviveTooltip_C_StartRevive_Params
	{	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.SetReviveProgress
	 */
	struct UW_HoleReviveTooltip_C_SetReviveProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.SetLimbForTooltip
	 */
	struct UW_HoleReviveTooltip_C_SetLimbForTooltip_Params
	{
	public:
		ELimb                                                      Limb;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HoleReviveTooltip.W_HoleReviveTooltip_C.ExecuteUbergraph_W_HoleReviveTooltip
	 */
	struct UW_HoleReviveTooltip_C_ExecuteUbergraph_W_HoleReviveTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
