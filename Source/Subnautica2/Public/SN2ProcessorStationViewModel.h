#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "ESN2ProcessorState.h"
#include "SN2ProcessorStationViewModel.generated.h"

class USN2InventoryScreenViewModel;
class USN2ProcessorStationInteractionComponent;
class USN2ProcessorStationRecipeSelection;
class USN2RecipeViewModel;
class USN2RecipesListViewModel;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;
class UUWEInventoryComponent;

UCLASS()
class SUBNAUTICA2_API USN2ProcessorStationViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UUWECraftingRecipe* SelectedRecipe;
    
    UPROPERTY(BlueprintReadOnly)
    USN2InventoryScreenViewModel* InventoryViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ProcessingOutputAmount;
    
    UPROPERTY(BlueprintReadOnly)
    ESN2ProcessorState ProcessingState;
    
    UPROPERTY(BlueprintReadOnly)
    float NextCraftProgress;
    
    UPROPERTY(BlueprintReadOnly)
    USN2RecipesListViewModel* RecipesListViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    USN2RecipeViewModel* SelectedRecipeViewModel;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowChangingRecipe;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEInventoryComponent> ProcessorInventory;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USN2ProcessorStationRecipeSelection> RecipeSelection;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USN2ProcessorStationInteractionComponent> Interactor;
    
public:
    USN2ProcessorStationViewModel();

    UFUNCTION(BlueprintCallable)
    void TryLoadProcessorForRecipe();
    
    UFUNCTION(BlueprintCallable)
    void Teardown();
    
    UFUNCTION(BlueprintCallable)
    void Setup(USN2ProcessorStationRecipeSelection* NewRecipeSelection, USN2ProcessorStationInteractionComponent* InInteractor, UUWEInventoryComponent* ProcessorInputInventory, UUWECraftingRecipeCategory* RootCategory);
    
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(USN2RecipeViewModel* Recipe);
    
private:
    UFUNCTION()
    void OnProcessorStateChanged(UUWECraftingRecipe* Recipe, ESN2ProcessorState State, int32 OutputCount);
    
    UFUNCTION()
    void OnProcessorInputInventoryChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSelectedRecipe(const USN2RecipeViewModel* RecipeVM) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetProcessorInventoryID() const;
    
    UFUNCTION(BlueprintPure)
    float GetCraftTimeLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetCraftProgress() const;
    
};

