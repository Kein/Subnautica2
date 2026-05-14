#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEAbilityTask_WaitTargetDataBase.h"
#include "UWEAbilityTask_WaitAimTransform.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_WaitAimTransform;

UCLASS()
class UWEABILITYTASK_API UUWEAbilityTask_WaitAimTransform : public UUWEAbilityTask_WaitTargetDataBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAimTransformDelegate, const FTransform&, AimTransform);
    
    UPROPERTY(BlueprintAssignable)
    FAimTransformDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FAimTransformDelegate Cancelled;
    
    UUWEAbilityTask_WaitAimTransform();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitAimTransform* WaitAimTransformSynced(UGameplayAbility* OwningAbility, const FTransform& AimTransform, FName TaskInstanceName);
    
};

