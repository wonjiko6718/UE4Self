// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4SelfGameMode.h"
#include "MainCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

AUE4SelfGameMode::AUE4SelfGameMode()
{
	// set default pawn class to our Blueprinted character
	DefaultPawnClass = AMainCharacter::StaticClass();
	HUDCatchPlayerCollectNum = 0;
}
void AUE4SelfGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (HudWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
void AUE4SelfGameMode::Tick(float DeltaTime)
{
	AMainCharacter* HUDCatchPlayer = Cast<AMainCharacter>(DefaultPawnClass);
	HUDCatchPlayerCollectNum = HUDCatchPlayer->PlayerCollectNum;
}