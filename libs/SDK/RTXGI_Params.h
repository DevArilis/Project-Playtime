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
	 * Function RTXGI.DDGIVolumeComponent.ToggleVolume
	 */
	struct UDDGIVolumeComponent_ToggleVolume_Params
	{
	public:
		bool                                                       IsVolumeEnabled;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetViewBias
	 */
	struct UDDGIVolumeComponent_SetViewBias_Params
	{
	public:
		float                                                      NewViewBias;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetUpdatePriority
	 */
	struct UDDGIVolumeComponent_SetUpdatePriority_Params
	{
	public:
		float                                                      NewUpdatePriority;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetProbesVisualization
	 */
	struct UDDGIVolumeComponent_SetProbesVisualization_Params
	{
	public:
		bool                                                       IsProbesVisualized;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetNormalBias
	 */
	struct UDDGIVolumeComponent_SetNormalBias_Params
	{
	public:
		float                                                      NewNormalBias;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
	 */
	struct UDDGIVolumeComponent_SetLightMultiplier_Params
	{
	public:
		float                                                      NewLightMultiplier;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetLightingPriority
	 */
	struct UDDGIVolumeComponent_SetLightingPriority_Params
	{
	public:
		float                                                      NewLightingPriority;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
	 */
	struct UDDGIVolumeComponent_SetIrradianceScalar_Params
	{
	public:
		float                                                      NewIrradianceScalar;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
	 */
	struct UDDGIVolumeComponent_SetEmissiveMultiplier_Params
	{
	public:
		float                                                      NewEmissiveMultiplier;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetBlendingDistance
	 */
	struct UDDGIVolumeComponent_SetBlendingDistance_Params
	{
	public:
		float                                                      NewBlendingDistance;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.SetBlendingCutoffDistance
	 */
	struct UDDGIVolumeComponent_SetBlendingCutoffDistance_Params
	{
	public:
		float                                                      NewBlendingCutoffDistance;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetViewBias
	 */
	struct UDDGIVolumeComponent_GetViewBias_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetUpdatePriority
	 */
	struct UDDGIVolumeComponent_GetUpdatePriority_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetNormalBias
	 */
	struct UDDGIVolumeComponent_GetNormalBias_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
	 */
	struct UDDGIVolumeComponent_GetLightMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetLightingPriority
	 */
	struct UDDGIVolumeComponent_GetLightingPriority_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
	 */
	struct UDDGIVolumeComponent_GetIrradianceScalar_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
	 */
	struct UDDGIVolumeComponent_GetEmissiveMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetBlendingDistance
	 */
	struct UDDGIVolumeComponent_GetBlendingDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.GetBlendingCutoffDistance
	 */
	struct UDDGIVolumeComponent_GetBlendingCutoffDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
	 */
	struct UDDGIVolumeComponent_DDGIClearVolumes_Params
	{	};

	/**
	 * Function RTXGI.DDGIVolumeComponent.ClearProbeData
	 */
	struct UDDGIVolumeComponent_ClearProbeData_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
