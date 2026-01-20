// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem/Door.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"

// Sets default values
ADoor::ADoor()
{
	// Set parameters for this actor
	PrimaryActorTick.bCanEverTick = false;
	OpenAngle = 90.0f;
	RotationSpeed = 2.0f;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
	if (DoorFrameMesh)
	{
		DoorFrameMesh->SetupAttachment(RootComp);
	}

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	if (DoorMesh)
	{
		DoorMesh->SetupAttachment(RootComp);
	}
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	if (DoorMesh)
	{
		FRotator Rot = bIsOpen ? FRotator(0.f, OpenAngle, 0.f) : FRotator::ZeroRotator;
		DoorMesh->SetRelativeRotation(Rot);
	}
}

void ADoor::Interact(AActor* Interactor)
{
	// Toggle door state
	bIsOpen = !bIsOpen;
	// Set target yaw based on door state
	TargetYaw = bIsOpen ? OpenAngle : 0.0f;
	// Start door rotation animation
	GetWorldTimerManager().SetTimer(TimerHandle_DoorAnim, this, &ADoor::UpdateDoorRotation, 0.01f, true);
}

void ADoor::UpdateDoorRotation()
{
	// Smoothly rotate door towards target yaw
	CurrentYaw = FMath::FInterpTo(CurrentYaw, TargetYaw, 0.01f, RotationSpeed);
	FRotator NewRotation = FRotator(0.0f, CurrentYaw, 0.0f);
	DoorMesh->SetRelativeRotation(NewRotation);
	// Stop the timer when the door reaches the target yaw
	if (FMath::IsNearlyEqual(CurrentYaw, TargetYaw, 1.0f))
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_DoorAnim);
	}
}

bool ADoor::CanInteract(AActor* Interactor) const
{
	// Manage requirements for interaction (actually can always interact in this simple example)
	return true;
}

FText ADoor::ShowInteractionPrompt(AActor* Interactor)
{
	return bIsOpen ? FText::FromString("Close Door") : FText::FromString("Open Door");
}

