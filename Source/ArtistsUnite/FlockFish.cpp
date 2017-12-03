// Fill out your copyright notice in the Description page of Project Settings.

#include "FlockFish.h"


// Sets default values
AFlockFish::AFlockFish()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlockFish::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlockFish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFlockFish::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

