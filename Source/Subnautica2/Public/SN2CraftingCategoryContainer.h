#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnRecipeCategoryContainerClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SN2CraftingCategoryContainer.generated.h"

class UHorizontalBox;
class USN2CraftingCategoryContainer;
class USN2CraftingCategoryItem;
class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;
class UVerticalBox;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2CraftingCategoryContainer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnRecipeCategoryContainerClicked OnRecipeCategoryContainerClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ItemRoot;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHorizontalBox* ColumnRoot;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USN2CraftingCategoryContainer> RecipeColumnWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USN2CraftingCategoryItem> CategoryItemWidgetClass;
    
    UPROPERTY()
    TArray<UUWECraftingRecipe*> Recipes;
    
    UPROPERTY(Instanced)
    TArray<USN2CraftingCategoryItem*> InstantiatedItems;
    
    UPROPERTY(Instanced)
    USN2CraftingCategoryContainer* InstantiatedChildRecipeColumn;
    
public:
    USN2CraftingCategoryContainer();

private:
    UFUNCTION()
    void UpdateRecipes();
    
    UFUNCTION()
    void OnInventoryUpdated(const int32& InventoryId);
    
    UFUNCTION()
    void HandleRecipeClicked(UUWECraftingRecipe* Recipe, bool IsLeaf, TArray<TSoftObjectPtr<UUWECraftingRecipeCategory>> LeafCategory);
    
    UFUNCTION()
    void HandleChildContainerClicked(UUWECraftingRecipe* Recipe);
    
};

