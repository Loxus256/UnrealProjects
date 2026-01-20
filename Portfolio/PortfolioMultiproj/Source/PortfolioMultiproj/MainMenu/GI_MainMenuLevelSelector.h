// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "GI_MainMenuLevelSelector.generated.h"

USTRUCT(BlueprintType)

struct FLevelData
{
	GENERATED_BODY()

	// Display name for the level in the UI button
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelData")
	FText LevelDisplayName;

	// Soft reference to the level asset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelData")
	TSoftObjectPtr<UWorld> LevelAsset;
};

UCLASS()
class PORTFOLIOMULTIPROJ_API UGI_MainMenuLevelSelector : public UGameInstance
{
	GENERATED_BODY()
	
public:
	// Function to load a level by soft reference
	UFUNCTION(BlueprintCallable, Category = "LevelManagement")
	void LoadLevelByReference(const FLevelData& LevelData);

	// Function to load a level by its name and optionally clear the UI
	UFUNCTION(BlueprintCallable, Category="LevelManagement")
	void LoadLevelByName(FName LevelName, bool bClearUI = true);
};
