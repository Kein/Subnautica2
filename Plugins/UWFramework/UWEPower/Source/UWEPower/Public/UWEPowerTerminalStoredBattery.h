#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItemId.h"
#include "UWEPowerTerminalStoredBattery.generated.h"

USTRUCT(BlueprintType)
struct FUWEPowerTerminalStoredBattery {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEInventoryItemId ItemId;
    
    UPROPERTY(SaveGame)
    float Charge;
    
    UPROPERTY(SaveGame)
    float MaxCharge;
    
    UWEPOWER_API FUWEPowerTerminalStoredBattery();
};

