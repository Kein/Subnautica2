#pragma once
#include "CoreMinimal.h"
#include "GameplayMessageString.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMessageString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString String;
    
    UWEGAMEPLAYMESSAGERUNTIME_API FGameplayMessageString();
};

