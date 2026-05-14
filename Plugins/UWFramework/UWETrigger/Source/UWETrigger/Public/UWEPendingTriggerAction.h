#pragma once
#include "CoreMinimal.h"
#include "UWEPendingTriggerAction.generated.h"

USTRUCT(BlueprintType)
struct FUWEPendingTriggerAction {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    double TriggerTime;
    
    UPROPERTY(SaveGame)
    int32 PlayerId;
    
    UWETRIGGER_API FUWEPendingTriggerAction();
};

