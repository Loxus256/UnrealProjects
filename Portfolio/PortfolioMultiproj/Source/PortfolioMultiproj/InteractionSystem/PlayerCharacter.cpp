// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InteractionSystem/InteractionInterface.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"

APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera component
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	// Attach the camera component to the capsule component
	CameraComp->SetupAttachment(GetCapsuleComponent());
	// Position the camera slightly above the eyes
	CameraComp->SetRelativeLocation(FVector(0.0f, 0.0f, 64.0f));
	// Allow the pawn to control rotation.
	CameraComp->bUsePawnControlRotation = true;

	// Set default interaction distance
	InteractionDistance = 300.0f;

	
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Add the input mapping context
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (DefaultInputMappingContext)
			{
				Subsystem->AddMappingContext(DefaultInputMappingContext, 0);
			}
		}
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Perform the interaction trace
	TraceForInteractions();
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Cast to Enhanced Input Component
	if (UEnhancedInputComponent* EnhancedInputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind the interact action
		if (InteractAction)
		{
			EnhancedInputComp->BindAction(InteractAction, ETriggerEvent::Triggered, this, &APlayerCharacter::OnInteract);
		}
	}
}

void APlayerCharacter::TraceForInteractions()
{
	if (!CameraComp) return;

	// Get the player's viewpoint
	FVector Start = CameraComp->GetComponentLocation();
	FVector End = Start + (CameraComp->GetForwardVector() * InteractionDistance);

	// Define the trace parameters
	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this); // Ignore self

	// Perform the line trace
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceParams))
	{
		// Assign the hit actor
		AActor* HitActor = HitResult.GetActor();

		// Check if the hit actor implements the interaction interface
		if (HitActor && HitActor->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
		{
			// Update the current interactable if it's different
			if (HitActor != CurrentInteractable.GetObject())
			{
				TScriptInterface<IInteractionInterface> NewInterface;
				NewInterface.SetObject(HitActor);
				NewInterface.SetInterface(Cast<IInteractionInterface>(HitActor));
				CurrentInteractable = NewInterface;

				// Show interaction UI

			}
		}
	}
	else
	{
		// No interactable found so clear the current one
		CurrentInteractable = nullptr;

		// Hide interaction UI

	}
}

// Execute interaction
void APlayerCharacter::OnInteract(const FInputActionValue& Value)
{
	// Call the interact function if we are focusing on an interactable
	if (CurrentInteractable)
	{
		if (IInteractionInterface* Interface = CurrentInteractable.GetInterface())
		{
			Interface->Interact(this);
		}
	}
}

