#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorGameplayTag.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorGameplayTag : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery GameplayTagQuery;
    
    UUWEBTDUtilityFactorGameplayTag();

};

