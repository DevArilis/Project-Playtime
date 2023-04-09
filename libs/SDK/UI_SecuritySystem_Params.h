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
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.CameraForward
	 */
	struct UUI_SecuritySystem_C_CameraForward_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.CameraBack
	 */
	struct UUI_SecuritySystem_C_CameraBack_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.SetCamera
	 */
	struct UUI_SecuritySystem_C_SetCamera_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBVF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.GetCameraLength
	 */
	struct UUI_SecuritySystem_C_GetCameraLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.GetClock
	 */
	struct UUI_SecuritySystem_C_GetClock_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SecuritySystem_C_BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SecuritySystem_C_BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.Construct
	 */
	struct UUI_SecuritySystem_C_Construct_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.EventReturn
	 */
	struct UUI_SecuritySystem_C_EventReturn_Params
	{	};

	/**
	 * Function UI_SecuritySystem.UI_SecuritySystem_C.ExecuteUbergraph_UI_SecuritySystem
	 */
	struct UUI_SecuritySystem_C_ExecuteUbergraph_UI_SecuritySystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7J0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
