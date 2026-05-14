#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSGameplayEvent.generated.h"

class UUWEBaseGameplayEventData;

UCLASS(BlueprintType)
class UWEAI_API UUWEBTSGameplayEvent : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEBaseGameplayEventData* EventData;
    
    UUWEBTSGameplayEvent();

};

