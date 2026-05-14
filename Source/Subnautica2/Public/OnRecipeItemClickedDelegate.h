#pragma once
#include "CoreMinimal.h"
#include "OnRecipeItemClickedDelegate.generated.h"

class UUWECraftingRecipe;
class UUWECraftingRecipeCategory;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRecipeItemClicked, UUWECraftingRecipe*, Recipe, bool, IsLeaf, TArray<TSoftObjectPtr<UUWECraftingRecipeCategory>>, DepthTag);

