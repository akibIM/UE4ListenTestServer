// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestServerGameMode.h"
#include "TestServerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestServerGameMode::ATestServerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
