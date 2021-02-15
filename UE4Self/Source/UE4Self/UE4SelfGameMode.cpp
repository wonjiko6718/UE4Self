// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4SelfGameMode.h"
#include "MainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4SelfGameMode::AUE4SelfGameMode()
{
	// set default pawn class to our Blueprinted character
	DefaultPawnClass = AMainCharacter::StaticClass();
}
void AUE4SelfGameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if(CurrentWidget != nullptr) 
	{
		CurrentWidget->RemoveFromViewport(); // Before widget Delete
		CurrentWidget = nullptr;
	}
	if(NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if(CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
void AUE4SelfGameMode::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWidget(StartingWidgetClass); // View main Widget
}