/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.OnRep_Valid Oldest Player
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::OnRep_ValidOldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.OnRep_Valid Oldest Player");
		
		ABP_WuggyHole_C_OnRep_ValidOldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.HasPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WuggyHole_C::HasPlayers(bool* Has)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.HasPlayers");
		
		ABP_WuggyHole_C_HasPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Has != nullptr)
			*Has = params.Has;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.GetRandomWormholeExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WormholeExit_C*                          WormholeExit                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WuggyHole_C::GetRandomWormholeExit(class ABP_WormholeExit_C** WormholeExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.GetRandomWormholeExit");
		
		ABP_WuggyHole_C_GetRandomWormholeExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WormholeExit != nullptr)
			*WormholeExit = params.WormholeExit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.GrabNextCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PseudoHand_C*                            PseudoHand                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AANetworkCharacter*                          GrabbedCharacter                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_WormholeExit_C*                          WormHole                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WuggyHole_C::GrabNextCharacter(class ABP_PseudoHand_C** PseudoHand, class AANetworkCharacter** GrabbedCharacter, class ABP_WormholeExit_C** WormHole, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.GrabNextCharacter");
		
		ABP_WuggyHole_C_GrabNextCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PseudoHand != nullptr)
			*PseudoHand = params.PseudoHand;
		if (GrabbedCharacter != nullptr)
			*GrabbedCharacter = params.GrabbedCharacter;
		if (WormHole != nullptr)
			*WormHole = params.WormHole;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.ResolveDoors
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::ResolveDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.ResolveDoors");
		
		ABP_WuggyHole_C_ResolveDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.GetWormholeToGrabFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class ABP_WormholeExit_C*                          WormHole                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WuggyHole_C::GetWormholeToGrabFrom(class AANetworkCharacter* Player, struct FTransform* Transform, class ABP_WormholeExit_C** WormHole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.GetWormholeToGrabFrom");
		
		ABP_WuggyHole_C_GetWormholeToGrabFrom_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (WormHole != nullptr)
			*WormHole = params.WormHole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.UserConstructionScript");
		
		ABP_WuggyHole_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.ReceiveBeginPlay");
		
		ABP_WuggyHole_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AANetworkCharacter*                          NetworkCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldIncreaseStrikes                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnedToRevive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WuggyHole_C::AddPlayer(class AANetworkCharacter* NetworkCharacter, bool ShouldIncreaseStrikes, bool SpawnedToRevive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.AddPlayer");
		
		ABP_WuggyHole_C_AddPlayer_Params params {};
		params.NetworkCharacter = NetworkCharacter;
		params.ShouldIncreaseStrikes = ShouldIncreaseStrikes;
		params.SpawnedToRevive = SpawnedToRevive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityBeginMinigame
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::BP_AuthorityBeginMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityBeginMinigame");
		
		ABP_WuggyHole_C_BP_AuthorityBeginMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityEndMinigame
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::BP_AuthorityEndMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.BP_AuthorityEndMinigame");
		
		ABP_WuggyHole_C_BP_AuthorityEndMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.BP_OnRep_OldestPlayer
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::BP_OnRep_OldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.BP_OnRep_OldestPlayer");
		
		ABP_WuggyHole_C_BP_OnRep_OldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyEvent
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::SpawnWuggyEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyEvent");
		
		ABP_WuggyHole_C_SpawnWuggyEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyWave
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::SpawnWuggyWave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.SpawnWuggyWave");
		
		ABP_WuggyHole_C_SpawnWuggyWave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.StartGame
	 * 		Flags  -> ()
	 */
	void ABP_WuggyHole_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.StartGame");
		
		ABP_WuggyHole_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WuggyHole.BP_WuggyHole_C.ExecuteUbergraph_BP_WuggyHole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WuggyHole_C::ExecuteUbergraph_BP_WuggyHole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WuggyHole.BP_WuggyHole_C.ExecuteUbergraph_BP_WuggyHole");
		
		ABP_WuggyHole_C_ExecuteUbergraph_BP_WuggyHole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WuggyHole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WuggyHole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuggyHole.BP_WuggyHole_C");
		return ptr;
	}

}


