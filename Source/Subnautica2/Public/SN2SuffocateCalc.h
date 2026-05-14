#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "SN2SuffocateCalc.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SuffocateCalc : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float OxygenConsumptionPerSec;
    
    UPROPERTY(Config)
    float OxygenConsumptionPerSecBelowNominalDepth;
    
public:
    USN2SuffocateCalc();

};

