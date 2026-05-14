#pragma once
#include "CoreMinimal.h"
#include "SN2PlayerStartTriggerHandling.generated.h"

class AUWEPlayerTrigger;

USTRUCT(BlueprintType)
struct FSN2PlayerStartTriggerHandling {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AUWEPlayerTrigger> Trigger;
    
    UPROPERTY(EditAnywhere)
    bool bExecute;
    
    UPROPERTY(EditAnywhere)
    bool bDisable;
    
    SUBNAUTICA2_API FSN2PlayerStartTriggerHandling();
};

