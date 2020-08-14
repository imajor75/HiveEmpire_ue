// Copyright Epic Games, Inc. All Rights Reserved.


#include "Ground.h"
#include "HiveEmpireGameModeBase.h"
#include "HiveEmpireGameState.h"
#include "HiveEmpirePlayerController.h"

AHiveEmpireGameModeBase::AHiveEmpireGameModeBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	PlayerControllerClass = AHiveEmpirePlayerController::StaticClass();
	DefaultPawnClass = nullptr;
	GameStateClass = AHiveEmpireGameState::StaticClass();
};

void AHiveEmpireGameModeBase::InitGame(
	const FString& MapName,
	const FString& Options,
	FString& ErrorMessage)
{
	AGameModeBase::InitGame(MapName, Options, ErrorMessage);

	UWorld* w = GetWorld();
	if (w == nullptr)
		return;

	FVector l( 70, -50, -10 );
	w->SpawnActor( AGround::StaticClass(), &l );
};