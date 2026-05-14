#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "SN2CrushDamageCalc.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2CrushDamageCalc : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2CrushDamageDepthMultiplier;
    
    USN2CrushDamageCalc();

};

