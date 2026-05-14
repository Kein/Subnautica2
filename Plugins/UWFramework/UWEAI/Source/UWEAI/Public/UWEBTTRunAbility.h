#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UWEBTTRunAbility.generated.h"

class UGameplayAbility;

UCLASS()
class UWEAI_API UUWEBTTRunAbility : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGameplayAbility> AbilityClass;
    
    UUWEBTTRunAbility();

};

