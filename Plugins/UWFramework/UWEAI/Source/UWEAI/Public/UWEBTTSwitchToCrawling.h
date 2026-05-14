#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "UWEBTTSwitchToCrawling.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTSwitchToCrawling : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MovementStyle;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LocationKey;
    
public:
    UUWEBTTSwitchToCrawling();

};

