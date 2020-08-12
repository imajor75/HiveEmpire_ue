// Copyright Epic Games, Inc. All Rights Reserved.


#include "HiveEmpireGameModeBase.h"
#include "HiveEmpirePlayerController.h"

AHiveEmpireGameModeBase::AHiveEmpireGameModeBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	PlayerControllerClass = AHiveEmpirePlayerController::StaticClass();
	DefaultPawnClass = nullptr;
};

void AHiveEmpireGameModeBase::InitGame(
	const FString& MapName,
	const FString& Options,
	FString& ErrorMessage)
{
	AGameModeBase::InitGame(MapName, Options, ErrorMessage);
};