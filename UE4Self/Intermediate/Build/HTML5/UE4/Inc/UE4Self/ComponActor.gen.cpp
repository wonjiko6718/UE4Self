// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/ComponActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponActor() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_AComponActor_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_AComponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AComponActor::StaticRegisterNativesAComponActor()
	{
	}
	UClass* Z_Construct_UClass_AComponActor_NoRegister()
	{
		return AComponActor::StaticClass();
	}
	struct Z_Construct_UClass_AComponActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponActorBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponActorBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponActor.h" },
		{ "ModuleRelativePath", "ComponActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponActor_Statics::NewProp_ComponActorBody_MetaData[] = {
		{ "Category", "ComponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ComponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponActor_Statics::NewProp_ComponActorBody = { "ComponActorBody", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponActor, ComponActorBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponActor_Statics::NewProp_ComponActorBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_AComponActor_Statics::NewProp_ComponActorBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComponActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponActor_Statics::NewProp_ComponActorBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponActor_Statics::ClassParams = {
		&AComponActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComponActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AComponActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AComponActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AComponActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponActor, 1924452812);
	template<> UE4SELF_API UClass* StaticClass<AComponActor>()
	{
		return AComponActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponActor(Z_Construct_UClass_AComponActor, &AComponActor::StaticClass, TEXT("/Script/UE4Self"), TEXT("AComponActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
