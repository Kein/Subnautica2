#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeSimulation.h"
#include "UWEPowerStorageSimulation.generated.h"

UCLASS()
class UWEPOWER_API UUWEPowerStorageSimulation : public UUWEPowerNodeSimulation {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWEPowerStorageChargeChanged, float, Charge);
    
    UPROPERTY(SaveGame)
    bool bUseReservePower;
    
    UPROPERTY(SaveGame)
    float MaxCharge;
    
    UPROPERTY(SaveGame)
    float ChargeRateLimit;
    
    UPROPERTY(SaveGame)
    float CurrentCharge;
    
    UUWEPowerStorageSimulation();

};

