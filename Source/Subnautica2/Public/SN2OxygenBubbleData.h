#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2OxygenBubbleData.generated.h"

USTRUCT(BlueprintType)
struct FSN2OxygenBubbleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Lifetime;
    
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    float StartTime;
    
    SUBNAUTICA2_API FSN2OxygenBubbleData();
};

