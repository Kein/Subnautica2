#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnRecipeItemClickedDelegate.h"
#include "SN2CraftingCategoryItem.generated.h"

class UButton;
class UImage;
class UTextBlock;
class UUWECraftingRecipe;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2CraftingCategoryItem : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnRecipeItemClicked OnRecipeItemClicked;
    
    UPROPERTY(BlueprintReadOnly)
    UUWECraftingRecipe* Recipe;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FString RequirementsString;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* CategoryText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UButton* CategoryButton;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UButton* LeafButton;
    
public:
    USN2CraftingCategoryItem();

private:
    UFUNCTION()
    void HandleButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    FText GetToolTipText();
    
};

