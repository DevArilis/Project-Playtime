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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Playtime_Multiplayer.EManagerConnectionState
	 */
	enum class EManagerConnectionState : uint8_t
	{
		Disconnected = 0,
		Connected    = 1,
		MAX          = 2
	};

	/**
	 * Enum Playtime_Multiplayer.EAttachmentStateChange
	 */
	enum class EAttachmentStateChange : uint8_t
	{
		ASC_Attached       = 0,
		ASC_Detached       = 1,
		ASC_StartedPulling = 2,
		ASC_MAX            = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EProgressMilestone
	 */
	enum class EProgressMilestone : uint8_t
	{
		PM_ReachedStart    = 0,
		PM_PassedThreshold = 1,
		PM_ReachedEnd      = 2,
		PM_MAX             = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EHandStateChange
	 */
	enum class EHandStateChange : uint8_t
	{
		HSC_Undefined      = 0,
		HSC_Shot           = 1,
		HSC_Returned       = 2,
		HSC_Grabbed        = 3,
		HSC_HitObject      = 4,
		HSC_StartedPulling = 5,
		HSC_MAX            = 6
	};

	/**
	 * Enum Playtime_Multiplayer.EPerkType
	 */
	enum class EPerkType : uint8_t
	{
		PT_Undefined     = 0,
		PT_PowerWalker   = 1,
		PT_ShadowWalker  = 2,
		PT_LeaveNoTrace  = 3,
		PT_DistantSavior = 4,
		PT_PunchingBag   = 5,
		PT_Leadership    = 6,
		PT_MasterPianist = 7,
		PT_ThinkFast     = 8,
		PT_Genius        = 9,
		PT_MAX           = 10
	};

	/**
	 * Enum Playtime_Multiplayer.EFistState
	 */
	enum class EFistState : uint8_t
	{
		EFS_Launched  = 0,
		EFS_HitObject = 1,
		EFS_HitPlayer = 2,
		EFS_Retracted = 3,
		EFS_MAX       = 4
	};

	/**
	 * Enum Playtime_Multiplayer.ECosmeticOutfitSkinType
	 */
	enum class ECosmeticOutfitSkinType : uint8_t
	{
		None                 = 0,
		HeadFull             = 1,
		HeadSphereOnly       = 2,
		HeadNeckOnly         = 3,
		TorsoFull            = 4,
		TorsoEngineer        = 5,
		TorsoHandsOnly       = 6,
		TorsoHoodie          = 7,
		TorsoNeonPunk        = 8,
		TorsoShouldersElbows = 9,
		TorsoShouldersWrists = 10,
		TorsoSoldier         = 11,
		TorsoSwimGirl        = 12,
		TorsoAnimeGirl       = 13,
		LegsFull             = 14,
		LegsLower            = 15,
		LegsShorts           = 16,
		LegsNeonPunk         = 17,
		LegsSwimGirl         = 18,
		LegsAnimeGirl        = 19,
		FeetFull             = 20,
		FeetAnkleOnly        = 21,
		LAST                 = 22,
		MAX                  = 23
	};

	/**
	 * Enum Playtime_Multiplayer.EInteractedWithState
	 */
	enum class EInteractedWithState : uint8_t
	{
		IWS_Idle      = 0,
		IWS_Reviving  = 1,
		IWS_Fixing    = 2,
		IWS_Cancelled = 3,
		IWS_MAX       = 4
	};

	/**
	 * Enum Playtime_Multiplayer.ELimb
	 */
	enum class ELimb : uint8_t
	{
		EL_Left  = 0,
		EL_Right = 1,
		EL_MAX   = 2
	};

	/**
	 * Enum Playtime_Multiplayer.EItemType
	 */
	enum class EItemType : uint8_t
	{
		None       = 0,
		Cosmetic   = 1,
		Action     = 2,
		Bundle     = 3,
		SeasonPass = 4,
		MAX        = 5
	};

	/**
	 * Enum Playtime_Multiplayer.ECosmeticRarity
	 */
	enum class ECosmeticRarity : uint8_t
	{
		Basic     = 0,
		Rare      = 1,
		Epic      = 2,
		Legendary = 3,
		LAST      = 4,
		MAX       = 5
	};

	/**
	 * Enum Playtime_Multiplayer.ECosmeticTypeEnum
	 */
	enum class ECosmeticTypeEnum : uint8_t
	{
		HandL    = 0,
		HandR    = 1,
		Grabpack = 2,
		Skin     = 3,
		Hat      = 4,
		Face     = 5,
		Shirt    = 6,
		Pants    = 7,
		Shoes    = 8,
		LAST     = 9,
		MAX      = 10
	};

	/**
	 * Enum Playtime_Multiplayer.EBoxySoundSet
	 */
	enum class EBoxySoundSet : uint8_t
	{
		Footstep       = 0,
		Crouch         = 1,
		Punch          = 2,
		PunchHit       = 3,
		ChargingJump   = 4,
		ReleasedCharge = 5,
		Land           = 6,
		Jump           = 7,
		GrabShoot      = 8,
		GrabGrab       = 9,
		Jumpscare      = 10,
		SelectScreen   = 11,
		MAX            = 12
	};

	/**
	 * Enum Playtime_Multiplayer.EHuggySoundSet
	 */
	enum class EHuggySoundSet : uint8_t
	{
		Footstep        = 0,
		Crouch          = 1,
		Punch           = 2,
		PunchHit        = 3,
		ChargeAttack    = 4,
		ChargeAttackHit = 5,
		PlaceMiniHuggy  = 6,
		Jumpscare       = 7,
		SelectScreen    = 8,
		MAX             = 9
	};

	/**
	 * Enum Playtime_Multiplayer.EMommySoundSet
	 */
	enum class EMommySoundSet : uint8_t
	{
		Footstep       = 0,
		Crouch         = 1,
		Punch          = 2,
		PunchHit       = 3,
		WebsShooting   = 4,
		GrappleShot    = 5,
		GrappleStretch = 6,
		GrappleGrab    = 7,
		Jumpscare      = 8,
		Spotter        = 9,
		SelectScreen   = 10,
		MAX            = 11
	};

	/**
	 * Enum Playtime_Multiplayer.EMommyMovementMode
	 */
	enum class EMommyMovementMode : uint8_t
	{
		CMOVE_Grappling = 0,
		CMOVE_MAX       = 1
	};

	/**
	 * Enum Playtime_Multiplayer.EHuggyMovementMode
	 */
	enum class EHuggyMovementMode : uint8_t
	{
		CMOVE_Charging = 0
	};

	/**
	 * Enum Playtime_Multiplayer.ECustomMovementMode
	 */
	enum class ECustomMovementMode : uint8_t
	{
		CMOVE_Swinging = 0,
		CMOVE_Spline   = 1,
		CMOVE_Dashing  = 2,
		CMOVE_MAX      = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EMatchResult
	 */
	enum class EMatchResult : uint8_t
	{
		None          = 0,
		HostLeft      = 1,
		MonsterLeft   = 2,
		PlayersWon    = 3,
		MonsterWon    = 4,
		TotalSurvival = 5,
		Survival      = 6,
		Massacre      = 7,
		TotalMassacre = 8,
		TimeRanOut    = 9,
		MAX           = 10
	};

	/**
	 * Enum Playtime_Multiplayer.EMatchState
	 */
	enum class EMatchState : uint8_t
	{
		Lobby      = 0,
		InProgress = 1,
		Ended      = 2,
		MAX        = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EPlaytimeAPIRequestType
	 */
	enum class EPlaytimeAPIRequestType : uint8_t
	{
		RT_GetToybox    = 0,
		RT_GetRewards   = 1,
		RT_GetShoppy    = 2,
		RT_GetPerks     = 3,
		RT_GetWallets   = 4,
		RT_GetInventory = 5,
		RT_MAX          = 6
	};

	/**
	 * Enum Playtime_Multiplayer.EToyType
	 */
	enum class EToyType : uint8_t
	{
		BoogieBot = 0,
		Bron      = 1,
		CandyCat  = 2,
		CatBee    = 3,
		MAX       = 4
	};

	/**
	 * Enum Playtime_Multiplayer.EPuzzleType
	 */
	enum class EPuzzleType : uint8_t
	{
		None   = 0,
		Piano  = 1,
		Reflex = 2,
		Memory = 3,
		Maze   = 4,
		Claw   = 5,
		MAX    = 6
	};

	/**
	 * Enum Playtime_Multiplayer.EUIMode
	 */
	enum class EUIMode : uint8_t
	{
		UI_ONLY     = 0,
		GAME_AND_UI = 1,
		GAME_ONLY   = 2,
		MAX         = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EAttackType
	 */
	enum class EAttackType : uint8_t
	{
		None   = 0,
		Basic  = 1,
		Charge = 2,
		MAX    = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EMommyGrappleState
	 */
	enum class EMommyGrappleState : uint8_t
	{
		Idle           = 0,
		Extending      = 1,
		Pulling        = 2,
		AttachedToWall = 3,
		MAX            = 4
	};

	/**
	 * Enum Playtime_Multiplayer.EToyStatus
	 */
	enum class EToyStatus : uint8_t
	{
		Assembled = 0,
		Carried   = 1,
		Grounded  = 2,
		MAX       = 3
	};

	/**
	 * Enum Playtime_Multiplayer.ECurrentTrack
	 */
	enum class ECurrentTrack : uint8_t
	{
		Start  = 0,
		ToLoop = 1,
		Loop   = 2,
		ToEnd  = 3,
		End    = 4,
		MAX    = 5
	};

	/**
	 * Enum Playtime_Multiplayer.ERotatorAxis
	 */
	enum class ERotatorAxis : uint8_t
	{
		Pitch = 0,
		Yaw   = 1,
		Roll  = 2,
		MAX   = 3
	};

	/**
	 * Enum Playtime_Multiplayer.ETransition
	 */
	enum class ETransition : uint8_t
	{
		MainMenu            = 0,
		HostMigration       = 1,
		AttemptingQuickplay = 2,
		MAX                 = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EHostMigrationType
	 */
	enum class EHostMigrationType : uint8_t
	{
		None     = 0,
		Basic    = 1,
		Advanced = 2,
		MAX      = 3
	};

	/**
	 * Enum Playtime_Multiplayer.ECharacterType
	 */
	enum class ECharacterType : uint8_t
	{
		Survivor = 0,
		Boxy     = 1,
		Huggy    = 2,
		Mommy    = 3,
		MAX      = 4
	};

	/**
	 * Enum Playtime_Multiplayer.EMonsterSecondaryObjectives
	 */
	enum class EMonsterSecondaryObjectives : uint8_t
	{
		FindSurvivor    = 0,
		DepositSurvivor = 1,
		NoneMonster     = 2,
		MAX             = 3
	};

	/**
	 * Enum Playtime_Multiplayer.ESecondaryObjectives
	 */
	enum class ESecondaryObjectives : uint8_t
	{
		FindPuzzlePillar  = 0,
		SolvePuzzlePillar = 1,
		PickupToyPart     = 2,
		FindToyDeposit    = 3,
		FindDeliveryPipe  = 4,
		PullPipeIntoPlace = 5,
		FindTrainStation  = 6,
		CallTheTrain      = 7,
		WaitForTrain      = 8,
		None              = 9,
		MAX               = 10
	};

	/**
	 * Enum Playtime_Multiplayer.EMazeComponentType
	 */
	enum class EMazeComponentType : uint8_t
	{
		FROM_UP    = 0,
		HORIZONTAL = 1,
		TO_DOWN    = 2,
		TURN       = 3,
		VERTICAL   = 4,
		MAX        = 5
	};

	/**
	 * Enum Playtime_Multiplayer.ETextLanguage
	 */
	enum class ETextLanguage : uint8_t
	{
		English   = 0,
		Spanish   = 1,
		German    = 2,
		Portugese = 3,
		French    = 4,
		Italian   = 5,
		MAX       = 6
	};

	/**
	 * Enum Playtime_Multiplayer.EDoorState
	 */
	enum class EDoorState : uint8_t
	{
		None    = 0,
		Open    = 1,
		Opening = 2,
		Closed  = 3,
		Closing = 4,
		MAX     = 5
	};

	/**
	 * Enum Playtime_Multiplayer.ESoundPackType
	 */
	enum class ESoundPackType : uint8_t
	{
		SP_Puzzle   = 0,
		SP_Survivor = 1,
		SP_Lobby    = 2,
		SP_Ambient  = 3,
		SP_Tense    = 4,
		SP_Chase    = 5,
		SP_MAX      = 6
	};

	/**
	 * Enum Playtime_Multiplayer.ERandomStatistics
	 */
	enum class ERandomStatistics : uint8_t
	{
		Emotes_Used            = 0,
		Time_Spent_Customizing = 1,
		Last                   = 2,
		MAX                    = 3
	};

	/**
	 * Enum Playtime_Multiplayer.EBoxyStatistics
	 */
	enum class EBoxyStatistics : uint8_t
	{
		Wins                           = 0,
		Losses                         = 1,
		Win_Loss_Ratio                 = 2,
		Downs                          = 3,
		Attack_Accuracy                = 4,
		Attacks_Hit                    = 5,
		Punches                        = 6,
		Leaps                          = 7,
		Distance_Leaped                = 8,
		Grab_Accuracy                  = 9,
		Successful_Grabs               = 10,
		Grab_Attempts                  = 11,
		Time_Spent_In_Box              = 12,
		Num_Times_Jumped               = 13,
		Players_Put_In_Wuggy_Holes     = 14,
		Players_Killed_By_Your_Wuggies = 15,
		Last                           = 16,
		MAX                            = 17
	};

	/**
	 * Enum Playtime_Multiplayer.EMommyStatistics
	 */
	enum class EMommyStatistics : uint8_t
	{
		Wins                           = 0,
		Losses                         = 1,
		Win_Loss_Ratio                 = 2,
		Downs                          = 3,
		Attack_Accuracy                = 4,
		Attacks_Hit                    = 5,
		Punches                        = 6,
		Spotter_Uses                   = 7,
		Webs_Shot                      = 8,
		Webs_Hit                       = 9,
		Distance_Wall_Climbed          = 10,
		Num_Times_Jumped               = 11,
		Players_Put_In_Wuggy_Holes     = 12,
		Players_Killed_By_Your_Wuggies = 13,
		Last                           = 14,
		MAX                            = 15
	};

	/**
	 * Enum Playtime_Multiplayer.EHuggyStatistics
	 */
	enum class EHuggyStatistics : uint8_t
	{
		Wins                           = 0,
		Losses                         = 1,
		Win_Loss_Ratio                 = 2,
		Downs                          = 3,
		Attack_Accuracy                = 4,
		Attacks_Hit                    = 5,
		Distance_Charged               = 6,
		Players_Hugged                 = 7,
		Baby_Huggies_Placed            = 8,
		Baby_Huggies_Triggered         = 9,
		Left_Hand_Punches              = 10,
		Right_Hand_Punches             = 11,
		Num_Times_Jumped               = 12,
		Players_Put_In_Wuggy_Holes     = 13,
		Players_Killed_By_Your_Wuggies = 14,
		Last                           = 15,
		MAX                            = 16
	};

	/**
	 * Enum Playtime_Multiplayer.EMonsterStatistics
	 */
	enum class EMonsterStatistics : uint8_t
	{
		Wins                           = 0,
		Losses                         = 1,
		Win_Loss_Ratio                 = 2,
		Downs                          = 3,
		Attack_Accuracy                = 4,
		Attacks_Hit                    = 5,
		Players_Put_In_Wuggy_Holes     = 6,
		Players_Killed_By_Your_Wuggies = 7,
		Last                           = 8,
		MAX                            = 9
	};

	/**
	 * Enum Playtime_Multiplayer.EPlayerStatistics
	 */
	enum class EPlayerStatistics : uint8_t
	{
		Wins                        = 0,
		Losses                      = 1,
		Win_Loss_Ratio              = 2,
		Total_Hand_Uses             = 3,
		Left_Hand_Uses              = 4,
		Right_Hand_Uses             = 5,
		Distance_Travelled          = 6,
		Distance_Carried_By_Monster = 7,
		Number_Rolls                = 8,
		Toy_Parts_Picked_Up         = 9,
		Toy_Parts_Deposited         = 10,
		Toys_Loaded_On_Train        = 11,
		Train_Call_Uses             = 12,
		Hide_Boxes_Used             = 13,
		Wuggies_Smacked             = 14,
		Best_Puzzle                 = 15,
		Total_Puzzles_Solved        = 16,
		Piano_Puzzles_Solved        = 17,
		Memory_Puzzles_Solved       = 18,
		Reaction_Puzzles_Solved     = 19,
		Total_Puzzles_Failed        = 20,
		Piano_Puzzles_Failed        = 21,
		Memory_Puzzles_Failed       = 22,
		Reaction_Puzzles_Failed     = 23,
		Players_Rescued             = 24,
		Times_Rescued               = 25,
		Deaths_By_Wuggy             = 26,
		Downs_By_Huggy              = 27,
		Downs_By_Mommy              = 28,
		Downs_By_Boxy               = 29,
		Times_Spotted_By_Baby_Huggy = 30,
		Times_Grabbed_By_Boxy       = 31,
		Number_Webs_From_Mommy      = 32,
		Birds_Flipped               = 33,
		Number_Times_Jumped         = 34,
		Last                        = 35,
		MAX                         = 36
	};

	/**
	 * Enum Playtime_Multiplayer.EGeneralStatistics
	 */
	enum class EGeneralStatistics : uint8_t
	{
		Games_Played        = 0,
		Wins                = 1,
		Losses              = 2,
		Win_Loss_Ratio      = 3,
		Number_Times_Jumped = 4,
		Last                = 5,
		MAX                 = 6
	};

	/**
	 * Enum Playtime_Multiplayer.EStatisticCategory
	 */
	enum class EStatisticCategory : uint8_t
	{
		General = 0,
		Player  = 1,
		Monster = 2,
		Huggy   = 3,
		Mommy   = 4,
		Boxy    = 5,
		Random  = 6,
		Last    = 7,
		MAX     = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Playtime_Multiplayer.PerkPackage
	 * Size -> 0x0030
	 */
	struct FPerkPackage
	{
	public:
		TArray<EPerkType>                                          SelectedPerksList;                                       // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<EPerkType>                                          PerkLevelsKeys;                                          // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PerkLevelsValues;                                        // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.PresetSlot
	 * Size -> 0x0058
	 */
	struct FPresetSlot
	{
	public:
		int32_t                                                    LeftHand;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LeftHandColor;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RightHand;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RightHandColor;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Grabpack;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GrabpackColor;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Skin;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkinColor;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hat;                                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HatColor;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Face;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FaceColor;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shirt;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShirtColor;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pants;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PantsColor;                                              // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shoes;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShoesColor;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Emotes;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.HandTimer
	 * Size -> 0x0018
	 */
	struct FHandTimer
	{
	public:
		class AANetworkHand*                                       Hand;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBYT[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MatchData
	 * Size -> 0x0020
	 */
	struct FMatchData
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchState                                                MatchState;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchResult                                               MatchResult;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L1Q[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NextLevel;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.TicketRewardableAction
	 * Size -> 0x000C
	 */
	struct FTicketRewardableAction
	{
	public:
		class FName                                                TicketRewardRowName;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfEntries;                                         // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.PlayerData
	 * Size -> 0x0060
	 */
	struct FPlayerData
	{
	public:
		class FString                                              PlayerID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tickets;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OB5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTicketRewardableAction>                     TicketRewardableActions;                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATY6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PlayerTransform;                                         // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Escape_MatchData
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FEscape_MatchData : public FMatchData
	{
	public:
		float                                                      RemainingTime;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MonsterSelectTime;                                       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EToyType                                                   ToyType;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R22L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ToyPartIndex;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEarlyDeparture;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutoCarry;                                            // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ6G[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AANetworkCharacter*>                          PlayersInHole;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Escape_PlayerData
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	struct FEscape_PlayerData : public FPlayerData
	{
	public:
		float                                                      Health;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Strikes;                                                 // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerStatus;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CartIndex;                                               // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLocker;                                               // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6TO[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LockerTime;                                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1ZV[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MonsterData
	 * Size -> 0x0060
	 */
	struct FMonsterData
	{
	public:
		ECharacterType                                             SelectedMonster;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3DZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MonsterPlayerID;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSA4[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MonsterTransform;                                        // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MonsterSelectTimeRemaining;                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiniHuggys;                                              // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1VF[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ToyPartData
	 * Size -> 0x0040
	 */
	struct FToyPartData
	{
	public:
		int32_t                                                    ToyPartIndex;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFP0[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ToyTransform;                                            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ToyMachineData
	 * Size -> 0x0018
	 */
	struct FToyMachineData
	{
	public:
		TArray<bool>                                               DepositedToyParts;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      PipeTimelineProgress;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPipeConnected;                                          // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALT5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.TrainData
	 * Size -> 0x0014
	 */
	struct FTrainData
	{
	public:
		bool                                                       bIsMoving;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFixed;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoLoopTransition;                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFullyTransitionedToLoop;                                // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoEndTransition;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnded;                                                  // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMQC[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastDistance;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TrainStation;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrainTimelineProgress;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.PuzzleData
	 * Size -> 0x0048
	 */
	struct FPuzzleData
	{
	public:
		class FString                                              PuzzlePillarName;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               PuzzleSolved;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PuzzleProgress;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsSolved;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDH3[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FinalPuzzleSolved;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPuzzleType>                                        Puzzles;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.AttackData
	 * Size -> 0x0008
	 */
	struct FAttackData
	{
	public:
		float                                                      AttackDamage;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsChargedAttack;                                        // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27UX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MonsterMovementData
	 * Size -> 0x000C
	 */
	struct FMonsterMovementData
	{
	public:
		float                                                      WalkSpeed;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchSpeed;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpVelocity;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MonsterAttackAData
	 * Size -> 0x000C
	 */
	struct FMonsterAttackAData
	{
	public:
		float                                                      AttackDamage;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KnockbackHorizontal;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KnockbackVertical;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MonsterAttackBData
	 * Size -> 0x0010
	 */
	struct FMonsterAttackBData
	{
	public:
		float                                                      AttackDamage;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargeDuration;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KnockbackHorizontal;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KnockbackVertical;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.BendPoint
	 * Size -> 0x0018
	 */
	struct FBendPoint
	{
	public:
		unsigned char                                              UnknownData_F17D[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.QueueData
	 * Size -> 0x0008
	 */
	struct FQueueData
	{
	public:
		int32_t                                                    RoundsSinceLastMonster;                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWantsToBeMonster;                                       // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H04Q[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Maze
	 * Size -> 0x0010
	 */
	struct FMaze
	{
	public:
		TArray<struct FIntPoint>                                   Points;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.SabotageSaveData
	 * Size -> 0x0008
	 */
	struct FSabotageSaveData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelected;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC3Q[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.SelectedSoundsPackage
	 * Size -> 0x0018
	 */
	struct FSelectedSoundsPackage
	{
	public:
		int32_t                                                    SelectedLobbyPack;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedAmbiencePack;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedTensePack;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedChasePack;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedPuzzlePack;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSurvivorPack;                                    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.DebugTrainAssemblyData
	 * Size -> 0x0018
	 */
	struct FDebugTrainAssemblyData
	{
	public:
		class USkeletalMesh*                                       TrainLocomotive;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TrainTender;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       PassengerCart;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.DebugTrainSettings
	 * Size -> 0x0008
	 */
	struct FDebugTrainSettings
	{
	public:
		int32_t                                                    PassengerCartCount;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CartOffset;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ShopItem
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FShopItem : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Price;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29RX[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGetPriceFromTypeAndRarity;                              // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J21K[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverridePrice;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Thumbnail[0x28];                                         // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BigThumbnail[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ToyBox
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FToyBox : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Price;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9BW[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Action
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FAction : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsGesture;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WKS[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterType                                             CharacterType;                                           // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYLA[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RightHandGesture[0x28];                                  // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LeftHandGesture[0x28];                                   // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FirstPersonEmote[0x28];                                  // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ThirdPersonEmote[0x28];                                  // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Bundle
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FBundle : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Price;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutfit;                                                 // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8SV[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            BundleContent;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Cosmetic
	 * Size -> 0x0240 (FullSize[0x0248] - InheritedSize[0x0008])
	 */
	struct FCosmetic : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterType                                             CharacterType;                                           // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPublic;                                               // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUnlockedByDefault;                                    // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPreReleaseOnly;                                       // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZYV[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MeshContainerClass;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsColorable;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH7T[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                ColorArray;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ColorableLayer;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BEM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mesh[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AlternateMesh[0x28];                                     // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HighMesh[0x28];                                          // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LowMesh[0x28];                                           // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StaticMesh[0x28];                                        // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              AnimationBlueprint;                                      // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoesHatSupportMask;                                     // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticOutfitSkinType                                    OutfitSkinType;                                          // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VP3[0x6];                                   // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkinMeshes[0x50];                                        // 0x0128(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              MaterialOverrides[0x50];                                 // 0x0178(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              HandShootSound[0x28];                                    // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HandRetractSound[0x28];                                  // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BigThumbnail[0x28];                                      // 0x0218(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseDefaultSkinElements;                                 // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81HI[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Item
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FItem : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EItemType                                                  ItemType;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticRarity                                            Rarity;                                                  // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUSK[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Thumbnail[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.PlaytimeEvent
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FPlaytimeEvent : public FTableRowBase
	{
	public:
		class FName                                                EventName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartDate;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndDate;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EventSplash[0x28];                                       // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EventIcon[0x28];                                         // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ShopItemOverlay[0x28];                                   // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USoundWave*                                          EventMusic;                                              // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventCinematicPath;                                      // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.BoxySoundSet
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FBoxySoundSet : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Footstep;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Crouch;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Punch;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PunchHit;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ChargingJump;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ReleasedCharge;                                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Land;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Jump;                                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          GrabShoot;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          GrabGrab;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Jumpscare;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SelectScreen;                                            // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.HuggySoundSet
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FHuggySoundSet : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Footstep;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Crouch;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Punch;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PunchHit;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ChargeAttack;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ChargeAttackHit;                                         // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PlaceMiniHuggy;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Jumpscare;                                               // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SelectScreen;                                            // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.MommySoundSet
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FMommySoundSet : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Footstep;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Crouch;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Punch;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PunchHit;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          WebsShooting;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          GrappleShot;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          GrappleStretch;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          GrappleGrab;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Jumpscare;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Spotter;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SelectScreen;                                            // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.CrossfadeRequest
	 * Size -> 0x0018
	 */
	struct FCrossfadeRequest
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeTime;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewVolume;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomStartPoint;                                       // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCUZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIGeneralResponse
	 * Size -> 0x0010
	 */
	struct FAPIGeneralResponse
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIInventoryItem
	 * Size -> 0x0030
	 */
	struct FAPIInventoryItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemType;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIInventoryResponse
	 * Size -> 0x0010
	 */
	struct FAPIInventoryResponse
	{
	public:
		TArray<struct FAPIInventoryItem>                           Items;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIWalletsResponse
	 * Size -> 0x0008
	 */
	struct FAPIWalletsResponse
	{
	public:
		int32_t                                                    Coins;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tickets;                                                 // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIPerksPerk
	 * Size -> 0x0018
	 */
	struct FAPIPerksPerk
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HFP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIPerksResponse
	 * Size -> 0x0010
	 */
	struct FAPIPerksResponse
	{
	public:
		TArray<struct FAPIPerksPerk>                               Perks;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIShoppyItem
	 * Size -> 0x0038
	 */
	struct FAPIShoppyItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriceInCoins;                                            // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPXL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Rarity;                                                  // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIShoppyItemSet
	 * Size -> 0x0038
	 */
	struct FAPIShoppyItemSet
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShoppyType;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartTimeInMillisFromEpoch;                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndTimeInMillisFromEpoch;                                // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAPIShoppyItem>                              Items;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIShoppyResponse
	 * Size -> 0x0010
	 */
	struct FAPIShoppyResponse
	{
	public:
		TArray<struct FAPIShoppyItemSet>                           ItemSets;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APILevelResponse
	 * Size -> 0x0014
	 */
	struct FAPILevelResponse
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivePremiumToyBox;                                     // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P39B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BeginningOfLevelInXP;                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BeginningOfNextLevelInXP;                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIRewardsItem
	 * Size -> 0x0004
	 */
	struct FAPIRewardsItem
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.APIRewardsResponse
	 * Size -> 0x0010
	 */
	struct FAPIRewardsResponse
	{
	public:
		TArray<struct FAPIRewardsItem>                             Items;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ItemJsonResponse
	 * Size -> 0x0018
	 */
	struct FItemJsonResponse
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Free;                                                    // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPI1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.BattlepassJsonResponse
	 * Size -> 0x0038
	 */
	struct FBattlepassJsonResponse
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartTimeInMillisFromEpoch;                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndTimeInMillisFromEpoch;                                // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemJsonResponse>                           Items;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.LevelStruct
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FLevelStruct : public FTableRowBase
	{
	public:
		class FName                                                CommonName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UTexture2D*                                          Thumbnail;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInHostScreen;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDevOnly;                                                // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJH7[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.ToyData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FToyData : public FTableRowBase
	{
	public:
		TArray<class UStaticMesh*>                                 Assembled;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Carried;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Grounded;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.Perk
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FPerk : public FTableRowBase
	{
	public:
		EPerkType                                                  PerkType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RV9E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LevelOneDescription;                                     // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LevelTwoDescription;                                     // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LevelThreeDescription;                                   // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    LevelOnePrice;                                           // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelTwoPrice;                                           // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelThreePrice;                                         // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZP1[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.SabotageDef
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FSabotageDef : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SplashDescription;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q80N[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ActivationSound;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorToSabotage;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              InterfaceToSabotage;                                     // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldMulticast;                                        // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BL5Q[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LevelOne;                                                // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelTwo;                                                // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelThree;                                              // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLevelIsCount;                                           // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TV09[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelOneDescription;                                     // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelTwoDescription;                                     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelThreeDescription;                                   // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelOnePrice;                                           // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelTwoPrice;                                           // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelThreePrice;                                         // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXL8[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.SoundPackEntry
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FSoundPackEntry : public FTableRowBase
	{
	public:
		class USoundPack*                                          SoundPack;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Playtime_Multiplayer.TicketReward
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FTicketReward : public FTableRowBase
	{
	public:
		class FText                                                ScoreboardDisplayText;                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InGameNotificationDisplayText;                           // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TicketsToReward;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB4N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
