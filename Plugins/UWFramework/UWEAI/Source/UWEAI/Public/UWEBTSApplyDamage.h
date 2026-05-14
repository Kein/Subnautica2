#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSApplyDamage.generated.h"

UCLASS()
class UWEAI_API UUWEBTSApplyDamage : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag AttackTag;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag DamageType;
    
    UPROPERTY(EditAnywhere)
    bool bContinuous;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveEffect;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UPROPERTY(EditAnywhere)
    float duration;
    
    UUWEBTSApplyDamage();

    UFUNCTION()
    bool IsAttackTagEmpty() const;
    
};

