#pragma once
#include "CoreMinimal.h"
#include "UWEAIAttackTicket.h"
#include "UWEAIAttackTicketPool.generated.h"

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAIAttackTicketPool {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWEAIAttackTicket> Tickets;
    
    FUWEAIAttackTicketPool();
};

