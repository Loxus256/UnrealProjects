// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/Door.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_ADoor();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoor ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADoor;
UClass* ADoor::GetPrivateStaticClass()
{
	using TClass = ADoor;
	if (!Z_Registration_Info_UClass_ADoor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Door"),
			Z_Registration_Info_UClass_ADoor.InnerSingleton,
			StaticRegisterNativesADoor,
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
	return Z_Registration_Info_UClass_ADoor.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionSystem/Door.h" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrameMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "DoorSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Door settings\n" },
#endif
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "DoorSettings" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[] = {
		{ "Category", "DoorSettings" },
		{ "ModuleRelativePath", "InteractionSystem/Door.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADoor constinit property declarations ************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrameMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static void NewProp_bIsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADoor constinit property declarations **************************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADoor_Statics

// ********** Begin Class ADoor Property Definitions ***********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrameMesh = { "DoorFrameMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorFrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorFrameMesh_MetaData), NewProp_DoorFrameMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOpen_MetaData), NewProp_bIsOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrameMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
// ********** End Class ADoor Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractionInterface), false },  // 4075654829
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
void ADoor::StaticRegisterNativesADoor()
{
}
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADoor);
ADoor::~ADoor() {}
// ********** End Class ADoor **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_Door_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 4226345377U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_Door_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_Door_h__Script_PortfolioMultiproj_1150153746{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_Door_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_InteractionSystem_Door_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
