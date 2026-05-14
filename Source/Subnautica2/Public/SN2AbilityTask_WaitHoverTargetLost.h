#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitHoverTargetLost.generated.h"

class AActor;
class ASN2PlayerCharacter;
class UGameplayAbility;
class USN2AbilityTask_WaitHoverTargetLost;

UCLASS(Config=Engine)
class SUBNAUTICA2_API USN2AbilityTask_WaitHoverTargetLost : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTargetLostDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTargetLostDelegate OnTargetLost;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY()
    TWeakObjectPtr<ASN2PlayerCharacter> Player;
    
    UPROPERTY(Transient)
    bool bSticky;
    
    UPROPERTY(Config)
    float TargetLossAngle;
    
    UPROPERTY(Config)
    float TargetLossRange;
    
public:
    USN2AbilityTask_WaitHoverTargetLost();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitHoverTargetLost* WaitHoverTargetLost(UGameplayAbility* OwningAbility, bool NewBSticky, float NewTargetLossRange, float NewTargetLossAngle);
    
};

