#pragma once
#include "CoreMinimal.h"
#include "CraftingRecipeOutput.h"
#include "OnCraftingStartedDelegate.generated.h"

class AActor;
class IUWEItemPickup;
class UUWEItemPickup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCraftingStarted, const TArray<FCraftingRecipeOutput>&, RecipeOutput, float, CraftingTime, AActor*, RecipientActor, const TScriptInterface<IUWEItemPickup>&, OutputInventory);

