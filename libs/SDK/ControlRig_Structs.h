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
	 * Enum ControlRig.EControlRigComponentMapDirection
	 */
	enum class EControlRigComponentMapDirection : uint8_t
	{
		Input  = 0,
		Output = 1,
		MAX    = 2
	};

	/**
	 * Enum ControlRig.EControlRigComponentSpace
	 */
	enum class EControlRigComponentSpace : uint8_t
	{
		WorldSpace     = 0,
		ActorSpace     = 1,
		ComponentSpace = 2,
		RigSpace       = 3,
		LocalSpace     = 4,
		Max            = 5
	};

	/**
	 * Enum ControlRig.ERigExecutionType
	 */
	enum class ERigExecutionType : uint8_t
	{
		Runtime = 0,
		Editing = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.EBoneGetterSetterMode
	 */
	enum class EBoneGetterSetterMode : uint8_t
	{
		LocalSpace  = 0,
		GlobalSpace = 1,
		Max         = 2
	};

	/**
	 * Enum ControlRig.ETransformGetterType
	 */
	enum class ETransformGetterType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.EControlRigClampSpatialMode
	 */
	enum class EControlRigClampSpatialMode : uint8_t
	{
		Plane    = 0,
		Cylinder = 1,
		Sphere   = 2,
		MAX      = 3
	};

	/**
	 * Enum ControlRig.ETransformSpaceMode
	 */
	enum class ETransformSpaceMode : uint8_t
	{
		LocalSpace  = 0,
		GlobalSpace = 1,
		BaseSpace   = 2,
		BaseJoint   = 3,
		Max         = 4
	};

	/**
	 * Enum ControlRig.EControlRigDrawSettings
	 */
	enum class EControlRigDrawSettings : uint8_t
	{
		Points      = 0,
		Lines       = 1,
		LineStrip   = 2,
		DynamicMesh = 3,
		MAX         = 4
	};

	/**
	 * Enum ControlRig.EControlRigDrawHierarchyMode
	 */
	enum class EControlRigDrawHierarchyMode : uint8_t
	{
		Axes = 0,
		Max  = 1
	};

	/**
	 * Enum ControlRig.EControlRigAnimEasingType
	 */
	enum class EControlRigAnimEasingType : uint8_t
	{
		Linear               = 0,
		QuadraticEaseIn      = 1,
		QuadraticEaseOut     = 2,
		QuadraticEaseInOut   = 3,
		CubicEaseIn          = 4,
		CubicEaseOut         = 5,
		CubicEaseInOut       = 6,
		QuarticEaseIn        = 7,
		QuarticEaseOut       = 8,
		QuarticEaseInOut     = 9,
		QuinticEaseIn        = 10,
		QuinticEaseOut       = 11,
		QuinticEaseInOut     = 12,
		SineEaseIn           = 13,
		SineEaseOut          = 14,
		SineEaseInOut        = 15,
		CircularEaseIn       = 16,
		CircularEaseOut      = 17,
		CircularEaseInOut    = 18,
		ExponentialEaseIn    = 19,
		ExponentialEaseOut   = 20,
		ExponentialEaseInOut = 21,
		ElasticEaseIn        = 22,
		ElasticEaseOut       = 23,
		ElasticEaseInOut     = 24,
		BackEaseIn           = 25,
		BackEaseOut          = 26,
		BackEaseInOut        = 27,
		BounceEaseIn         = 28,
		BounceEaseOut        = 29,
		BounceEaseInOut      = 30,
		MAX                  = 31
	};

	/**
	 * Enum ControlRig.EControlRigRotationOrder
	 */
	enum class EControlRigRotationOrder : uint8_t
	{
		XYZ = 0,
		XZY = 1,
		YXZ = 2,
		YZX = 3,
		ZXY = 4,
		ZYX = 5,
		MAX = 6
	};

	/**
	 * Enum ControlRig.ECRSimPointIntegrateType
	 */
	enum class ECRSimPointIntegrateType : uint8_t
	{
		Verlet            = 0,
		SemiExplicitEuler = 1,
		MAX               = 2
	};

	/**
	 * Enum ControlRig.ECRSimConstraintType
	 */
	enum class ECRSimConstraintType : uint8_t
	{
		Distance      = 0,
		DistanceFromA = 1,
		DistanceFromB = 2,
		Plane         = 3,
		MAX           = 4
	};

	/**
	 * Enum ControlRig.ECRSimPointForceType
	 */
	enum class ECRSimPointForceType : uint8_t
	{
		Direction = 0,
		MAX       = 1
	};

	/**
	 * Enum ControlRig.ECRSimSoftCollisionType
	 */
	enum class ECRSimSoftCollisionType : uint8_t
	{
		Plane  = 0,
		Sphere = 1,
		Cone   = 2,
		MAX    = 3
	};

	/**
	 * Enum ControlRig.EControlRigFKRigExecuteMode
	 */
	enum class EControlRigFKRigExecuteMode : uint8_t
	{
		Replace  = 0,
		Additive = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.ERigBoneType
	 */
	enum class ERigBoneType : uint8_t
	{
		Imported = 0,
		User     = 1,
		MAX      = 2
	};

	/**
	 * Enum ControlRig.ERigControlAxis
	 */
	enum class ERigControlAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum ControlRig.ERigControlValueType
	 */
	enum class ERigControlValueType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Minimum = 2,
		Maximum = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.ERigControlType
	 */
	enum class ERigControlType : uint8_t
	{
		Bool             = 0,
		Float            = 1,
		Integer          = 2,
		Vector2D         = 3,
		Position         = 4,
		Scale            = 5,
		Rotator          = 6,
		Transform        = 7,
		TransformNoScale = 8,
		EulerTransform   = 9,
		MAX              = 10
	};

	/**
	 * Enum ControlRig.ERigHierarchyImportMode
	 */
	enum class ERigHierarchyImportMode : uint8_t
	{
		Append                 = 0,
		Replace                = 1,
		ReplaceLocalTransform  = 2,
		ReplaceGlobalTransform = 3,
		Max                    = 4
	};

	/**
	 * Enum ControlRig.EControlRigSetKey
	 */
	enum class EControlRigSetKey : uint8_t
	{
		DoNotCare = 0,
		Always    = 1,
		Never     = 2,
		MAX       = 3
	};

	/**
	 * Enum ControlRig.ERigEvent
	 */
	enum class ERigEvent : uint8_t
	{
		None           = 0,
		RequestAutoKey = 1,
		Max            = 2
	};

	/**
	 * Enum ControlRig.ERigElementType
	 */
	enum class ERigElementType : uint8_t
	{
		None    = 0,
		Bone    = 1,
		Space   = 2,
		Control = 3,
		Curve   = 4,
		All     = 5,
		MAX     = 6
	};

	/**
	 * Enum ControlRig.ERigSpaceType
	 */
	enum class ERigSpaceType : uint8_t
	{
		Global  = 0,
		Bone    = 1,
		Control = 2,
		Space   = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.EAimMode
	 */
	enum class EAimMode : uint8_t
	{
		AimAtTarget    = 0,
		OrientToTarget = 1,
		MAX            = 2
	};

	/**
	 * Enum ControlRig.EApplyTransformMode
	 */
	enum class EApplyTransformMode : uint8_t
	{
		Override = 0,
		Additive = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugPointMode
	 */
	enum class ERigUnitDebugPointMode : uint8_t
	{
		Point  = 0,
		Vector = 1,
		Max    = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugTransformMode
	 */
	enum class ERigUnitDebugTransformMode : uint8_t
	{
		Point = 0,
		Axes  = 1,
		Box   = 2,
		Max   = 3
	};

	/**
	 * Enum ControlRig.EControlRigCurveAlignment
	 */
	enum class EControlRigCurveAlignment : uint8_t
	{
		Front     = 0,
		Stretched = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.EControlRigVectorKind
	 */
	enum class EControlRigVectorKind : uint8_t
	{
		Direction = 0,
		Location  = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.ERBFVectorDistanceType
	 */
	enum class ERBFVectorDistanceType : uint8_t
	{
		Euclidean = 0,
		Manhattan = 1,
		ArcLength = 2,
		MAX       = 3
	};

	/**
	 * Enum ControlRig.ERBFQuatDistanceType
	 */
	enum class ERBFQuatDistanceType : uint8_t
	{
		Euclidean  = 0,
		ArcLength  = 1,
		SwingAngle = 2,
		TwistAngle = 3,
		MAX        = 4
	};

	/**
	 * Enum ControlRig.ERBFKernelType
	 */
	enum class ERBFKernelType : uint8_t
	{
		Gaussian    = 0,
		Exponential = 1,
		Linear      = 2,
		Cubic       = 3,
		Quintic     = 4,
		MAX         = 5
	};

	/**
	 * Enum ControlRig.EControlRigModifyBoneMode
	 */
	enum class EControlRigModifyBoneMode : uint8_t
	{
		OverrideLocal  = 0,
		OverrideGlobal = 1,
		AdditiveLocal  = 2,
		AdditiveGlobal = 3,
		Max            = 4
	};

	/**
	 * Enum ControlRig.ERigUnitVisualDebugPointMode
	 */
	enum class ERigUnitVisualDebugPointMode : uint8_t
	{
		Point  = 0,
		Vector = 1,
		Max    = 2
	};

	/**
	 * Enum ControlRig.EControlRigState
	 */
	enum class EControlRigState : uint8_t
	{
		Init    = 0,
		Update  = 1,
		Invalid = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ControlRig.RigElement
	 * Size -> 0x0018
	 */
	struct FRigElement
	{
	public:
		unsigned char                                              UnknownData_SPM1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9S6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBone
	 * Size -> 0x00C8 (FullSize[0x00E0] - InheritedSize[0x0018])
	 */
	struct FRigBone : public FRigElement
	{
	public:
		class FName                                                ParentName;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTDY[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0090(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		ERigBoneType                                               Type;                                                    // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHTR[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoneHierarchy
	 * Size -> 0x0098
	 */
	struct FRigBoneHierarchy
	{
	public:
		unsigned char                                              UnknownData_AXUC[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigBone>                                    Bones;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 NameToIndexMapping;                                      // 0x0030(0x0050) NativeAccessSpecifierPrivate
		TArray<class FName>                                        Selection;                                               // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V10S[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigSpace
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FRigSpace : public FRigElement
	{
	public:
		ERigSpaceType                                              SpaceType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLPQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentName;                                              // 0x001C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSKH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigSpaceHierarchy
	 * Size -> 0x0090
	 */
	struct FRigSpaceHierarchy
	{
	public:
		unsigned char                                              UnknownData_51UD[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigSpace>                                   Spaces;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 NameToIndexMapping;                                      // 0x0030(0x0050) NativeAccessSpecifierPrivate
		TArray<class FName>                                        Selection;                                               // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControlValueStorage
	 * Size -> 0x0044
	 */
	struct FRigControlValueStorage
	{
	public:
		float                                                      Float00;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float01;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float02;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float03;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float10;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float11;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float12;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float13;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float20;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float21;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float22;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float23;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float30;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float31;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float32;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float33;                                                 // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCB3[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlValue
	 * Size -> 0x0080
	 */
	struct FRigControlValue
	{
	public:
		struct FRigControlValueStorage                             FloatStorage;                                            // 0x0000(0x0044) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J933[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Storage;                                                 // 0x0050(0x0030) Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControl
	 * Size -> 0x02D8 (FullSize[0x02F0] - InheritedSize[0x0018])
	 */
	struct FRigControl : public FRigElement
	{
	public:
		ERigControlType                                            ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGF0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentName;                                              // 0x0024(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpaceName;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpaceIndex;                                              // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5EX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    InitialValue;                                            // 0x0070(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    Value;                                                   // 0x00F0(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ERigControlAxis                                            PrimaryAxis;                                             // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x0171(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimatable;                                             // 0x0172(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitTranslation;                                       // 0x0173(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation;                                          // 0x0174(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitScale;                                             // 0x0175(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0176(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYPN[0x9];                                   // 0x0177(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x0180(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x0200(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bGizmoEnabled;                                           // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGizmoVisible;                                           // 0x0281(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWKN[0x2];                                   // 0x0282(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GizmoName;                                               // 0x0284(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2F6[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GizmoTransform;                                          // 0x0290(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GizmoColor;                                              // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x02D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02C3[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               ControlEnum;                                             // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlHierarchy
	 * Size -> 0x0108
	 */
	struct FRigControlHierarchy
	{
	public:
		unsigned char                                              UnknownData_B24A[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigControl>                                 Controls;                                                // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 NameToIndexMapping;                                      // 0x00A8(0x0050) NativeAccessSpecifierPrivate
		TArray<class FName>                                        Selection;                                               // 0x00F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigCurve
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FRigCurve : public FRigElement
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CEZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigCurveContainer
	 * Size -> 0x0098
	 */
	struct FRigCurveContainer
	{
	public:
		unsigned char                                              UnknownData_M1V9[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigCurve>                                   Curves;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 NameToIndexMapping;                                      // 0x0030(0x0050) NativeAccessSpecifierPrivate
		TArray<class FName>                                        Selection;                                               // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OAEW[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyContainer
	 * Size -> 0x0368
	 */
	struct FRigHierarchyContainer
	{
	public:
		struct FRigBoneHierarchy                                   BoneHierarchy;                                           // 0x0000(0x0098) NativeAccessSpecifierPublic
		struct FRigSpaceHierarchy                                  SpaceHierarchy;                                          // 0x0098(0x0090) NativeAccessSpecifierPublic
		struct FRigControlHierarchy                                ControlHierarchy;                                        // 0x0128(0x0108) NativeAccessSpecifierPublic
		struct FRigCurveContainer                                  CurveContainer;                                          // 0x0230(0x0098) NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x02C8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNRF[0x9C];                                  // 0x02CC(0x009C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInstruction
	 * Size -> 0x00A0
	 */
	struct FControlRigDrawInstruction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigDrawSettings                                    PrimitiveType;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NXZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Positions;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65RN[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07OI[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawContainer
	 * Size -> 0x0018
	 */
	struct FControlRigDrawContainer
	{
	public:
		unsigned char                                              UnknownData_3ULP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FControlRigDrawInstruction>                  Instructions;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigElementKey
	 * Size -> 0x000C
	 */
	struct FRigElementKey
	{
	public:
		ERigElementType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZFV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntry
	 * Size -> 0x0020
	 */
	struct FRigInfluenceEntry
	{
	public:
		struct FRigElementKey                                      Source;                                                  // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FSG5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMap
	 * Size -> 0x0068
	 */
	struct FRigInfluenceMap
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FRigInfluenceEntry>                          Entries;                                                 // 0x0008(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FRigElementKey, int32_t>                       KeyToIndex;                                              // 0x0018(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMapPerEvent
	 * Size -> 0x0060
	 */
	struct FRigInfluenceMapPerEvent
	{
	public:
		TArray<struct FRigInfluenceMap>                            Maps;                                                    // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, int32_t>                                 EventToIndex;                                            // 0x0010(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedElement
	 * Size -> 0x00A0
	 */
	struct FControlRigComponentMappedElement
	{
	public:
		struct FComponentReference                                 ComponentReference;                                      // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TransformIndex;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TransformName;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNQL[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ElementName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4TA[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x0050(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentSpace                                  Space;                                                   // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Y7Z[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x0088(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ElementIndex;                                            // 0x0090(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubIndex;                                                // 0x0094(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU2I[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigGizmoDefinition
	 * Size -> 0x0060
	 */
	struct FControlRigGizmoDefinition
	{
	public:
		class FName                                                GizmoName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMesh[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CachedRigElement
	 * Size -> 0x0014
	 */
	struct FCachedRigElement
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   Index;                                                   // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FUO4[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContainerVersion;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigPoseElement
	 * Size -> 0x0090
	 */
	struct FRigPoseElement
	{
	public:
		struct FCachedRigElement                                   Index;                                                   // 0x0000(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT70[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GlobalTransform;                                         // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EO8H[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigPose
	 * Size -> 0x0010
	 */
	struct FRigPose
	{
	public:
		TArray<struct FRigPoseElement>                             Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ChannelMapInfo
	 * Size -> 0x0018
	 */
	struct FChannelMapInfo
	{
	public:
		int32_t                                                    ControlIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalChannelIndex;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChannelIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentControlIndex;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChannelTypeName;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.EnumParameterNameAndCurve
	 * Size -> 0x00A0
	 */
	struct FEnumParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneByteChannel                              ParameterCurve;                                          // 0x0008(0x0098) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.IntegerParameterNameAndCurve
	 * Size -> 0x0098
	 */
	struct FIntegerParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           ParameterCurve;                                          // 0x0008(0x0090) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit : public FRigVMStruct
	{	};

	/**
	 * ScriptStruct ControlRig.ControlRigExecuteContext
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FControlRigExecuteContext : public FRigVMExecuteContext
	{
	public:
		unsigned char                                              UnknownData_A3S6[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnitMutable
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnitMutable : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0060) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ConstraintNodeData
	 * Size -> 0x00B0
	 */
	struct FConstraintNodeData
	{
	public:
		struct FTransform                                          RelativeParent;                                          // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintOffset                                   ConstraintOffset;                                        // 0x0030(0x0060) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LinkedNode;                                              // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransformConstraint>                        Constraints;                                             // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ABGC[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimationHierarchy
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FAnimationHierarchy : public FNodeHierarchyWithUserData
	{
	public:
		TArray<struct FConstraintNodeData>                         UserData;                                                // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigIOSettings
	 * Size -> 0x0002
	 */
	struct FControlRigIOSettings
	{
	public:
		bool                                                       bUpdatePose;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateCurves;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigBase
	 * Size -> 0x0118 (FullSize[0x0170] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0058(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                ControlRigBoneMapping;                                   // 0x0068(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                ControlRigCurveMapping;                                  // 0x00B8(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                InputToCurveMappingUIDs;                                 // 0x0108(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UNodeMappingContainer>                NodeMappingContainer;                                    // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               InputSettings;                                           // 0x0160(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               OutputSettings;                                          // 0x0162(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bExecute;                                                // 0x0164(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FFDT[0xB];                                   // 0x0165(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig
	 * Size -> 0x01F8 (FullSize[0x0368] - InheritedSize[0x0170])
	 */
	struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlphaBoolEnabled : 1;                                   // 0x0185(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetRefPoseFromSkeleton : 1;                             // 0x0185(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TRZN[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0188(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0190(0x0048) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                AlphaCurveName;                                          // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x01E0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             InputMapping;                                            // 0x0210(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             OutputMapping;                                           // 0x0260(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J1I0[0xB0];                                  // 0x02B0(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WXL9[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
	{
	public:
		TWeakObjectPtr<class UControlRig>                          ControlRig;                                              // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigAnimInstanceProxy
	 * Size -> 0x00A0 (FullSize[0x0810] - InheritedSize[0x0770])
	 */
	struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_DW6C[0xA0];                                  // 0x0770(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedCurve
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedCurve
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedBone
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedBone
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedComponent
	 * Size -> 0x0018
	 */
	struct FControlRigComponentMappedComponent
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ElementName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNIT[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInterface
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FControlRigDrawInterface : public FControlRigDrawContainer
	{	};

	/**
	 * ScriptStruct ControlRig.GizmoActorCreationParam
	 * Size -> 0x0120
	 */
	struct FGizmoActorCreationParam
	{
	public:
		unsigned char                                              UnknownData_NEZQ[0x120];                                 // 0x0000(0x0120) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigLayerInstanceProxy
	 * Size -> 0x00A0 (FullSize[0x0810] - InheritedSize[0x0770])
	 */
	struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_5Q2F[0xA0];                                  // 0x0770(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigInputPose
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3P6F[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRFourPointBezier
	 * Size -> 0x0030
	 */
	struct FCRFourPointBezier
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             C;                                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             D;                                                       // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReference
	 * Size -> 0x0008
	 */
	struct FControlRigSequenceObjectReference
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FControlRigSequenceObjectReferences
	{
	public:
		TArray<struct FControlRigSequenceObjectReference>          Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FControlRigSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FControlRigSequenceObjectReferences>         References;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
	 * Size -> 0x02B0 (FullSize[0x0CC0] - InheritedSize[0x0A10])
	 */
	struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_H5WD[0x2B0];                                 // 0x0A10(0x02B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSettingsPerPinBool
	 * Size -> 0x0050
	 */
	struct FControlRigSettingsPerPinBool
	{
	public:
		TMap<class FString, bool>                                  Values;                                                  // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigValidationContext
	 * Size -> 0x0028
	 */
	struct FControlRigValidationContext
	{
	public:
		unsigned char                                              UnknownData_Z64W[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimContainer
	 * Size -> 0x0018
	 */
	struct FCRSimContainer
	{
	public:
		unsigned char                                              UnknownData_WQHK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeStep;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeftForStep;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDMF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimLinearSpring
	 * Size -> 0x0010
	 */
	struct FCRSimLinearSpring
	{
	public:
		int32_t                                                    SubjectA;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Equilibrium;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPoint
	 * Size -> 0x0028
	 */
	struct FCRSimPoint
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDamping;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InheritMotion;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearVelocity;                                          // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointConstraint
	 * Size -> 0x0024
	 */
	struct FCRSimPointConstraint
	{
	public:
		ECRSimConstraintType                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2S8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubjectA;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataA;                                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataB;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointForce
	 * Size -> 0x0018
	 */
	struct FCRSimPointForce
	{
	public:
		ECRSimPointForceType                                       ForceType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU7N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalize;                                              // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBL8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimSoftCollision
	 * Size -> 0x0050
	 */
	struct FCRSimSoftCollision
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ECRSimSoftCollisionType                                    ShapeType;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SO5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistance;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  FalloffType;                                             // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPJ1[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Coefficient;                                             // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverted;                                               // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAF8[0xB];                                   // 0x0045(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointContainer
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FCRSimPointContainer : public FCRSimContainer
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Springs;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointConstraint>                       Constraints;                                             // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPoint>                                 PreviousStep;                                            // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigInstanceData
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
	{
	public:
		bool                                                       bAdditive;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH7P[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0020(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationOperand                        Operand;                                                 // 0x00C0(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4IF[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<struct FEnumParameterNameAndCurve>                  Enums;                                                   // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               Integers;                                                // 0x0090(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyRef
	 * Size -> 0x0001
	 */
	struct FRigHierarchyRef
	{
	public:
		unsigned char                                              UnknownData_DJSS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigMirrorSettings
	 * Size -> 0x0028
	 */
	struct FRigMirrorSettings
	{
	public:
		EAxis                                                      MirrorAxis;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      AxisToFlip;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXRC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OldName;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewName;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContent
	 * Size -> 0x0040
	 */
	struct FRigHierarchyCopyPasteContent
	{
	public:
		TArray<ERigElementType>                                    Types;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contents;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  LocalTransforms;                                         // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  GlobalTransforms;                                        // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigEventContext
	 * Size -> 0x0028
	 */
	struct FRigEventContext
	{
	public:
		unsigned char                                              UnknownData_71LO[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigElementKeyCollection
	 * Size -> 0x0010
	 */
	struct FRigElementKeyCollection
	{
	public:
		unsigned char                                              UnknownData_BN45[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlModifiedContext
	 * Size -> 0x0010
	 */
	struct FRigControlModifiedContext
	{
	public:
		unsigned char                                              UnknownData_RTXV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntryModifier
	 * Size -> 0x0010
	 */
	struct FRigInfluenceEntryModifier
	{
	public:
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SimBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMinimum;                                      // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMaximum;                                      // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQG1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMinimum;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMaximum;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY1U[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_RFZE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TargetValue;                                             // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q0R[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_T9RC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               TargetValue;                                             // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFGH[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0050(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             TargetValue;                                             // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRXK[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
	{
	public:
		float                                                      TargetValue;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSVX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_5NWR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Multiplier;                                              // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X61V[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_2292[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Multiplier;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIV2[0xE];                                   // 0x0032(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0050(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Multiplier;                                              // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCPM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P58P[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
	{
	public:
		float                                                      Multiplier;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_231B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3I0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Increment;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PBM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUP2[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
	{
	public:
		float                                                      Increment;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSHA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MR0O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddBoneTransform
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_AddBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostMultiply;                                           // 0x00A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00A5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2XC[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x00A8(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N71R[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem_Target
	 * Size -> 0x002C
	 */
	struct FRigUnit_AimItem_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XD6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Space;                                                   // 0x0020(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_AimBone_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QAV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVB9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem
	 * Size -> 0x00E8 (FullSize[0x0150] - InheritedSize[0x0068])
	 */
	struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x0074(0x002C) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x00A0(0x002C) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x00D0(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0110(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0124(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0138(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2HA[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_Target
	 * Size -> 0x0028
	 */
	struct FRigUnit_AimBone_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12HY[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Space;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone
	 * Size -> 0x00E8 (FullSize[0x0150] - InheritedSize[0x0068])
	 */
	struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Primary;                                                 // 0x0070(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Secondary;                                               // 0x0098(0x0028) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YE1[0xB];                                   // 0x00C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x00D0(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneIndex;                                         // 0x0110(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0124(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0138(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADVA[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HighlevelBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBoneMath
	 * Size -> 0x0138 (FullSize[0x0140] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_SQTG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputTransform;                                          // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x0040(0x002C) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x006C(0x002C) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBSJ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x00D0(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0110(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0124(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4T1[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AimTarget
	 * Size -> 0x0050
	 */
	struct FAimTarget
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PY4[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AlignVector;                                             // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYIN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_AimConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_AimConstraint : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   AimMode;                                                 // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   UpMode;                                                  // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NKS[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimVector;                                               // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMFW[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAimTarget>                                  AimTargets;                                              // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAimTarget>                                  UpTargets;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimConstraint_WorkData                     WorkData;                                                // 0x00B0(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterpVector
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCMW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0028(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYPB[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMN9[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0054(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMP6[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterp
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN93[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5SM[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQGF[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0044(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNVG[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasing
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  Type;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUH1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceMinimum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1FR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasingType
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
	{
	public:
		EControlRigAnimEasingType                                  Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5USD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFJR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0010(0x0088) NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXCZ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimRichCurve
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
	{
	public:
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ApplyFK
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ApplyFK : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x00A0(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		EApplyTransformMode                                        ApplyTransformMode;                                      // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        ApplyTransformSpace;                                     // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDJL[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x00B0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ7I[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BeginExecution
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BeginExecution : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0060) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.BlendTarget
	 * Size -> 0x0040
	 */
	struct FBlendTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37FD[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BlendTransform
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BlendTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_6BJB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBlendTarget>                                Targets;                                                 // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_Harmonics_TargetItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
	 * Size -> 0x0020
	 */
	struct FRigUnit_BoneHarmonics_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveTime;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKAV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemHarmonics
	 * Size -> 0x0080 (FullSize[0x00E8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_Harmonics_TargetItem>               Targets;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x009C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_361O[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKUF[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x00C8(0x0020) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
	 * Size -> 0x000C
	 */
	struct FRigUnit_BoneHarmonics_BoneTarget
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics
	 * Size -> 0x0080 (FullSize[0x00E8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_BoneHarmonics_BoneTarget>           Bones;                                                   // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x009C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T385[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI0B[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x00C8(0x0020) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ControlName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlName : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpaceName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpaceName : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BoneName : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Item
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Item : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IA3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_CCDIK_RotationLimitPerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
	 * Size -> 0x0058
	 */
	struct FRigUnit_CCDIK_WorkData
	{
	public:
		TArray<struct FCCDIKChainLink>                             Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RotationLimitIndex;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RotationLimitsPerItem;                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0040(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCNG[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIKPerItem
	 * Size -> 0x00D8 (FullSize[0x0140] - InheritedSize[0x0068])
	 */
	struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TRS[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVNM[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94A9[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>         RotationLimits;                                          // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U85P[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x00E0(0x0058) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UT9G[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
	 * Size -> 0x000C
	 */
	struct FRigUnit_CCDIK_RotationLimit
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK
	 * Size -> 0x00D8 (FullSize[0x0140] - InheritedSize[0x0068])
	 */
	struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK0Z[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K637[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHZR[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimit>                RotationLimits;                                          // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWDA[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x00E0(0x0058) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNGV[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
	 * Size -> 0x0028
	 */
	struct FRigUnit_ChainHarmonics_Reach
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4SK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ReachTarget;                                             // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReachAxis;                                               // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMinimum;                                            // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMaximum;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  ReachEase;                                               // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R257[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
	 * Size -> 0x0040
	 */
	struct FRigUnit_ChainHarmonics_Wave
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZJ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaveFrequency;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMinimum;                                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  WaveEase;                                                // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DS2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
	 * Size -> 0x003C
	 */
	struct FRigUnit_ChainHarmonics_Pendulum
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T03M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendulumStiffness;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PendulumGravity;                                         // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumBlend;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumDrag;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMinimum;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMaximum;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  PendulumEase;                                            // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWBQ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UnwindAxis;                                              // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMinimum;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMaximum;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_ChainHarmonics_WorkData
	{
	public:
		struct FVector                                             Time;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1RD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           Items;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Ratio;                                                   // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     LocalTip;                                                // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumTip;                                             // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumPosition;                                        // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumVelocity;                                        // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HierarchyLine;                                           // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VelocityLines;                                           // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
	 * Size -> 0x0208 (FullSize[0x0270] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ChainRoot;                                               // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x0080(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x00A8(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x00E8(0x0088) NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0170(0x003C) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x01AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I93[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x01B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x01E0(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics
	 * Size -> 0x0208 (FullSize[0x0270] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                ChainRoot;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x007C(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x00A4(0x0040) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI2H[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x00E8(0x0088) NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0170(0x003C) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x01AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K0K[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x01B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x01E0(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionLoop
	 * Size -> 0x0090 (FullSize[0x00F8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0078(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continue;                                                // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELWT[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           Completed;                                               // 0x0098(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionCount
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGBS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReverse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Reversed;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionDifference
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionIntersection
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionUnion
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItems
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0008(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveInvalidItems;                                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W92[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0030(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCUZ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChildren
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0016(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4WY[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1A5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionNameSearch
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
	{
	public:
		class FName                                                PartialName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4W3H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ7O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChain
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      FirstItem;                                               // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      LastItem;                                                // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Reverse;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z04D[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedCollection;                                        // 0x0038(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedHierarchyHash;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO10[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Control : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Transform;                                               // 0x0008(0x0024) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUBH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Base;                                                    // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitTransform;                                           // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x00C0(0x0009) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSVE[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control_StaticMesh
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
	{
	public:
		struct FTransform                                          MeshTransform;                                           // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToSwingAndTwist : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_X454[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZEJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_V9YB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSO7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotationToVector : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBU7[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToRotation : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternion
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternion : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_HPDC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L23[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotation
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotation : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJBU[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertEulerTransform : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Input;                                                   // 0x0008(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTI3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_22AZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Input;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0040(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXNO[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBaseMutable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0068(0x0030) NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x00B8(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWZR[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCVP[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezier
	 * Size -> 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0068(0x0030) NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x00C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4YU[0xF];                                   // 0x00F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugHierarchy
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
	{
	public:
		float                                                      Scale;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x006C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BI9B[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             A;                                                       // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0094(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TU3[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLine
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             A;                                                       // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0094(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AY3[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC54[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x008C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JR87[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VU3P[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineStrip
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x008C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ASU[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0NI[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPointMutable
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitDebugPointMode                                     Mode;                                                    // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64JS[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDHM[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZNR[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPoint
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitDebugPointMode                                     Mode;                                                    // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJAA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B8M[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUXG[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_D76H[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDegrees;                                          // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDegrees;                                          // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x00C4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AIF[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugArc
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_EG25[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDegrees;                                          // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDegrees;                                          // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00C4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JRD[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ85[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_G0CJ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x00B8(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8J1K[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MO2[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugRectangle
	 * Size -> 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_2EEZ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x00C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y07[0xF];                                   // 0x00F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_DebugTransformArrayMutable_WorkData
	{
	public:
		TArray<struct FTransform>                                  DrawTransforms;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXME[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x007C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0094(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5GI[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5RH[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DebugTransformArrayMutable_WorkData        WorkData;                                                // 0x00D8(0x0010) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HHW[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_QUMV[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31U9[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00A4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x00BC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3O0Z[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWO8[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformMutable
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		unsigned char                                              UnknownData_SM94[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z5H[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00A4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x00BC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUBF[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWGY[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_KDCC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigUnitDebugTransformMode                                 Mode;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKQZ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x005C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2KW[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUQ1[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_KBZ5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Delta;                                                   // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PreviousValue;                                           // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Cache;                                                   // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_UNWO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Delta;                                                   // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               PreviousValue;                                           // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Cache;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Delta;                                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousValue;                                           // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Cache;                                                   // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousValue;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cache;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
	 * Size -> 0x0020
	 */
	struct FRigUnit_DistributeRotation_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GF2[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
	 * Size -> 0x0050
	 */
	struct FRigUnit_DistributeRotation_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RWA[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0090(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation
	 * Size -> 0x0080 (FullSize[0x00E8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJ38[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDLG[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0098(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGZS[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
	{
	public:
		class FName                                                InstructionName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
	 * Size -> 0x0038
	 */
	struct FRigUnit_FABRIK_WorkData
	{
	public:
		TArray<struct FFABRIKChainLink>                            Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0020(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5Z0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIKPerItem
	 * Size -> 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
	 */
	struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWDL[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ59[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x00C0(0x0038) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOPU[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK
	 * Size -> 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
	 */
	struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDOM[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EUS[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x00C0(0x0038) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYCX[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
	 * Size -> 0x0020
	 */
	struct FRigUnit_FitChainToCurve_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0EV[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
	 * Size -> 0x0060
	 */
	struct FRigUnit_FitChainToCurve_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BD72[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CurveColor;                                              // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SegmentsColor;                                           // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V066[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_FitChainToCurve_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42WK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     ItemPositions;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemSegments;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CurvePositions;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CurveSegments;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
	 * Size -> 0x0198 (FullSize[0x0200] - InheritedSize[0x0068])
	 */
	struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0078(0x0030) NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TB5[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x00C4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x00D0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNHY[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D9P[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F61S[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0100(0x0060) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0160(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WU1O[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve
	 * Size -> 0x0198 (FullSize[0x0200] - InheritedSize[0x0068])
	 */
	struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0078(0x0030) NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXP9[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x00C4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x00D0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BUU[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1QR[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3WU[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0100(0x0060) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0160(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD2I[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MapRange_Float
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MapRange_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinIn;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIn;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOut;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOut;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Clamp_Float
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Clamp_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryFloatOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryFloatOp : public FRigUnit
	{
	public:
		float                                                      Argument0;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Argument1;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47VD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ForLoopCount
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ForLoopCount : public FRigUnitMutable
	{
	public:
		int32_t                                                    Count;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continue;                                                // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JIXX[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           Completed;                                               // 0x0078(0x0060) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetBoneTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6VS[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0050(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SREA[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInitialTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDFQ[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0050(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03IM[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlTransform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FBN[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Minimum;                                                 // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Maximum;                                                 // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00B0(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBMS[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlRotator
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlRotator : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXF7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Minimum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Maximum;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0038(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1B1K[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_616K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0038(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNMD[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector2D
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector2D : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Minimum;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Maximum;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0028(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR41[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInteger
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInteger : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x001C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlFloat
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlFloat : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x001C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlBool
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlBool : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AT0N[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0014(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetCurveValue
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetCurveValue : public FRigUnit
	{
	public:
		class FName                                                Curve;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0014(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetDeltaTime
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Result;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFZR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetInitialBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MNP[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0050(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O64R[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetJointTransform
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_GetJointTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformGetterType                                       Type;                                                    // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        TransformSpace;                                          // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZ1R[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LG2K[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Output;                                                  // 0x00C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7AK[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0050(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpace;                                             // 0x0064(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PPU[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQZ1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Parent;                                                  // 0x0018(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UKV[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0060(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0074(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HUP[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetSpaceTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetSpaceTransform : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      SpaceType;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSKZ[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0050(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJYH[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransform : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6FS[0xA];                                   // 0x0016(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0050(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILIM[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetWorldTime
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Year;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Month;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Day;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeekDay;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hours;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minutes;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seconds;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverallSeconds;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeItem;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQSN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Siblings;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0028(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OP2[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            CachedSiblings;                                          // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QCC[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Children;                                                // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0028(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBZE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            CachedChildren;                                          // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParents
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChild;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse;                                                // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5SC[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0018(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0028(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WY3A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            CachedParents;                                           // 0x0040(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParent
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0020(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0034(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseExecution
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_InverseExecution : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0060) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_IsInteracting
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_IsInteracting : public FRigUnit
	{
	public:
		bool                                                       bIsInteracting;                                          // 0x0008(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5CE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemReplace
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Result;                                                  // 0x0024(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemExists
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemExists : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Exists;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2935[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0018(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVSY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBaseMutable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_N35U[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGO3[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBJP[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HVQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Buffer;                                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GMQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanFloat
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4ES[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDUW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N9S[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U1E[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TS8R[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolOr
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNand
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolAnd
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIGE[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNot
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RM8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorLerp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SYZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorMul
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorSub
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorAdd
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorFromFloat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUQS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      C;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlphaAngle;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BetaAngle;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GammaAngle;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UODU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAtan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAcos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAsin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatTan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRad
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDeg
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKLQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IfTrue;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IfFalse;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4UY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE1U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OS36[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z39H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLess
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67AU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreater
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXNF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3LQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F70A[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRemap
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4X75[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y567[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLerp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatClamp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSign
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatToInt
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRound
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY6R[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCeil
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z913[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatFloor
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7K3F[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAbs
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNegate
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSqrt
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V3K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatPow
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMax
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMin
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMod
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDiv
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMul
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSub
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAdd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77B2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntLessEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78DV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XZJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntLess
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGXU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntGreater
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WG4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntNotEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XX0W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65IR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntClamp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntSign
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntToFloat
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntAbs
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntNegate
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
	{
	public:
		int32_t                                                    A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RA3K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntPow
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMax
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMin
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMod
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntDiv
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntMul
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntSub
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntAdd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
	{
	public:
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y8M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_TG14[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOS6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_UCXQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHYZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_LQMH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q2W[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_7RH5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionDot
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_NZEF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOSA[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JGY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               IfTrue;                                                  // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               IfFalse;                                                 // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_KGV0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GPM[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_ZAAA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRZQ[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_8WAI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATP4[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_L9S6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionMul
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_6MHN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEBY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_58I1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R0H[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionScale
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_SCZ9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J1M[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_1GJV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5N5[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Euler;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASR9[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RD5O[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_MathRBFInterpolateVectorWorkData
	{
	public:
		unsigned char                                              UnknownData_3KMT[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFVectorDistanceType                                     DistanceFunction;                                        // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFKernelType                                             SmoothingFunction;                                       // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3N3[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingRadius;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeOutput;                                        // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ4Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MathRBFInterpolateVectorWorkData           WorkData;                                                // 0x0020(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
	 * Size -> 0x0040
	 */
	struct FMathRBFInterpolateVectorXform_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CHC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorXform_Target>       Targets;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Output;                                                  // 0x00C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateVectorQuat_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DQ1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorQuat_Target>        Targets;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FQuat                                               Output;                                                  // 0x00C0(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
	 * Size -> 0x001C
	 */
	struct FMathRBFInterpolateVectorColor_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorColor_Target>       Targets;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Output;                                                  // 0x00C0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
	 * Size -> 0x0018
	 */
	struct FMathRBFInterpolateVectorVector_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorVector_Target>      Targets;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             Output;                                                  // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMAV[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
	 * Size -> 0x0010
	 */
	struct FMathRBFInterpolateVectorFloat_Target
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
	{
	public:
		TArray<struct FMathRBFInterpolateVectorFloat_Target>       Targets;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Output;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JOG[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_MathRBFInterpolateQuatWorkData
	{
	public:
		unsigned char                                              UnknownData_UUYS[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
	{
	public:
		unsigned char                                              UnknownData_XSU5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERBFQuatDistanceType                                       DistanceFunction;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFKernelType                                             SmoothingFunction;                                       // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTMR[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingAngle;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeOutput;                                        // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TU1[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TwistAxis;                                               // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOEC[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MathRBFInterpolateQuatWorkData             WorkData;                                                // 0x0040(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
	 * Size -> 0x0040
	 */
	struct FMathRBFInterpolateQuatXform_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatXform_Target>         Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Output;                                                  // 0x00E0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateQuatQuat_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatQuat_Target>          Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FQuat                                               Output;                                                  // 0x00E0(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateQuatColor_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatColor_Target>         Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Output;                                                  // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateQuatVector_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7IF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatVector_Target>        Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             Output;                                                  // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGIY[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
	 * Size -> 0x0020
	 */
	struct FMathRBFInterpolateQuatFloat_Target
	{
	public:
		struct FQuat                                               Target;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MU0W[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
	{
	public:
		TArray<struct FMathRBFInterpolateQuatFloat_Target>         Targets;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Output;                                                  // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L2H[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_GJ0W[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigClampSpatialMode                                Type;                                                    // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2WN[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYT3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Space;                                                   // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8VS[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0084(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODGY[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigRotationOrder                                   RotationOrder;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1GQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     EulerTransform;                                          // 0x0060(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MF6[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_RAN7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EHE[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_QI96[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PVP[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WU33[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          IfTrue;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          IfFalse;                                                 // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformLerp
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_F1RF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZDT[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_BMTU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformInverse
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_J2CO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Local;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_O3HB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Global;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Local;                                                   // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_0XLB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMul
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_246R[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0040(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTPP[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		struct FEulerTransform                                     EulerTransform;                                          // 0x0008(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTUU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathIntersectPlane
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlanePoint;                                              // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlaneNormal;                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      Axis;                                                    // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigClampSpatialMode                                Type;                                                    // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIHQ[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Space;                                                   // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7IW[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZR6[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0030) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0030) NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J5L[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WRT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorParallel
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQV1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAngle
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQXA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMirror
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPF5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampLength
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumLength;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLength;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSetLength
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z1P[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnit
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDot
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOBA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0S1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCross
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDistance
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9V5M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLength
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRad
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDeg
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7H9T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IfTrue;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IfFalse;                                                 // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FYL[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WROL[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S0B[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONW3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRemap
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMinimum;                                           // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMaximum;                                           // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMinimum;                                           // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMaximum;                                           // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYG8[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZCN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLerp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClamp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSign
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRound
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCeil
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFloor
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAbs
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNegate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMax
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMin
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMod
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDiv
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorScale
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Factor;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORXH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMul
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSub
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAdd
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
	 * Size -> 0x0040
	 */
	struct FRigUnit_ModifyBoneTransforms_PerBone
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXDC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_ModifyTransforms_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyBoneTransforms_PerBone>       BoneToModify;                                            // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKAP[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyBoneTransforms_WorkData              WorkData;                                                // 0x0088(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
	 * Size -> 0x0040
	 */
	struct FRigUnit_ModifyTransforms_PerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCY9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyTransforms_PerItem>           ItemToModify;                                            // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29N7[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyTransforms_WorkData                  WorkData;                                                // 0x0088(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
	 * Size -> 0x0014
	 */
	struct FRigUnit_MultiFABRIK_EndEffector
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_MultiFABRIK_WorkData
	{
	public:
		unsigned char                                              UnknownData_JYI5[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                RootBone;                                                // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_MultiFABRIK_EndEffector>            Effectors;                                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L2N[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K8M[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MultiFABRIK_WorkData                       WorkData;                                                // 0x0090(0x0060) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Contains
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Contains : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Search;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSBC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartsWith
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_StartsWith : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Start;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ND96[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndsWith
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_EndsWith : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ending;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIJ5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameReplace
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameReplace : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Result;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameTruncate
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameTruncate : public FRigUnit_NameBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FromEnd;                                                 // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX2V[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Remainder;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Chopped;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NameConcat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NameConcat : public FRigUnit_NameBase
	{
	public:
		class FName                                                A;                                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                B;                                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Result;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseVector
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseVector : public FRigUnit_MathBase
	{
	public:
		struct FVector                                             Position;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Frequency;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Time;                                                    // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0W0[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75NG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PAN[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43CV[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x00B8(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY2N[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
	 * Size -> 0x00F8 (FullSize[0x0160] - InheritedSize[0x0068])
	 */
	struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Subject;                                                 // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0078(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNIW[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialGlobalTransform;                                  // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDZ8[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Switched;                                                // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1MJ[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSubject;                                           // 0x0104(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0118(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YQR[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeOffset;                                          // 0x0130(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBaseMutable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SimBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
	 * Size -> 0x0014
	 */
	struct FRigUnit_PointSimulation_BoneTarget
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslationPoint;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryAimPoint;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryAimPoint;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
	 * Size -> 0x0050
	 */
	struct FRigUnit_PointSimulation_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6I4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPointsAsSpheres;                                    // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIN8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
	 * Size -> 0x0088
	 */
	struct FRigUnit_PointSimulation_WorkData
	{
	public:
		struct FCRSimPointContainer                                Simulation;                                              // 0x0000(0x0078) NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           BoneIndices;                                             // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation
	 * Size -> 0x0198 (FullSize[0x0200] - InheritedSize[0x0068])
	 */
	struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Links;                                                   // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SimulatedStepsPerSecond;                                 // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECRSimPointIntegrateType                                   IntegratorType;                                          // 0x00AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7W5J[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerletBlend;                                             // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKC2[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_PointSimulation_BoneTarget>         BoneTargets;                                             // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTYU[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAimAxis;                                          // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAimAxis;                                        // 0x00D8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3TN[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_PointSimulation_DebugSettings              DebugSettings;                                           // 0x00F0(0x0050) NoDestructor, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0140(0x0030) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_PointSimulation_WorkData                   WorkData;                                                // 0x0170(0x0088) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUP1[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PrepareForExecution
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PrepareForExecution : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0060) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndProfilingTimer
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
	{
	public:
		int32_t                                                    NumberOfMeasurements;                                    // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEZX[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Prefix;                                                  // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeasurementsLeft;                                        // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartProfilingTimer
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ6N[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      OldParent;                                               // 0x0018(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOldParentInitial;                                       // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2O6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      NewParent;                                               // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewParentInitial;                                       // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN1E[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0070(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedOldParent;                                         // 0x0084(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedNewParent;                                         // 0x0098(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0LQ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PropagateTransform
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_PropagateTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecomputeGlobal;                                        // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToChildren;                                        // 0x0075(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0076(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5NF[0x1];                                   // 0x0077(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0078(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y67D[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAngle
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXZH[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3SE[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCUB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_R0LF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_UnaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_IOFK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseQuaterion
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_RTZ5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument0;                                               // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Argument1;                                               // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomVector : public FRigUnit_MathBase
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastResult;                                              // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastSeed;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomFloat : public FRigUnit_MathBase
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastResult;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastSeed;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SendEvent
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SendEvent : public FRigUnitMutable
	{
	public:
		ERigEvent                                                  Event;                                                   // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KWT[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Item;                                                    // 0x006C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetInSeconds;                                         // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDuringInteraction;                                  // 0x007D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2428[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SequenceExecution
	 * Size -> 0x01E0 (FullSize[0x01E8] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SequenceExecution : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0060) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           A;                                                       // 0x0068(0x0060) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           B;                                                       // 0x00C8(0x0060) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           C;                                                       // 0x0128(0x0060) Edit, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           D;                                                       // 0x0188(0x0060) Edit, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KSD[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x00D4(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTSO[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneRotation
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetBoneRotation : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Rotation;                                                // 0x0070(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GR22[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WRE[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x008C(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTransform
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LH95[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4HZ[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x00DC(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTranslation
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGB6[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_183F[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0088(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FESM[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlColor
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlColor : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0080(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R4S[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlOffset
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlOffset : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Offset;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UU5L[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00A4(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ELC[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlTransform
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL2K[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAP0[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x00B4(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TETD[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
	 * Size -> 0x0018
	 */
	struct FRigUnit_SetMultiControlRotator_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM17[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlRotator_Entry>       Entries;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHP3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlRotator
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlRotator : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQNM[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0084(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlVector : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFCN[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0084(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
	 * Size -> 0x0010
	 */
	struct FRigUnit_SetMultiControlVector2D_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlVector2D_Entry>      Entries;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NVU[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector2D
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlVector2D : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0074(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x007C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlInteger_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlInteger_Entry>       Entries;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWNM[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlInteger
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlInteger : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0078(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T56I[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlFloat_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlFloat_Entry>         Entries;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YIS[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlFloat
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlFloat : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0078(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O0Q[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlBool_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUFV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlBool_Entry>          Entries;                                                 // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlBool
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlBool : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T783[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0074(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVisibility
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetControlVisibility : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8A4[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Pattern;                                                 // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01S8[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetCurveValue
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetCurveValue : public FRigUnitMutable
	{
	public:
		class FName                                                Curve;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0074(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6YY[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBMS[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x00B8(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x00CC(0x0014) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x0074(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNFQ[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGUE[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedChild;                                             // 0x00C8(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x00DC(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                SpaceName;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNJY[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x00D4(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XE93[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceTransform
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Space;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHNG[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      SpaceType;                                               // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WPY[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x00B4(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EEP[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetScale
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetScale : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLU6[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7EI[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x008C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRotation
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetRotation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXS3[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0080(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ60[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0098(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK7U[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTranslation
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetTranslation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U16M[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SAG[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x008C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransform
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SetTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0075(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8ZC[0xA];                                   // 0x0076(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKN2[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x00B8(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT7J[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
	 * Size -> 0x0048
	 */
	struct FRigUnit_SlideChain_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHR5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ItemSegments;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BlendedTransforms;                                       // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChainPerItem
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NU5[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0080(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T406[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0080(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
	 * Size -> 0x0050
	 */
	struct FRigUnit_SpringIK_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1VM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEZ4[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
	 * Size -> 0x00B0
	 */
	struct FRigUnit_SpringIK_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedBones;                                             // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVector;                                        // 0x0010(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CUI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCRSimPointContainer                                Simulation;                                              // 0x0038(0x0078) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK
	 * Size -> 0x0168 (FullSize[0x01D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HierarchyStrength;                                       // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorStrength;                                        // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorRatio;                                           // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootStrength;                                            // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootRatio;                                               // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipPolePlane;                                          // 0x009C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x009D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EZ6[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x00B4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLiveSimulation;                                         // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J5R[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGBZ[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SpringIK_DebugSettings                     DebugSettings;                                           // 0x00D0(0x0050) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_SpringIK_WorkData                          WorkData;                                                // 0x0120(0x00B0) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SecondsToFrames
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
	{
	public:
		float                                                      Seconds;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frames;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FramesToSeconds
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
	{
	public:
		float                                                      Frames;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seconds;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Timeline
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Timeline : public FRigUnit_SimBase
	{
	public:
		float                                                      Speed;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BMU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_OUIL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59F6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQNZ[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetVector
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BF6T[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Buffer;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ2W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastInsertIndex;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperBound;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryTransformOp
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryTransformOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_WHR1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Argument0;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Argument1;                                               // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransform
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyTransform
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.ConstraintTarget
	 * Size -> 0x0040
	 */
	struct FConstraintTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0035(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPXA[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_TransformConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     ConstraintDataToTargets;                                 // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
	 * Size -> 0x00D8 (FullSize[0x0140] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0068(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46ZA[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0080(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigElementKey                                      BaseItem;                                                // 0x00B0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7KJ[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HWY[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x00D8(0x0060) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5RU3[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint
	 * Size -> 0x00C8 (FullSize[0x0130] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTTE[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0080(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseBone;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK17[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x00D0(0x0060) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
	 * Size -> 0x0030
	 */
	struct FRigUnit_TwistBones_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRatios;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemTransforms;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0068(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  TwistEaseType;                                           // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTT9[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO48[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x00A0(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  TwistEaseType;                                           // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VHP[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOT0[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x00A0(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
	 * Size -> 0x01B8 (FullSize[0x0220] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
	{
	public:
		class FName                                                StartJoint;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndJoint;                                                // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleTarget;                                              // 0x0078(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spin;                                                    // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQOO[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EndEffector;                                             // 0x0090(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IKBlend;                                                 // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XEK[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointFKTransform;                                   // 0x00D0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointFKTransform;                                     // 0x0100(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointFKTransform;                                     // 0x0130(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      PreviousFKIKBlend;                                       // 0x0160(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MN8M[0xC];                                   // 0x0164(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointIKTransform;                                   // 0x0170(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointIKTransform;                                     // 0x01A0(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointIKTransform;                                     // 0x01D0(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    StartJointIndex;                                         // 0x0200(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MidJointIndex;                                           // 0x0204(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EndJointIndex;                                           // 0x0208(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UpperLimbLength;                                         // 0x020C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LowerLimbLength;                                         // 0x0210(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_84ZG[0xC];                                   // 0x0214(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_C2LB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Root;                                                    // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USPH[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0080(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x009C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTMW[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Elbow;                                                   // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
	{
	public:
		struct FVector                                             Root;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Effector;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SA1F[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Elbow;                                                   // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVQD[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_TwoBoneIKSimple_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEDC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEQ2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
	 * Size -> 0x0148 (FullSize[0x01B0] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ItemA;                                                   // 0x0068(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      ItemB;                                                   // 0x0074(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      EffectorItem;                                            // 0x0080(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JSK[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x00DC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6GT[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      PoleVectorSpace;                                         // 0x00EC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TBZ[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemALength;                                             // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemBLength;                                             // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81NW[0xF];                                   // 0x0111(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x0120(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemAIndex;                                        // 0x0160(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemBIndex;                                        // 0x0174(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorItemIndex;                                 // 0x0188(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x019C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
	 * Size -> 0x0128 (FullSize[0x0190] - InheritedSize[0x0068])
	 */
	struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                BoneA;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneB;                                                   // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Effector;                                                // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E576[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x00DC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DS2[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IH6U[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x0100(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneAIndex;                                        // 0x0140(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneBIndex;                                        // 0x0154(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorBoneIndex;                                 // 0x0168(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x017C(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Distance_VectorVector
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Distance_VectorVector : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZZI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryVectorOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryVectorOp : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJX2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Target;                                                  // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damp;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRSimPoint                                         Point;                                                   // 0x0044(0x0028) Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInitialized;                                            // 0x006C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9NA[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_H81F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKEM[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x004C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ1O[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_BPI9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PKX[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMVJ[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_3L0N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EBH[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x002C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VUA[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugQuat
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_VBRF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1FV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRXP[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitVisualDebugPointMode                               Mode;                                                    // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPPN[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0030(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8M2O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigUnitVisualDebugPointMode                               Mode;                                                    // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWJQ[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceWorld
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceWorld : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          Channel;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFUQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FYF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW07[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_DSPJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Global;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_1OAC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               World;                                                   // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Global;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             World;                                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_624L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_L4OH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          World;                                                   // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.StructReference
	 * Size -> 0x0008
	 */
	struct FStructReference
	{
	public:
		unsigned char                                              UnknownData_ZV56[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
