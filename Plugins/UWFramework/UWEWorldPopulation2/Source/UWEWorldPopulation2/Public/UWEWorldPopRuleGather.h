#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopCell.h"
#include "UWEWorldPopulationRule.h"
#include "UWEWorldPopRuleGather.generated.h"

class AActor;

UCLASS(Abstract, EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleGather : public UUWEWorldPopulationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<AActor*> ActorsInLastRun;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWEWorldPopCell> CellsOutLastRun;
    
    UPROPERTY()
    bool bBreakCellsDownIntoSmallestLayer;
    
    UUWEWorldPopRuleGather();

};

