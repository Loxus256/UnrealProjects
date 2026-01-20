// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolioMultiproj_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	PORTFOLIOMULTIPROJ_API UFunction* Z_Construct_UDelegateFunction_PortfolioMultiproj_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortfolioMultiproj;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj()
	{
		if (!Z_Registration_Info_UPackage__Script_PortfolioMultiproj.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_PortfolioMultiproj_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/PortfolioMultiproj",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xE23E3D0C,
			0x70CA6D32,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortfolioMultiproj.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_PortfolioMultiproj.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortfolioMultiproj(Z_Construct_UPackage__Script_PortfolioMultiproj, TEXT("/Script/PortfolioMultiproj"), Z_Registration_Info_UPackage__Script_PortfolioMultiproj, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE23E3D0C, 0x70CA6D32));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
