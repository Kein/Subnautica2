#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "UWEFarmingSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEFARMING_API UUWEFarmingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, float> SeedGrowerTierTagToRipeningTime;
    
    UUWEFarmingSettings();

    UFUNCTION(BlueprintPure)
    float GetRipeningTime(FGameplayTag SeedGrowerTierTag) const;
    
};

