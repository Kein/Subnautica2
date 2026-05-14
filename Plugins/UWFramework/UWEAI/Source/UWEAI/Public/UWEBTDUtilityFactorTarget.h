#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAttackTicketPolicy.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorTarget.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDUtilityFactorTarget : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MustBeDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MustBeCurrentlyPerceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWEAttackTicketPolicy AttackTicketPolicy;
    
    UUWEBTDUtilityFactorTarget();

};

