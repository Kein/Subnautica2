#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWERuntimeAdjacentModuleRules.h"
#include "SerializedSlotRules.generated.h"

USTRUCT()
struct FSerializedSlotRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector Slot;
    
    UPROPERTY(EditAnywhere)
    FUWERuntimeAdjacentModuleRules Rules;
    
    UWESCULPTURALBASE_API FSerializedSlotRules();
};

