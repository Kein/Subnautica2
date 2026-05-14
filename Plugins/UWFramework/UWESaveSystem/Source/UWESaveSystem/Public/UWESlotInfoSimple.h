#pragma once
#include "CoreMinimal.h"
#include "UWESlotInfoSimple.generated.h"

USTRUCT(BlueprintType)
struct FUWESlotInfoSimple {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SlotName;
    
    UPROPERTY()
    TArray<int32> AvailableCheckpoints;
    
    UWESAVESYSTEM_API FUWESlotInfoSimple();
};

