// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyHeroCreatorGameMode.h"
#include "MyHeroCreatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyHeroCreatorGameMode::AMyHeroCreatorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
