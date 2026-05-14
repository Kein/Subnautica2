#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityTask_PlayCharacterAnimationAndWait.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_PlayCharacterAnimationAndWait;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_PlayCharacterAnimationAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterAnimationDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FCharacterAnimationDelegate OnCompleted;
    
protected:
    UPROPERTY(Replicated)
    FGameplayTag AnimationTag;
    
public:
    UUWEAbilityTask_PlayCharacterAnimationAndWait();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_PlayCharacterAnimationAndWait* PlayCharacterAnimationAndWait(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTag NewAnimationTag, float MaxDuration);
    
};

