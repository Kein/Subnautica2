#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "AbilityInfo.h"
#include "UWESculpturalBaseCellCost.h"
#include "UWECachedActorHiddenState.h"
#include "SN2AbilityTask_UpdateDeconstructGroupSelection.generated.h"

class AActor;
class ASN2BuilderGhost;
class IUWEBaseEditAction;
class UUWEBaseEditAction;
class UMaterialInstanceDynamic;
class UObject;
class USN2AbilityTask_UpdateDeconstructGroupSelection;
class UUWEGameplayAbility;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateDeconstructGroupSelection : public UAbilityTask, public IAbilityInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ASN2BuilderGhost* HoveredActorGhost;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> HoveredActor;
    
    UPROPERTY()
    FUWECachedActorHiddenState CachedHoveredActorHiddenState;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GhostMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* OverlayMaterial;
    
    UPROPERTY()
    UObject* EditAction;
    
    UPROPERTY()
    bool IsPaused;
    
public:
    USN2AbilityTask_UpdateDeconstructGroupSelection();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateDeconstructGroupSelection* UpdateDeconstructGroupSelection(UUWEGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void ShowFeedback();
    
    UFUNCTION(BlueprintPure)
    bool ShouldDeconstructTargetActor(FGameplayTag& CantDeconstructReason);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupSelectionEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTask();
    
    UFUNCTION(BlueprintCallable)
    void RestoreHoveredActorHiddenState();
    
    UFUNCTION(BlueprintCallable)
    void PauseTask();
    
    UFUNCTION(BlueprintPure)
    bool IsLegal();
    
    UFUNCTION(BlueprintCallable)
    void HideFeedback();
    
    UFUNCTION(BlueprintPure)
    FTransform GetSpawnTransform();
    
    UFUNCTION(BlueprintPure)
    AActor* GetHoveredActor();
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IUWEBaseEditAction> GetEditAction();
    
    UFUNCTION(BlueprintPure)
    TArray<FUWESculpturalBaseCellCost> GetCost();
    
    UFUNCTION(BlueprintPure)
    float GetBuildTime();
    

    // Fix for true pure virtual functions not being implemented
};

