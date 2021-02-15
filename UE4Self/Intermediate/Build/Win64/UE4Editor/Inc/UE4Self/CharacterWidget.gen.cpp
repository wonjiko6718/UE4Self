// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/CharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterWidget() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_UCharacterWidget_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_UCharacterWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
// End Cross Module References
	void UCharacterWidget::StaticRegisterNativesUCharacterWidget()
	{
	}
	UClass* Z_Construct_UClass_UCharacterWidget_NoRegister()
	{
		return UCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterWidget.h" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterWidget_Statics::ClassParams = {
		&UCharacterWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterWidget, 1336016922);
	template<> UE4SELF_API UClass* StaticClass<UCharacterWidget>()
	{
		return UCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterWidget(Z_Construct_UClass_UCharacterWidget, &UCharacterWidget::StaticClass, TEXT("/Script/UE4Self"), TEXT("UCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
