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
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.HideGrappleTimeline__FinishedFunc
	 */
	struct ABP_NetworkSwingHandle_C_HideGrappleTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.HideGrappleTimeline__UpdateFunc
	 */
	struct ABP_NetworkSwingHandle_C_HideGrappleTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.Sabotage
	 */
	struct ABP_NetworkSwingHandle_C_Sabotage_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.Activate Grapple
	 */
	struct ABP_NetworkSwingHandle_C_ActivateGrapple_Params
	{	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.Deactivate Grapple
	 */
	struct ABP_NetworkSwingHandle_C_DeactivateGrapple_Params
	{	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.BndEvt__BP_NetworkSwingHandle_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 */
	struct ABP_NetworkSwingHandle_C_BndEvt__BP_NetworkSwingHandle_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkSwingHandle.BP_NetworkSwingHandle_C.ExecuteUbergraph_BP_NetworkSwingHandle
	 */
	struct ABP_NetworkSwingHandle_C_ExecuteUbergraph_BP_NetworkSwingHandle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
