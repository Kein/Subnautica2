#pragma once
#include "CoreMinimal.h"
#include "CraftingRecipeRequirement.generated.h"

class UUWEItemType;

USTRUCT(BlueprintType)
struct FCraftingRecipeRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UUWEItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 NumItems;
    
    UWECRAFTING_API FCraftingRecipeRequirement();
};

