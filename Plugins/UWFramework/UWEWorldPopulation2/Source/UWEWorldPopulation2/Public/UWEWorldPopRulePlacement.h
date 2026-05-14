#pragma once
#include "CoreMinimal.h"
#include "UWESpawnPoint.h"
#include "UWEWorldPopCell.h"
#include "UWEWorldPopulationRule.h"
#include "UWEWorldPopRulePlacement.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRulePlacement : public UUWEWorldPopulationRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 FixedNumberPerGatheredActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWEWorldPopCell> CellsInLastRun;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FUWESpawnPoint> PointsOutLastRun;
    
    UUWEWorldPopRulePlacement();

};

