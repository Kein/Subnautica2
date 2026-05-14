#pragma once
#include "CoreMinimal.h"
#include "UWEAILODPlayerViewParameters.generated.h"

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAILODPlayerViewParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableTargetViewConeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TargetViewConeHalfAngle;
    
    FUWEAILODPlayerViewParameters();
};

