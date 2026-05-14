#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWECachedActorHiddenState.h"
#include "SN2AbilityTask_UpdateMoveSelection.generated.h"

class AActor;
class ASN2BuilderGhost;
class USN2AbilityTask_UpdateMoveSelection;
class UUWEGameplayAbility;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateMoveSelection : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    AActor* MoveTarget;
    
    UPROPERTY()
    ASN2BuilderGhost* PlacedActorGhost;
    
    UPROPERTY()
    FUWECachedActorHiddenState CachedHoveredActorHiddenState;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> HiddenActor;
    
public:
    USN2AbilityTask_UpdateMoveSelection();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateMoveSelection* UpdateMoveSelection(UUWEGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTask();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestoreHoveredActorHiddenState();
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseTask();
    
    UFUNCTION(BlueprintPure)
    bool IsLegal() const;
    
};

