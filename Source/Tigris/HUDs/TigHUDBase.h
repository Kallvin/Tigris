// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TigHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class TIGRIS_API ATigHUDBase : public AHUD
{
	GENERATED_BODY()
	
		//Retrieve the Projects version number, supposedly you must change the value from 1.0.0.0 in order for it to add to the config files.
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetProjectVersion"), Category = "Game Config")
		static FString GetProjectVersion();

};
