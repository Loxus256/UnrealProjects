// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu/MainMenuWidget.h"
// Needed for loading levels via GameInstance
#include "GI_MainMenuLevelSelector.h"
// Needed for quitting the game
#include "Kismet/KismetSystemLibrary.h"
// Needed for failsafe level loading
#include "Kismet/GameplayStatics.h"

// Native construct override to bind button events
void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Automatically set level display names based on asset names
	for (int i = 0; i < LevelsData.Num(); i++)
	{
		FString AutoLevelName = LevelsData[i].LevelAsset.GetAssetName();

		// Remove "L_" prefix
		if (AutoLevelName.StartsWith("L_"))
		{
			AutoLevelName = AutoLevelName.RightChop(2);
		}
		// Set the display name
		LevelsData[i].LevelDisplayName = FText::FromString(AutoLevelName);
	}

	// Bind button click events
	if (Btn_Level1)
	{
		Btn_Level1->OnClicked.AddDynamic(this, &UMainMenuWidget::OnLevel1Click);
	}
	if (Btn_Level2)
	{
		Btn_Level2->OnClicked.AddDynamic(this, &UMainMenuWidget::OnLevel2Click);
	}
	if (Btn_Credits)
	{
		Btn_Credits->OnClicked.AddDynamic(this, &UMainMenuWidget::OnCreditsClick);
	}
	if (Btn_Quit)
	{
		Btn_Quit->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClick);
	}

	// Set button texts based on LevelsData
	if (LevelsData.Num() >= 1)
		{
		if (Txt_BtnLevel1)	Txt_BtnLevel1->SetText(LevelsData[0].LevelDisplayName);
	}

	if (LevelsData.Num() >= 2)
	{
		if (Txt_BtnLevel2)	Txt_BtnLevel2->SetText(LevelsData[1].LevelDisplayName);
	}

	if (LevelsData.Num() >= 3)
	{
		if (Txt_BtnCredits)	Txt_BtnCredits->SetText(LevelsData[2].LevelDisplayName);
	}

	if (Txt_BtnQuit)
	{
		Txt_BtnQuit->SetText(FText::FromString("Quit"));
	}
}

// Handle Level button clicks
void UMainMenuWidget::OnLevel1Click()
{
	HandleLevelClick(0);
}

void UMainMenuWidget::OnLevel2Click()
{
	HandleLevelClick(1);
}

// Handle Credits button click
void UMainMenuWidget::OnCreditsClick()
{
	HandleLevelClick(2);
}

// Handle Level buttons clicks
void UMainMenuWidget::HandleLevelClick(int LevelIndex)
{
	// Check if index exists
	if (LevelsData.IsValidIndex(LevelIndex))
	{
		// Use GameInstance to load level
		if (UGI_MainMenuLevelSelector* GI = Cast<UGI_MainMenuLevelSelector>(GetGameInstance()))
		{
			GI->LoadLevelByReference(LevelsData[LevelIndex]);
		}
		else
		{
			//Failsafe in case GameInstance is not of expected type
			UE_LOG(LogTemp, Error, TEXT("Failed to get GameInstance as UGI_MainMenuLevelSelector"));
			UGameplayStatics::OpenLevel(this, FName(LevelsData[LevelIndex].LevelAsset.GetAssetName()));
		}
	}
}

// Handle Quit button click
void UMainMenuWidget::OnQuitClick()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
}