#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "ECrafterType.h"
#include "UWECraftingRecipeCategory.generated.h"

class UTexture2D;
class UUWECraftingRecipeCategory;

UCLASS()
class UWECRAFTING_API UUWECraftingRecipeCategory : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECrafterType CraftedBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OrderingIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWECraftingRecipeCategory> ParentCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowWhenEmpty;
    
    UUWECraftingRecipeCategory();

    UFUNCTION(BlueprintPure)
    FText GetCrafterText() const;
    
};

