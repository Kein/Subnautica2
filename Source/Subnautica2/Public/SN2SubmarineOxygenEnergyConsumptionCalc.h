#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "SN2SubmarineOxygenEnergyConsumptionCalc.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SubmarineOxygenEnergyConsumptionCalc : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2SubmarineEnergyConsumptionPerPlayerPerSecond;
    
    USN2SubmarineOxygenEnergyConsumptionCalc();

};

