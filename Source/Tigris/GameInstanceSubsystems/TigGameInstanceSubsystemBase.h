// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TigGameInstanceSubsystemBase.generated.h"

/**
 * 
 */

//Reserving this class to perform basic things that a GameInstance would not need to contain, allowing future plugins to override the game instance if needed. Also removes complexity in this manner.
UCLASS()
class TIGRIS_API UTigGameInstanceSubsystemBase : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
};
