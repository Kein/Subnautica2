#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWEAbilityTask_OnPossessedChanged.generated.h"

class UGameplayAbility;
class UUWEAbilityTask_OnPossessedChanged;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_OnPossessedChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPossessedChangedDelegate, bool, bPossessed);
    
    UPROPERTY(BlueprintAssignable)
    FPossessedChangedDelegate OnPossessedChanged;
    
    UUWEAbilityTask_OnPossessedChanged();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_OnPossessedChanged* WaitPossessedChanged(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

