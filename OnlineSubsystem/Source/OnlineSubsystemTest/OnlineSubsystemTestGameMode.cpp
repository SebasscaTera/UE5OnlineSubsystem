// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlineSubsystemTestGameMode.h"
#include "OnlineSubsystemTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnlineSubsystemTestGameMode::AOnlineSubsystemTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
