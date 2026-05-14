#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "CraftingRecipeOutput.h"
#include "ECrafterAnimationState.h"
#include "ECraftingResults.h"
#include "OnCraftableRecipesChangedDelegate.h"
#include "OnCraftingCompletedDelegate.h"
#include "OnCraftingStartedDelegate.h"
#include "OnOwnerInventoryFullChangedDelegate.h"
#include "OnPlayerInRangeChangedDelegate.h"
#include "UWEActiveCraft.h"
#include "UWECrafterComponent.generated.h"

class AActor;
class IUWEItemPickup;
class UUWEItemPickup;
class USkeletalMeshComponent;
class UUWECraftingComponent;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;
class UUWEListenPlayerInRange;
class UUWESaveHandle;
class UUWEStoryGoal;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECRAFTING_API UUWECrafterComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsPoweredChanged, bool, bIsPowered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraftInProgressChanged, bool, bCraftingInProgress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCrafterQueueUpdated, const TSoftObjectPtr<UUWECraftingRecipe>&, QueuedRecipe, int32, QueueSize);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCrafterAnimationStateChanged, ECrafterAnimationState, PreviousState, ECrafterAnimationState, NewState);
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftingStarted OnCraftingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftingCompleted OnCraftingCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftableRecipesChanged OnCraftableRecipesChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftObjectPtr<UUWECraftingRecipeCategory>> AllowedRecipeCategories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UUWECraftingRecipe>> AllowedRecipesOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UUWECraftingRecipe>> AdditionalAllowedRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanQueueRecipes;
    
    UPROPERTY(BlueprintAssignable)
    FOnOwnerInventoryFullChanged OnOwnerInventoryFullChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerInRangeChanged OnPlayerInRangeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCrafterAnimationStateChanged OnCrafterAnimationStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCrafterQueueUpdated OnCrafterQueueUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftInProgressChanged OnCraftInProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsPoweredChanged OnIsPoweredChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerInRange)
    bool bPlayerInRange;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultCraftingTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxQueueSize;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCraftShouldGoIntoInventory;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CraftingInProgress)
    bool bCraftingInProgress;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_OwnerInventoryFull)
    bool bOwnerInventoryFull;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_ActiveCrafts)
    TArray<FUWEActiveCraft> ActiveCrafts;
    
    UPROPERTY(ReplicatedUsing=OnRep_AnimationState)
    ECrafterAnimationState AnimationState;
    
private:
    UPROPERTY()
    TScriptInterface<IUWEItemPickup> LocalOutputInventory;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerInRangeMaxRange;
    
    UPROPERTY()
    UUWEListenPlayerInRange* ListenPlayerInRange;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USkeletalMeshComponent> AnimatingMesh;
    
public:
    UUWECrafterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryAddRecipeToLocalQueue(UUWECraftingComponent* CraftingComponent, UUWECraftingRecipe* Recipe, const TScriptInterface<IUWEItemPickup>& OutputInventory, bool bForceImmediate);
    
    UFUNCTION()
    void StartCrafting(UUWECraftingRecipe* Recipe, TScriptInterface<IUWEItemPickup> OutputInventory, UUWECraftingComponent* CraftingComponent, bool bForceImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationState(ECrafterAnimationState NewState);
    
protected:
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* StoryGoal, AActor* Target);
    
    UFUNCTION()
    void OnRep_PlayerInRange();
    
    UFUNCTION()
    void OnRep_OwnerInventoryFull();
    
    UFUNCTION()
    void OnRep_CraftingInProgress();
    
    UFUNCTION()
    void OnRep_AnimationState(ECrafterAnimationState PreviousAnimationState);
    
    UFUNCTION()
    void OnRep_ActiveCrafts();
    
public:
    UFUNCTION()
    void OnPoweredStateChanged(bool bNewIsPowered);
    
private:
    UFUNCTION()
    void OnPlayerOutOfRange();
    
    UFUNCTION()
    void OnPlayerInRange();
    
    UFUNCTION()
    void OnAnyRegisteredInventoryChanged();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NotifyCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCrafterBusy() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftingResult(bool Successful, const TArray<FCraftingRecipeOutput>& RecipeOutput, TScriptInterface<IUWEItemPickup> OutputInventory);
    
    UFUNCTION(BlueprintPure)
    ECrafterAnimationState GetCrafterAnimationState() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanUseRecipe(UUWECraftingRecipe* Recipe);
    
    UFUNCTION(BlueprintCallable)
    bool CanEverUseRecipe(UUWECraftingRecipe* Recipe);
    
    UFUNCTION(BlueprintCallable)
    bool CanCraftItemFromRecipe(UUWECraftingComponent* CraftingComponent, UUWECraftingRecipe* Recipe, int32 Quantity);
    

    // Fix for true pure virtual functions not being implemented
};

