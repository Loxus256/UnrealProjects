// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_MainMenuLevelSelector.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOMULTIPROJ_API UGI_MainMenuLevelSelector : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="GameManagement")
	void LoadLevelByName(FName LevelName, bool bClearUI = true);
};
