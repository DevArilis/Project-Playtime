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
	 * Function CustomCameraManager.CustomCameraManager_C.BlueprintUpdateCamera
	 */
	struct ACustomCameraManager_C_BlueprintUpdateCamera_Params
	{
	public:
		class AActor*                                              CameraTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewCameraLocation;                                       // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            NewCameraRotation;                                       // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewCameraFOV;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomCameraManager.CustomCameraManager_C.BP_OnBlendComplete
	 */
	struct ACustomCameraManager_C_BP_OnBlendComplete_Params
	{	};

	/**
	 * Function CustomCameraManager.CustomCameraManager_C.ReceiveTick
	 */
	struct ACustomCameraManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomCameraManager.CustomCameraManager_C.OnUpdatePOV
	 */
	struct ACustomCameraManager_C_OnUpdatePOV_Params
	{
	public:
		struct FMinimalViewInfo                                    NewPOV;                                                  // 0x0000(0x05F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CustomCameraManager.CustomCameraManager_C.ExecuteUbergraph_CustomCameraManager
	 */
	struct ACustomCameraManager_C_ExecuteUbergraph_CustomCameraManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
