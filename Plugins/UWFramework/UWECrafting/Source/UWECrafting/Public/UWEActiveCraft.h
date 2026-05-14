#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "UWEActorUID.h"
#include "UWEActiveCraft.generated.h"

class IUWEItemPickup;
class UUWEItemPickup;
class UUWECraftingComponent;
class UUWECraftingRecipe;

USTRUCT(BlueprintType)
struct FUWEActiveCraft {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CraftHandle;
    
    UPROPERTY()
    FTimerHandle CraftingTimerHandle;
    
    UPROPERTY()
    TScriptInterface<IUWEItemPickup> OutputInventory;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UUWECraftingComponent> CraftingComponent;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<UUWECraftingRecipe> Recipe;
    
    UPROPERTY(SaveGame)
    FUWEActorUID ItemRecipient;
    
    UPROPERTY(SaveGame)
    bool bInProgress;
    
    UWECRAFTING_API FUWEActiveCraft();
};

