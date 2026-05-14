#pragma once
#include "CoreMinimal.h"
#include "UWEAIFactorData.h"
#include "UWEAIHungerFactorData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIHungerFactorData : public FUWEAIFactorData {
    GENERATED_BODY()
public:
    UWEAI_API FUWEAIHungerFactorData();
};

