#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWETemperatureDeveloperSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWETEMPERATUREREGIONS_API UUWETemperatureDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float DefaultTemperature;
    
    UUWETemperatureDeveloperSettings();

};

