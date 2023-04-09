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
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InLobby?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MultiplayerPlayerController_C::InLobby(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InLobby?");
		
		ABP_MultiplayerPlayerController_C_InLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SpawnAndPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class FName                                        SpawnTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::SpawnAndPossess(class UClass* Class, class APlayerController* Player, const class FName& SpawnTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SpawnAndPossess");
		
		ABP_MultiplayerPlayerController_C_SpawnAndPossess_Params params {};
		params.Class = Class;
		params.Player = Player;
		params.SpawnTag = SpawnTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2");
		
		ABP_MultiplayerPlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_B_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::InpActEvt_B_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_B_K2Node_InputKeyEvent_2");
		
		ABP_MultiplayerPlayerController_C_InpActEvt_B_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		ABP_MultiplayerPlayerController_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::InpActEvt_Enter_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1");
		
		ABP_MultiplayerPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ReadyToStart
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Client_ReadyToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ReadyToStart");
		
		ABP_MultiplayerPlayerController_C_Client_ReadyToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_ReadyToStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::Server_ReadyToStart(const class FString& ID, class ABP_MultiplayerPlayerController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_ReadyToStart");
		
		ABP_MultiplayerPlayerController_C_Server_ReadyToStart_Params params {};
		params.ID = ID;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetSessionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SessionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::SetSessionName(const class FName& SessionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetSessionName");
		
		ABP_MultiplayerPlayerController_C_SetSessionName_Params params {};
		params.SessionName = SessionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetSpawnMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ClassToSpawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::NetSpawnMonster(class UClass* ClassToSpawn, class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetSpawnMonster");
		
		ABP_MultiplayerPlayerController_C_NetSpawnMonster_Params params {};
		params.ClassToSpawn = ClassToSpawn;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateMonsterWidget
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::CreateMonsterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateMonsterWidget");
		
		ABP_MultiplayerPlayerController_C_CreateMonsterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetAddVelocityToGrabbedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::NetAddVelocityToGrabbedActor(class UStaticMeshComponent* StaticMesh, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.NetAddVelocityToGrabbedActor");
		
		ABP_MultiplayerPlayerController_C_NetAddVelocityToGrabbedActor_Params params {};
		params.StaticMesh = StaticMesh;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveTick");
		
		ABP_MultiplayerPlayerController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_DisplayMigrationScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LoadingMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::Client_DisplayMigrationScreen(const class FString& LoadingMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_DisplayMigrationScreen");
		
		ABP_MultiplayerPlayerController_C_Client_DisplayMigrationScreen_Params params {};
		params.LoadingMessage = LoadingMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_RemoveAllWidgets
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Client_RemoveAllWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_RemoveAllWidgets");
		
		ABP_MultiplayerPlayerController_C_Client_RemoveAllWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_Widgets
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::BeginPlay_Widgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_Widgets");
		
		ABP_MultiplayerPlayerController_C_BeginPlay_Widgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.HideMigrationWidget
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::HideMigrationWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.HideMigrationWidget");
		
		ABP_MultiplayerPlayerController_C_HideMigrationWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.StartGameAnim
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::StartGameAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.StartGameAnim");
		
		ABP_MultiplayerPlayerController_C_StartGameAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetUIMode
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::SetUIMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetUIMode");
		
		ABP_MultiplayerPlayerController_C_SetUIMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveBeginPlay");
		
		ABP_MultiplayerPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetupLobby
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::SetupLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SetupLobby");
		
		ABP_MultiplayerPlayerController_C_SetupLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.RemoveLoadingScreen
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::RemoveLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.RemoveLoadingScreen");
		
		ABP_MultiplayerPlayerController_C_RemoveLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateLoadingScreen
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::CreateLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateLoadingScreen");
		
		ABP_MultiplayerPlayerController_C_CreateLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ClearLobbyUI
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::ClearLobbyUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ClearLobbyUI");
		
		ABP_MultiplayerPlayerController_C_ClearLobbyUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DestroyLobbyUI
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::DestroyLobbyUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DestroyLobbyUI");
		
		ABP_MultiplayerPlayerController_C_DestroyLobbyUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceivePossess");
		
		ABP_MultiplayerPlayerController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateCrosshairWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ToyType                                          ToySelection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::CreateCrosshairWidget(E_ToyType ToySelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateCrosshairWidget");
		
		ABP_MultiplayerPlayerController_C_CreateCrosshairWidget_Params params {};
		params.ToySelection = ToySelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ResetHostMigration
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Client_ResetHostMigration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Client_ResetHostMigration");
		
		ABP_MultiplayerPlayerController_C_Client_ResetHostMigration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.OnUnpause
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::OnUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.OnUnpause");
		
		ABP_MultiplayerPlayerController_C_OnUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateChatWidget
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::CreateChatWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.CreateChatWidget");
		
		ABP_MultiplayerPlayerController_C_CreateChatWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DeliverMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FBPUniqueNetId                              SenderID                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MultiplayerPlayerController_C::DeliverMessage(const class FString& SenderName, const class FString& Message, const struct FBPUniqueNetId& SenderID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.DeliverMessage");
		
		ABP_MultiplayerPlayerController_C_DeliverMessage_Params params {};
		params.SenderName = SenderName;
		params.Message = Message;
		params.SenderID = SenderID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FBPUniqueNetId                              SenderID                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MultiplayerPlayerController_C::ReceiveMessage(const class FString& SenderName, const class FString& Message, const struct FBPUniqueNetId& SenderID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ReceiveMessage");
		
		ABP_MultiplayerPlayerController_C_ReceiveMessage_Params params {};
		params.SenderName = SenderName;
		params.Message = Message;
		params.SenderID = SenderID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MultiplayerPlayerController_C::SendMessage(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendMessage");
		
		ABP_MultiplayerPlayerController_C_SendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_No
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Server_No()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_No");
		
		ABP_MultiplayerPlayerController_C_Server_No_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_Yes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MultiplayerPlayerController_C*           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::Server_Yes(class ABP_MultiplayerPlayerController_C* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_Yes");
		
		ABP_MultiplayerPlayerController_C_Server_Yes_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.No
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::No()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.No");
		
		ABP_MultiplayerPlayerController_C_No_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Yes
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Yes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Yes");
		
		ABP_MultiplayerPlayerController_C_Yes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Remove_AskToBeMonster
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Remove_AskToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Remove_AskToBeMonster");
		
		ABP_MultiplayerPlayerController_C_Remove_AskToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Create_AskToBeMonster
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Create_AskToBeMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Create_AskToBeMonster");
		
		ABP_MultiplayerPlayerController_C_Create_AskToBeMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Tick_VoiceChat
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Tick_VoiceChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Tick_VoiceChat");
		
		ABP_MultiplayerPlayerController_C_Tick_VoiceChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendAudioData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              CompressedBuffer                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_MultiplayerPlayerController_C::SendAudioData(TArray<unsigned char> CompressedBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.SendAudioData");
		
		ABP_MultiplayerPlayerController_C_SendAudioData_Params params {};
		params.CompressedBuffer = CompressedBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_VoiceChat
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::BeginPlay_VoiceChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.BeginPlay_VoiceChat");
		
		ABP_MultiplayerPlayerController_C_BeginPlay_VoiceChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_RecieveQueueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQueueData                                  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_MultiplayerPlayerController_C::Server_RecieveQueueData(int32_t PlayerID, const struct FQueueData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Server_RecieveQueueData");
		
		ABP_MultiplayerPlayerController_C_Server_RecieveQueueData_Params params {};
		params.PlayerID = PlayerID;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Owner_RequestQueueData
	 * 		Flags  -> ()
	 */
	void ABP_MultiplayerPlayerController_C::Owner_RequestQueueData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.Owner_RequestQueueData");
		
		ABP_MultiplayerPlayerController_C_Owner_RequestQueueData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ExecuteUbergraph_BP_MultiplayerPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MultiplayerPlayerController_C::ExecuteUbergraph_BP_MultiplayerPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C.ExecuteUbergraph_BP_MultiplayerPlayerController");
		
		ABP_MultiplayerPlayerController_C_ExecuteUbergraph_BP_MultiplayerPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MultiplayerPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MultiplayerPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C");
		return ptr;
	}

}


