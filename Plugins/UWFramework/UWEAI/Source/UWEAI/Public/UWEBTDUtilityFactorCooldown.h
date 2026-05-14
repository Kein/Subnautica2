#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityFactorCooldownType.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorCooldown.generated.h"

UCLASS()
class UWEAI_API UUWEBTDUtilityFactorCooldown : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    UWEAIUtilityFactorCooldownType CoolDownType;
    
    UUWEBTDUtilityFactorCooldown();

};

