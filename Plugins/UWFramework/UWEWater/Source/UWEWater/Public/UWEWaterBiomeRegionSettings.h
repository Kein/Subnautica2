#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEWaterBiomeRegionSettings.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEWATER_API UUWEWaterBiomeRegionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> MaterialBiome;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> MaterialBiomeMasked;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> MaterialAir;
    
    UUWEWaterBiomeRegionSettings();

};

