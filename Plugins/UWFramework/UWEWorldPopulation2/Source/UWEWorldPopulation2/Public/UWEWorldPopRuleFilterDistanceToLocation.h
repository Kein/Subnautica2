#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterDistanceToLocation.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterDistanceToLocation : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector FilterLocation;
    
    UPROPERTY(EditAnywhere)
    float DistanceToLocation;
    
    UPROPERTY(EditAnywhere)
    bool SelectWithinDistance;
    
    UUWEWorldPopRuleFilterDistanceToLocation();

};

