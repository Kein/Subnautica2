#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEEventKey.h"
#include "SN2RecipesListViewModel.generated.h"

class UObject;
class USN2BuilderActionData;
class USN2RecipeCategoryViewModel;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;
class UUWEPrimaryDataAssetBase;
class UUWEScanData;
class UUWEStoryGoalContainerComponent;

UCLASS()
class SUBNAUTICA2_API USN2RecipesListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UUWECraftingRecipeCategory* FilterCategory;
    
    UPROPERTY()
    UUWECraftingRecipeCategory* BlueprintsCategory;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RecipeCategoryViewModel*> Entries;
    
    UPROPERTY()
    TArray<USN2RecipeCategoryViewModel*> CachedEntries;
    
    UPROPERTY(Instanced)
    UUWEStoryGoalContainerComponent* StoryGoalContainer;
    
    UPROPERTY()
    TSet<UUWECraftingRecipe*> UnlockedRecipes;
    
    UPROPERTY()
    TArray<UUWECraftingRecipe*> AllRecipes;
    
    UPROPERTY()
    TSet<USN2BuilderActionData*> UnlockedBuilderActions;
    
    UPROPERTY()
    TArray<USN2BuilderActionData*> AllBuilderActions;
    
    UPROPERTY()
    TArray<UUWEPrimaryDataAssetBase*> ExtraBlueprintData;
    
    UPROPERTY()
    TArray<UUWEPrimaryDataAssetBase*> ActiveExtraBlueprintData;
    
    UPROPERTY()
    TArray<int32> OverrideCraftingComponentInventories;
    
public:
    USN2RecipesListViewModel();

    UFUNCTION(BlueprintCallable)
    void SetBlueprintsCategory(UUWECraftingRecipeCategory* InBlueprintCategory);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
private:
    UFUNCTION()
    void OnUnlockableUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void InitializeWithOverrideInventories(UObject* WorldContext, const TArray<int32>& NewOverrideCraftingComponentInventories);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void InitializeFiltered(UUWECraftingRecipeCategory* Category, UObject* WorldContext, bool OnlyShowBuilderActions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyUnlockedInCategory(const UUWECraftingRecipeCategory* Category) const;
    
protected:
    UFUNCTION()
    void AnyScanProgressMade(UUWEScanData* ScanData, int32 TotalScanCount);
    
};

