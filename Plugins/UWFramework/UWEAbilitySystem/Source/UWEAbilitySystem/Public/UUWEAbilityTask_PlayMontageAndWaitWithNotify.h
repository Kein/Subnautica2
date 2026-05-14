#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "UUWEAbilityTask_PlayMontageAndWaitWithNotify.generated.h"

class UAnimMontage;
class UGameplayAbility;
class UUUWEAbilityTask_PlayMontageAndWaitWithNotify;

UCLASS()
class UWEABILITYSYSTEM_API UUUWEAbilityTask_PlayMontageAndWaitWithNotify : public UAbilityTask_PlayMontageAndWait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnNotifyBegin;
    
    UUUWEAbilityTask_PlayMontageAndWaitWithNotify();

    UFUNCTION(BlueprintCallable)
    static UUUWEAbilityTask_PlayMontageAndWaitWithNotify* PlayMontageAndWaitWithNotify(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* InMontageToPlay, float InRate, FName InStartSection, FName InNotifyName, bool bInStopWhenAbilityEnds, float InAnimRootMotionTranslationScale, float InStartTimeSeconds, bool bInAllowInterruptAfterBlendOut);
    
protected:
    UFUNCTION()
    void OnNotifyBeginReceived(FName InNotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

