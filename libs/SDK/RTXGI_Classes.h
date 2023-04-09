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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RTXGI.DDGIVolume
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ADDGIVolume : public AActor
	{
	public:
		class UDDGIVolumeComponent*                                DDGIVolumeComponent;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RTXGI.DDGIVolumeComponent
	 * Size -> 0x0178 (FullSize[0x0370] - InheritedSize[0x01F8])
	 */
	class UDDGIVolumeComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_C8N2[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		bool                                                       EnableVolume;                                            // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAXL[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdatePriority;                                          // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LightingPriority;                                        // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendingDistance;                                        // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendingCutoffDistance;                                  // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RuntimeStatic;                                           // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPE1[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastOrigin;                                              // 0x0218(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDDGIRaysPerProbe                                          RaysPerProbe;                                            // 0x0224(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FU4X[0x3];                                   // 0x0225(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FIntVector                                          ProbeCounts;                                             // 0x0228(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProbeMaxRayDistance;                                     // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProbeHistoryWeight;                                      // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProbeRelocation                                    ProbeRelocation;                                         // 0x023C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ScrollProbesInfinitely;                                  // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisualizeProbes;                                         // 0x0249(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X00B[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          ProbeScrollOffset;                                       // 0x024C(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      probeDistanceExponent;                                   // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      probeIrradianceEncodingGamma;                            // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      probeChangeThreshold;                                    // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      probeBrightnessThreshold;                                // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDDGISkyLightType                                          SkyLightTypeOnRayMiss;                                   // 0x0268(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXWN[0x3];                                   // 0x0269(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      ViewBias;                                                // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalBias;                                              // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LightMultiplier;                                         // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissiveMultiplier;                                      // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IrradianceScalar;                                        // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0280(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2BE[0xEF];                                  // 0x0281(0x00EF) MISSED OFFSET (PADDING)

	public:
		void ToggleVolume(bool IsVolumeEnabled);
		void SetViewBias(float NewViewBias);
		void SetUpdatePriority(float NewUpdatePriority);
		void SetProbesVisualization(bool IsProbesVisualized);
		void SetNormalBias(float NewNormalBias);
		void SetLightMultiplier(float NewLightMultiplier);
		void SetLightingPriority(float NewLightingPriority);
		void SetIrradianceScalar(float NewIrradianceScalar);
		void SetEmissiveMultiplier(float NewEmissiveMultiplier);
		void SetBlendingDistance(float NewBlendingDistance);
		void SetBlendingCutoffDistance(float NewBlendingCutoffDistance);
		float GetViewBias();
		float GetUpdatePriority();
		float GetNormalBias();
		float GetLightMultiplier();
		float GetLightingPriority();
		float GetIrradianceScalar();
		float GetEmissiveMultiplier();
		float GetBlendingDistance();
		float GetBlendingCutoffDistance();
		void DDGIClearVolumes();
		void ClearProbeData();
		static UClass* StaticClass();
	};

	/**
	 * Class RTXGI.RTXGIPluginSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class URTXGIPluginSettings : public UDeveloperSettings
	{
	public:
		EDDGIIrradianceBits                                        IrradianceBits;                                          // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDDGIDistanceBits                                          DistanceBits;                                            // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTX1[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugProbeRadius;                                        // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProbeUpdateRayBudget;                                    // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDDGIProbesVisulizationMode                                ProbesVisualization;                                     // 0x0044(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9QJ[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProbesDepthScale;                                        // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SerializeProbes;                                         // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NO16[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
