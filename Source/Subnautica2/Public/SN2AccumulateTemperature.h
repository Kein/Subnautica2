#pragma once
#include "CoreMinimal.h"
#include "SN2GameplayEffectExecutionCalculation.h"
#include "SN2AccumulateTemperature.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2AccumulateTemperature : public USN2GameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USN2AccumulateTemperature();

};

