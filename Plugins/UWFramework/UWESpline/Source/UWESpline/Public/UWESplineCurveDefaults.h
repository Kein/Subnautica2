#pragma once
#include "CoreMinimal.h"
#include "UWESplineCurveDefaults.generated.h"

USTRUCT(BlueprintType)
struct FUWESplineCurveDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DefaultAbsolutePosition;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultFadeExtent;
    
    UWESPLINE_API FUWESplineCurveDefaults();
};

