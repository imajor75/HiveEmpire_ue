// Fill out your copyright notice in the Description page of Project Settings.


#include "HiveEmpirePlayerController.h"

AHiveEmpirePlayerController::AHiveEmpirePlayerController(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	if (PlayerCameraManager)
	{
		USceneComponent *u = PlayerCameraManager->GetTransformComponent();
		int y = 8; y;
	};
};
