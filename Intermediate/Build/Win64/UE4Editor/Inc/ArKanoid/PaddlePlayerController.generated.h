// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_PaddlePlayerController_generated_h
#error "PaddlePlayerController.generated.h already included, missing '#pragma once' in PaddlePlayerController.h"
#endif
#define ARKANOID_PaddlePlayerController_generated_h

#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_SPARSE_DATA
#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddlePlayerController(); \
	friend struct Z_Construct_UClass_APaddlePlayerController_Statics; \
public: \
	DECLARE_CLASS(APaddlePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArKanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddlePlayerController)


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPaddlePlayerController(); \
	friend struct Z_Construct_UClass_APaddlePlayerController_Statics; \
public: \
	DECLARE_CLASS(APaddlePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArKanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddlePlayerController)


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddlePlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddlePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddlePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddlePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddlePlayerController(APaddlePlayerController&&); \
	NO_API APaddlePlayerController(const APaddlePlayerController&); \
public:


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddlePlayerController(APaddlePlayerController&&); \
	NO_API APaddlePlayerController(const APaddlePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddlePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddlePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddlePlayerController)


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObj() { return STRUCT_OFFSET(APaddlePlayerController, BallObj); }


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_14_PROLOG
#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_SPARSE_DATA \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_RPC_WRAPPERS \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_INCLASS \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_SPARSE_DATA \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	ArKanoid_Source_ArKanoid_PaddlePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class APaddlePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArKanoid_Source_ArKanoid_PaddlePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
