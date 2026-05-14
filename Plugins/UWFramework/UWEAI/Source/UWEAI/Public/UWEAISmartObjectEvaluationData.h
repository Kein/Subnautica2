#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEAISmartObjectEvaluationData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAISmartObjectEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoVisibilityTest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InSightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoDotAngleTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange DotAngleRange;
    
    UWEAI_API FUWEAISmartObjectEvaluationData();
};

