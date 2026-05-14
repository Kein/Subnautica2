#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTDReserveAttackTickets.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDReserveAttackTickets : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UUWEBTDReserveAttackTickets();

};

