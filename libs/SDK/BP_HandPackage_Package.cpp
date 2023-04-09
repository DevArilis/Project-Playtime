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
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.NetToggleRetraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::NetToggleRetraction(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.NetToggleRetraction");
		
		UBP_HandPackage_C_NetToggleRetraction_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.MultiToggleRetraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::MultiToggleRetraction(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.MultiToggleRetraction");
		
		UBP_HandPackage_C_MultiToggleRetraction_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.NetUnattachAndRetractHand
	 * 		Flags  -> ()
	 */
	void UBP_HandPackage_C::NetUnattachAndRetractHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.NetUnattachAndRetractHand");
		
		UBP_HandPackage_C_NetUnattachAndRetractHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.MultiUnattachAndRetractHand
	 * 		Flags  -> ()
	 */
	void UBP_HandPackage_C::MultiUnattachAndRetractHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.MultiUnattachAndRetractHand");
		
		UBP_HandPackage_C_MultiUnattachAndRetractHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.PackageUnattachAndRetractHand
	 * 		Flags  -> ()
	 */
	void UBP_HandPackage_C::PackageUnattachAndRetractHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.PackageUnattachAndRetractHand");
		
		UBP_HandPackage_C_PackageUnattachAndRetractHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.PackageToggleRetraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::PackageToggleRetraction(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.PackageToggleRetraction");
		
		UBP_HandPackage_C_PackageToggleRetraction_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.ExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RoughEndLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerPreview_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::ExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.ExtendHand");
		
		UBP_HandPackage_C_ExtendHand_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.RoughEndLocation = RoughEndLocation;
		params.Player = Player;
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.TryExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RoughEndLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerPreview_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::TryExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.TryExtendHand");
		
		UBP_HandPackage_C_TryExtendHand_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.RoughEndLocation = RoughEndLocation;
		params.Player = Player;
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.MultiExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RoughEndLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerPreview_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::MultiExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.MultiExtendHand");
		
		UBP_HandPackage_C_MultiExtendHand_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.RoughEndLocation = RoughEndLocation;
		params.Player = Player;
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.NetExtendHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RoughEndLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerPreview_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HandPackage_C::NetExtendHand(const struct FTransform& SpawnTransform, const struct FVector& RoughEndLocation, class ABP_PlayerPreview_C* Player, bool LeftHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.NetExtendHand");
		
		UBP_HandPackage_C_NetExtendHand_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.RoughEndLocation = RoughEndLocation;
		params.Player = Player;
		params.LeftHand = LeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandPackage.BP_HandPackage_C.ExecuteUbergraph_BP_HandPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HandPackage_C::ExecuteUbergraph_BP_HandPackage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandPackage.BP_HandPackage_C.ExecuteUbergraph_BP_HandPackage");
		
		UBP_HandPackage_C_ExecuteUbergraph_BP_HandPackage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HandPackage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HandPackage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HandPackage.BP_HandPackage_C");
		return ptr;
	}

}


