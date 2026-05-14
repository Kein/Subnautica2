#pragma once
#include "CoreMinimal.h"
#include "ActiveDynamicForceFeedback.generated.h"

class UUWEDynamicForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FActiveDynamicForceFeedback {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUWEDynamicForceFeedbackEffect* DynamicEffect;
    
    UWEGAMEPLAY_API FActiveDynamicForceFeedback();
};

