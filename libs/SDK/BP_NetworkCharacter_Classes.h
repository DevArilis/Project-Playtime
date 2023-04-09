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
	 * BlueprintGeneratedClass BP_NetworkCharacter.BP_NetworkCharacter_C
	 * Size -> 0x0649 (FullSize[0x0C89] - InheritedSize[0x0640])
	 */
	class ABP_NetworkCharacter_C : public AANetworkCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     NavIndicatorAttachment;                                  // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_MeshContainer_FirstPersonGrabpack;                    // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_MeshContainer_ModularPlayerCosmetic;                  // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPCamera;                                                // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 CamArm;                                                  // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   NS_HealthAOE;                                            // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Tooltip_C*                                      BPC_Tooltip1;                                            // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Tooltip_C*                                      BPC_Tooltip;                                             // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Tooltips;                                                // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticShirt;                                           // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USavedState_C*                                       SavedState;                                              // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    HealthRegenZone;                                         // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabPack_HandL;                                          // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabPack_HandR;                                          // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Sticker;                                                 // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticMask;                                            // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticShoes;                                           // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticPants;                                           // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticHead;                                            // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticHat;                                             // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    CosmeticsCamera;                                         // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 CosmeticsSpringArm;                                      // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonGrabpackGunsR;                                // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonGrabpackGunsL;                                // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hose_R;                                                  // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hose_L;                                                  // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabpackPhysPack;                                        // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RightRope;                                               // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftRope;                                                // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   HitCapsule;                                              // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabPackGuns;                                            // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ReviveCollision;                                         // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     HuggyChaseMusic;                                         // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ThirdPerson_HeldToyPart;                                 // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_NavElement_C*                                   BPC_NavElement;                                          // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_NavSystem_C*                                    BPC_NavSystem;                                           // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Heartbeat_Loop;                                          // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Webs;                                                 // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    NameTag;                                                 // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Shirt;                                                   // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hat;                                                     // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    DownWidget;                                              // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HighFivePointL;                                          // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HighFivePointR;                                          // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPS_Legs;                                                // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GrabPack_GunR;                                           // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GrabPack_GunL;                                           // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 Flashlight;                                              // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PickUpPoint;                                             // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 PickupArm;                                               // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_FogDistance_AB6AC0D54F1F67BC2AB9FC8F6CF853EA; // 0x07E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_AB6AC0D54F1F67BC2AB9FC8F6CF853EA;  // 0x07EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4RL7[0x3];                                   // 0x07ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Lerp_Amount_04E5C0594947A4869BF9EFB914EC28AF; // 0x07F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_04E5C0594947A4869BF9EFB914EC28AF;  // 0x07FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_19F2[0x3];                                   // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteractingWithTimeline_Progress_2B743AAB4510002E99A90EBAF0DD4814; // 0x0808(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         InteractingWithTimeline__Direction_2B743AAB4510002E99A90EBAF0DD4814; // 0x080C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UDH0[0x3];                                   // 0x080D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  InteractingWithTimeline;                                 // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteractedWithTimeline_Progress_CB3D860E4ADEDB7B7146DAAB9FD55F3B; // 0x0818(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         InteractedWithTimeline__Direction_CB3D860E4ADEDB7B7146DAAB9FD55F3B; // 0x081C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDFG[0x3];                                   // 0x081D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  InteractedWithTimeline;                                  // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DownCameraTL_Down_825E233E45BF4DA801F529A23736AACB;      // 0x0828(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DownCameraTL__Direction_825E233E45BF4DA801F529A23736AACB; // 0x082C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PLU4[0x3];                                   // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DownCameraTL;                                            // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerLookAtJumpscare_NewTrack_0_48961D4A4AA4A11FE6CD75B5117399CC; // 0x0838(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         PlayerLookAtJumpscare__Direction_48961D4A4AA4A11FE6CD75B5117399CC; // 0x083C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PDCH[0x3];                                   // 0x083D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PlayerLookAtJumpscare;                                   // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SelfReviveTimer_Progress_1097E00441792B6D83028E8E5FB260DD; // 0x0848(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SelfReviveTimer__Direction_1097E00441792B6D83028E8E5FB260DD; // 0x084C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RUQE[0x3];                                   // 0x084D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SelfReviveTimer;                                         // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WebOpacityTime_Track_4B661A644643E00E44D0BDA1DCDB4658;   // 0x0858(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         WebOpacityTime__Direction_4B661A644643E00E44D0BDA1DCDB4658; // 0x085C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E0U0[0x3];                                   // 0x085D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  WebOpacityTime;                                          // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraHit_Track_6483FB6E4B0799F757D5E480EDAB1A56;        // 0x0868(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CameraHit__Direction_6483FB6E4B0799F757D5E480EDAB1A56;   // 0x086C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G1W3[0x3];                                   // 0x086D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CameraHit;                                               // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SetGlitchOpacity_Track_EEBB24774033BA8597F370826D9442AB; // 0x0878(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SetGlitchOpacity__Direction_EEBB24774033BA8597F370826D9442AB; // 0x087C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2UY0[0x3];                                   // 0x087D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SetGlitchOpacity;                                        // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookPitch;                                               // 0x0888(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       F_Pressed;                                               // 0x088C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C44I[0x3];                                   // 0x088D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_DeathScreen_C*                                   DeathScreen;                                             // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HP;                                                      // 0x0898(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Webbed;                                                  // 0x089C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Won;                                                     // 0x089D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_55CS[0x2];                                   // 0x089E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        PlayerColor;                                             // 0x08A0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class FString                                              UserName;                                                // 0x08B0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, RepNotify, HasGetValueTypeHash
		bool                                                       Ready;                                                   // 0x08C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OI64[0x3];                                   // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoReviveTime;                                          // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AutoReviveTimerHandler;                                  // 0x08C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Monster[0x10];                                           // 0x08D0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ReviveTime;                                              // 0x08E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Dead;                                                    // 0x08E4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V100[0x3];                                   // 0x08E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CameraRotation;                                          // 0x08E8(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_43I2[0x4];                                   // 0x08F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          RReturnSound;                                            // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          RGrabSound;                                              // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          RLaunchSound;                                            // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LHandPullSound;                                          // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RHandPullSound;                                          // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DetectedTimerHandler;                                    // 0x0920(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInWuggyHole;                                           // 0x0928(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       StartedGame;                                             // 0x0929(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       InCosmeticsMenu;                                         // 0x092A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Lobby_TransitioningCamera;                               // 0x092B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             DashDirection;                                           // 0x092C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WebbedDuration;                                          // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SCXZ[0x4];                                   // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HuggyJumpscare_C*                                JumpscareActorOld;                                       // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       JumpscareActive;                                         // 0x0948(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0DV7[0x3];                                   // 0x0949(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            PreJumpscareControlRotation;                             // 0x094C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreJumpscareThirdPersonMode;                             // 0x0958(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IBBF[0x7];                                   // 0x0959(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_WalkableLobby_C*                                 CachedUI_WalkableLobby;                                  // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsJumping;                                               // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_26TP[0x7];                                   // 0x0969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_NetworkPlayer_C*                                CachedABP;                                               // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WantsToStandUp;                                          // 0x0978(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MBX7[0x7];                                   // 0x0979(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               RightHandAnimations;                                     // 0x0980(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimSequence*>                               PlayerAnimations;                                        // 0x0990(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimSequence*>                               LeftHandAnimations;                                      // 0x09A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CanEmoteAgain;                                           // 0x09B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimPlaying;                                             // 0x09B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LH85[0x2];                                   // 0x09B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BreathRechargeTime;                                      // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmountOfBreath;                                          // 0x09B8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanHoldBreath;                                           // 0x09BC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HoldingBreath;                                           // 0x09BD(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LJGJ[0x2];                                   // 0x09BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HoldBreathHandle;                                        // 0x09C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BreathSound;                                             // 0x09C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              SavedMaxDistance;                                        // 0x09D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsAutoCarry;                                             // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TR3K[0x3];                                   // 0x09E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabpackRepairTime;                                      // 0x09E4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Locker_C*                                        LockerRef;                                               // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Strikes;                                                 // 0x09F0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       BeingCarriedByMonster;                                   // 0x09F4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BreathSpamPrevention;                                    // 0x09F5(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSFJ[0x2];                                   // 0x09F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     OutOfBreathSound;                                        // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SoundAttenLevel;                                         // 0x0A00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CLAM[0x4];                                   // 0x0A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HealthRegenTimer;                                        // 0x0A08(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LockerTimerHandle;                                       // 0x0A10(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_GameManager_C*                                   GameManager;                                             // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerIsDetected;                                        // 0x0A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KJ0Q[0x3];                                   // 0x0A21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerIsDetectedLerp01;                                  // 0x0A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlayerAttach;                                            // 0x0A28(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AttachSocketName;                                        // 0x0A30(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseJumpscares;                                           // 0x0A38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BK4D[0x7];                                   // 0x0A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_AbstractJumpscareMaster_C*                       JumpscareMasterActor;                                    // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CrouchPressed;                                           // 0x0A48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TR61[0x7];                                   // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_NavToyPartDeposit_C*>                     DepositNavIndicators;                                    // 0x0A50(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ACharacter*                                          MonsterSelf;                                             // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WebsVisible;                                             // 0x0A68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpscareActive;                                       // 0x0A69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CachedPersp;                                             // 0x0A6A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FDYA[0x5];                                   // 0x0A6B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              CharInteractingWithThis;                                 // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInteractedWithState                                       NetInteractedWithState;                                  // 0x0A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInteractedWithState                                       NetInteractingState;                                     // 0x0A79(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EInteractedWithState                                       LocalInteractingState;                                   // 0x0A7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LHI7[0x5];                                   // 0x0A7B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          LLaunchSound;                                            // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          LReturnSound;                                            // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          LGrabSound;                                              // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OriginalCamLocation;                                     // 0x0A98(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             UncrouchCamLocation;                                     // 0x0AA4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CrouchCamLocation;                                       // 0x0AB0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YRIF[0x4];                                   // 0x0ABC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggledThirdPersonDuringJumpscare;                       // 0x0AC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAudioComponent*                                     RevivingSound;                                           // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FixingSound;                                             // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStartedJumpscareAnimation;                             // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FPresetSlot                                         CurrentPreset;                                           // 0x0AF0(0x0058) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		bool                                                       InMainMenu;                                              // 0x0B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYXL[0x3];                                   // 0x0B49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        HealthAOENotVisible;                                     // 0x0B4C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CNJS[0x4];                                   // 0x0B5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            NightmareFog;                                            // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AANetworkCharacter*                                  HealingChar;                                             // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EmoteRequested;                                          // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CanInteract;                                             // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CYYT[0x7];                                   // 0x0B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPresetSlot                                         DummyEmptyPresetSlot;                                    // 0x0B88(0x0058) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        SpawnToyLockerHandle;                                    // 0x0BE0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_MeshContainer_Player_C*                          PlayerMeshContainer;                                     // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_MeshContainer_GrabpackCosmetic_C*                FirstPersonGrabpackMeshContainer;                        // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_SprintFootprint_C*>                       Footprints;                                              // 0x0BF8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        FootstepRemovalTimer;                                    // 0x0C08(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_NavRepairGrabpack_C*                             RepairGrabpackIndicator;                                 // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScoreboardOpen;                                        // 0x0C18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanToggleThirdPerson;                                    // 0x0C19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YC8D[0x2];                                   // 0x0C1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LockerTime;                                              // 0x0C1C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxLockerTime;                                           // 0x0C20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LockerTimeRefreshMultiplier;                             // 0x0C24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSelectedSoundsPackage                              SelectedSoundsPackage;                                   // 0x0C28(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		class USurvivorSoundPack*                                  LocalSurvivorSounds;                                     // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPuzzleSoundPack*                                    LocalPuzzleSounds;                                       // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULobbyMusicPack*                                     LocalLobbySound;                                         // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAmbiencePack*                                       LocalAmbientSound;                                       // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChaseMusicPack*                                     LocalChaseSound;                                         // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTenseMusicPack*                                     LocalTenseSound;                                         // 0x0C68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsNearMonster;                                           // 0x0C70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9II[0x7];                                   // 0x0C71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        IdleTimer;                                               // 0x0C78(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        IdleWarningTimer;                                        // 0x0C80(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       isChaseMusicActive;                                      // 0x0C88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_SelectedSoundsPackage();
		void GetPrompt(class FText* PromptPrefix, class FText* PromptSuffix, bool* CanPrompt);
		void UpdateCosmetics(const struct FPresetSlot& Cosmetic);
		void IsPlayerOnTrain(bool* Value);
		void RandomPlayerMovement(bool Enabled);
		void OnRep_CurrentPreset();
		void Notify();
		void CrossReferenceEquippedCosmeticsWithSteamInventory(TArray<struct FSteamItemDetails>* SteamItemDetails, bool* EquippedCosmeticsAreOwned);
		void UpdateSecondaryObjective(ESecondaryObjectives NewObjective);
		void GetMonsterJumpscareOrigin(class ACharacter* Monster, struct FVector* Location);
		void SetGeneralVisibility(bool FirstPerson, bool VisibleToOthers);
		void SetFirstPersonVisibility(bool Hide);
		void SetThirdPersonVisibility(bool Hide);
		void Sabotage_LivingNightmare(float Duration);
		void OnRep_NetInteractingState();
		void IsBeingInteractedWith(bool* InteractedWith);
		void Owner_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration);
		void Authority_BeginInteraction(class AANetworkCharacter* InteractingActor, bool* CanContinueInteraction, float* ContinueInteractionDuration);
		void CanBePickedUp(bool* CanBe);
		void OnRep_Strikes();
		void GetAllCharacterMeshes(TArray<class UPrimitiveComponent*>* Components);
		float GetMultiplier(const struct FVector& MonsterLocation, float In_MaxMod, float In_Volume, float In_Distance, float ZedIgnorance);
		void OnRep_StartedGame();
		void GetPlayersInRegenZone(TArray<class ABP_NetworkCharacter_C*>* Players);
		void SetHealthRegen(bool Active);
		void GetOwningPlayerController(class APlayerController** Controller, bool* bSuccess);
		void Sabotage_NoPack(float Duration);
		void Sabotage_NavIndicators(float Duration);
		void Sabotage_AutoCarry(float Duration);
		void GetABP(class UABP_NetworkPlayer_C** ABP);
		void IsPlayerMoving(bool* IsMoving);
		void ShowThirdPersonViewmodels(bool Show);
		void ToggleThirdPerson(bool UseManualInput, bool ManualInput);
		void CanPlayGame(bool* Status);
		class UStaticMeshComponent* BP_GetHeldToyPart();
		class UCameraComponent* BP_GetCameraComponent();
		class USkeletalMeshComponent* BP_GetThirdPersonMesh();
		void ManageHands(class UUHandRigPackageComponent* self2, EHandStateChange HSC);
		void DoHandSounds(ELimb Limb, EHandStateChange HSC);
		void BP_SpawnDroppedToyPart(int32_t ToyPartIndex, const struct FVector& CustomLocation);
		void BP_OnRep_HeldToyPartIndex();
		void ManageThirdPersonHands(ELimb Limb, EHandStateChange HandStateChange);
		void OnRep_Webbed();
		bool CanStandUp(class AActor** HitActor);
		void OnRep_Username();
		void OnRep_PlayerColor();
		void MovePlayer(const struct FVector& WorldDirection, float ScaleValue);
		void ToggleDownWidget(bool Condition);
		void SetDownWidgetName();
		void SetPlayerColor();
		void GetPlayerNumber(int32_t* ArrayIndex);
		void Land();
		void LookAround(float Val, bool Pitch);
		void ToggleRun(bool Running);
		bool IsPlayerSprinting();
		bool IsPlayerCrouching();
		void ShakeCamera(class UClass* Shake, float Scale);
		void MovementCameraShake();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void PlayerLookAtJumpscare__FinishedFunc();
		void PlayerLookAtJumpscare__UpdateFunc();
		void WebOpacityTime__FinishedFunc();
		void WebOpacityTime__UpdateFunc();
		void InteractingWithTimeline__FinishedFunc();
		void InteractingWithTimeline__UpdateFunc();
		void InteractedWithTimeline__FinishedFunc();
		void InteractedWithTimeline__UpdateFunc();
		void SelfReviveTimer__FinishedFunc();
		void SelfReviveTimer__UpdateFunc();
		void DownCameraTL__FinishedFunc();
		void DownCameraTL__UpdateFunc();
		void CameraHit__FinishedFunc();
		void CameraHit__UpdateFunc();
		void SetGlitchOpacity__FinishedFunc();
		void SetGlitchOpacity__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void InpActEvt_Roll_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key);
		void OnFailure_0A1F0A8944BA901C903E9692824BA4FC();
		void OnSuccess_0A1F0A8944BA901C903E9692824BA4FC();
		void InpActEvt_K_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Emote_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_T_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_M_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void FootprintOnDestroyed(class AActor* DestroyedActor);
		void RemoveFootprints();
		void SpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation);
		void TryUncrouch();
		void HitByWeb();
		void OnLanded(const struct FHitResult& Hit);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue);
		void MultiOuttaBreath();
		void MultiBreathing(bool StartBreathing);
		void HoldBreathClient(bool Holding);
		void HoldBreathServer(bool Holding);
		void CallHoldBreath();
		void MoveTP_Camera(float DeltaSeconds, bool IsRunning);
		void CrouchCamera();
		void MulticastWebSound();
		void EventShowWebs(bool bNewVisibility);
		void KickPlayer();
		void ShowIdleWarning();
		void RestartIdleTimer();
		void MulticastEmote(int32_t Index);
		void ServerEmote(int32_t Index);
		void Emote(int32_t Index);
		void Client_Emote(int32_t Index);
		void Owner_InteractingToCancelled();
		void Owner_InteractingToFixing();
		void Owner_InteractingToReviving();
		void Owner_InteractingToIdle();
		void Owner_InteractingTransitionState(EInteractedWithState NewState);
		void Authority_IWSToCancelled();
		void Authority_IWSToFixing();
		void Authority_IWSToReviving();
		void Authority_IWSToIdle();
		void Authority_TransitionInteractedWithState(EInteractedWithState NewState);
		void Authority_EndInteraction(class AANetworkCharacter* InteractingActor);
		void OwnerFinishedInteractingWith();
		void Owning_SetInteractInProgress(bool InProgress);
		void StartInteractFromClient(bool ThirdPerson);
		void CancelInteractFromClient();
		void SetInteractUI(bool Active);
		void CancelInteract();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SwitchChase();
		void SwitchTense();
		void SwitchAmbience();
		void AnimSetInterruptedLocker();
		void ReceivePossessed(class AController* NewController);
		void FoundSteamInventory();
		void DisablePlayerMeshShadows(bool Enabled);
		void AnimSetExitingLocker();
		void AnimSetEnteringLocker();
		void RaiseLowerHands(bool Lowered);
		void NewNetSetCosmetics(const struct FPresetSlot& CurrentPreset);
		void NewLoadCosmetics();
		void LockerTakeout();
		void RemoveCosmeticsDueToError();
		void VerifyClientInventory();
		void SetToyDepositIndicators(bool On);
		void SimBeginPlay();
		void ExitLockerFinish();
		void EnterLockerFinish();
		void EnterExitLockerServer(class ABP_Locker_C* LockerRef);
		void Multi_ShowHidePlayer(bool Show);
		void EnterExitLockerClient(class ABP_Locker_C* LockerRef);
		void NotDetected();
		void DetectedByMonster(bool Value);
		void StopCarryUI();
		void StartHookUI();
		void StartCarryUI();
		void EndAutoReviveUI();
		void CancelAutoReviveUI();
		void StartAutoReviveUI();
		void AutoRevive();
		void ServerOnly_EvaluateAutoReviveTimer();
		void SetHUD_ToyList();
		void BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange);
		void BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature(class UUHandRigPackageComponent* Pkg, EHandStateChange HandStateChange);
		void MultiShowWin(int32_t PlayerCount);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void NetSetSounds(const struct FSelectedSoundsPackage& SelectedSoundsPackage);
		void MulticastRollSound();
		void DashSound();
		void SpawnJumpscareLight();
		void BP_OnRep_PerkSaveGame();
		void ResetCharacter(bool JustDestroyUI);
		void ResetViewTarget(bool JustDestroyUI);
		void TryReady(bool Ready);
		void EventFixNameTag();
		void NetSetPlayerName(const class FString& UserName);
		void NetSetPlayerColor();
		void PlayFixingSound(bool Play);
		void PlayRevivingSound(bool Play);
		void PlayBrokenHandAttemptThings(bool LHand);
		void Client_ShowRollRecharge();
		void BindEventOnRepCanDashEventHandler();
		void BP_OnRep_PlayerNeedsRevived();
		void ToggleCosmetics(bool Forceoff);
		void SpawnToyLocker();
		void ChangeClientInput(bool ShouldDisable);
		void EnableClientInput();
		void SetHealthVisibility(bool IsVisible);
		void JumpscareInterruption();
		void PlayJumpSound();
		void OnJumped();
		void SetHealingAuraVisibility(bool Visible, class AANetworkCharacter* HealingChar);
		void BP_OnRep_Health();
		void ShowStrikes(int32_t Strikes);
		void OnHealthRegen();
		void BP_PlayDamageFX();
		void BP_TakeAnyDamageWhileAlive(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bKillingHit);
		void OwningKill();
		void Kill();
		void EventDropped();
		void EventExtractedFromWuggyHole();
		void EventImprisonedInWuggyHole();
		void EventPickedUp();
		void EventJumpscare(class ACharacter* Monster, class ABP_NetworkCharacter_C* Character, float DistanceFromMonster, float Duration, float BlendOut, bool EnoughSpaceforJumpscare, EMonster_Type MonsterType);
		void Authority_GetHealed();
		void ClientResetDeathScreen();
		void ShowDeathScreen();
		void EndJumpscareMontage();
		void OnStartedJumpscare();
		void EndedJumpscare();
		void PlayJumpscareMontage(class UAnimMontage* AnimMontage);
		void PickedUpThirdPerson();
		void ClientToggleThirdTrue();
		void ReviveThirdPerson();
		void ClientSetCachedPersp();
		void OnRep_GrabpackBroken();
		void EndLivingNightmare();
		void Client_Sabotage_LivingNightmare(float Duration);
		void EventSabotage_LivingNightmare(float Duration);
		void EventFixGrabpack();
		void EventTrySendToWuggyHole();
		void EventSabotage_AutoCarry(float Duration);
		void EventSabotage_NavIndicators(float Duration);
		void ExecuteUbergraph_BP_NetworkCharacter(int32_t EntryPoint);
		void EmoteRequested__DelegateSignature();
		void OnStartedJumpscareAnimation__DelegateSignature();
		void ToggledThirdPersonDuringJumpscare__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
