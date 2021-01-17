// Fill out your copyright notice in the Description page of Project Settings.


#include "Tigris/Actors/Pawns/TigPawnBase.h"

// Sets default values
ATigPawnBase::ATigPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATigPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATigPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATigPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

