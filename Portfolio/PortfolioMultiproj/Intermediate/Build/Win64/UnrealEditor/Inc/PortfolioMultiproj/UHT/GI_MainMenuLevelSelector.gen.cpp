// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainMenu/GI_MainMenuLevelSelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGI_MainMenuLevelSelector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UGI_MainMenuLevelSelector();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UGI_MainMenuLevelSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGI_MainMenuLevelSelector Function LoadLevelByName ***********************
struct Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics
{
	struct GI_MainMenuLevelSelector_eventLoadLevelByName_Parms
	{
		FName LevelName;
		bool bClearUI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameManagement" },
		{ "CPP_Default_bClearUI", "true" },
		{ "ModuleRelativePath", "MainMenu/GI_MainMenuLevelSelector.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadLevelByName constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static void NewProp_bClearUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadLevelByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadLevelByName Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GI_MainMenuLevelSelector_eventLoadLevelByName_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_bClearUI_SetBit(void* Obj)
{
	((GI_MainMenuLevelSelector_eventLoadLevelByName_Parms*)Obj)->bClearUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_bClearUI = { "bClearUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GI_MainMenuLevelSelector_eventLoadLevelByName_Parms), &Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_bClearUI_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::NewProp_bClearUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::PropPointers) < 2048);
// ********** End Function LoadLevelByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGI_MainMenuLevelSelector, nullptr, "LoadLevelByName", 	Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::GI_MainMenuLevelSelector_eventLoadLevelByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::GI_MainMenuLevelSelector_eventLoadLevelByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGI_MainMenuLevelSelector::execLoadLevelByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_GET_UBOOL(Z_Param_bClearUI);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadLevelByName(Z_Param_LevelName,Z_Param_bClearUI);
	P_NATIVE_END;
}
// ********** End Class UGI_MainMenuLevelSelector Function LoadLevelByName *************************

// ********** Begin Class UGI_MainMenuLevelSelector ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGI_MainMenuLevelSelector;
UClass* UGI_MainMenuLevelSelector::GetPrivateStaticClass()
{
	using TClass = UGI_MainMenuLevelSelector;
	if (!Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GI_MainMenuLevelSelector"),
			Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.InnerSingleton,
			StaticRegisterNativesUGI_MainMenuLevelSelector,
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
	return Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.InnerSingleton;
}
UClass* Z_Construct_UClass_UGI_MainMenuLevelSelector_NoRegister()
{
	return UGI_MainMenuLevelSelector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainMenu/GI_MainMenuLevelSelector.h" },
		{ "ModuleRelativePath", "MainMenu/GI_MainMenuLevelSelector.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGI_MainMenuLevelSelector constinit property declarations ****************
// ********** End Class UGI_MainMenuLevelSelector constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadLevelByName"), .Pointer = &UGI_MainMenuLevelSelector::execLoadLevelByName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGI_MainMenuLevelSelector_LoadLevelByName, "LoadLevelByName" }, // 2981921414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_MainMenuLevelSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics
UObject* (*const Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::ClassParams = {
	&UGI_MainMenuLevelSelector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::Class_MetaDataParams)
};
void UGI_MainMenuLevelSelector::StaticRegisterNativesUGI_MainMenuLevelSelector()
{
	UClass* Class = UGI_MainMenuLevelSelector::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGI_MainMenuLevelSelector()
{
	if (!Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.OuterSingleton, Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGI_MainMenuLevelSelector.OuterSingleton;
}
UGI_MainMenuLevelSelector::UGI_MainMenuLevelSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGI_MainMenuLevelSelector);
UGI_MainMenuLevelSelector::~UGI_MainMenuLevelSelector() {}
// ********** End Class UGI_MainMenuLevelSelector **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGI_MainMenuLevelSelector, UGI_MainMenuLevelSelector::StaticClass, TEXT("UGI_MainMenuLevelSelector"), &Z_Registration_Info_UClass_UGI_MainMenuLevelSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_MainMenuLevelSelector), 3814500854U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h__Script_PortfolioMultiproj_2038544523{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
