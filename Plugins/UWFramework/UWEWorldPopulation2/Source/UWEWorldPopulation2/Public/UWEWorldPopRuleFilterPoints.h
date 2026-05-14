#pragma once
#include "CoreMinimal.h"
#include "UWESpawnPoint.h"
#include "UWEWorldPopulationRule.h"
#include "UWEWorldPopRuleFilterPoints.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterPoints : public UUWEWorldPopulationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWESpawnPoint> PointsInLastRun;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWESpawnPoint> PointsOutLastRun;
    
    UUWEWorldPopRuleFilterPoints();

};

