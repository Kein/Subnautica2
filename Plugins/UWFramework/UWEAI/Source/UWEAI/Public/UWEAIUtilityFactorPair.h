#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityFactorPair.generated.h"

USTRUCT()
struct FUWEAIUtilityFactorPair {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString Name;
    
    UPROPERTY(Transient)
    float Value;
    
    UWEAI_API FUWEAIUtilityFactorPair();
};

