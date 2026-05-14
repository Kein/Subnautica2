#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitGhostConstruction.generated.h"

class ASN2BuilderGhost;
class UGameplayAbility;
class USN2AbilityTask_WaitGhostConstruction;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitGhostConstruction : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConstructionFinished, bool, WasConstructed);
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnConstructionFinished OnConstructionFinished;
    
public:
    USN2AbilityTask_WaitGhostConstruction();

private:
    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitGhostConstruction* WaitGhostConstruction(UGameplayAbility* OwningAbility, ASN2BuilderGhost* Ghost, bool IsConstructing, float TimeToFullyConstruct);
    
protected:
    UFUNCTION()
    void ConstructionFinished(bool WasConstructed);
    
};

