#pragma once
#include "CoreMinimal.h"
#include "UWEWaterCurrentOverlap.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEWaterCurrentOverlap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    bool IsOverlapped;
    
    UWEWATERCURRENTS_API FUWEWaterCurrentOverlap();
};

