#pragma once
#include "CoreMinimal.h"
#include "OnRecipeCategoryContainerClickedDelegate.generated.h"

class UUWECraftingRecipe;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecipeCategoryContainerClicked, UUWECraftingRecipe*, Recipe);

