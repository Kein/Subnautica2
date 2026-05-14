#pragma once
#include "CoreMinimal.h"
#include "UWEAIAttackTicketData.generated.h"

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAIAttackTicketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AttackTicketCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackTicketCooldown;
    
    FUWEAIAttackTicketData();
};

