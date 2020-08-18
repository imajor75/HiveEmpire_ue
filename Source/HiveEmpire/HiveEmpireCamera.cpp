// Fill out your copyright notice in the Description page of Project Settings.

#include "HiveEmpireCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AHiveEmpireCamera::AHiveEmpireCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>( "SpringArm" );
	camera = CreateDefaultSubobject<UCameraComponent>( "Camera" );
	mesh = CreateDefaultSubobject<UStaticMeshComponent>( "Mesh" );

	RootComponent = mesh;
	springArm->SetupAttachment( RootComponent );
	springArm->TargetArmLength = 350.0f;
	springArm->SetWorldRotation( FRotator( -60.0f, 0, 0 ) );
	camera->SetupAttachment( springArm );

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AHiveEmpireCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHiveEmpireCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHiveEmpireCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

