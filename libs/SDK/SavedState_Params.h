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
	 * Function SavedState.SavedState_C.Load Actor State
	 */
	struct USavedState_C_LoadActorState_Params
	{
	public:
		struct FActorSave                                          State;                                                   // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SavedState.SavedState_C.LoadActorState
	 */
	
	/**
	 * Function SavedState.SavedState_C.PreSaveActorState
	 */
	struct USavedState_C_PreSaveActorState_Params
	{	};

	/**
	 * Function SavedState.SavedState_C.ReceiveBeginPlay
	 */
	struct USavedState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SavedState.SavedState_C.ExecuteUbergraph_SavedState
	 */
	struct USavedState_C_ExecuteUbergraph_SavedState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OVQT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
