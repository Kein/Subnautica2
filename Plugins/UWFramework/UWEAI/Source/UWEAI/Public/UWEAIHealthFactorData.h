#pragma once
#include "CoreMinimal.h"
#include "UWEAIFactorData.h"
#include "UWEAIHealthFactorData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIHealthFactorData : public FUWEAIFactorData {
    GENERATED_BODY()
public:
    UWEAI_API FUWEAIHealthFactorData();
};

