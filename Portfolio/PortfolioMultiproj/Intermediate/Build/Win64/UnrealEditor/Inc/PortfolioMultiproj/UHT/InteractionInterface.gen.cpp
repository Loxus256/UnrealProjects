// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/InteractionInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UInteractionInterface();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractionInterface ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractionInterface;
UClass* UInteractionInterface::GetPrivateStaticClass()
{
	using TClass = UInteractionInterface;
	if (!Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractionInterface"),
			Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton,
			StaticRegisterNativesUInteractionInterface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
{
	return UInteractionInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionSystem/InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInteractionInterface constinit property declarations ****************
// ********** End Interface UInteractionInterface constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInteractionInterface_Statics
UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
	&UInteractionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
};
void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
{
}
UClass* Z_Construct_UClass_UInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
}
UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractionInterface);
// ********** End Interface UInteractionInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_InteractionInterface_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 4075654829U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_InteractionInterface_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_InteractionInterface_h__Script_PortfolioMultiproj_3313390853{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_InteractionInterface_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_InteractionInterface_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
