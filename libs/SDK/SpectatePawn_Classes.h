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
	 * BlueprintGeneratedClass SpectatePawn.SpectatePawn_C
	 * Size -> 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
	 */
	class ASpectatePawn_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    Camera;                                                  // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 CamArm;                                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_NetworkCharacter_C*>                      Players;                                                 // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    SpectatedIdx;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RGV[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserName;                                                // 0x02B8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void InpActEvt_D_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_A_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_LeftHandExtend_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_2(float AxisValue);
		void RefreshSpectated();
		void ExecuteUbergraph_SpectatePawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
