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
	 * Function UI_Credits.UI_Credits_C.ExitCredits
	 */
	struct UUI_Credits_C_ExitCredits_Params
	{	};

	/**
	 * Function UI_Credits.UI_Credits_C.InstantExitCredits
	 */
	struct UUI_Credits_C_InstantExitCredits_Params
	{	};

	/**
	 * Function UI_Credits.UI_Credits_C.BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UUI_Credits_C_BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Credits.UI_Credits_C.EnterCredits
	 */
	struct UUI_Credits_C_EnterCredits_Params
	{	};

	/**
	 * Function UI_Credits.UI_Credits_C.ExecuteUbergraph_UI_Credits
	 */
	struct UUI_Credits_C_ExecuteUbergraph_UI_Credits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Credits.UI_Credits_C.CreditsBack__DelegateSignature
	 */
	struct UUI_Credits_C_CreditsBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
