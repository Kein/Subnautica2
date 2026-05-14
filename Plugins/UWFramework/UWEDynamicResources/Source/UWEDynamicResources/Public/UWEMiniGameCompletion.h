#pragma once
#include "CoreMinimal.h"
#include "EUWEMiniGameCompletionResult.h"
#include "UWEMiniGameCompletion.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEMiniGameCompletion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUWEMiniGameCompletionResult CompletionResult;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* TargetActor;
    
    UWEDYNAMICRESOURCES_API FUWEMiniGameCompletion();
};

