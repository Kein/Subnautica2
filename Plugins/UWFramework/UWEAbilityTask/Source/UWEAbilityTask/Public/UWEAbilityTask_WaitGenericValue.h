#pragma once
#include "CoreMinimal.h"
#include "UWEAbilityTask_WaitTargetDataBase.h"
#include "UWEGenericAbilityActorData.h"
#include "UWEAbilityTask_WaitGenericValue.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitGenericValue;

UCLASS()
class UWEABILITYTASK_API UUWEAbilityTask_WaitGenericValue : public UUWEAbilityTask_WaitTargetDataBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGenericValueDelegate, const FUWEGenericAbilityActorData&, GenericValues);
    
    UPROPERTY(BlueprintAssignable)
    FGenericValueDelegate ValidData;
    
private:
    UPROPERTY()
    FUWEGenericAbilityActorData GenericValue;
    
public:
    UUWEAbilityTask_WaitGenericValue();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitGenericValue* WaitGenericValueSynced(UGameplayAbility* OwningAbility, const FUWEGenericAbilityActorData& InGenericValue, FName TaskInstanceName);
    
};

