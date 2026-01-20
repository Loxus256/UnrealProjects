// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainMenu/MainMenuWidget.h"
#include "MainMenu/GI_MainMenuLevelSelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UMainMenuWidget();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
PORTFOLIOMULTIPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMainMenuWidget Function HandleLevelClick ********************************
struct Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics
{
	struct MainMenuWidget_eventHandleLevelClick_Parms
	{
		int32 LevelIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenuEvents" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLevelClick constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLevelClick constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLevelClick Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventHandleLevelClick_Parms, LevelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::NewProp_LevelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::PropPointers) < 2048);
// ********** End Function HandleLevelClick Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "HandleLevelClick", 	Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::MainMenuWidget_eventHandleLevelClick_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::MainMenuWidget_eventHandleLevelClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execHandleLevelClick)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LevelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLevelClick(Z_Param_LevelIndex);
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function HandleLevelClick **********************************

// ********** Begin Class UMainMenuWidget Function OnCreditsClick **********************************
struct Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenuEvents" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCreditsClick constinit property declarations ************************
// ********** End Function OnCreditsClick constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnCreditsClick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnCreditsClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCreditsClick();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnCreditsClick ************************************

// ********** Begin Class UMainMenuWidget Function OnLevel1Click ***********************************
struct Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers for button clicks\n" },
#endif
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers for button clicks" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnLevel1Click constinit property declarations *************************
// ********** End Function OnLevel1Click constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnLevel1Click", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnLevel1Click)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevel1Click();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnLevel1Click *************************************

// ********** Begin Class UMainMenuWidget Function OnLevel2Click ***********************************
struct Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnLevel2Click constinit property declarations *************************
// ********** End Function OnLevel2Click constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnLevel2Click", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnLevel2Click)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevel2Click();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnLevel2Click *************************************

// ********** Begin Class UMainMenuWidget Function OnQuitClick *************************************
struct Z_Construct_UFunction_UMainMenuWidget_OnQuitClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenuEvents" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnQuitClick constinit property declarations ***************************
// ********** End Function OnQuitClick constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnQuitClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnQuitClick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnQuitClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnQuitClick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnQuitClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnQuitClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnQuitClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClick();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnQuitClick ***************************************

// ********** Begin Class UMainMenuWidget **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMainMenuWidget;
UClass* UMainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UMainMenuWidget;
	if (!Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MainMenuWidget"),
			Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton,
			StaticRegisterNativesUMainMenuWidget,
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
	return Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainMenu/MainMenuWidget.h" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Level1_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Buttons bound from BP_MainMenuWidget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buttons bound from BP_MainMenuWidget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_BtnLevel1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Level2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_BtnLevel2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Credits_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_BtnCredits_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Quit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_BtnQuit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelsData_MetaData[] = {
		{ "Category", "Levels" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMainMenuWidget constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Level1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_BtnLevel1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Level2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_BtnLevel2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Credits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_BtnCredits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Quit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_BtnQuit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMainMenuWidget constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleLevelClick"), .Pointer = &UMainMenuWidget::execHandleLevelClick },
		{ .NameUTF8 = UTF8TEXT("OnCreditsClick"), .Pointer = &UMainMenuWidget::execOnCreditsClick },
		{ .NameUTF8 = UTF8TEXT("OnLevel1Click"), .Pointer = &UMainMenuWidget::execOnLevel1Click },
		{ .NameUTF8 = UTF8TEXT("OnLevel2Click"), .Pointer = &UMainMenuWidget::execOnLevel2Click },
		{ .NameUTF8 = UTF8TEXT("OnQuitClick"), .Pointer = &UMainMenuWidget::execOnQuitClick },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_HandleLevelClick, "HandleLevelClick" }, // 3135405675
		{ &Z_Construct_UFunction_UMainMenuWidget_OnCreditsClick, "OnCreditsClick" }, // 4204742190
		{ &Z_Construct_UFunction_UMainMenuWidget_OnLevel1Click, "OnLevel1Click" }, // 2000301149
		{ &Z_Construct_UFunction_UMainMenuWidget_OnLevel2Click, "OnLevel2Click" }, // 3871677862
		{ &Z_Construct_UFunction_UMainMenuWidget_OnQuitClick, "OnQuitClick" }, // 3895320164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMainMenuWidget_Statics

// ********** Begin Class UMainMenuWidget Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Level1 = { "Btn_Level1", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Btn_Level1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Level1_MetaData), NewProp_Btn_Level1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnLevel1 = { "Txt_BtnLevel1", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Txt_BtnLevel1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_BtnLevel1_MetaData), NewProp_Txt_BtnLevel1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Level2 = { "Btn_Level2", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Btn_Level2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Level2_MetaData), NewProp_Btn_Level2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnLevel2 = { "Txt_BtnLevel2", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Txt_BtnLevel2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_BtnLevel2_MetaData), NewProp_Txt_BtnLevel2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Credits = { "Btn_Credits", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Btn_Credits), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Credits_MetaData), NewProp_Btn_Credits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnCredits = { "Txt_BtnCredits", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Txt_BtnCredits), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_BtnCredits_MetaData), NewProp_Txt_BtnCredits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Quit = { "Btn_Quit", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Btn_Quit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Quit_MetaData), NewProp_Btn_Quit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnQuit = { "Txt_BtnQuit", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Txt_BtnQuit), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_BtnQuit_MetaData), NewProp_Txt_BtnQuit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelsData_Inner = { "LevelsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelData, METADATA_PARAMS(0, nullptr) }; // 1231314703
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelsData = { "LevelsData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, LevelsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelsData_MetaData), NewProp_LevelsData_MetaData) }; // 1231314703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Level1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnLevel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Level2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnLevel2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Credits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Btn_Quit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Txt_BtnQuit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LevelsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
// ********** End Class UMainMenuWidget Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMainMenuWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// ********** End Class UMainMenuWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_MainMenuWidget_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 1587127642U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_MainMenuWidget_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_MainMenuWidget_h__Script_PortfolioMultiproj_3507008212{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_MainMenuWidget_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_MainMenuWidget_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
