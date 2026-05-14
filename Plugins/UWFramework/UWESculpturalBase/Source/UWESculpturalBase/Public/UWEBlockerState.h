#pragma once
#include "CoreMinimal.h"
#include "UWEBlockerState.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FUWEBlockerState {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicMaterialInstance;
    
    UWESCULPTURALBASE_API FUWEBlockerState();
};

