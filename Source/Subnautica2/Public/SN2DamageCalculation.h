#pragma once
#include "CoreMinimal.h"
#include "SN2GameplayEffectExecutionCalculation.h"
#include "SN2DamageCalculation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2DamageCalculation : public USN2GameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USN2DamageCalculation();

};

