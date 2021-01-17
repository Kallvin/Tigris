// Fill out your copyright notice in the Description page of Project Settings.


#include "Tigris/Actors/Pawns/Characters/TigCharacterBase.h"

// Sets default values
ATigCharacterBase::ATigCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATigCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATigCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATigCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

