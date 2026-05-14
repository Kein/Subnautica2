#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterDistActorOfSurface.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterDistActorOfSurface : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceFromSurface;
    
    UPROPERTY(EditAnywhere)
    bool bFilterWithinDistance;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery SurfaceTagQuery;
    
    UUWEWorldPopRuleFilterDistActorOfSurface();

};

