#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "UWEEnergyTool.h"
#include "UWESculpturalBaseCellCost.h"
#include "BuildingRequirementDisplay.h"
#include "SN2PartialResource.h"
#include "SculptedBaseEditSettings.h"
#include "SN2BuilderTool.generated.h"

class AActor;
class ASN2BuilderGhost;
class UCommonActivatableWidget;
class UInputMappingContext;
class UModalActivatableWidget;
class USN2BuilderActionData;
class USceneComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BuilderTool : public AUWEEnergyTool {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveActionChanged, USN2BuilderActionData*, NewAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConstructTargetChanged, AActor*, OldConstructTarget, AActor*, NewConstructTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCantAffordConstruction);
    
    UPROPERTY(BlueprintAssignable)
    FConstructTargetChanged OnConstructTargetChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCantAffordConstruction OnCantAffordConstruction;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<ASN2BuilderGhost> Ghost;
    
    UPROPERTY(BlueprintAssignable)
    FOnActiveActionChanged OnActiveAbilityChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UModalActivatableWidget> BuilderMenuClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCommonActivatableWidget* BuilderMenu;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* ResourceSpawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSculptedBaseEditSettings SculpturalBaseEditSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputMappingContext* EquippedInputMappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EquippedInputMappingPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputMappingContext* ActionActiveInputMappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputMappingContext* ActionActiveAlternateInputMappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ActionActiveInputMappingPriority;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CompleteCueTag;
    
    UPROPERTY(Replicated, SaveGame)
    TArray<FSN2PartialResource> PartialResources;
    
    UPROPERTY()
    FGuid StickyTargetGhostGUID;
    
private:
    UPROPERTY()
    FHitResult ConstructTraceResult;
    
public:
    ASN2BuilderTool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetStickyGhostTarget(FGuid GhostGUID);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerUpdateTarget(AActor* NewTarget);
    
    UFUNCTION()
    void OnTargetDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSnappingChanged();
    
private:
    UFUNCTION()
    void OnGhostRemoved(FGuid Guid);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCraftingSourcesChanged();
    
protected:
    UFUNCTION()
    void OnActiveActionChanged(USN2BuilderActionData* NewAction);
    
public:
    UFUNCTION(BlueprintPure)
    static FGuid MakeGhostGUID();
    
    UFUNCTION(BlueprintCallable)
    void LogMissingRequirementAnalytics(FText ConstructableName, const FUWESculpturalBaseCellCost& MissingRequirement);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoveTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDeconstructTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsConstructTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool HasActiveAction();
    
    UFUNCTION(BlueprintPure)
    FString GetResourceCostDisplayString(const TArray<FUWESculpturalBaseCellCost>& Costs);
    
    UFUNCTION(BlueprintPure)
    static float GetGhostRotationStep();
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingRequirementDisplay> GetBuildingRequirements(const TArray<FUWESculpturalBaseCellCost>& Costs);
    
    UFUNCTION(BlueprintCallable)
    void EndConstruction();
    
    UFUNCTION(BlueprintCallable)
    static bool CanDeconstructTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CanAffordToConstructTarget();
    
    UFUNCTION(BlueprintCallable)
    void BeginDeconstruction(AActor* InActorToDeconstruct);
    
    UFUNCTION(BlueprintCallable)
    void BeginConstruction(AActor* InActorToConstruct);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAction(USN2BuilderActionData* NewAction);
    
};

