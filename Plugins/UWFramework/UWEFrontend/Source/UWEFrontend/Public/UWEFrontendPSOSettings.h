#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEFrontendPSOSettings.generated.h"

class UPSOPrecacheDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEFRONTEND_API UUWEFrontendPSOSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UPSOPrecacheDataAsset> PSOPreloadDataAsset;
    
    UUWEFrontendPSOSettings();

};

