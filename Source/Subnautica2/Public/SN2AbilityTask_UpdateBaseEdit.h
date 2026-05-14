#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "AbilityInfoData.h"
#include "EUWEEditActionLegality.h"
#include "UWESculpturalBaseCellCost.h"
#include "EBuilderSnapping.h"
#include "OnCurrentBrushChangedDelegate.h"
#include "SN2BuilderBlockingShape.h"
#include "SN2CollisionTestParams.h"
#include "SN2EditLegalitySnapData.h"
#include "SN2GhostPlacement.h"
#include "SN2AbilityTask_UpdateBaseEdit.generated.h"

class AActor;
class ASN2BuilderGhost;
class ASN2BuilderPreviewArrow;
class IUWEBaseEditAction;
class UUWEBaseEditAction;
class USN2AbilityTask_UpdateBaseEdit;
class USN2ItemBrushActionData;
class UTexture2D;
class UUWEGameplayAbility;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateBaseEdit : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCurrentBrushChanged OnBrushChanged;
    
protected:
    UPROPERTY()
    USN2ItemBrushActionData* ActionData;
    
    UPROPERTY()
    EUWEEditActionLegality EditActionLegality;
    
    UPROPERTY()
    TWeakObjectPtr<ASN2BuilderGhost> Ghost;
    
    UPROPERTY()
    ASN2BuilderGhost* ActorPreviewGhost;
    
    UPROPERTY()
    TArray<ASN2BuilderPreviewArrow*> PreviewArrows;
    
    UPROPERTY()
    FSN2EditLegalitySnapData LegalitySnapData;
    
    UPROPERTY(BlueprintReadOnly)
    FSN2GhostPlacement InitialPiecePlacement;
    
public:
    USN2AbilityTask_UpdateBaseEdit();

    UFUNCTION(BlueprintPure)
    bool UseSoftLock() const;
    
    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateBaseEdit* UpdateBaseEdit(UUWEGameplayAbility* OwningAbility, USN2ItemBrushActionData* NewActionData, ASN2BuilderGhost* NewGhost);
    
    UFUNCTION(BlueprintCallable)
    EBuilderSnapping ToggleSnappingMode();
    
    UFUNCTION(BlueprintCallable)
    void ShowGhost();
    
    UFUNCTION(BlueprintPure)
    bool ShouldToggleSnappingOnModeSwitch() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldSwitchToDeconstructOnActivate() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldSpawnActorOnly() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldRotateWithInput() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldCycleSelectionSize() const;
    
    UFUNCTION(BlueprintCallable)
    void ResumeTask();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFeedback();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetEdit();
    
    UFUNCTION(BlueprintCallable)
    void PauseTask();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsLegal() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEmbeddingActor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDeconstruct() const;
    
    UFUNCTION(BlueprintCallable)
    void HideGhost();
    
    UFUNCTION(BlueprintPure)
    float GetUserRotationIncrement() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetUsedModeTexture() const;
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IUWEBaseEditAction> GetUsedEditAction() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetSpawnTransform() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetOnEnterCueForEditMode() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWESculpturalBaseCellCost> GetCost() const;
    
    UFUNCTION(BlueprintPure)
    float GetBuildTime() const;
    
    UFUNCTION(BlueprintPure)
    void GetBlockingTestData(TArray<FSN2BuilderBlockingShape>& BlockingShapes, FSN2CollisionTestParams& Params, TArray<AActor*>& ActorsToIgnore) const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<AActor> GetActorToSpawn() const;
    
    UFUNCTION(BlueprintPure)
    FAbilityInfoData GetAbilityInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void CycleEditMode();
    
    UFUNCTION(BlueprintPure)
    bool CurrentBrushIsValid() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelectionSize(bool Increment);
    
    UFUNCTION(BlueprintPure)
    bool CanCycleEditMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AddUserRotation(float Value);
    
};

