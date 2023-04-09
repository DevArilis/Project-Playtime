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
	 * AnimBlueprintGeneratedClass GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C
	 * Size -> 0x000C (FullSize[0x0550] - InheritedSize[0x0544])
	 */
	class UGrabPackHose_AnimBP_Left_C : public UGrabPackHose_AnimBP_C
	{
	public:
		unsigned char                                              UnknownData_P2SQ[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_GrabPackHose_AnimBP_Left(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
