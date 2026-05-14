#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementSpeedAlterationModuleSettingsRandom.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementSpeedAlterationModuleSettingsRandom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceProportionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceProportionMax;
    
    UWEAIMOVEMENT_API FUWEAIMovementSpeedAlterationModuleSettingsRandom();
};

