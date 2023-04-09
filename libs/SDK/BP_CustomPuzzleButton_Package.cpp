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
	 * 		Name   -> Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.BndEvt__BP_CustomPuzzleButton_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentStateChange                             AttachmentStateChange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPuzzleButton_C::BndEvt__BP_CustomPuzzleButton_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.BndEvt__BP_CustomPuzzleButton_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature");
		
		ABP_CustomPuzzleButton_C_BndEvt__BP_CustomPuzzleButton_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature_Params params {};
		params.AttachmentStateChange = AttachmentStateChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.ExecuteUbergraph_BP_CustomPuzzleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPuzzleButton_C::ExecuteUbergraph_BP_CustomPuzzleButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.ExecuteUbergraph_BP_CustomPuzzleButton");
		
		ABP_CustomPuzzleButton_C_ExecuteUbergraph_BP_CustomPuzzleButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPuzzleButton_C::OnSelected__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomPuzzleButton.BP_CustomPuzzleButton_C.OnSelected__DelegateSignature");
		
		ABP_CustomPuzzleButton_C_OnSelected__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CustomPuzzleButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomPuzzleButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomPuzzleButton.BP_CustomPuzzleButton_C");
		return ptr;
	}

}


