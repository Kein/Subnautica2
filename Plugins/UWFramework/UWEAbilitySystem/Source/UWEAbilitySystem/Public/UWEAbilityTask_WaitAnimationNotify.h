#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "UWEAbilityTask_WaitAnimationNotify.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitAnimationNotify;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_WaitAnimationNotify : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnNotifyBegin;
    
    UUWEAbilityTask_WaitAnimationNotify();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitAnimationNotify* WaitAnimationNotify(UGameplayAbility* OwningAbility, FName TaskInstanceName, FName NotifyName, bool bOnce);
    
protected:
    UFUNCTION()
    void OnNotifyBeginReceived(FName InNotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION()
    void OnAbilityAnimNotify(FName InNotifyName);
    
};

