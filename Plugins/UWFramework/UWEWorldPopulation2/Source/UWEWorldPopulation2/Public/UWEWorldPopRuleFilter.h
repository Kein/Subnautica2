#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopCell.h"
#include "UWEWorldPopulationRule.h"
#include "UWEWorldPopRuleFilter.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilter : public UUWEWorldPopulationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWEWorldPopCell> CellsInLastRun;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWEWorldPopCell> CellsOutLastRun;
    
    UUWEWorldPopRuleFilter();

};

