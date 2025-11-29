// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashScreen/GM_SplashScreen.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"

//BeginPlay override
void AGM_SplashScreen::BeginPlay()
{
	Super::BeginPlay();

	if (LogoWidgetClass)
	{
		//Create Widget
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), LogoWidgetClass);

		if (CurrentWidget)
		{
			//Show Widget on screen
			CurrentWidget->AddToViewport();
		}
	}
}
