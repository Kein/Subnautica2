#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementBaseEnvironmentSettings.generated.h"

USTRUCT(BlueprintType)
struct UWEAIMOVEMENT_API FUWEAIMovementBaseEnvironmentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuoyancyAccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseForceMagnitudeMultiplier;
    
    FUWEAIMovementBaseEnvironmentSettings();
};

