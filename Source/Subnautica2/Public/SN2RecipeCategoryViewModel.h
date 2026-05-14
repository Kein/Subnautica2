#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2RecipeCategoryViewModel.generated.h"

class UObject;
class USN2RecipeCategoryViewModel;
class USN2RecipeViewModel;
class UTexture2D;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;

UCLASS()
class SUBNAUTICA2_API USN2RecipeCategoryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UUWECraftingRecipeCategory* Category;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RecipeCategoryViewModel*> SubCategories;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RecipeViewModel*> Recipes;
    
    UPROPERTY()
    TSet<UUWECraftingRecipe*> AddedRecipes;
    
    UPROPERTY(BlueprintReadOnly)
    bool AreAllRecipesLocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasPreviouslyUnseenRecipe;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumPreviouslyUnseenRecipes;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsExpanded;
    
    UPROPERTY()
    TMap<UUWECraftingRecipe*, USN2RecipeViewModel*> RecipeViewModelsByRecipe;
    
public:
    USN2RecipeCategoryViewModel();

    UFUNCTION(BlueprintCallable)
    void ReducePreviouslyUnseenRecipes();
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetThumbnail() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCrafterText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryDescription() const;
    
    UFUNCTION(BlueprintPure)
    UUWECraftingRecipeCategory* GetCategoryDataAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
};

