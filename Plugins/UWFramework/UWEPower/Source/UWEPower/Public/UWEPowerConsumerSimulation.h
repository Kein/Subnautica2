#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeSimulation.h"
#include "UWEPowerConsumerSimulation.generated.h"

UCLASS()
class UWEPOWER_API UUWEPowerConsumerSimulation : public UUWEPowerNodeSimulation {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWEPowerConsumerIsPoweredChanged, bool, bIsPowered);
    
    UPROPERTY(SaveGame)
    float ContinuousPowerDrain;
    
    UPROPERTY(SaveGame)
    bool bIsOn;
    
    UUWEPowerConsumerSimulation();

};

