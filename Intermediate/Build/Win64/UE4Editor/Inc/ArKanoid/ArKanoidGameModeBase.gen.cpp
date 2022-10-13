// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArKanoid/ArKanoidGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArKanoidGameModeBase() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AArKanoidGameModeBase_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AArKanoidGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArKanoid();
// End Cross Module References
	void AArKanoidGameModeBase::StaticRegisterNativesAArKanoidGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArKanoidGameModeBase_NoRegister()
	{
		return AArKanoidGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArKanoidGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArKanoidGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArKanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArKanoidGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArKanoidGameModeBase.h" },
		{ "ModuleRelativePath", "ArKanoidGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArKanoidGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArKanoidGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArKanoidGameModeBase_Statics::ClassParams = {
		&AArKanoidGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArKanoidGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArKanoidGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArKanoidGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArKanoidGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArKanoidGameModeBase, 1793042617);
	template<> ARKANOID_API UClass* StaticClass<AArKanoidGameModeBase>()
	{
		return AArKanoidGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArKanoidGameModeBase(Z_Construct_UClass_AArKanoidGameModeBase, &AArKanoidGameModeBase::StaticClass, TEXT("/Script/ArKanoid"), TEXT("AArKanoidGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArKanoidGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
