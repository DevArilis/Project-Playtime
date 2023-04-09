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
	 * Function BP_LobbyRoom.BP_LobbyRoom_C.UserConstructionScript
	 */
	struct ABP_LobbyRoom_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LobbyRoom.BP_LobbyRoom_C.BndEvt__BP_LobbyRoom_Bounds_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_LobbyRoom_C_BndEvt__BP_LobbyRoom_Bounds_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LobbyRoom.BP_LobbyRoom_C.ReceiveBeginPlay
	 */
	struct ABP_LobbyRoom_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LobbyRoom.BP_LobbyRoom_C.ExecuteUbergraph_BP_LobbyRoom
	 */
	struct ABP_LobbyRoom_C_ExecuteUbergraph_BP_LobbyRoom_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5DL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
