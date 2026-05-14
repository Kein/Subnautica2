#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWETerminalBatteryData.generated.h"

USTRUCT(BlueprintType)
struct FUWETerminalBatteryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Slot;
    
    UPROPERTY(BlueprintReadOnly)
    float Charge;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxCharge;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ItemGuid;
    
    UWEPOWER_API FUWETerminalBatteryData();
};

