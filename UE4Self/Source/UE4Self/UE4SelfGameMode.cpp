// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4SelfGameMode.h"
#include "UE4SelfCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4SelfGameMode::AUE4SelfGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
