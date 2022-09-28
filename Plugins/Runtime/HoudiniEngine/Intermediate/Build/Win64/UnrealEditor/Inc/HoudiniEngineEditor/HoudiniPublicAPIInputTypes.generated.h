// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EHoudiniPublicAPICurveBreakpointParameterization : uint8;
enum class EHoudiniPublicAPICurveMethod : uint8;
enum class EHoudiniPublicAPICurveType : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h
#error "HoudiniPublicAPIInputTypes.generated.h already included, missing '#pragma once' in HoudiniPublicAPIInputTypes.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS \
	virtual bool GetInputObjects_Implementation(TArray<UObject*>& OutObjects); \
	virtual bool SetInputObjects_Implementation(TArray<UObject*> const& InObjects); \
	virtual bool IsAcceptableObjectForInput_Implementation(UObject* InObject) const; \
 \
	DECLARE_FUNCTION(execGetInputObjects); \
	DECLARE_FUNCTION(execSetInputObjects); \
	DECLARE_FUNCTION(execIsAcceptableObjectForInput);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjects_Implementation(TArray<UObject*>& OutObjects); \
	virtual bool SetInputObjects_Implementation(TArray<UObject*> const& InObjects); \
 \
	DECLARE_FUNCTION(execGetInputObjects); \
	DECLARE_FUNCTION(execSetInputObjects); \
	DECLARE_FUNCTION(execIsAcceptableObjectForInput);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_EVENT_PARMS \
	struct HoudiniPublicAPIInput_eventGetInputObjects_Parms \
	{ \
		TArray<UObject*> OutObjects; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventGetInputObjects_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms \
	{ \
		UObject* InObject; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIInput_eventSetInputObjects_Parms \
	{ \
		TArray<UObject*> InObjects; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventSetInputObjects_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIInput, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIInput, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIInput(UHoudiniPublicAPIInput&&); \
	NO_API UHoudiniPublicAPIInput(const UHoudiniPublicAPIInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIInput(UHoudiniPublicAPIInput&&); \
	NO_API UHoudiniPublicAPIInput(const UHoudiniPublicAPIInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_58_PROLOG \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_EVENT_PARMS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_RPC_WRAPPERS \
	virtual bool GetInputObjectTransformOffsetArray_Implementation(TArray<FTransform>& OutInputObjectTransformOffsetArray) const; \
	virtual bool GetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform& OutTransform) const; \
	virtual bool SetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform const& InTransform); \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetInputObjectTransformOffsetArray); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execSetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjectTransformOffsetArray_Implementation(TArray<FTransform>& OutInputObjectTransformOffsetArray) const; \
	virtual bool GetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform& OutTransform) const; \
	virtual bool SetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform const& InTransform); \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetInputObjectTransformOffsetArray); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execSetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_EVENT_PARMS \
	struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms \
	{ \
		int32 InInputObjectIndex; \
		FTransform OutTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms \
	{ \
		TArray<FTransform> OutInputObjectTransformOffsetArray; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform OutTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms \
	{ \
		int32 InInputObjectIndex; \
		FTransform InTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform InTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeoInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeoInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeoInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeoInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIGeoInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeoInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeoInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeoInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeoInput(UHoudiniPublicAPIGeoInput&&); \
	NO_API UHoudiniPublicAPIGeoInput(const UHoudiniPublicAPIGeoInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeoInput(UHoudiniPublicAPIGeoInput&&); \
	NO_API UHoudiniPublicAPIGeoInput(const UHoudiniPublicAPIGeoInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeoInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeoInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeoInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_189_PROLOG \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_EVENT_PARMS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIGeoInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_RPC_WRAPPERS \
	virtual void SetCurveBreakpointParameterization_Implementation(const EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization); \
	virtual EHoudiniPublicAPICurveBreakpointParameterization GetCurveBreakpointParameterization_Implementation() const; \
	virtual void SetCurveMethod_Implementation(const EHoudiniPublicAPICurveMethod InCurveMethod); \
	virtual EHoudiniPublicAPICurveMethod GetCurveMethod_Implementation() const; \
	virtual void SetCurveType_Implementation(const EHoudiniPublicAPICurveType InCurveType); \
	virtual EHoudiniPublicAPICurveType GetCurveType_Implementation() const; \
	virtual void SetReversed_Implementation(bool bInReversed); \
	virtual bool IsReversed_Implementation() const; \
	virtual void SetClosed_Implementation(bool bInClosed); \
	virtual bool IsClosed_Implementation() const; \
	virtual void GetCurvePoints_Implementation(TArray<FTransform>& OutCurvePoints) const; \
	virtual void ClearCurvePoints_Implementation(); \
	virtual void AppendCurvePoint_Implementation(FTransform const& InCurvePoint); \
	virtual void SetCurvePoints_Implementation(TArray<FTransform> const& InCurvePoints); \
 \
	DECLARE_FUNCTION(execSetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execGetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execSetCurveMethod); \
	DECLARE_FUNCTION(execGetCurveMethod); \
	DECLARE_FUNCTION(execSetCurveType); \
	DECLARE_FUNCTION(execGetCurveType); \
	DECLARE_FUNCTION(execSetReversed); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execSetClosed); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execClearCurvePoints); \
	DECLARE_FUNCTION(execAppendCurvePoint); \
	DECLARE_FUNCTION(execSetCurvePoints);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execGetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execSetCurveMethod); \
	DECLARE_FUNCTION(execGetCurveMethod); \
	DECLARE_FUNCTION(execSetCurveType); \
	DECLARE_FUNCTION(execGetCurveType); \
	DECLARE_FUNCTION(execSetReversed); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execSetClosed); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execClearCurvePoints); \
	DECLARE_FUNCTION(execAppendCurvePoint); \
	DECLARE_FUNCTION(execSetCurvePoints);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_EVENT_PARMS \
	struct HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms \
	{ \
		FTransform InCurvePoint; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms \
	{ \
		EHoudiniPublicAPICurveBreakpointParameterization ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms() \
			: ReturnValue((EHoudiniPublicAPICurveBreakpointParameterization)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms \
	{ \
		EHoudiniPublicAPICurveMethod ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms() \
			: ReturnValue((EHoudiniPublicAPICurveMethod)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms \
	{ \
		TArray<FTransform> OutCurvePoints; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms \
	{ \
		EHoudiniPublicAPICurveType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms() \
			: ReturnValue((EHoudiniPublicAPICurveType)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventIsClosed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventIsClosed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventIsReversed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventIsReversed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetClosed_Parms \
	{ \
		bool bInClosed; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms \
	{ \
		EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms \
	{ \
		EHoudiniPublicAPICurveMethod InCurveMethod; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms \
	{ \
		TArray<FTransform> InCurvePoints; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms \
	{ \
		EHoudiniPublicAPICurveType InCurveType; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetReversed_Parms \
	{ \
		bool bInReversed; \
	};


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInputObject)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInputObject)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPICurveInputObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInputObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInputObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInputObject(UHoudiniPublicAPICurveInputObject&&); \
	NO_API UHoudiniPublicAPICurveInputObject(const UHoudiniPublicAPICurveInputObject&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInputObject(UHoudiniPublicAPICurveInputObject&&); \
	NO_API UHoudiniPublicAPICurveInputObject(const UHoudiniPublicAPICurveInputObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInputObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInputObject)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_329_PROLOG \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_EVENT_PARMS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_332_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPICurveInputObject>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPICurveInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInput(UHoudiniPublicAPICurveInput&&); \
	NO_API UHoudiniPublicAPICurveInput(const UHoudiniPublicAPICurveInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInput(UHoudiniPublicAPICurveInput&&); \
	NO_API UHoudiniPublicAPICurveInput(const UHoudiniPublicAPICurveInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_504_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_507_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPICurveInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIAssetInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetInput(UHoudiniPublicAPIAssetInput&&); \
	NO_API UHoudiniPublicAPIAssetInput(const UHoudiniPublicAPIAssetInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetInput(UHoudiniPublicAPIAssetInput&&); \
	NO_API UHoudiniPublicAPIAssetInput(const UHoudiniPublicAPIAssetInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_542_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_545_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIAssetInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIWorldInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIGeoInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIWorldInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIWorldInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIGeoInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIWorldInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIWorldInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIWorldInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIWorldInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIWorldInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIWorldInput(UHoudiniPublicAPIWorldInput&&); \
	NO_API UHoudiniPublicAPIWorldInput(const UHoudiniPublicAPIWorldInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIWorldInput(UHoudiniPublicAPIWorldInput&&); \
	NO_API UHoudiniPublicAPIWorldInput(const UHoudiniPublicAPIWorldInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIWorldInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIWorldInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIWorldInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_568_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_571_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIWorldInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPILandscapeInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPILandscapeInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPILandscapeInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPILandscapeInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPILandscapeInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPILandscapeInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPILandscapeInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPILandscapeInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPILandscapeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPILandscapeInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPILandscapeInput(UHoudiniPublicAPILandscapeInput&&); \
	NO_API UHoudiniPublicAPILandscapeInput(const UHoudiniPublicAPILandscapeInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPILandscapeInput(UHoudiniPublicAPILandscapeInput&&); \
	NO_API UHoudiniPublicAPILandscapeInput(const UHoudiniPublicAPILandscapeInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPILandscapeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPILandscapeInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPILandscapeInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_617_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_620_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPILandscapeInput>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_RPC_WRAPPERS \
	virtual bool GetInputObjectTransformOffsetArray_Implementation(TArray<FTransform>& OutInputObjectTransformOffsetArray) const; \
	virtual bool GetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform& OutTransform) const; \
	virtual bool SetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform const& InTransform); \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetInputObjectTransformOffsetArray); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execSetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjectTransformOffsetArray_Implementation(TArray<FTransform>& OutInputObjectTransformOffsetArray) const; \
	virtual bool GetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform& OutTransform) const; \
	virtual bool SetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform const& InTransform); \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetInputObjectTransformOffsetArray); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execSetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_EVENT_PARMS \
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms \
	{ \
		int32 InInputObjectIndex; \
		FTransform OutTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms \
	{ \
		TArray<FTransform> OutInputObjectTransformOffsetArray; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform OutTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms \
	{ \
		int32 InInputObjectIndex; \
		FTransform InTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform InTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeometryCollectionInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeometryCollectionInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeometryCollectionInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeometryCollectionInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeometryCollectionInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeometryCollectionInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIGeometryCollectionInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeometryCollectionInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeometryCollectionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeometryCollectionInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeometryCollectionInput(UHoudiniPublicAPIGeometryCollectionInput&&); \
	NO_API UHoudiniPublicAPIGeometryCollectionInput(const UHoudiniPublicAPIGeometryCollectionInput&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeometryCollectionInput(UHoudiniPublicAPIGeometryCollectionInput&&); \
	NO_API UHoudiniPublicAPIGeometryCollectionInput(const UHoudiniPublicAPIGeometryCollectionInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeometryCollectionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeometryCollectionInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeometryCollectionInput)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_670_PROLOG \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_EVENT_PARMS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_673_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIGeometryCollectionInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h


#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVETYPE(op) \
	op(EHoudiniPublicAPICurveType::Invalid) \
	op(EHoudiniPublicAPICurveType::Polygon) \
	op(EHoudiniPublicAPICurveType::Nurbs) \
	op(EHoudiniPublicAPICurveType::Bezier) \
	op(EHoudiniPublicAPICurveType::Points) 

enum class EHoudiniPublicAPICurveType : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>();

#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVEMETHOD(op) \
	op(EHoudiniPublicAPICurveMethod::Invalid) \
	op(EHoudiniPublicAPICurveMethod::CVs) \
	op(EHoudiniPublicAPICurveMethod::Breakpoints) \
	op(EHoudiniPublicAPICurveMethod::Freehand) 

enum class EHoudiniPublicAPICurveMethod : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>();

#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVEBREAKPOINTPARAMETERIZATION(op) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Invalid) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Uniform) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Chord) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Centripetal) 

enum class EHoudiniPublicAPICurveBreakpointParameterization : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveBreakpointParameterization>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
