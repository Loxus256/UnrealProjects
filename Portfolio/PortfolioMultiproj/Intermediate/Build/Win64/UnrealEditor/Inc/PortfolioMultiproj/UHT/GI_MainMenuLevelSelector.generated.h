// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenu/GI_MainMenuLevelSelector.h"

#ifdef PORTFOLIOMULTIPROJ_GI_MainMenuLevelSelector_generated_h
#error "GI_MainMenuLevelSelector.generated.h already included, missing '#pragma once' in GI_MainMenuLevelSelector.h"
#endif
#define PORTFOLIOMULTIPROJ_GI_MainMenuLevelSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLevelData;

// ********** Begin ScriptStruct FLevelData ********************************************************
struct Z_Construct_UScriptStruct_FLevelData_Statics;
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelData_Statics; \
	PORTFOLIOMULTIPROJ_API static class UScriptStruct* StaticStruct();


struct FLevelData;
// ********** End ScriptStruct FLevelData **********************************************************

// ********** Begin Class UGI_MainMenuLevelSelector ************************************************
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadLevelByName); \
	DECLARE_FUNCTION(execLoadLevelByReference);


struct Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_UGI_MainMenuLevelSelector_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGI_MainMenuLevelSelector(); \
	friend struct ::Z_Construct_UClass_UGI_MainMenuLevelSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_UGI_MainMenuLevelSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UGI_MainMenuLevelSelector, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_UGI_MainMenuLevelSelector_NoRegister) \
	DECLARE_SERIALIZER(UGI_MainMenuLevelSelector)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGI_MainMenuLevelSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGI_MainMenuLevelSelector(UGI_MainMenuLevelSelector&&) = delete; \
	UGI_MainMenuLevelSelector(const UGI_MainMenuLevelSelector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGI_MainMenuLevelSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGI_MainMenuLevelSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGI_MainMenuLevelSelector) \
	NO_API virtual ~UGI_MainMenuLevelSelector();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_25_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGI_MainMenuLevelSelector;

// ********** End Class UGI_MainMenuLevelSelector **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GI_MainMenuLevelSelector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
