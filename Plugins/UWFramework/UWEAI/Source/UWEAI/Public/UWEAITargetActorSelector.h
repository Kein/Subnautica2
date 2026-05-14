#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EUWEAITargetActorType.h"
#include "UWEAITargetActorSelector.generated.h"

USTRUCT(BlueprintType)
struct FUWEAITargetActorSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAITargetActorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UWEAI_API FUWEAITargetActorSelector();
};

