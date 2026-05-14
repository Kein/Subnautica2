#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RecipeIsUsableCheckDelegate.generated.h"

class UUWECraftingRecipe;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FRecipeIsUsableCheck, UUWECraftingRecipe*, Recipe, FGameplayTag&, ReasonOut);

