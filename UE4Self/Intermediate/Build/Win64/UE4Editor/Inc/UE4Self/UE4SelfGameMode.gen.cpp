// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/UE4SelfGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4SelfGameMode() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_AUE4SelfGameMode_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_AUE4SelfGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
// End Cross Module References
	void AUE4SelfGameMode::StaticRegisterNativesAUE4SelfGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4SelfGameMode_NoRegister()
	{
		return AUE4SelfGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4SelfGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4SelfGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4SelfGameMode.h" },
		{ "ModuleRelativePath", "UE4SelfGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4SelfGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4SelfGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4SelfGameMode_Statics::ClassParams = {
		&AUE4SelfGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4SelfGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4SelfGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4SelfGameMode, 4167279348);
	template<> UE4SELF_API UClass* StaticClass<AUE4SelfGameMode>()
	{
		return AUE4SelfGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4SelfGameMode(Z_Construct_UClass_AUE4SelfGameMode, &AUE4SelfGameMode::StaticClass, TEXT("/Script/UE4Self"), TEXT("AUE4SelfGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4SelfGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
