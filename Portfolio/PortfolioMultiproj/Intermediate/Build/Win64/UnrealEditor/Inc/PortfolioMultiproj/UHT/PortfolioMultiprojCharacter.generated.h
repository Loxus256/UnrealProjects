// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortfolioMultiprojCharacter.h"

#ifdef PORTFOLIOMULTIPROJ_PortfolioMultiprojCharacter_generated_h
#error "PortfolioMultiprojCharacter.generated.h already included, missing '#pragma once' in PortfolioMultiprojCharacter.h"
#endif
#define PORTFOLIOMULTIPROJ_PortfolioMultiprojCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APortfolioMultiprojCharacter *********************************************
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_APortfolioMultiprojCharacter_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_APortfolioMultiprojCharacter_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortfolioMultiprojCharacter(); \
	friend struct ::Z_Construct_UClass_APortfolioMultiprojCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_APortfolioMultiprojCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APortfolioMultiprojCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_APortfolioMultiprojCharacter_NoRegister) \
	DECLARE_SERIALIZER(APortfolioMultiprojCharacter)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortfolioMultiprojCharacter(APortfolioMultiprojCharacter&&) = delete; \
	APortfolioMultiprojCharacter(const APortfolioMultiprojCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortfolioMultiprojCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortfolioMultiprojCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APortfolioMultiprojCharacter) \
	NO_API virtual ~APortfolioMultiprojCharacter();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_21_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortfolioMultiprojCharacter;

// ********** End Class APortfolioMultiprojCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
