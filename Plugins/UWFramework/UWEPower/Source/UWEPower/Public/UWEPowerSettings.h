#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPowerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UWEPOWER_API UUWEPowerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannelForPowerTransmitterLinkage;
    
    UPROPERTY(Config, EditAnywhere)
    float MaximumTransmissionDistance;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, float> EnergyBiofuelConsumptionTagToValue;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag EnergyBiofuelConsumptionInfoTag;
    
    UUWEPowerSettings();

};

