#pragma once
#include "CoreMinimal.h"
#include "CraftingRecipeOutput.h"
#include "ECraftingResults.h"
#include "OnCraftingCompletedDelegate.generated.h"

class AActor;
class IUWEItemPickup;
class UUWEItemPickup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCraftingCompleted, const TArray<FCraftingRecipeOutput>&, RecipeOutput, ECraftingResults, Result, AActor*, RecipientActor, const TScriptInterface<IUWEItemPickup>&, OutputInventory);

