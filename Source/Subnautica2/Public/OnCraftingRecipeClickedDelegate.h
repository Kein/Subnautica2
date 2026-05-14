#pragma once
#include "CoreMinimal.h"
#include "OnCraftingRecipeClickedDelegate.generated.h"

class UUWECraftingRecipe;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraftingRecipeClicked, UUWECraftingRecipe*, Recipe);

