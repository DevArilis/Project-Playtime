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
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.SetSelected
	 */
	struct UUI_N_ServerCategory_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBS1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.Construct
	 */
	struct UUI_N_ServerCategory_C_Construct_Params
	{	};

	/**
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.BndEvt__UI_N_ServerCategory_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_N_ServerCategory_C_BndEvt__UI_N_ServerCategory_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.PreConstruct
	 */
	struct UUI_N_ServerCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.ExecuteUbergraph_UI_N_ServerCategory
	 */
	struct UUI_N_ServerCategory_C_ExecuteUbergraph_UI_N_ServerCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_N_ServerCategory.UI_N_ServerCategory_C.Released__DelegateSignature
	 */
	struct UUI_N_ServerCategory_C_Released__DelegateSignature_Params
	{
	public:
		E_ServerCategory                                           Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
