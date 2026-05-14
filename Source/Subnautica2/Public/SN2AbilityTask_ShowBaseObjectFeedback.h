#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_ShowBaseObjectFeedback.generated.h"

class AActor;
class UGameplayAbility;
class USN2AbilityTask_ShowBaseObjectFeedback;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_ShowBaseObjectFeedback : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateFeedback);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBaseObjectRemoved, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBaseObjectAdded, AActor*, Actor);
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnBaseObjectAdded OnBaseObjectAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnBaseObjectRemoved OnBaseObjectRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateFeedback UpdateFeedback;
    
public:
    USN2AbilityTask_ShowBaseObjectFeedback();

private:
    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_ShowBaseObjectFeedback* ShowBaseObjectFeedback(UGameplayAbility* OwningAbility, float UpdateInterval, float Radius, int32 MaxNumBaseObjects);
    
    UFUNCTION(BlueprintCallable)
    void ResetBaseObjects();
    
};

