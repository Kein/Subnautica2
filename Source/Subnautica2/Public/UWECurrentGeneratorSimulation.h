#pragma once
#include "CoreMinimal.h"
#include "UWEPowerGeneratorSimulation.h"
#include "UWECurrentGeneratorSimulation.generated.h"

UCLASS()
class SUBNAUTICA2_API UUWECurrentGeneratorSimulation : public UUWEPowerGeneratorSimulation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 NumCurrents;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    float ScaleWithNoCurrent;
    
    UUWECurrentGeneratorSimulation();

};

