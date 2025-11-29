// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortfolioMultiprojPlayerController.h"

#ifdef PORTFOLIOMULTIPROJ_PortfolioMultiprojPlayerController_generated_h
#error "PortfolioMultiprojPlayerController.generated.h already included, missing '#pragma once' in PortfolioMultiprojPlayerController.h"
#endif
#define PORTFOLIOMULTIPROJ_PortfolioMultiprojPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APortfolioMultiprojPlayerController **************************************
struct Z_Construct_UClass_APortfolioMultiprojPlayerController_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_APortfolioMultiprojPlayerController_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortfolioMultiprojPlayerController(); \
	friend struct ::Z_Construct_UClass_APortfolioMultiprojPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_APortfolioMultiprojPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APortfolioMultiprojPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_APortfolioMultiprojPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APortfolioMultiprojPlayerController)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortfolioMultiprojPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortfolioMultiprojPlayerController(APortfolioMultiprojPlayerController&&) = delete; \
	APortfolioMultiprojPlayerController(const APortfolioMultiprojPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortfolioMultiprojPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortfolioMultiprojPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortfolioMultiprojPlayerController) \
	NO_API virtual ~APortfolioMultiprojPlayerController();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_16_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortfolioMultiprojPlayerController;

// ********** End Class APortfolioMultiprojPlayerController ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
