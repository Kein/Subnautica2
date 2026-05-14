#pragma once
#include "CoreMinimal.h"
#include "ResonanceRange.generated.h"

USTRUCT(BlueprintType)
struct FResonanceRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPercent;
    
    UWEBREAKABLE_API FResonanceRange();
};

