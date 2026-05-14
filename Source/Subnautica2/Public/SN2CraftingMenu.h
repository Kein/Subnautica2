#pragma once
#include "CoreMinimal.h"
#include "UWEModalActivatableWidget.h"
#include "OnCraftingMenuClosedDelegate.h"
#include "OnCraftingRecipeClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SN2CraftingMenu.generated.h"

class UButton;
class UHorizontalBox;
class USN2CraftingCategoryContainer;
class UUWECraftingRecipe;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2CraftingMenu : public UUWEModalActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCraftingRecipeClicked OnCraftingRecipeClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCraftingMenuClosed OnCraftingMenuClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHorizontalBox* ColumnRoot;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UButton* CloseButton;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USN2CraftingCategoryContainer> RecipeColumnWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InitialTagCategoryDepth;
    
    UPROPERTY(Instanced)
    USN2CraftingCategoryContainer* InstantiatedRecipeColumn;
    
public:
    USN2CraftingMenu();

private:
    UFUNCTION()
    void HandleRecipeClicked(UUWECraftingRecipe* Recipe);
    
    UFUNCTION()
    void HandleCloseButtonClick();
    
};

