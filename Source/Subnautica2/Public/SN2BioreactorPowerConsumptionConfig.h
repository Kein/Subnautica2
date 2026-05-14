#pragma once
#include "CoreMinimal.h"
#include "SN2BioreactorPowerConsumptionConfig.generated.h"

USTRUCT(BlueprintType)
struct FSN2BioreactorPowerConsumptionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float PowerProduction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float ConsumptionTimeScalar;
    
    SUBNAUTICA2_API FSN2BioreactorPowerConsumptionConfig();
};

