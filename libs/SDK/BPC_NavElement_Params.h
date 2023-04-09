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
	 * Function BPC_NavElement.BPC_NavElement_C.Adjust Opacity
	 */
	struct UBPC_NavElement_C_AdjustOpacity_Params
	{
	public:
		float                                                      MyDist;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClosestDist;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.Use
	 */
	struct UBPC_NavElement_C_Use_Params
	{
	public:
		bool                                                       IsUse;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.ShowUserWidget
	 */
	struct UBPC_NavElement_C_ShowUserWidget_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShow;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQ3L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.CheckDistance
	 */
	struct UBPC_NavElement_C_CheckDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.GetOwnerIndicatorLoc
	 */
	struct UBPC_NavElement_C_GetOwnerIndicatorLoc_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UUW7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.RemoveWidgetFromParent
	 */
	struct UBPC_NavElement_C_RemoveWidgetFromParent_Params
	{	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.Show
	 */
	struct UBPC_NavElement_C_Show_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.ReceiveBeginPlay
	 */
	struct UBPC_NavElement_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.SetCompassIconWidget
	 */
	struct UBPC_NavElement_C_SetCompassIconWidget_Params
	{
	public:
		class UUserWidget*                                         CompassMarkWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.ReceiveEndPlay
	 */
	struct UBPC_NavElement_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.Start
	 */
	struct UBPC_NavElement_C_Start_Params
	{	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.Init
	 */
	struct UBPC_NavElement_C_Init_Params
	{	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.ReInit
	 */
	struct UBPC_NavElement_C_ReInit_Params
	{
	public:
		class UBPC_NavSystem_C*                                    InNavSystem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_NavElement.BPC_NavElement_C.ExecuteUbergraph_BPC_NavElement
	 */
	struct UBPC_NavElement_C_ExecuteUbergraph_BPC_NavElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
