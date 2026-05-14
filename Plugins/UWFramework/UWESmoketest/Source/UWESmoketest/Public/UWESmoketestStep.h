#pragma once
#include "CoreMinimal.h"
#include "SmoketestStepStatus.h"
#include "UWESmoketestStep.generated.h"

USTRUCT(BlueprintType)
struct UWESMOKETEST_API FUWESmoketestStep {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Action;
    
    UPROPERTY()
    FString Target;
    
    UPROPERTY()
    FString Arg;
    
    UPROPERTY()
    SmoketestStepStatus Status;
    
    FUWESmoketestStep();
};

