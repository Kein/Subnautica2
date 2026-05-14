#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "CraftingRecipeOutput.h"
#include "ECrafterAnimationState.h"
#include "ECraftingResults.h"
#include "OnCraftingCompletedDelegate.h"
#include "OnCraftingStartedDelegate.h"
#include "SN2FabricatorViewModel.generated.h"

class AActor;
class IUWEItemPickup;
class UUWEItemPickup;
class UObject;
class USN2RecipeCategoryViewModel;
class USN2RecipeViewModel;
class USN2RecipesListViewModel;
class UUWECrafterComponent;
class UUWECraftingComponent;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;

UCLASS()
class SUBNAUTICA2_API USN2FabricatorViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoriesUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnForceCloseWidget);
    
    UPROPERTY(BlueprintAssignable)
    FOnForceCloseWidget OnForceCloseWidget;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoriesUpdated OnInventoriesUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RecipeCategoryViewModel*> Categories;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsCraftingInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLocalCraftingInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    UUWECraftingRecipe* RecipeAtTopOfQueue;
    
    UPROPERTY(BlueprintReadOnly)
    int32 QueueSize;
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftingStarted OnCraftingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnCraftingCompleted OnCraftingCompleted;
    
    UPROPERTY(Instanced)
    UUWECrafterComponent* CrafterComponent;
    
    UPROPERTY(Instanced)
    UUWECraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintReadWrite)
    UUWECraftingRecipeCategory* ActiveCategory;
    
    UPROPERTY()
    TMap<UUWECraftingRecipeCategory*, USN2RecipeCategoryViewModel*> CategoryViewModelsByCategory;
    
public:
    USN2FabricatorViewModel();

    UFUNCTION(BlueprintCallable)
    bool TryAddToCraftingQueue(USN2RecipeViewModel* ViewModel);
    
    UFUNCTION(BlueprintPure)
    bool RecipeIsUsable(UUWECraftingRecipe* Recipe, FGameplayTag& ReasonOut) const;
    
private:
    UFUNCTION()
    void OnPlayerInRangeChanged(bool PlayerInRange);
    
    UFUNCTION()
    void OnIsPoweredChanged(bool bIsPowered);
    
    UFUNCTION()
    void OnInventoryChanged();
    
    UFUNCTION()
    void OnCraftInProgressChanged(bool bCraftingInProgress);
    
    UFUNCTION()
    void OnCrafterQueueUpdated(const TSoftObjectPtr<UUWECraftingRecipe>& QueuedRecipe, int32 InQueueSize);
    
    UFUNCTION()
    void OnAnimationStateChanged(ECrafterAnimationState PreviousState, ECrafterAnimationState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPowered() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOverflowItems() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    USN2RecipesListViewModel* GetRecipeList(UUWECraftingRecipeCategory* Category, UObject* WorldContext);
    
private:
    UFUNCTION()
    void ForwardCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    void ForwardCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    void ForceCloseWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void CraftFromRecipe(USN2RecipeViewModel* RecipeVM);
    
    UFUNCTION(BlueprintCallable)
    void ClearCrafterQueue();
    
    UFUNCTION(BlueprintPure)
    bool CanQueue() const;
    
};

