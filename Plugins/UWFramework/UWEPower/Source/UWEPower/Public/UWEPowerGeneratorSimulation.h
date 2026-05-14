#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeSimulation.h"
#include "UWEPowerGeneratorSimulation.generated.h"

UCLASS(BlueprintType)
class UWEPOWER_API UUWEPowerGeneratorSimulation : public UUWEPowerNodeSimulation {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    float BasePowerGeneration;
    
    UPROPERTY(SaveGame)
    float PowerGenerationScale;
    
    UUWEPowerGeneratorSimulation();

    UFUNCTION(BlueprintCallable)
    void SetBasePowerGeneration(float NewBasePowerGen);
    
};

