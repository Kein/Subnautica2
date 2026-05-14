#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "SN2BreathingCalc.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2BreathingCalc : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2BreathingOxygenPerSecond;
    
    UPROPERTY(Config)
    float SN2InteriorSuffocateMultiplier;
    
    USN2BreathingCalc();

};

