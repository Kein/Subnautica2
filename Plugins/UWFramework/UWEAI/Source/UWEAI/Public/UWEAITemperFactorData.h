#pragma once
#include "CoreMinimal.h"
#include "UWEAIFactorData.h"
#include "UWEAITemperFactorData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAITemperFactorData : public FUWEAIFactorData {
    GENERATED_BODY()
public:
    UWEAI_API FUWEAITemperFactorData();
};

