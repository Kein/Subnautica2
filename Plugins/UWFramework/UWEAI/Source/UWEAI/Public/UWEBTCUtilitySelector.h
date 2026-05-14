#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "UWEAIUtilityRankGatheringType.h"
#include "UWEAIUtilityWeightSelectionType.h"
#include "UWEBTCUtilitySelector.generated.h"

UCLASS()
class UWEAI_API UUWEBTCUtilitySelector : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWEAIUtilityRankGatheringType RankGatheringType;
    
    UPROPERTY(EditAnywhere)
    UWEAIUtilityWeightSelectionType WeightSelectionType;
    
    UUWEBTCUtilitySelector();

};

