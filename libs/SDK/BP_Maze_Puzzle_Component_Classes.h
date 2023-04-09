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
	 * BlueprintGeneratedClass BP_Maze_Puzzle_Component.BP_Maze_Puzzle_Component_C
	 * Size -> 0x0008 (FullSize[0x06A8] - InheritedSize[0x06A0])
	 */
	class UBP_Maze_Puzzle_Component_C : public UPuzzleMazeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BP_Rotate_Sound_Trigger();
		void ExecuteUbergraph_BP_Maze_Puzzle_Component(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
