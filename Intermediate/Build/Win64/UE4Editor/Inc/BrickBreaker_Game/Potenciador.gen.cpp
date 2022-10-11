// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrickBreaker_Game/Potenciador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotenciador() {}
// Cross Module References
	BRICKBREAKER_GAME_API UClass* Z_Construct_UClass_APotenciador_NoRegister();
	BRICKBREAKER_GAME_API UClass* Z_Construct_UClass_APotenciador();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BrickBreaker_Game();
// End Cross Module References
	void APotenciador::StaticRegisterNativesAPotenciador()
	{
	}
	UClass* Z_Construct_UClass_APotenciador_NoRegister()
	{
		return APotenciador::StaticClass();
	}
	struct Z_Construct_UClass_APotenciador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotenciador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BrickBreaker_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotenciador_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Potenciador.h" },
		{ "ModuleRelativePath", "Potenciador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotenciador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotenciador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotenciador_Statics::ClassParams = {
		&APotenciador::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotenciador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotenciador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotenciador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotenciador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotenciador, 3180882349);
	template<> BRICKBREAKER_GAME_API UClass* StaticClass<APotenciador>()
	{
		return APotenciador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotenciador(Z_Construct_UClass_APotenciador, &APotenciador::StaticClass, TEXT("/Script/BrickBreaker_Game"), TEXT("APotenciador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotenciador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
