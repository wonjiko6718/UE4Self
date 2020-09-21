// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/SpinMush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinMush() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_ASpinMush_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_ASpinMush();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASpinMush::StaticRegisterNativesASpinMush()
	{
	}
	UClass* Z_Construct_UClass_ASpinMush_NoRegister()
	{
		return ASpinMush::StaticClass();
	}
	struct Z_Construct_UClass_ASpinMush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlusBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlusBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpinMush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinMush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpinMush.h" },
		{ "ModuleRelativePath", "SpinMush.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinMush_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "SpinMush" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpinMush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpinMush_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpinMush, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpinMush_Statics::NewProp_Trigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpinMush_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinMush_Statics::NewProp_PlusBody_MetaData[] = {
		{ "Category", "SpinMush" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpinMush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpinMush_Statics::NewProp_PlusBody = { "PlusBody", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpinMush, PlusBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpinMush_Statics::NewProp_PlusBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpinMush_Statics::NewProp_PlusBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinMush_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "SpinMush" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpinMush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpinMush_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpinMush, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpinMush_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpinMush_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpinMush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinMush_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinMush_Statics::NewProp_PlusBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinMush_Statics::NewProp_Body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpinMush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpinMush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpinMush_Statics::ClassParams = {
		&ASpinMush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpinMush_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpinMush_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpinMush_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpinMush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpinMush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpinMush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpinMush, 1419180922);
	template<> UE4SELF_API UClass* StaticClass<ASpinMush>()
	{
		return ASpinMush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpinMush(Z_Construct_UClass_ASpinMush, &ASpinMush::StaticClass, TEXT("/Script/UE4Self"), TEXT("ASpinMush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpinMush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
