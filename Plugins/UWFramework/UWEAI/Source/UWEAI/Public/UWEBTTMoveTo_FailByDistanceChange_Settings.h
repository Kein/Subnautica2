#pragma once
#include "CoreMinimal.h"
#include "UWEBTTMoveTo_FailByDistanceChange_Settings.generated.h"

USTRUCT(BlueprintType)
struct FUWEBTTMoveTo_FailByDistanceChange_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    float TimeWithoutDistanceDecrease;
    
    UWEAI_API FUWEBTTMoveTo_FailByDistanceChange_Settings();
};

