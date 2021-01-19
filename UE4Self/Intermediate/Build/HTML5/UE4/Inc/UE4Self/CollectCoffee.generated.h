// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
#ifdef UE4SELF_CollectCoffee_generated_h
#error "CollectCoffee.generated.h already included, missing '#pragma once' in CollectCoffee.h"
#endif
#define UE4SELF_CollectCoffee_generated_h

#define UE4Self_Source_UE4Self_CollectCoffee_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEffectFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_PSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEffectFinished(Z_Param_PSystem); \
		P_NATIVE_END; \
	}


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffectFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_PSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEffectFinished(Z_Param_PSystem); \
		P_NATIVE_END; \
	}


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectCoffee(); \
	friend struct Z_Construct_UClass_ACollectCoffee_Statics; \
public: \
	DECLARE_CLASS(ACollectCoffee, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(ACollectCoffee)


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectCoffee(); \
	friend struct Z_Construct_UClass_ACollectCoffee_Statics; \
public: \
	DECLARE_CLASS(ACollectCoffee, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(ACollectCoffee)


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectCoffee(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectCoffee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectCoffee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectCoffee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectCoffee(ACollectCoffee&&); \
	NO_API ACollectCoffee(const ACollectCoffee&); \
public:


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectCoffee(ACollectCoffee&&); \
	NO_API ACollectCoffee(const ACollectCoffee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectCoffee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectCoffee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectCoffee)


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_PRIVATE_PROPERTY_OFFSET
#define UE4Self_Source_UE4Self_CollectCoffee_h_9_PROLOG
#define UE4Self_Source_UE4Self_CollectCoffee_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_RPC_WRAPPERS \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_INCLASS \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Self_Source_UE4Self_CollectCoffee_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_INCLASS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_CollectCoffee_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4SELF_API UClass* StaticClass<class ACollectCoffee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Self_Source_UE4Self_CollectCoffee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
