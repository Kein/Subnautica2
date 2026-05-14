#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "UWEAIBehaviorTreeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UUWEAIBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

