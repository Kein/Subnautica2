#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIBehaviorTreeParams.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIBehaviorTreeParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> Params;
    
    UWEAI_API FUWEAIBehaviorTreeParams();
};

