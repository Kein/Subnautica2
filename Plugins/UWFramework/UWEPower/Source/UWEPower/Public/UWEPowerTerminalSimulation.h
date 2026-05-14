#pragma once
#include "CoreMinimal.h"
#include "UWEPowerConsumerSimulation.h"
#include "UWEPowerTerminalStoredBattery.h"
#include "UWEPowerTerminalSimulation.generated.h"

UCLASS()
class UWEPOWER_API UUWEPowerTerminalSimulation : public UUWEPowerConsumerSimulation {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWEPowerTerminalBatteryStatusChanged);
    
    UPROPERTY(SaveGame)
    int32 InventoryId;
    
    UPROPERTY(SaveGame)
    bool bChargingEnabled;
    
    UPROPERTY(SaveGame)
    float ChargeRate;
    
    UPROPERTY(SaveGame)
    float DrainPerChargingBattery;
    
    UPROPERTY(Transient)
    int32 NumBatteries;
    
    UPROPERTY(Transient)
    TArray<FUWEPowerTerminalStoredBattery> CachedBatteryStates;
    
    UUWEPowerTerminalSimulation();

};

