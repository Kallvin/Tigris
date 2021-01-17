// Fill out your copyright notice in the Description page of Project Settings.


#include "Tigris/HUDs/TigHUDBase.h"
#include "CoreMinimal.h"

FString ATigHUDBase::GetProjectVersion()
{
    FString ProjectVersion;
    GConfig->GetString(
        TEXT("/Script/EngineSettings.GeneralProjectSettings"),
        TEXT("ProjectVersion"),
        ProjectVersion,
        GGameIni
    );

    return ProjectVersion;
}