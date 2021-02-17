// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "UE4SelfGameMode.generated.h"

UCLASS(minimalapi)
class AUE4SelfGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AUE4SelfGameMode();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		int32 HUDCatchPlayerCollectNum;
protected:
	virtual void BeginPlay() override;
	// Widget class to use for our HUD screen
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HudWidgetClass;
	// The instance of the HUD
	UPROPERTY(EditAnywhere)
		class UUserWidget* CurrentWidget;
};



