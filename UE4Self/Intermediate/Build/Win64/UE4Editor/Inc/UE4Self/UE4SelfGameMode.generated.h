// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef UE4SELF_UE4SelfGameMode_generated_h
#error "UE4SelfGameMode.generated.h already included, missing '#pragma once' in UE4SelfGameMode.h"
#endif
#define UE4SELF_UE4SelfGameMode_generated_h

#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4SelfGameMode(); \
	friend struct Z_Construct_UClass_AUE4SelfGameMode_Statics; \
public: \
	DECLARE_CLASS(AUE4SelfGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4Self"), UE4SELF_API) \
	DECLARE_SERIALIZER(AUE4SelfGameMode)


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAUE4SelfGameMode(); \
	friend struct Z_Construct_UClass_AUE4SelfGameMode_Statics; \
public: \
	DECLARE_CLASS(AUE4SelfGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4Self"), UE4SELF_API) \
	DECLARE_SERIALIZER(AUE4SelfGameMode)


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE4SELF_API AUE4SelfGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4SelfGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE4SELF_API, AUE4SelfGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4SelfGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE4SELF_API AUE4SelfGameMode(AUE4SelfGameMode&&); \
	UE4SELF_API AUE4SelfGameMode(const AUE4SelfGameMode&); \
public:


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE4SELF_API AUE4SelfGameMode(AUE4SelfGameMode&&); \
	UE4SELF_API AUE4SelfGameMode(const AUE4SelfGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE4SELF_API, AUE4SelfGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4SelfGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4SelfGameMode)


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AUE4SelfGameMode, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AUE4SelfGameMode, CurrentWidget); }


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_10_PROLOG
#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_RPC_WRAPPERS \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_INCLASS \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_INCLASS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_UE4SelfGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4SELF_API UClass* StaticClass<class AUE4SelfGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Self_Source_UE4Self_UE4SelfGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
