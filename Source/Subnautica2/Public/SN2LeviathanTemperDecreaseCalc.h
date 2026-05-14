#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "SN2LeviathanTemperDecreaseCalc.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2LeviathanTemperDecreaseCalc : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float TemperDecreasePerSec;
    
    UPROPERTY(Config)
    float TemperDecreaseThresholdPercent;
    
public:
    USN2LeviathanTemperDecreaseCalc();

};

