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
	 * Function BPC_NavSystem.BPC_NavSystem_C.HandleVisibilityBasedOnSettings
	 */
	struct UBPC_NavSystem_C_HandleVisibilityBasedOnSettings_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToUnusable
	 */
	struct UBPC_NavSystem_C_SetMinMaxIndicatorDistancesToUnusable_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SetMinMaxIndicatorDistancesToDefault
	 */
	struct UBPC_NavSystem_C_SetMinMaxIndicatorDistancesToDefault_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.CheckIndicatorElementDistance
	 */
	struct UBPC_NavSystem_C_CheckIndicatorElementDistance_Params
	{
	public:
		class AActor*                                              ElementActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBPC_NavElement_C*                                   NavElement;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5LT8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.Shutdown
	 */
	struct UBPC_NavSystem_C_Shutdown_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.Initialize
	 */
	struct UBPC_NavSystem_C_Initialize_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SetupFromLevelInfo
	 */
	struct UBPC_NavSystem_C_SetupFromLevelInfo_Params
	{
	public:
		class ABP_NavLevelInfo_C*                                  IpLevelInfo;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetWaypoint
	 */
	struct UBPC_NavSystem_C_GetWaypoint_Params
	{
	public:
		struct FVector2D                                           IpLoc;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_NavWaypointInfo                                  Result;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SpawnWaypont
	 */
	struct UBPC_NavSystem_C_SpawnWaypont_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AFDK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_NavWaypoint_C*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.DistanceToScreenLoc
	 */
	struct UBPC_NavSystem_C_DistanceToScreenLoc_Params
	{
	public:
		class AActor*                                              Actor1;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor2;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      X;                                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddZoomMinimap
	 */
	struct UBPC_NavSystem_C_AddZoomMinimap_Params
	{
	public:
		float                                                      AddValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.CheckElementDistance
	 */
	struct UBPC_NavSystem_C_CheckElementDistance_Params
	{
	public:
		class AActor*                                              ElementActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_80KZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleEnemyIndicator
	 */
	struct UBPC_NavSystem_C_ToggleEnemyIndicator_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowEnemyIndicator
	 */
	struct UBPC_NavSystem_C_ShowEnemyIndicator_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateUseWidgets
	 */
	struct UBPC_NavSystem_C_UpdateUseWidgets_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar
	 */
	struct UBPC_NavSystem_C_UpdateRadar_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap
	 */
	struct UBPC_NavSystem_C_UpdateBigmap_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap
	 */
	struct UBPC_NavSystem_C_UpdateMinimap_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicator
	 */
	struct UBPC_NavSystem_C_UpdateEnemyIndicator_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicator
	 */
	struct UBPC_NavSystem_C_UpdateIndicator_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompass
	 */
	struct UBPC_NavSystem_C_UpdateCompass_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.CreatePlayerIcons
	 */
	struct UBPC_NavSystem_C_CreatePlayerIcons_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddEnemyIndicatorIcon
	 */
	struct UBPC_NavSystem_C_AddEnemyIndicatorIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SetPropIndicatorWidget
	 */
	struct UBPC_NavSystem_C_SetPropIndicatorWidget_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOffscreen;                                             // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShow;                                                  // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGND[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         IndicatorWidget;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateEnemyIndicatorElement
	 */
	struct UBPC_NavSystem_C_UpdateEnemyIndicatorElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   IpElement;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IpRadius;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetDistanceElement
	 */
	struct UBPC_NavSystem_C_GetDistanceElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PA8I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateCheckDistanceElements
	 */
	struct UBPC_NavSystem_C_UpdateCheckDistanceElements_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleRadar
	 */
	struct UBPC_NavSystem_C_ToggleRadar_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowRadar
	 */
	struct UBPC_NavSystem_C_ShowRadar_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleIndicator
	 */
	struct UBPC_NavSystem_C_ToggleIndicator_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowIndicator
	 */
	struct UBPC_NavSystem_C_ShowIndicator_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleCompass
	 */
	struct UBPC_NavSystem_C_ToggleCompass_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowCompass
	 */
	struct UBPC_NavSystem_C_ShowCompass_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleMinimap
	 */
	struct UBPC_NavSystem_C_ToggleMinimap_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowMinimap
	 */
	struct UBPC_NavSystem_C_ShowMinimap_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadar_PlayerIcon
	 */
	struct UBPC_NavSystem_C_UpdateRadar_PlayerIcon_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateRadarElement
	 */
	struct UBPC_NavSystem_C_UpdateRadarElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddRadarIcon
	 */
	struct UBPC_NavSystem_C_AddRadarIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleRotateMinimap
	 */
	struct UBPC_NavSystem_C_ToggleRotateMinimap_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ToggleBigMap
	 */
	struct UBPC_NavSystem_C_ToggleBigMap_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowBigMap
	 */
	struct UBPC_NavSystem_C_ShowBigMap_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLJG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmapElement
	 */
	struct UBPC_NavSystem_C_UpdateBigmapElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddBigmapIcon
	 */
	struct UBPC_NavSystem_C_AddBigmapIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateBigmap_PlayerIcon
	 */
	struct UBPC_NavSystem_C_UpdateBigmap_PlayerIcon_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ShowElement
	 */
	struct UBPC_NavSystem_C_ShowElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.RemoveElement
	 */
	struct UBPC_NavSystem_C_RemoveElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimap_PlayerIcon
	 */
	struct UBPC_NavSystem_C_UpdateMinimap_PlayerIcon_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateMinimapElement
	 */
	struct UBPC_NavSystem_C_UpdateMinimapElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.FindAngle
	 */
	struct UBPC_NavSystem_C_FindAngle_Params
	{
	public:
		struct FVector2D                                           A;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           B;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Degree;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.FindCoord
	 */
	struct UBPC_NavSystem_C_FindCoord_Params
	{
	public:
		float                                                      IpRadius;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IpDegrees;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddMinimapIcon
	 */
	struct UBPC_NavSystem_C_AddMinimapIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetElementDistance
	 */
	struct UBPC_NavSystem_C_GetElementDistance_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BN6I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetPlayerCamLoc
	 */
	struct UBPC_NavSystem_C_GetPlayerCamLoc_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DRVJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddIndicatorIcon
	 */
	struct UBPC_NavSystem_C_AddIndicatorIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassElement
	 */
	struct UBPC_NavSystem_C_UpdateCompassElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   IpElement;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.IsIndicatorInViewport
	 */
	struct UBPC_NavSystem_C_IsIndicatorInViewport_Params
	{
	public:
		struct FVector2D                                           ScreenLoc;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFlip;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetFlipElementLoc
	 */
	struct UBPC_NavSystem_C_GetFlipElementLoc_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ScreenLoc;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KTEG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.IsFlipElement
	 */
	struct UBPC_NavSystem_C_IsFlipElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHF7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.WorldToScreen
	 */
	struct UBPC_NavSystem_C_WorldToScreen_Params
	{
	public:
		struct FVector                                             WorldLoc;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ScreenLoc;                                               // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C98C[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.GetScreenSize
	 */
	struct UBPC_NavSystem_C_GetScreenSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateIndicatorElement
	 */
	struct UBPC_NavSystem_C_UpdateIndicatorElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddElement
	 */
	struct UBPC_NavSystem_C_AddElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.AddCompassIcon
	 */
	struct UBPC_NavSystem_C_AddCompassIcon_Params
	{
	public:
		class UBPC_NavElement_C*                                   Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateElements
	 */
	struct UBPC_NavSystem_C_UpdateElements_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.UpdateCompassDirectionWidgets
	 */
	struct UBPC_NavSystem_C_UpdateCompassDirectionWidgets_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.Show
	 */
	struct UBPC_NavSystem_C_Show_Params
	{
	public:
		bool                                                       IpVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.OnPlayerTurned
	 */
	struct UBPC_NavSystem_C_OnPlayerTurned_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ReceiveTick
	 */
	struct UBPC_NavSystem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ReqAddElement
	 */
	struct UBPC_NavSystem_C_ReqAddElement_Params
	{
	public:
		class UBPC_NavElement_C*                                   NavElementComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ReceiveEndPlay
	 */
	struct UBPC_NavSystem_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.Server_SpawnWaypoint
	 */
	struct UBPC_NavSystem_C_Server_SpawnWaypoint_Params
	{
	public:
		struct FVector                                             InLoc;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ReceiveBeginPlay
	 */
	struct UBPC_NavSystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.SetNonEssentialHUDVisibility
	 */
	struct UBPC_NavSystem_C_SetNonEssentialHUDVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavSystem.BPC_NavSystem_C.ExecuteUbergraph_BPC_NavSystem
	 */
	struct UBPC_NavSystem_C_ExecuteUbergraph_BPC_NavSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
