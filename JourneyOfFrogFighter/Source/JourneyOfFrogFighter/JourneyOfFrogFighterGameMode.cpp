// Copyright Epic Games, Inc. All Rights Reserved.

#include "JourneyOfFrogFighterGameMode.h"
#include "JourneyOfFrogFighterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJourneyOfFrogFighterGameMode::AJourneyOfFrogFighterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
