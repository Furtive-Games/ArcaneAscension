// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArcaneAscensionGameMode.h"
#include "ArcaneAscensionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArcaneAscensionGameMode::AArcaneAscensionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
