// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu/GI_MainMenuLevelSelector.h"
//Needed for level loading
#include "Kismet/GameplayStatics.h"
//Needed for UI cleanup
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/UserWidget.h"

// Function to load a level by soft reference
void UGI_MainMenuLevelSelector::LoadLevelByReference(const FLevelData& LevelData)
{
	//Check if LevelAsset is valid
	if (LevelData.LevelAsset.IsNull())
	{
		UE_LOG(LogTemp, Warning, TEXT("Level load failed: invalid LevelAsset"));
		return;
	}
	
	//Get the level name from the asset
	FName LevelName = FName(*LevelData.LevelAsset.GetAssetName());
	
	//Load the level
	LoadLevelByName(LevelName, true);
}


void UGI_MainMenuLevelSelector::LoadLevelByName(FName LevelName, bool bClearUI)
{
	//Check if LevelName is valid
	if (LevelName.IsNone())
	{
		UE_LOG(LogTemp, Warning, TEXT("Level load failed: invalid LevelName"));
		return;
	}

	//Clear UI if needed
	if (bClearUI)
	{
		//Get all widgets
		TArray<UUserWidget*> AllWidgets;
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), AllWidgets, UUserWidget::StaticClass(), false);
		for (UUserWidget* Widget : AllWidgets)
		{
			if (Widget)
			{
				//Stop animations and remove from parent
				Widget->StopAllAnimations();
				Widget->RemoveFromParent();
			}
		}
	}
	//Load the level
	UE_LOG(LogTemp, Log, TEXT("Loading Level: %s"), *LevelName.ToString());
	UGameplayStatics::OpenLevel(GetWorld(), LevelName);
}
