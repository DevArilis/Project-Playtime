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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_Chat.UI_Chat_C.OnPreviewKeyDown
	 */
	struct UUI_Chat_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.CheckProfanity
	 */
	struct UUI_Chat_C_CheckProfanity_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.UpdateLength
	 */
	struct UUI_Chat_C_UpdateLength_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.ReceiveMessage
	 */
	struct UUI_Chat_C_ReceiveMessage_Params
	{
	public:
		class FString                                              SenderName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FBPUniqueNetId                                      SenderID;                                                // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.ReadyType
	 */
	struct UUI_Chat_C_ReadyType_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8KT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Chat.UI_Chat_C.Construct
	 */
	struct UUI_Chat_C_Construct_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.OnFocusLost
	 */
	struct UUI_Chat_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.Tick
	 */
	struct UUI_Chat_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.ResetTimeout
	 */
	struct UUI_Chat_C_ResetTimeout_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.HideSelf
	 */
	struct UUI_Chat_C_HideSelf_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.Event Update Length
	 */
	struct UUI_Chat_C_EventUpdateLength_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.BndEvt__UI_Chat_TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_Chat_C_BndEvt__UI_Chat_TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.MessageCommited
	 */
	struct UUI_Chat_C_MessageCommited_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.Update Chat Visibility
	 */
	struct UUI_Chat_C_UpdateChatVisibility_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
	 */
	struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
