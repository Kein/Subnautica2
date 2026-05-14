#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESN2ProcessorState.h"
#include "SN2ProcessorStation.generated.h"

class UMaterialInstance;
class USN2ProcessorStationInteractionComponent;
class USN2ProcessorStationRecipeSelection;
class USN2ProcessorStationViewModel;
class UStaticMesh;
class UUWEAbilitySystemComponent;
class UUWEAttachableComponent;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEListenPlayerInRange;
class UUWEPoweredApplianceComponent;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2ProcessorStation : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProcessorStateChanged, UUWECraftingRecipe*, Recipe, ESN2ProcessorState, State, int32, OutputCount);
    
    UPROPERTY(BlueprintAssignable)
    FOnProcessorStateChanged OnProcessorStateChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> PlaceholderMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInstance> PlaceholderFabricationMaterialInstance;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_CurrentRecipe)
    UUWECraftingRecipe* CurrentRecipe;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentOutputCount)
    int32 CurrentOutputCount;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_ProcessorState)
    ESN2ProcessorState ProcessorState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float ProcessingProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProcessingContinuousPowerConsumption;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2ProcessorStationRecipeSelection* RecipeSelectionInteraction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InputInventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* OutputInventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* OutputInventoryInteraction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEPoweredApplianceComponent* PoweredApplianceComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAttachableComponent* AttachableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWECraftingRecipeCategory* RootCategory;
    
    UPROPERTY(BlueprintReadOnly)
    float ProcessorUpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float ProcessorUpdateMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayerInRange;
    
private:
    UPROPERTY()
    UUWEListenPlayerInRange* ListenPlayerInRange;
    
public:
    ASN2ProcessorStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UpdateProcessorState(bool FirstLoad);
    
    UFUNCTION()
    void UpdateProcessingCompletionState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNewPreviewMesh(bool FirstOfNewQueue);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetProcessorUpdateMultiplier(float NewProcessorUpdateMultiplier);
    
protected:
    UFUNCTION()
    void QueueUpdate();
    
private:
    UFUNCTION()
    void OnRep_ProcessorState(ESN2ProcessorState OldValue);
    
protected:
    UFUNCTION()
    void OnRep_CurrentRecipe();
    
private:
    UFUNCTION()
    void OnRep_CurrentOutputCount(int32 OldValue);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnProcessingStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProcessingEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProcessCompleted();
    
private:
    UFUNCTION()
    void OnPoweredStateChanged(bool bNewIsPowered);
    
    UFUNCTION()
    void OnPlayerOutOfRange();
    
    UFUNCTION()
    void OnPlayerInRange();
    
protected:
    UFUNCTION()
    void OnAttached(AActor* AttachedTo);
    
public:
    UFUNCTION(BlueprintPure)
    USN2ProcessorStationViewModel* MakeViewModel(USN2ProcessorStationInteractionComponent* InteractionComponent);
    
    UFUNCTION(BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintPure)
    float GetNextProcessingProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetFabricationTime() const;
    
    UFUNCTION(BlueprintPure)
    ESN2ProcessorState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    UUWECraftingRecipe* GetCurrentRecipe() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentOutputCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearPreviewMesh();
    
};

