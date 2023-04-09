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
	 * BlueprintGeneratedClass BPC_NavSystem.BPC_NavSystem_C
	 * Size -> 0x0218 (FullSize[0x02C8] - InheritedSize[0x00B0])
	 */
	class UBPC_NavSystem_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_NavMain_C*                                        MainWidgetRef;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavIndicator_C*                                   IndicatorWidgetRef;                                      // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavEnemyIndicator_C*                              EnemyIndicatorWidgetRef;                                 // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavCompass_C*                                     CompassWidgetRef;                                        // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCompass;                                              // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseIndicator;                                            // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseEnemyIndicator;                                       // 0x00DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseMinimap;                                              // 0x00DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseRadar;                                                // 0x00DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseBigmap;                                               // 0x00DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_63AU[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            MinimapImage;                                            // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MiniampPlayerIconWidgetClass;                            // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimapDimentions;                                       // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0C1M[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BigmapImage;                                             // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BigmapDimentions;                                        // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4L3K[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BigmapPlayerMarkIconClass;                               // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_NavDirectionInfo>                         CompassDirections;                                       // 0x0110(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CompassWidgetHalfWidth;                                  // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D2OH[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    PlayerCamComp;                                           // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UW_NavMinimap_C*                                     MinimapWidgetRef;                                        // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavRadar_C*                                       RadarWidgetRef;                                          // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavOnlyBigMap_C*                                  OnlyBigMapWidgetRef;                                     // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_NavBigMap_C*                                      BigmapWidgetRef;                                         // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         MinimapPlayerIconRef;                                    // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         RadarPlayerIconRef;                                      // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         BigmapPlayerIconRef;                                     // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PlayerActor;                                             // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBPC_NavElement_C*>                           ElementAry;                                              // 0x0170(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBPC_NavElement_C*>                           BeforeReqElementAry;                                     // 0x0180(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FRotator                                            ApplyCamRot;                                             // 0x0190(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IndicatorBorderSize;                                     // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CompassViewAngle;                                        // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CamOffset;                                               // 0x01A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimapZoom;                                             // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRotateMinimap;                                         // 0x01B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PKL6[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PrevIndicatorScreenLoc;                                  // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CompassMinDistance;                                      // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CompassMaxDistance;                                      // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              IndicatorMinDistance;                                    // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              IndicatorMaxDistance;                                    // 0x01D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      EnemyIndicatorMinDistance;                               // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyIndicatorMaxDistance;                               // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimapMinDistance;                                      // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimapMaxDistance;                                      // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadarMinDistance;                                        // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadarMaxDistance;                                        // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_NavMapAxisType                                           UseAxisType;                                             // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QIGZ[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            RadarMinimapImage;                                       // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RadarPlayerIconWidgetClass;                              // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadarDimentions;                                         // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadarZoom;                                               // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadarBorderSize;                                         // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRotateRadar;                                           // 0x0224(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AF0J[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_NavWaypointInfo>                          WaypointInfoAry;                                         // 0x0228(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       UsePartyPlayerIcon;                                      // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseRunTimeCaptureImage;                                  // 0x0239(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInit;                                                  // 0x023A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NT9T[0x1];                                   // 0x023B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IndicatorMinDistance_1;                                  // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMinDistance_2;                                  // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMinDistance_3;                                  // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMinDistance_4;                                  // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMinDistance_5;                                  // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMaxDistance_1;                                  // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMaxDistance_2;                                  // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMaxDistance_3;                                  // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMaxDistance_4;                                  // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndicatorMaxDistance_5;                                  // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8S1X[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FS_NavElementArray>             NavElementMap;                                           // 0x0268(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UActorComponent*>                             TempArray;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void HandleVisibilityBasedOnSettings(bool Condition);
		void SetMinMaxIndicatorDistancesToUnusable();
		void SetMinMaxIndicatorDistancesToDefault();
		bool CheckIndicatorElementDistance(class AActor* ElementActor, class UBPC_NavElement_C* NavElement);
		void Shutdown();
		void Initialize();
		void SetupFromLevelInfo(class ABP_NavLevelInfo_C* IpLevelInfo);
		void GetWaypoint(const struct FVector2D& IpLoc, struct FS_NavWaypointInfo* Result);
		class ABP_NavWaypoint_C* SpawnWaypont(const struct FVector& Loc);
		void DistanceToScreenLoc(class AActor* Actor1, class AActor* Actor2, float* X, float* Y);
		void AddZoomMinimap(float AddValue);
		bool CheckElementDistance(class AActor* ElementActor, float Min, float Max);
		void ToggleEnemyIndicator();
		void ShowEnemyIndicator(bool IsShow);
		void UpdateUseWidgets();
		void UpdateRadar();
		void UpdateBigmap();
		void UpdateMinimap();
		void UpdateEnemyIndicator();
		void UpdateIndicator();
		void UpdateCompass();
		void CreatePlayerIcons();
		void AddEnemyIndicatorIcon(class UBPC_NavElement_C* Element);
		void SetPropIndicatorWidget(class UBPC_NavElement_C* Element, const struct FVector2D& Translation, float Angle, bool IsOffscreen, bool IsShow, class UUserWidget* IndicatorWidget);
		void UpdateEnemyIndicatorElement(class UBPC_NavElement_C* IpElement, float IpRadius);
		float GetDistanceElement(class UBPC_NavElement_C* Element);
		void UpdateCheckDistanceElements();
		void ToggleRadar();
		void ShowRadar(bool IsShow);
		void ToggleIndicator();
		void ShowIndicator(bool IsShow);
		void ToggleCompass();
		void ShowCompass(bool IsShow);
		void ToggleMinimap();
		void ShowMinimap(bool IsShow);
		void UpdateRadar_PlayerIcon();
		void UpdateRadarElement(class UBPC_NavElement_C* Element);
		void AddRadarIcon(class UBPC_NavElement_C* Element);
		void ToggleRotateMinimap();
		void ToggleBigMap();
		void ShowBigMap(bool IsShow);
		void UpdateBigmapElement(class UBPC_NavElement_C* Element);
		void AddBigmapIcon(class UBPC_NavElement_C* Element);
		void UpdateBigmap_PlayerIcon();
		void ShowElement(class UBPC_NavElement_C* Element, bool IsVisible);
		void RemoveElement(class UBPC_NavElement_C* Element);
		void UpdateMinimap_PlayerIcon();
		void UpdateMinimapElement(class UBPC_NavElement_C* Element);
		void FindAngle(const struct FVector2D& A, const struct FVector2D& B, float* Degree);
		struct FVector2D FindCoord(float IpRadius, float IpDegrees);
		void AddMinimapIcon(class UBPC_NavElement_C* Element);
		float GetElementDistance(class UBPC_NavElement_C* Element);
		struct FVector GetPlayerCamLoc();
		void AddIndicatorIcon(class UBPC_NavElement_C* Element);
		void UpdateCompassElement(class UBPC_NavElement_C* IpElement);
		void IsIndicatorInViewport(const struct FVector2D& ScreenLoc, bool IsFlip, bool* Result);
		bool GetFlipElementLoc(class UBPC_NavElement_C* Element, struct FVector2D* ScreenLoc);
		bool IsFlipElement(class UBPC_NavElement_C* Element);
		bool WorldToScreen(const struct FVector& WorldLoc, struct FVector2D* ScreenLoc);
		struct FVector2D GetScreenSize();
		void UpdateIndicatorElement(class UBPC_NavElement_C* Element);
		void AddElement(class UBPC_NavElement_C* Element);
		void AddCompassIcon(class UBPC_NavElement_C* Element);
		void UpdateElements();
		void UpdateCompassDirectionWidgets();
		void Show(bool IpVisible);
		void OnPlayerTurned();
		void ReceiveTick(float DeltaSeconds);
		void ReqAddElement(class UBPC_NavElement_C* NavElementComp);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Server_SpawnWaypoint(const struct FVector& InLoc);
		void ReceiveBeginPlay();
		void SetNonEssentialHUDVisibility(bool Visible);
		void ExecuteUbergraph_BPC_NavSystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
