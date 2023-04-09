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
	 * BlueprintGeneratedClass AnimationFunctionLibrary.AnimationFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetNetworkCharacterSkeletalMesh(class APawn* Pawn, class UObject* __WorldContext, class USkeletalMeshComponent** ReturnValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
