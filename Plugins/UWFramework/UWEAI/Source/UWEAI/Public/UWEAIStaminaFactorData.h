#pragma once
#include "CoreMinimal.h"
#include "UWEAIFactorData.h"
#include "UWEAIStaminaFactorData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIStaminaFactorData : public FUWEAIFactorData {
    GENERATED_BODY()
public:
    UWEAI_API FUWEAIStaminaFactorData();
};

