#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitForHarvest.generated.h"

class AActor;
class UGameplayAbility;
class USN2AbilityTask_WaitForHarvest;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitForHarvest : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHarvestHit, float, HarvestTime);
    
    UPROPERTY(BlueprintAssignable)
    FHarvestHit OnPerfectHit;
    
    UPROPERTY(BlueprintAssignable)
    FHarvestHit OnImperfectHit;
    
    UPROPERTY(BlueprintAssignable)
    FHarvestHit OnTick;
    
    USN2AbilityTask_WaitForHarvest();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitForHarvest* WaitForHarvest(UGameplayAbility* OwningAbility, FFloatRange InPerfectHitRange, double InHarvestCycleTime, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetNewHarvestTarget(FFloatRange InPerfectHitRange, double InHarvestCycleTime, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ResumeHarvest();
    
    UFUNCTION(BlueprintCallable)
    void ResetHarvestTime();
    
    UFUNCTION(BlueprintCallable)
    void PauseHarvest();
    
private:
    UFUNCTION()
    void OnInputPressed();
    
public:
    UFUNCTION(BlueprintPure)
    float GetHarvestTime() const;
    
};

