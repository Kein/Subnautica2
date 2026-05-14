#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopRuleGather.h"
#include "UWEWorldPopRuleGatherActorsOfSurface.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleGatherActorsOfSurface : public UUWEWorldPopRuleGather {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer MustHaveTags;
    
    UPROPERTY(EditAnywhere)
    double Radius;
    
    UUWEWorldPopRuleGatherActorsOfSurface();

};

