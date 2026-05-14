#pragma once
#include "CoreMinimal.h"
#include "UWEAIDecisionTargetInfo.h"
#include "UWEAIUtilityFactorPair.h"
#include "UWEAIIndexedUtilityValue.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIIndexedUtilityValue {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 ChildIdx;
    
    UPROPERTY(Transient)
    int32 rank;
    
    UPROPERTY(Transient)
    float Value;
    
    UPROPERTY(Transient)
    FUWEAIDecisionTargetInfo TargetInfo;
    
    UPROPERTY(Transient)
    int32 ExecIdx;
    
    UPROPERTY(Transient)
    FString ChildName;
    
    UPROPERTY(Transient)
    TArray<FUWEAIUtilityFactorPair> Factors;
    
    UWEAI_API FUWEAIIndexedUtilityValue();
};

