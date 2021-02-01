// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestUE4GameMode.h"
#include "TestUE4HUD.h"
#include "TestUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ATestUE4GameMode::ATestUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestUE4HUD::StaticClass();
}
