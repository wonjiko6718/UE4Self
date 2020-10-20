// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4SelfGameMode.h"
#include "Pawn_Main.h"
#include "UObject/ConstructorHelpers.h"

AUE4SelfGameMode::AUE4SelfGameMode()
{
	// set default pawn class to our Blueprinted character
	DefaultPawnClass = APawn_Main::StaticClass();
}
