#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitForFrequencySelection.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitForFrequencySelection;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitForFrequencySelection : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrequencySelection, float, Frequency);
    
    UPROPERTY(BlueprintAssignable)
    FFrequencySelection OnFrequencySelected;
    
private:
    UPROPERTY(Replicated)
    double TimeStarted;
    
    UPROPERTY(Replicated)
    double CycleTime;
    
public:
    USN2AbilityTask_WaitForFrequencySelection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitForFrequencySelection* WaitForFrequencySelection(UGameplayAbility* OwningAbility, double InCycleTime);
    
    UFUNCTION(BlueprintCallable)
    void SendFrequencySelection(float InFrequency);
    
private:
    UFUNCTION()
    void OnInput();
    
public:
    UFUNCTION(BlueprintPure)
    float GetFrequency() const;
    
};

