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
	 * BlueprintGeneratedClass CustomCameraManager.CustomCameraManager_C
	 * Size -> 0x0011 (FullSize[0x2821] - InheritedSize[0x2810])
	 */
	class ACustomCameraManager_C : public APlaytimeCameraManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2810(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     AttachCam;                                               // 0x2818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBlending;                                              // 0x2820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
		void BP_OnBlendComplete();
		void ReceiveTick(float DeltaSeconds);
		void OnUpdatePOV(const struct FMinimalViewInfo& NewPOV);
		void ExecuteUbergraph_CustomCameraManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
