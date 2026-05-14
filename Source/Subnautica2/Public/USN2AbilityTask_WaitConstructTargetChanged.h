#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "ConstructTargetChangedDelegateDelegate.h"
#include "USN2AbilityTask_WaitConstructTargetChanged.generated.h"

class AActor;
class UGameplayAbility;
class UUSN2AbilityTask_WaitConstructTargetChanged;

UCLASS()
class SUBNAUTICA2_API UUSN2AbilityTask_WaitConstructTargetChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FConstructTargetChangedDelegate OnChanged;
    
    UUSN2AbilityTask_WaitConstructTargetChanged();

    UFUNCTION(BlueprintCallable)
    static UUSN2AbilityTask_WaitConstructTargetChanged* WaitConstructTargetChanged(UGameplayAbility* OwningAbility);
    
protected:
    UFUNCTION()
    void OnConstructTargetChanged(AActor* OldConstructTarget, AActor* NewConstructTarget);
    
};

