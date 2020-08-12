// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HiveEmpireGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HIVEEMPIRE_API AHiveEmpireGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		AHiveEmpireGameModeBase(const FObjectInitializer& ObjectInitializer);

		void InitGame(
			const FString& MapName,
			const FString& Options,
			FString& ErrorMessage) override;
};
